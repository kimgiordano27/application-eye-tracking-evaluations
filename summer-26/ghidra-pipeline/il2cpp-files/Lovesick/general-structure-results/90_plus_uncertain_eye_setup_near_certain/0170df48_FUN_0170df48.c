/*
FUNCTION_NAME: FUN_0170df48
ENTRY_POINT: 0170df48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0170df48(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  puVar3 = StringLiteral_146;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = PTR_DAT_033f7588;
  if ((DAT_037789f0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_146);
    thunk_FUN_00d48444(PTR_DAT_033f7588);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f69b0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_78__);
    DAT_037789f0 = 1;
  }
  FUN_016f4288(param_1,param_2,param_3,param_4,0);
  local_48 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_48);
  uVar5 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar5 = FUN_01780344(uVar5,0);
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_78__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (param_2 != 0) {
    FUN_01682ab8(param_2,*(undefined8 *)PTR_DAT_033f69b0,uVar4,uVar5,0);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_01682ab8(param_2,*(undefined8 *)puVar2,uVar5,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


