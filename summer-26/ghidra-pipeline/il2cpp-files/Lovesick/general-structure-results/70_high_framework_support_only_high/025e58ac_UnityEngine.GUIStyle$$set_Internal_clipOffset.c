/*
FUNCTION_NAME: UnityEngine.GUIStyle$$set_Internal_clipOffset
ENTRY_POINT: 025e58ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 UnityEngine_GUIStyle__set_Internal_clipOffset(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_03783279 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Item__);
    thunk_FUN_00d48444(
                      Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>__ctor__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_133__);
    DAT_03783279 = 1;
  }
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_025e59f0;
  uVar1 = FUN_0129aa60(*(long *)(param_1 + 0x60),param_2,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Item__);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__
                              );
    if (lVar2 == 0) goto LAB_025e59f0;
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    uStack_98 = uStack_58;
    uStack_a0 = local_60;
    uStack_88 = uStack_48;
    local_90 = uStack_50;
    local_80 = local_40;
    FUN_01250954(lVar2,&local_b0,1,0,0,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo)
    ;
    if (lVar3 == 0) goto LAB_025e59f0;
    FUN_01299e64(lVar3,param_2,lVar2,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_133__);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_01299bc0(*(long *)(param_1 + 0x60),param_2,&local_70,
                 *(undefined8 *)
                  Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>__ctor__
                );
    return local_70;
  }
LAB_025e59f0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


