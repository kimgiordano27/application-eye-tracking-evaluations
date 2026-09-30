/*
FUNCTION_NAME: Unity.VisualScripting.MemberFilter$$GetHashCode
ENTRY_POINT: 063ad6a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_MemberFilter__GetHashCode(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  void *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long in_stack_00000408;
  
  FUN_066b5c2c();
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var + 0xe0) == 0)
  {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_06385084();
  *unaff_x21 = uVar3;
  FUN_066b5c2c(&stack0x00000390,0,0);
  if (*(int *)(*(long *)UnityEngine_UIElements_FocusController_FocusedElement_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_063acd6c();
  FUN_066b5b18(&stack0x00000390,uVar2,0);
  uVar3 = FUN_06385084();
  *unaff_x22 = uVar3;
  uVar3 = FUN_0628b3b4(&stack0x00000410);
  if (in_stack_00000408 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(in_stack_00000408 + 0x18) = uVar3;
  uVar3 = FUN_0628b58c(&stack0x00000410);
  if (in_stack_00000408 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(in_stack_00000408 + 0x10) = uVar3;
  memcpy(&stack0x00000018,unaff_x20,0x2b8);
  if (in_stack_00000408 != 0) {
    memcpy((void *)(in_stack_00000408 + 0x20),&stack0x00000018,0x2b8);
    thunk_FUN_02f411dc((void *)(in_stack_00000408 + 0x20),0);
    if (in_stack_00000408 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined8 *)(in_stack_00000408 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0xe0);
    thunk_FUN_02f411dc(in_stack_00000408 + 0x2d8);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x10c);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x104);
    if (in_stack_00000408 != 0) {
      *(undefined8 *)(in_stack_00000408 + 0x2f0) = *(undefined8 *)(unaff_x19 + 0x114);
      *(undefined8 *)(in_stack_00000408 + 0x2e8) = uVar7;
      *(undefined8 *)(in_stack_00000408 + 0x2e0) = uVar3;
      *(undefined1 *)(in_stack_00000408 + 0x2f8) = *(undefined1 *)(unaff_x19 + 0x100);
      FUN_06282c94(&stack0x00000410,0,0);
      puVar1 = System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
      lVar5 = *(long *)System_Action<OVRManager_PassthroughInitializationState>_TypeInfo;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar5);
        lVar5 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar5);
          lVar5 = *(long *)puVar1;
        }
        uVar3 = **(undefined8 **)(lVar5 + 0xb8);
        lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                    System_Action<InputAction_CallbackContext>_TypeInfo);
        FUN_045fdd18(lVar6,uVar3,*(undefined8 *)System_Action<OVRHand_MicrogestureType>_TypeInfo,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar4 = lVar6;
        thunk_FUN_02f411dc(plVar4,lVar6);
      }
      FUN_03b64a64(&stack0x00000410,lVar6,
                   *(undefined8 *)System_Action<InputStateHistory_Record>_TypeInfo);
      FUN_0628be4c(&stack0x00000410,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


