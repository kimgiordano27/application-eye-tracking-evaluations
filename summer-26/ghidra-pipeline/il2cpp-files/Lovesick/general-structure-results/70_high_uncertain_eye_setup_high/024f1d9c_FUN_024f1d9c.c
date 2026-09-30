/*
FUNCTION_NAME: FUN_024f1d9c
ENTRY_POINT: 024f1d9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_024f1d9c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  if ((DAT_03782826 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ece98);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_03782826 = 1;
  }
  puVar5 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  puVar3 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  lVar12 = *(long *)(param_1 + 0x60);
  lVar10 = *(long *)(param_1 + 0x68);
  if (lVar10 == 0) {
    if (lVar12 == 0) goto LAB_024f2140;
  }
  else {
    if (lVar12 == 0) goto LAB_024f2140;
    if (*(int *)(lVar10 + 0x18) == *(int *)(lVar12 + 0x18)) {
LAB_024f1f3c:
      uVar11 = 0;
      lVar12 = 0x58;
      do {
        if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar11) {
          return lVar10;
        }
        lVar7 = *(long *)(param_1 + 0x60);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_024f2160;
        lVar9 = *(long *)(lVar7 + lVar12 + -0x28);
        if (lVar9 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
        lVar8 = *(long *)(lVar10 + lVar12 + -0x28);
        if (lVar8 == 0) break;
        iVar2 = *(int *)(lVar9 + 0x18);
        if (*(int *)(lVar8 + 0x18) != iVar2) {
          uVar6 = FUN_00da4fb8(*(undefined8 *)puVar5,iVar2);
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_024f2160:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined8 *)(lVar10 + lVar12 + -0x28) = uVar6;
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) break;
          uVar6 = FUN_00da4fb8(*(undefined8 *)puVar4,iVar2);
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
          *(undefined8 *)(lVar10 + lVar12 + -0x10) = uVar6;
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) break;
          uVar6 = FUN_00da4fb8(*(undefined8 *)puVar4,iVar2);
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
          *(undefined8 *)(lVar10 + lVar12 + -8) = uVar6;
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) break;
          uVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar2);
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
          *(undefined8 *)(lVar10 + lVar12) = uVar6;
          lVar7 = *(long *)(param_1 + 0x60);
          if (lVar7 == 0) break;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_024f2160;
        lVar10 = *(long *)(param_1 + 0x68);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
        FUN_01796450(*(undefined8 *)(lVar7 + lVar12 + -0x28),
                     *(undefined8 *)(lVar10 + lVar12 + -0x28),iVar2,0);
        lVar10 = *(long *)(param_1 + 0x60);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
        lVar7 = *(long *)(param_1 + 0x68);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_024f2160;
        FUN_01796450(*(undefined8 *)(lVar10 + lVar12 + -0x10),
                     *(undefined8 *)(lVar7 + lVar12 + -0x10),iVar2,0);
        lVar10 = *(long *)(param_1 + 0x60);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
        lVar7 = *(long *)(param_1 + 0x68);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_024f2160;
        FUN_01796450(*(undefined8 *)(lVar10 + lVar12 + -8),*(undefined8 *)(lVar7 + lVar12 + -8),
                     iVar2,0);
        lVar10 = *(long *)(param_1 + 0x60);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
        lVar7 = *(long *)(param_1 + 0x68);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_024f2160;
        FUN_01796450(*(undefined8 *)(lVar10 + lVar12),*(undefined8 *)(lVar7 + lVar12),iVar2,0);
        lVar10 = *(long *)(param_1 + 0x68);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x50;
      } while (lVar10 != 0);
      goto LAB_024f2140;
    }
  }
  lVar10 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ece98,*(undefined4 *)(lVar12 + 0x18));
  *(long *)(param_1 + 0x68) = lVar10;
  if (lVar10 != 0) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= (int)uVar11) {
        if (lVar10 != 0) goto LAB_024f1f3c;
        break;
      }
      lVar7 = *(long *)(param_1 + 0x60);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_024f2160;
      lVar7 = *(long *)(lVar7 + lVar12 + 0x30);
      if (lVar7 == 0) break;
      uVar1 = *(undefined4 *)(lVar7 + 0x18);
      uVar6 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar1);
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
      *(undefined8 *)(lVar10 + lVar12 + 0x30) = uVar6;
      lVar10 = *(long *)(param_1 + 0x68);
      if (lVar10 == 0) break;
      uVar6 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar1);
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
      *(undefined8 *)(lVar10 + lVar12 + 0x48) = uVar6;
      lVar10 = *(long *)(param_1 + 0x68);
      if (lVar10 == 0) break;
      uVar6 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar1);
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
      *(undefined8 *)(lVar10 + lVar12 + 0x50) = uVar6;
      lVar10 = *(long *)(param_1 + 0x68);
      if (lVar10 == 0) break;
      uVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar1);
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_024f2160;
      *(undefined8 *)(lVar10 + lVar12 + 0x58) = uVar6;
      lVar10 = *(long *)(param_1 + 0x68);
      lVar12 = lVar12 + 0x50;
      uVar11 = uVar11 + 1;
    } while (lVar10 != 0);
  }
LAB_024f2140:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


