/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 021903f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long param_1)

{
  undefined8 uVar1;
  int in_w9;
  long unaff_x19;
  undefined8 *unaff_x24;
  undefined4 uVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if (*(long *)(unaff_x19 + 0xf0) != 0) {
    in_stack_00000008 = *unaff_x24;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x40);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = *(undefined4 *)(*(long *)(unaff_x19 + 0xf0) + 0x3c);
    uVar1 = FUN_03307544(&stack0x00000008,0);
    uVar1 = FUN_03152fb8(uVar1,*(undefined8 *)PTR_DAT_04238ee8,*(undefined8 *)(unaff_x19 + 0x158),0)
    ;
    FUN_0213f94c(uVar2,2,*(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo
                 ,*(undefined8 *)System_Reflection_ExceptionHandlingClauseOptions_TypeInfo,uVar1);
    *(undefined8 *)(unaff_x19 + 0x150) = 0;
    *(undefined1 *)(unaff_x19 + 0x70) = 0;
    *(undefined1 *)(unaff_x19 + 0x21) = 0;
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


