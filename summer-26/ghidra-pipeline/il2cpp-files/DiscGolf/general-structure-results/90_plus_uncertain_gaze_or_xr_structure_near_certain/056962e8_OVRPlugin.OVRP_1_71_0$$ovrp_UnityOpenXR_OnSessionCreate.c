/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 056962e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  LeanTween__value();
  FUN_056809b8();
  lVar2 = *unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x68) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000030;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_05654d7c(&stack0x00000030,unaff_x19 + 0x38,0);
  if (iVar1 == 0) {
    FUN_056963f8(&stack0x00000018);
    if (in_stack_00000018 != '\0') {
      auVar5 = FUN_0433d204(&stack0x00000018,
                            *(undefined8 *)System_Predicate<DebugUIHandlerValue>_TypeInfo);
      *(undefined1 (*) [16])(unaff_x19 + 0x40) = auVar5;
      LeanTween__value(unaff_x19 + 0x48,0);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar1 = FUN_05655310(uVar4,&stack0x00000008,0);
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000008;
    }
    return;
  }
  thunk_FUN_02dfd288(PTR_DAT_069fcb10);
  uVar4 = thunk_FUN_02dd3144();
  uVar3 = thunk_FUN_02dfd288(System_Predicate<DiscProperty>_TypeInfo);
  Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
            (uVar4,uVar3,0);
  uVar3 = thunk_FUN_02dfd288(System_Predicate<DropdownMenuItem>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar3);
}


