/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 033803bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  
  uVar1 = (**(code **)(*unaff_x19 + 0x3c8))();
  if ((uVar1 & 1) != 0) {
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03380494();
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_042305b0);
  FUN_019b5f60();
  uVar2 = FUN_03295500(0);
  uVar3 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_Enumerator<string,_OVRGLTFInputNode>_MoveNext__
                            );
  uVar2 = FUN_0336f2b8(uVar3,uVar2);
  thunk_FUN_01c273e8(PTR_DAT_0422fa20);
  uVar3 = thunk_FUN_01c496e0();
  FUN_0323fc78(uVar3,uVar2,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_Enumerator<string,_OVRGLTFInputNode>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar2);
}


