/*
FUNCTION_NAME: OVRPlugin.OVRP_1_81_0$$.cctor
ENTRY_POINT: 06978e68
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


long OVRPlugin_OVRP_1_81_0___cctor(float param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  puVar5 = PTR_DAT_0848e660;
  puVar4 = PTR_DAT_08487508;
  puVar3 = PTR_DAT_084874c8;
  if ((DAT_0897d13d & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084874c8);
    FUN_03a8a718(PTR_DAT_0848e660);
    FUN_03a8a718(PTR_DAT_08487508);
    DAT_0897d13d = 1;
  }
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_07c6e968(lVar6,0);
  iVar1 = param_3 + 1;
  lVar7 = FUN_03a8a804(*(undefined8 *)puVar4,iVar1 * 2);
  lVar8 = FUN_03a8a804(*(undefined8 *)puVar3,param_3 * 6);
  if (-1 < (int)param_3) {
    if (lVar7 == 0) goto LAB_069790b0;
    uVar12 = 0;
    fVar13 = DAT_015c5590 / (float)(int)param_3;
    do {
      sincosf(fVar13 * (float)(int)uVar12,(float *)((long)&stack0x00000008 + 4),&stack0x00000008);
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_069790ac;
      lVar10 = lVar7 + (long)(int)uVar12 * 0xc;
      *(float *)(lVar10 + 0x20) = param_1 * -0.5;
      *(float *)(lVar10 + 0x24) = fStack0000000000000008 * param_2;
      *(float *)(lVar10 + 0x28) = fStack000000000000000c * param_2;
      uVar9 = param_3 + uVar12 + 1;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_069790ac;
      lVar10 = lVar7 + (long)(int)uVar9 * 0xc;
      uVar12 = uVar12 + 1;
      *(float *)(lVar10 + 0x20) = param_1 * 0.5;
      *(float *)(lVar10 + 0x24) = fStack0000000000000008 * param_2;
      *(float *)(lVar10 + 0x28) = fStack000000000000000c * param_2;
    } while ((int)uVar12 <= (int)param_3);
    if (param_3 != 0) {
      if (lVar8 == 0) goto LAB_069790b0;
      uVar12 = *(uint *)(lVar8 + 0x18);
      lVar10 = 0;
      iVar11 = 1;
      do {
        uVar9 = (uint)lVar10;
        if (uVar12 <= uVar9) {
LAB_069790ac:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        *(int *)(lVar8 + (long)(int)uVar9 * 4 + 0x20) = iVar11 + -1;
        if (uVar12 <= uVar9 + 1) goto LAB_069790ac;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar11 / iVar1;
        }
        iVar2 = iVar11 - iVar2 * iVar1;
        *(int *)(lVar8 + (long)(int)(uVar9 + 1) * 4 + 0x20) = iVar2;
        if (uVar12 <= uVar9 + 2) goto LAB_069790ac;
        *(undefined4 *)(lVar8 + (long)(int)(uVar9 + 2) * 4 + 0x20) = 0;
        if (uVar12 <= uVar9 + 3) goto LAB_069790ac;
        *(uint *)(lVar8 + (long)(int)(uVar9 + 3) * 4 + 0x20) = param_3 + iVar11;
        if (uVar12 <= uVar9 + 4) goto LAB_069790ac;
        *(int *)(lVar8 + (long)(int)(uVar9 + 4) * 4 + 0x20) = iVar2 + iVar1;
        if (uVar12 <= uVar9 + 5) goto LAB_069790ac;
        lVar10 = lVar10 + 6;
        iVar11 = iVar11 + 1;
        *(int *)(lVar8 + (long)(int)(uVar9 + 5) * 4 + 0x20) = iVar1;
      } while ((ulong)param_3 * 6 - lVar10 != 0);
    }
  }
  if (lVar6 != 0) {
    FUN_07c72230(lVar6,lVar7,0);
    FUN_07c73ad4(lVar6,lVar8,0);
    return lVar6;
  }
LAB_069790b0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


