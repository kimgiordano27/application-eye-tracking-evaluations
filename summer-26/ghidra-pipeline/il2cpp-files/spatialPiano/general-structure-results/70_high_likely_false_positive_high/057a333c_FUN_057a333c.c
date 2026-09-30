/*
FUNCTION_NAME: FUN_057a333c
ENTRY_POINT: 057a333c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_057a333c(long param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((DAT_06bc0b0f & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<int,_OpenXRProjectionLayer_ProjectionData>_get_Item__
                );
    FUN_02f08768(
                System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_DataMemberConflictComparer_TypeInfo
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_02f08768(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_Dispose__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__);
    FUN_02f08768(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ulong>_get_labelElement__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
                    /* try { // try from 057a3444 to 058a34a7 has its CatchHandler @ 057a3444
                       catch() { ... } // from try @ 057a3444 with catch @ 057a3444
                       catch() { ... } // from try @ 057a34e0 with catch @ 057a3444
                       catch() { ... } // from try @ 057a3560 with catch @ 057a3444 */
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__);
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<KeyValuePair<TrackableId,_ARPlane>>_Dispose__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                );
    FUN_02f08768(
                System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
                    /* try { // try from 057a34a8 to 058a34b7 has its CatchHandler @ 057a352c */
    FUN_02f08768(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Awake__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_CaptureInitialValue__
                );
                    /* try { // try from 057a34cc to 058a34df has its CatchHandler @ 057a3528 */
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRSelectFilter>_get_registeredSnapshot__
                );
                    /* try { // try from 057a34e0 to 058a3547 has its CatchHandler @ 057a3444 */
    DAT_06bc0b0f = 1;
  }
  switch(param_2) {
  case 2:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x158);
LAB_057a3578:
      *puVar2 = 0;
      return;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x158) = param_3;
    break;
  case 3:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x148);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<TrackableId,_ARPlane>>_Dispose__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x148) = param_3;
    break;
  case 4:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x150);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x150) = param_3;
    break;
  case 5:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x78);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x78) = param_3;
    break;
  case 6:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x88);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x88) = param_3;
    break;
  case 7:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x120);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x120) = param_3;
    break;
  case 8:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x128);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x128) = param_3;
    break;
  case 9:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x90);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_System_Collections_Generic_Dictionary<int,_OpenXRProjectionLayer_ProjectionData>_get_Item__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x90) = param_3;
    break;
  case 10:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xf0);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xf0) = param_3;
    break;
  case 0xb:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xf8);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<ulong>_get_labelElement__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xf8) = param_3;
    break;
  case 0xc:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x100);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x100) = param_3;
    break;
  case 0xd:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x108);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x108) = param_3;
    break;
  case 0xe:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x110);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x110) = param_3;
    break;
  case 0xf:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x80);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_DataMemberConflictComparer_TypeInfo
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x80) = param_3;
    break;
  case 0x10:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x130);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x130) = param_3;
    break;
  case 0x11:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xa0);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xa0) = param_3;
    break;
  case 0x12:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x98);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x98) = param_3;
    break;
  case 0x13:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xa8);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xa8) = param_3;
    break;
  case 0x14:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xb8);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xb8) = param_3;
    break;
  case 0x15:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xb0);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xb0) = param_3;
    break;
  case 0x16:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xc0);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xc0) = param_3;
    break;
  case 0x17:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 200);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 200) = param_3;
    break;
  case 0x18:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xd0);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xd0) = param_3;
    break;
  case 0x19:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xd8);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_CaptureInitialValue__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xd8) = param_3;
    break;
  case 0x1a:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xe0);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xe0) = param_3;
    break;
  case 0x1b:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0xe8);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Awake__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0xe8) = param_3;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x138);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x138) = param_3;
    break;
  case 0x1f:
  case 0x20:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x140);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRSelectFilter>_get_registeredSnapshot__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x140) = param_3;
    break;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x170);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 057a34cc with catch @ 057a3528
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 057a34a8 with catch @ 057a352c
                        */
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x170) = param_3;
    break;
  case 0x2d:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x160);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x160) = param_3;
    break;
  case 0x2e:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x168);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)Method_System_Collections_Generic_List_Enumerator<IBindingRequest>_Dispose__;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x168) = param_3;
    break;
  case 0x2f:
    if (param_3 == (long *)0x0) {
      puVar2 = (undefined8 *)(param_1 + 0x180);
      goto LAB_057a3578;
    }
    lVar1 = *(long *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
    ;
    uVar3 = (ulong)*(byte *)(lVar1 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) goto LAB_057a356c;
    *(long **)(param_1 + 0x180) = param_3;
    break;
  default:
    goto switchD_057a3508_default;
  }
                    /* try { // try from 057a3548 to 058a354b has its CatchHandler @ 057a3554 */
                    /* catch() { ... } // from try @ 057a3548 with catch @ 057a3554 */
                    /* try { // try from 057a3558 to 058a355f has its CatchHandler @ 057a3568 */
                    /* try { // try from 057a3560 to 058a356b has its CatchHandler @ 057a3444 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 057a3558 with catch @ 057a3568
                        */
  if (((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar3) ||
     (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar1)) {
LAB_057a356c:
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_3);
  }
switchD_057a3508_default:
  return;
}


