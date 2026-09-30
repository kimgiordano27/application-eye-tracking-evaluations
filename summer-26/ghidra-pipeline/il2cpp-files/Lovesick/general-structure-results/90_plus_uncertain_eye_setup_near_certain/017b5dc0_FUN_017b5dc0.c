/*
FUNCTION_NAME: FUN_017b5dc0
ENTRY_POINT: 017b5dc0
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


void FUN_017b5dc0(long param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = StringLiteral_13970;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03778ff5 & 1) == 0) {
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
    DAT_03778ff5 = 1;
  }
  uVar5 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01780344(uVar5,0);
  puVar3 = StringLiteral_8407;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_79__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (param_1 != 0) {
    FUN_0166bb38(param_1,uVar5,0);
    uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_01682ab8(param_1,*(undefined8 *)puVar3,param_3,uVar5,0);
    FUN_01677d98(param_1,*(undefined8 *)puVar2,param_2,0);
    uVar4 = FUN_016b4204(param_4,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_4 == (long *)0x0) goto LAB_017b5f48;
      uVar5 = (**(code **)(*param_4 + 0x1c8))(param_4,*(undefined8 *)(*param_4 + 0x1d0));
    }
    else {
      uVar5 = **(undefined8 **)
                (*(long *)
                  System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
                0xb8);
    }
    FUN_0166bc70(param_1,*(undefined8 *)PTR_DAT_033eecd8,uVar5,0);
    return;
  }
LAB_017b5f48:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


