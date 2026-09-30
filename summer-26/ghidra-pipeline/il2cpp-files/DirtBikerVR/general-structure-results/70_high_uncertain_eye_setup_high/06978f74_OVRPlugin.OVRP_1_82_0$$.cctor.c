/*
FUNCTION_NAME: OVRPlugin.OVRP_1_82_0$$.cctor
ENTRY_POINT: 06978f74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_82_0___cctor(long param_1,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  float unaff_s8;
  undefined4 unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0x20) = unaff_s11;
    *(float *)(param_1 + 0x24) = param_2 * unaff_s8;
    *(float *)(param_1 + 0x28) = param_3 * unaff_s8;
    uVar1 = unaff_w19 + unaff_w24 + 1;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar1) break;
    lVar4 = unaff_x21 + (long)(int)uVar1 * (long)unaff_w25;
    unaff_w24 = unaff_w24 + 1;
    *(undefined4 *)(lVar4 + 0x20) = unaff_s9;
    *(float *)(lVar4 + 0x24) = param_2 * unaff_s8;
    *(float *)(lVar4 + 0x28) = param_3 * unaff_s8;
    if ((int)unaff_w19 < (int)unaff_w24) {
      if (unaff_w19 == 0) goto LAB_06979064;
      if (unaff_x22 == 0) goto LAB_069790b0;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      lVar4 = 0;
      iVar5 = 1;
      goto LAB_06978fcc;
    }
    sincosf(unaff_s10 * (float)(int)unaff_w24,(float *)((long)&stack0x00000008 + 4),&stack0x00000008
           );
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w24) break;
    param_1 = unaff_x21 + (long)(int)unaff_w24 * (long)unaff_w25;
    param_2 = fStack0000000000000008;
    param_3 = fStack000000000000000c;
  }
LAB_069790ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
LAB_06978fcc:
  uVar3 = (uint)lVar4;
  if (uVar1 <= uVar3) goto LAB_069790ac;
  *(int *)(unaff_x22 + (long)(int)uVar3 * 4 + 0x20) = iVar5 + -1;
  if (uVar1 <= uVar3 + 1) goto LAB_069790ac;
  iVar2 = 0;
  if (unaff_w23 != 0) {
    iVar2 = iVar5 / unaff_w23;
  }
  iVar2 = iVar5 - iVar2 * unaff_w23;
  *(int *)(unaff_x22 + (long)(int)(uVar3 + 1) * 4 + 0x20) = iVar2;
  if (uVar1 <= uVar3 + 2) goto LAB_069790ac;
  *(undefined4 *)(unaff_x22 + (long)(int)(uVar3 + 2) * 4 + 0x20) = 0;
  if (uVar1 <= uVar3 + 3) goto LAB_069790ac;
  *(uint *)(unaff_x22 + (long)(int)(uVar3 + 3) * 4 + 0x20) = unaff_w19 + iVar5;
  if (uVar1 <= uVar3 + 4) goto LAB_069790ac;
  *(int *)(unaff_x22 + (long)(int)(uVar3 + 4) * 4 + 0x20) = iVar2 + unaff_w23;
  if (uVar1 <= uVar3 + 5) goto LAB_069790ac;
  lVar4 = lVar4 + 6;
  iVar5 = iVar5 + 1;
  *(int *)(unaff_x22 + (long)(int)(uVar3 + 5) * 4 + 0x20) = unaff_w23;
  if ((ulong)unaff_w19 * 6 - lVar4 == 0) {
LAB_06979064:
    if (unaff_x20 != 0) {
      FUN_07c72230();
      FUN_07c73ad4();
      return;
    }
LAB_069790b0:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  goto LAB_06978fcc;
}


