/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 07ae509c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout
          (undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  long lVar6;
  long unaff_x20;
  undefined8 *puVar7;
  long unaff_x27;
  long *plVar8;
  long *unaff_x28;
  long *in_stack_00000008;
  char in_stack_00000010;
  char in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_000000a8;
  
  uVar2 = thunk_FUN_03ac74bc(*param_1);
  FUN_07ac584c();
  puVar7 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar7 = uVar2;
  thunk_FUN_03afed3c(puVar7,uVar2);
  lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)OVR_OpenVR_EVREventType_TypeInfo);
  FUN_07a32a40(lVar3,0);
  if (lVar3 == 0) goto LAB_07ae53b0;
  FUN_07a31ee0(lVar3,*(undefined8 *)(unaff_x27 + 0x18),0);
  FUN_07a32560(lVar3,unaff_w19,0);
  FUN_07a32700(lVar3);
  FUN_07a32630(lVar3);
  FUN_07a327d0(lVar3,in_stack_000000a8,0);
  plVar8 = (long *)(unaff_x20 + 0x20);
  *plVar8 = lVar3;
  thunk_FUN_03afed3c(plVar8,lVar3);
  puVar1 = PTR_DAT_08488d10;
  if (in_stack_00000018 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar1;
      uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
      in_stack_00000028 = uVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_08488d10 + 0xb8) + 0x10);
      in_stack_00000028 = uVar2;
    }
    uVar4 = FUN_06733380(in_stack_00000020,uVar2,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *plVar8;
      in_stack_00000028 = in_stack_00000020;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = FUN_067328e0(&stack0x00000028,0);
      uVar2 = FUN_06732640(&stack0x00000028,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_DeletePublicItemRequest_TypeInfo,
                           0);
      if (lVar3 == 0) goto LAB_07ae53b0;
      FUN_07a31fb0(lVar3,uVar2,0);
    }
  }
  puVar1 = PTR_DAT_08488d10;
  if (in_stack_00000010 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar1;
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    }
    else {
      in_stack_00000028 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_08488d10 + 0xb8) + 0x18);
    }
    uVar4 = FUN_06733380();
    if ((uVar4 & 1) != 0) {
      lVar3 = *plVar8;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = FUN_067328e0(&stack0x00000028,0);
      uVar2 = FUN_06732640(&stack0x00000028,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_DeletePublicItemRequest_TypeInfo,
                           0);
      if (lVar3 == 0) goto LAB_07ae53b0;
      FUN_07a32080(lVar3,uVar2,0);
    }
  }
  if (*plVar8 == 0) goto LAB_07ae53b0;
  FUN_07a32220();
  if (unaff_x28 == (long *)0x0) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar3 = *in_stack_00000008;
      lVar6 = *plVar8;
      goto LAB_07ae5308;
    }
  }
  else {
    lVar3 = *unaff_x28;
    lVar6 = *plVar8;
LAB_07ae5308:
    uVar2 = (**(code **)(lVar3 + 0x168))();
    if (lVar6 == 0) goto LAB_07ae53b0;
    FUN_07a323c0(lVar6,uVar2,0);
  }
  lVar3 = FUN_07aebb08(0);
  uVar2 = FUN_07a31da0(*(undefined8 *)(unaff_x20 + 0x20),0);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491c78);
  FUN_066b7b48();
  if (lVar3 != 0) {
    FUN_07aef90c(lVar3,uVar2,uVar5,0);
    return *puVar7;
  }
LAB_07ae53b0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


