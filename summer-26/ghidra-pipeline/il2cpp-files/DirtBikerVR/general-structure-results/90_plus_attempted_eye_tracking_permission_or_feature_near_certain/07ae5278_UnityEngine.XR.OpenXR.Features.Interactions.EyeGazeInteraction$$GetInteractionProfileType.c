/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 07ae5278
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
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
          (ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x27;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) != 0) {
    lVar3 = *unaff_x27;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    in_stack_00000028 = FUN_067328e0(&stack0x00000028,0);
    uVar1 = FUN_06732640(&stack0x00000028,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_DeletePublicItemRequest_TypeInfo,0)
    ;
    if (lVar3 == 0) goto LAB_07ae53b0;
    FUN_07a32080(lVar3,uVar1,0);
  }
  if (*unaff_x27 == 0) goto LAB_07ae53b0;
  FUN_07a32220();
  if (unaff_x21 == (long *)0x0) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar3 = *in_stack_00000008;
      lVar4 = *unaff_x27;
      goto LAB_07ae5308;
    }
  }
  else {
    lVar3 = *unaff_x21;
    lVar4 = *unaff_x27;
LAB_07ae5308:
    uVar1 = (**(code **)(lVar3 + 0x168))();
    if (lVar4 == 0) goto LAB_07ae53b0;
    FUN_07a323c0(lVar4,uVar1,0);
  }
  lVar3 = FUN_07aebb08(0);
  uVar1 = FUN_07a31da0(*(undefined8 *)(unaff_x20 + 0x20),0);
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491c78);
  FUN_066b7b48();
  if (lVar3 != 0) {
    FUN_07aef90c(lVar3,uVar1,uVar2,0);
    return *unaff_x23;
  }
LAB_07ae53b0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


