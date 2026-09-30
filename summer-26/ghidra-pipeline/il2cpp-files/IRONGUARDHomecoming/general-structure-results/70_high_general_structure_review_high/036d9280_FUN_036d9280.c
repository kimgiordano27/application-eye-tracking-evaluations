/*
FUNCTION_NAME: FUN_036d9280
ENTRY_POINT: 036d9280
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_036d9280(long param_1)

{
  double dVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined8 local_28;
  
  if ((DAT_048342f4 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass53_0_<DOPunchScale>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    DAT_048342f4 = 1;
  }
  local_28 = 0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar4 = FUN_0403531c(*(undefined8 *)(param_1 + 0x40),1,1,*(undefined4 *)(param_1 + 0x34),0);
  puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass53_0_<DOPunchScale>b__0__;
  if (lVar6 != 0) {
    FUN_0403467c(lVar6,uVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_03a30728(0);
    iVar3 = FUN_040355d4(*(undefined8 *)(param_1 + 0x40),0);
    puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
    dVar1 = DAT_00c8e008;
    if (iVar3 < 1) {
      if (lVar6 == 0) goto LAB_036d93d4;
      do {
        local_28 = UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding(lVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        dVar7 = (double)FUN_035815dc(&local_28,0);
        if (dVar1 <= dVar7) break;
        FUN_035d37a8(0x32,0);
        iVar3 = FUN_040355d4(*(undefined8 *)(param_1 + 0x40),0);
      } while (iVar3 < 1);
    }
    iVar3 = FUN_040355d4(*(undefined8 *)(param_1 + 0x40),0);
    if (iVar3 < 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass53_0_<DOPunchScale>b__1__
                                );
      uVar4 = FUN_03405678(uVar4,uVar5,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass54_0_<DOPunchRotation>b__0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar4);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_04034704(*(long *)(param_1 + 0x20),0);
      return;
    }
  }
LAB_036d93d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


