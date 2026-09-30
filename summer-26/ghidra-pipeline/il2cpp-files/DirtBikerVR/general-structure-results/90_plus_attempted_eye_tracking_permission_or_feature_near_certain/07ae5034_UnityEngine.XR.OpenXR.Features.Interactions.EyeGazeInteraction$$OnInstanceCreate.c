/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 07ae5034
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 126
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 *puVar7;
  char unaff_w26;
  long unaff_x27;
  long *plVar8;
  char unaff_w28;
  undefined8 in_stack_00000028;
  uint in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  thunk_FUN_03afed3c();
  lVar1 = FUN_07aebb08(0);
  if (lVar1 == 0) goto LAB_07ae53b0;
  if (*(char *)(lVar1 + 0x30) != '\0') {
    return 0;
  }
  FUN_07ae1de4();
  if ((unaff_x21 != (long *)0x0) && (unaff_x23 != (long *)0x0)) {
    plVar8 = (long *)thunk_FUN_03a9a6e8();
    FUN_0350b94c();
    uVar2 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    puVar5 = OVR_OpenVR_EVREye_TypeInfo;
LAB_07ae544c:
    uVar4 = thunk_FUN_03af1434(puVar5);
    uVar2 = FUN_065c0764(uVar2,uVar4,0);
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar4 = thunk_FUN_03ac74bc();
    FUN_066b6070(uVar4,uVar2,0);
    uVar2 = thunk_FUN_03af1434(OVR_OpenVR_EVRNotificationStyle_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,uVar2);
  }
  if ((in_stack_00000098 != 0) && (in_stack_000000a0 != 0)) {
    plVar8 = (long *)thunk_FUN_03a9a6e8();
    FUN_0350b94c();
    uVar2 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    puVar5 = 
    Unity_Services_Friends_Internal_Generated_Relationships_DeleteRelationshipRequest_TypeInfo;
    goto LAB_07ae544c;
  }
  if (0x32 < in_stack_00000090) {
    plVar8 = (long *)thunk_FUN_03a9a6e8();
    FUN_0350b94c();
    uVar2 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    puVar5 = Unity_Services_Matchmaker_Tickets_DeleteTicketRequest_TypeInfo;
    goto LAB_07ae544c;
  }
  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)System_Xml_Schema_Datatype_fixed_TypeInfo);
  FUN_07ac584c(uVar2,in_stack_000000b0,0);
  puVar7 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar7 = uVar2;
  thunk_FUN_03afed3c(puVar7,uVar2);
  lVar1 = thunk_FUN_03ac74bc(*(undefined8 *)OVR_OpenVR_EVREventType_TypeInfo);
  FUN_07a32a40(lVar1,0);
  if (lVar1 == 0) goto LAB_07ae53b0;
  FUN_07a31ee0(lVar1,*(undefined8 *)(unaff_x27 + 0x18),0);
  FUN_07a32560(lVar1,in_stack_00000090,0);
  FUN_07a32700(lVar1,in_stack_00000098,0);
  FUN_07a32630(lVar1,in_stack_000000a0,0);
  FUN_07a327d0(lVar1,in_stack_000000a8,0);
  plVar8 = (long *)(unaff_x20 + 0x20);
  *plVar8 = lVar1;
  thunk_FUN_03afed3c(plVar8,lVar1);
  puVar5 = PTR_DAT_08488d10;
  if (unaff_w28 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar1 = *(long *)puVar5;
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
      in_stack_00000028 = uVar2;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_08488d10 + 0xb8) + 0x10);
      in_stack_00000028 = uVar2;
    }
    uVar3 = FUN_06733380(unaff_x22,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *plVar8;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = FUN_067328e0(&stack0x00000028,0);
      uVar2 = FUN_06732640(&stack0x00000028,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_DeletePublicItemRequest_TypeInfo,
                           0);
      if (lVar1 == 0) goto LAB_07ae53b0;
      FUN_07a31fb0(lVar1,uVar2,0);
    }
  }
  puVar5 = PTR_DAT_08488d10;
  if (unaff_w26 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar1 = *(long *)puVar5;
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18);
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
    }
    else {
      in_stack_00000028 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_08488d10 + 0xb8) + 0x18);
    }
    uVar3 = FUN_06733380();
    if ((uVar3 & 1) != 0) {
      lVar1 = *plVar8;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = FUN_067328e0(&stack0x00000028,0);
      uVar2 = FUN_06732640(&stack0x00000028,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_DeletePublicItemRequest_TypeInfo,
                           0);
      if (lVar1 == 0) goto LAB_07ae53b0;
      FUN_07a32080(lVar1,uVar2,0);
    }
  }
  if (*plVar8 == 0) goto LAB_07ae53b0;
  FUN_07a32220();
  if (unaff_x21 == (long *)0x0) {
    if (unaff_x23 != (long *)0x0) {
      lVar1 = *unaff_x23;
      lVar6 = *plVar8;
      goto LAB_07ae5308;
    }
  }
  else {
    lVar1 = *unaff_x21;
    lVar6 = *plVar8;
LAB_07ae5308:
    uVar2 = (**(code **)(lVar1 + 0x168))();
    if (lVar6 == 0) goto LAB_07ae53b0;
    FUN_07a323c0(lVar6,uVar2,0);
  }
  lVar1 = FUN_07aebb08(0);
  uVar2 = FUN_07a31da0(*(undefined8 *)(unaff_x20 + 0x20),0);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08491c78);
  FUN_066b7b48();
  if (lVar1 != 0) {
    FUN_07aef90c(lVar1,uVar2,uVar4,0);
    return *puVar7;
  }
LAB_07ae53b0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


