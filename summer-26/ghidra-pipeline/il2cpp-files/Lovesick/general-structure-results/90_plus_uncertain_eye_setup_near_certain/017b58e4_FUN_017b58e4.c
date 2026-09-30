/*
FUNCTION_NAME: FUN_017b58e4
ENTRY_POINT: 017b58e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_017b58e4(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = StringLiteral_13970;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03778ff3 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13970);
    thunk_FUN_00d48444(PTR_DAT_033eecd8);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_79__);
    thunk_FUN_00d48444(StringLiteral_8407);
    DAT_03778ff3 = 1;
  }
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  puVar5 = StringLiteral_8407;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_79__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar1 = PTR_DAT_033eecd8;
  if (param_1 != 0) {
    FUN_0166bb38(param_1,uVar6,0);
    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
    FUN_01682ab8(param_1,*(undefined8 *)puVar5,0,uVar6,0);
    FUN_01677d98(param_1,*(undefined8 *)puVar4,param_2,0);
    FUN_0166bc70(param_1,*(undefined8 *)puVar1,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


