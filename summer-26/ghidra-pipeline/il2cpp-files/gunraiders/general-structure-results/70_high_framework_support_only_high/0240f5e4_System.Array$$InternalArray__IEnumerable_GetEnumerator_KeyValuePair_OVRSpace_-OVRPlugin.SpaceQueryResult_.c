/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 0240f5e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000088;
  
  uStack0000000000000040 = param_2;
  uStack0000000000000044 = param_3;
  uStack0000000000000048 = param_4;
  uStack000000000000004c = param_5;
  plVar1 = (long *)thunk_FUN_01c49334(*param_1,&stack0x00000040);
  lVar3 = *(long *)(*unaff_x23 + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394(lVar3);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(long *)(*plVar1 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(plVar1);
  }
  puVar2 = (undefined4 *)thunk_FUN_01c49834();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*puVar2);
}


