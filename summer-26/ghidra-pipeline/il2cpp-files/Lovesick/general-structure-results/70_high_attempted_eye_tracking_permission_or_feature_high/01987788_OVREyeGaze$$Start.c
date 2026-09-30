/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 01987788
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = StringLiteral_2894;
  if ((DAT_0377a3fa & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<HandleReceivedPingPongAsync>d__64>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0360);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<FontDefinition>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_2894);
    DAT_0377a3fa = 1;
  }
  lVar3 = *(long *)puVar2;
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_033f0360;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_01987884;
    FUN_0136b58c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<FontDefinition>__ctor__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
  }
  if (lVar4 != 0) {
    FUN_01325274(lVar4,lVar5,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<HandleReceivedPingPongAsync>d__64>__
                );
    return;
  }
LAB_01987884:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


