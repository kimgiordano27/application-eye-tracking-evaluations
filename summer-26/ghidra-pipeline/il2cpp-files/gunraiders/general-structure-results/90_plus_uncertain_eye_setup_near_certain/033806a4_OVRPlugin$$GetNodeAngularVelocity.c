/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 033806a4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__GetNodeAngularVelocity(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x21;
  long *in_stack_00000008;
  
  thunk_FUN_01c1d1e8(param_1);
  uVar1 = OVRPlugin__GetTrackerPose();
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_Dispose__;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar3 = (long *)FUN_032e04b8(uVar4,0);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x298))();
      if ((uVar1 & 1) != 0) {
        return 0;
      }
LAB_03380764:
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar4 = FUN_03295500(0);
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_MoveNext__
                                );
      uVar4 = FUN_0336f2b8(uVar5,uVar4);
      thunk_FUN_01c273e8(PTR_DAT_0422f998);
      uVar5 = thunk_FUN_01c496e0();
      FUN_03308b88(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_object>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,uVar4);
    }
  }
  else if (in_stack_00000008 != (long *)0x0) {
    uVar1 = (**(code **)(*in_stack_00000008 + 0x3c8))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x3d0));
    if ((uVar1 & 1) != 0) goto LAB_03380764;
    lVar2 = (**(code **)(*in_stack_00000008 + 0x458))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x460));
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        return *(undefined8 *)(lVar2 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


