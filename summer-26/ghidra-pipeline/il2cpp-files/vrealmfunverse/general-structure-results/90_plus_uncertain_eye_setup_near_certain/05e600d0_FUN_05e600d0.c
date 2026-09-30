/*
FUNCTION_NAME: FUN_05e600d0
ENTRY_POINT: 05e600d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05e600d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_70 [16];
  
  if ((DAT_066dc64a & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_6__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_60__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_61__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_62__);
    DAT_066dc64a = 1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_60__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_6__;
  lVar3 = *(long *)(param_1 + 0x10);
  local_70 = ZEXT816(0);
  auVar11 = ZEXT816(0);
  if (lVar3 != 0) {
    while ((((auVar11 = local_70, *(long *)(param_1 + 0x18) != 0 && (*(long *)(param_1 + 0x20) != 0)
             ) && (*(long *)(param_1 + 0x28) != 0)) &&
           (((*(long *)(param_1 + 0x30) != 0 && (*(long *)(param_1 + 0x38) != 0)) &&
            (*(long *)(param_1 + 0x40) != 0))))) {
      iVar10 = *(int *)(lVar3 + 0x20);
      iVar9 = *(int *)(*(long *)(param_1 + 0x18) + 0x20);
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
      iVar8 = *(int *)(*(long *)(param_1 + 0x40) + 0x20);
      if (iVar8 + iVar10 + iVar9 + iVar4 == 0) {
        return;
      }
      iVar7 = *(int *)(*(long *)(param_1 + 0x28) + 0x20);
      iVar6 = *(int *)(*(long *)(param_1 + 0x30) + 0x20);
      iVar5 = *(int *)(*(long *)(param_1 + 0x38) + 0x20);
      if (0 < iVar10) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05e60304;
          auVar11 = FUN_03c82330(*(long *)(param_1 + 0x10),*(undefined8 *)puVar1);
          FUN_05e60328(auVar11._0_8_,auVar11._8_8_,param_2);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (0 < iVar9) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_05e60304;
          auVar11 = FUN_03c82330(*(long *)(param_1 + 0x18),*(undefined8 *)puVar1);
          FUN_05e60328(auVar11._0_8_,auVar11._8_8_,param_2);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (0 < iVar4) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_05e60304;
          auVar11 = FUN_03c82330(*(long *)(param_1 + 0x20),*(undefined8 *)puVar1);
          FUN_05e60328(auVar11._0_8_,auVar11._8_8_,param_2);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (0 < iVar8) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_05e60304;
          lVar3 = *(long *)(param_1 + 0x48);
          auVar12 = FUN_03c7b1f4(*(long *)(param_1 + 0x40),*(undefined8 *)puVar2);
          auVar11 = local_70;
          if (lVar3 == 0) goto LAB_05e60304;
          FUN_05e5f440(lVar3,auVar12._0_8_,auVar12._8_8_);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      auVar11 = local_70;
      if (*(long *)(param_1 + 0x48) == 0) break;
      auVar11 = FUN_05e5f4ac();
      local_70 = auVar11;
      FUN_05c351e4(local_70,0);
      if (0 < iVar7) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_05e60304;
          auVar11 = FUN_03c82330(*(long *)(param_1 + 0x28),*(undefined8 *)puVar1);
          FUN_05e60328(auVar11._0_8_,auVar11._8_8_,param_2);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (0 < iVar6) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_05e60304;
          auVar11 = FUN_03c82330(*(long *)(param_1 + 0x30),*(undefined8 *)puVar1);
          FUN_05e60328(auVar11._0_8_,auVar11._8_8_,param_2);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (0 < iVar5) {
        do {
          auVar11 = local_70;
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_05e60304;
          auVar11 = FUN_03c82330(*(long *)(param_1 + 0x38),*(undefined8 *)puVar1);
          FUN_05e60328(auVar11._0_8_,auVar11._8_8_,param_2);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      lVar3 = *(long *)(param_1 + 0x10);
      auVar11 = local_70;
      if (lVar3 == 0) break;
    }
  }
LAB_05e60304:
  local_70 = auVar11;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


