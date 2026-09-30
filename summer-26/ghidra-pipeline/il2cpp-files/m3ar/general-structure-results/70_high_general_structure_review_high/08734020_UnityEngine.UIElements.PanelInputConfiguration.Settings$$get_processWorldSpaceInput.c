/*
FUNCTION_NAME: UnityEngine.UIElements.PanelInputConfiguration.Settings$$get_processWorldSpaceInput
ENTRY_POINT: 08734020
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
UnityEngine_UIElements_PanelInputConfiguration_Settings__get_processWorldSpaceInput(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364(param_1);
  }
  uVar1 = FUN_0858816c();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_086ee484();
    FUN_0885358c(uVar2,0);
    uVar2 = FUN_086d76dc();
    return uVar2;
  }
  lVar3 = FUN_087341a0();
  uVar2 = FUN_086ee484();
  FUN_0885358c(uVar2,0);
  uVar2 = UnityEngine_UIElements_MinMaxSlider__ComputeValueFromPosition();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x22);
  }
  uVar1 = FUN_0858816c(uVar2,0,0);
  uVar2 = FUN_086ee484();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_0885353c(uVar2,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x22);
    }
    uVar1 = FUN_0858816c(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = FUN_0858816c(lVar3,0,0);
      uVar2 = 0;
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (lVar3 != 0) {
        return *(undefined8 *)(lVar3 + 0x20);
      }
      goto LAB_0873419c;
    }
    uVar2 = FUN_086ee484();
    uVar2 = FUN_0885353c(uVar2,0);
  }
  else {
    FUN_0885358c();
    uVar2 = UnityEngine_UIElements_MinMaxSlider__ComputeValueFromPosition();
  }
  if (lVar3 != 0) {
    uVar2 = FUN_08679270(lVar3,uVar2,0);
    return uVar2;
  }
LAB_0873419c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c(uVar2);
}


