/*
FUNCTION_NAME: FUN_01a3be1c
ENTRY_POINT: 01a3be1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01a3be1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = 
  Method_System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>__ctor__;
  if ((DAT_0377ac11 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_3544);
    thunk_FUN_00d48444(Method_DG_Tweening_TweenSettingsExtensions_OnStepComplete<Sequence>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vector4>_set_Capacity__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>__ctor__
                      );
    DAT_0377ac11 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_01a3bf38;
    FUN_016f27fc(lVar4,uVar5,
                 *(undefined8 *)Method_System_Collections_Generic_List<Vector4>_set_Capacity__,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
  }
  puVar1 = Method_DG_Tweening_TweenSettingsExtensions_OnStepComplete<Sequence>__;
  if (param_1 != 0) {
    *(long *)(param_1 + 0x68) = lVar4;
    puVar2 = StringLiteral_3544;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01282224(param_1,*(undefined8 *)puVar2);
    return;
  }
LAB_01a3bf38:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


