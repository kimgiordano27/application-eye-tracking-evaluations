/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 07ae5210
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 116
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  char unaff_w26;
  long *unaff_x27;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  
  FUN_07a31fb0();
  puVar1 = PTR_DAT_08488d10;
  if (unaff_w26 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *(long *)puVar1;
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    }
    else {
      in_stack_00000028 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_08488d10 + 0xb8) + 0x18);
    }
    uVar2 = FUN_06733380();
    if ((uVar2 & 1) != 0) {
      lVar5 = *unaff_x27;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = FUN_067328e0(&stack0x00000028,0);
      uVar3 = FUN_06732640(&stack0x00000028,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_DeletePublicItemRequest_TypeInfo,
                           0);
      if (lVar5 == 0) goto LAB_07ae53b0;
      FUN_07a32080(lVar5,uVar3,0);
    }
  }
  if (*unaff_x27 == 0) goto LAB_07ae53b0;
  FUN_07a32220();
  if (unaff_x21 == (long *)0x0) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar5 = *in_stack_00000008;
      lVar6 = *unaff_x27;
      goto LAB_07ae5308;
    }
  }
  else {
    lVar5 = *unaff_x21;
    lVar6 = *unaff_x27;
LAB_07ae5308:
    uVar3 = (**(code **)(lVar5 + 0x168))();
    if (lVar6 == 0) goto LAB_07ae53b0;
    FUN_07a323c0(lVar6,uVar3,0);
  }
  lVar5 = FUN_07aebb08(0);
  uVar3 = FUN_07a31da0(*(undefined8 *)(unaff_x20 + 0x20),0);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491c78);
  FUN_066b7b48();
  if (lVar5 != 0) {
    FUN_07aef90c(lVar5,uVar3,uVar4,0);
    return *unaff_x23;
  }
LAB_07ae53b0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


