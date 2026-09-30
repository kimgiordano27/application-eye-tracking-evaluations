/*
FUNCTION_NAME: FUN_020b5f74
ENTRY_POINT: 020b5f74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_020b5f74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>__ctor__;
  puVar3 = Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__;
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__;
  if ((DAT_0482f914 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__);
    DAT_0482f914 = 1;
  }
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030f2380(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar5);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_02b6aa68(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x60),uVar5);
  *(undefined4 *)(param_1 + 0x68) = 0x40a00000;
  FUN_037b1f8c(param_1,0);
  return;
}


