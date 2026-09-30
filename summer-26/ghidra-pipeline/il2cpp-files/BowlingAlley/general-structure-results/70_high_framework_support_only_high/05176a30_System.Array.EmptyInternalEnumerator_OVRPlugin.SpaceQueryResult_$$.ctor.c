/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05176a30
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor
               (undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(5);
  }
  FUN_03b57270();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(param_2);
  }
  puVar2 = (undefined4 *)thunk_FUN_032a57f4(param_2);
  uVar1 = *puVar2;
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar4 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_032a57f4();
      in_stack_00000030 = puVar3[2];
      in_stack_00000028 = puVar3[1];
      in_stack_00000020 = *puVar3;
      FUN_051752cc(param_1,uVar1,&stack0x00000020,1,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                  0x208) + 0x20) + 0xc0) + 0x110));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d618c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


