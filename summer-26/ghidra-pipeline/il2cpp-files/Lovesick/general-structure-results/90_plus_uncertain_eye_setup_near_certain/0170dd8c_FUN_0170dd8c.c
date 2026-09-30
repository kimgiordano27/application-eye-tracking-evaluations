/*
FUNCTION_NAME: FUN_0170dd8c
ENTRY_POINT: 0170dd8c
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


void FUN_0170dd8c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_60 [2];
  
  puVar2 = StringLiteral_146;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_037789ef & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_146);
    thunk_FUN_00d48444(PTR_DAT_033f7588);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f69b0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_78__);
    DAT_037789ef = 1;
  }
  FUN_016f4200(param_1,param_2,param_3,param_4,0);
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  puVar1 = PTR_DAT_033f7588;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)PTR_DAT_033f69b0,uVar6,0);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_78__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if ((plVar4 != (long *)0x0) && (lVar5 = *(long *)(*(long *)puVar1 + 0x40), *plVar4 != lVar5)) {
LAB_0170df44:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar4,lVar5);
  }
  thunk_FUN_00d624ac(plVar4,*(long *)puVar1,local_60);
  *(undefined8 *)(param_1 + 0xa0) = local_60[0];
  uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
  plVar4 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar3,uVar6,0);
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    lVar5 = *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if ((*plVar4 != lVar5) || (*(long **)(param_1 + 0x98) = plVar4, *plVar4 != lVar5))
    goto LAB_0170df44;
  }
  return;
}


