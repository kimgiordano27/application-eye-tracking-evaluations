/*
FUNCTION_NAME: OVRPlugin.OVRP_1_82_0$$ovrp_GetSpaceTriangleMesh
ENTRY_POINT: 06978ef0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_82_0__ovrp_GetSpaceTriangleMesh(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w23;
  uint uVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  lVar2 = FUN_03a8a804(*unaff_x22,unaff_w23 << 1);
  lVar3 = FUN_03a8a804(*unaff_x21,unaff_w19 * 6);
  if (-1 < (int)unaff_w19) {
    if (lVar2 == 0) goto LAB_069790b0;
    uVar7 = 0;
    fVar8 = DAT_015c5590 / (float)(int)unaff_w19;
    do {
      sincosf(fVar8 * (float)(int)uVar7,(float *)((long)&stack0x00000008 + 4),&stack0x00000008);
      if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_069790ac;
      lVar5 = lVar2 + (long)(int)uVar7 * 0xc;
      *(float *)(lVar5 + 0x20) = unaff_s9 * -0.5;
      *(float *)(lVar5 + 0x24) = fStack0000000000000008 * unaff_s8;
      *(float *)(lVar5 + 0x28) = fStack000000000000000c * unaff_s8;
      uVar4 = unaff_w19 + uVar7 + 1;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_069790ac;
      lVar5 = lVar2 + (long)(int)uVar4 * 0xc;
      uVar7 = uVar7 + 1;
      *(float *)(lVar5 + 0x20) = unaff_s9 * 0.5;
      *(float *)(lVar5 + 0x24) = fStack0000000000000008 * unaff_s8;
      *(float *)(lVar5 + 0x28) = fStack000000000000000c * unaff_s8;
    } while ((int)uVar7 <= (int)unaff_w19);
    if (unaff_w19 != 0) {
      if (lVar3 == 0) goto LAB_069790b0;
      uVar7 = *(uint *)(lVar3 + 0x18);
      lVar2 = 0;
      iVar6 = 1;
      do {
        uVar4 = (uint)lVar2;
        if (uVar7 <= uVar4) {
LAB_069790ac:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        *(int *)(lVar3 + (long)(int)uVar4 * 4 + 0x20) = iVar6 + -1;
        if (uVar7 <= uVar4 + 1) goto LAB_069790ac;
        iVar1 = 0;
        if (unaff_w23 != 0) {
          iVar1 = iVar6 / unaff_w23;
        }
        iVar1 = iVar6 - iVar1 * unaff_w23;
        *(int *)(lVar3 + (long)(int)(uVar4 + 1) * 4 + 0x20) = iVar1;
        if (uVar7 <= uVar4 + 2) goto LAB_069790ac;
        *(undefined4 *)(lVar3 + (long)(int)(uVar4 + 2) * 4 + 0x20) = 0;
        if (uVar7 <= uVar4 + 3) goto LAB_069790ac;
        *(uint *)(lVar3 + (long)(int)(uVar4 + 3) * 4 + 0x20) = unaff_w19 + iVar6;
        if (uVar7 <= uVar4 + 4) goto LAB_069790ac;
        *(int *)(lVar3 + (long)(int)(uVar4 + 4) * 4 + 0x20) = iVar1 + unaff_w23;
        if (uVar7 <= uVar4 + 5) goto LAB_069790ac;
        lVar2 = lVar2 + 6;
        iVar6 = iVar6 + 1;
        *(int *)(lVar3 + (long)(int)(uVar4 + 5) * 4 + 0x20) = unaff_w23;
      } while ((ulong)unaff_w19 * 6 - lVar2 != 0);
    }
  }
  if (unaff_x20 != 0) {
    FUN_07c72230();
    FUN_07c73ad4();
    return;
  }
LAB_069790b0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


