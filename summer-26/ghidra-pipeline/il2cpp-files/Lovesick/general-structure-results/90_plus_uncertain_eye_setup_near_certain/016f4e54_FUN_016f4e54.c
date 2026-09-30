/*
FUNCTION_NAME: FUN_016f4e54
ENTRY_POINT: 016f4e54
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


void FUN_016f4e54(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if ((DAT_0377889e & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ecfb0);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_18_0_TypeInfo);
    DAT_0377889e = 1;
  }
  FUN_017aa148(param_1,param_2,param_3,param_4,0);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01780344(uVar4,0);
  puVar1 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  if (param_2 != 0) {
    FUN_01682ab8(param_2,*(undefined8 *)PTR_DAT_033ecfb0,uVar3,uVar4,0);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_01682ab8(param_2,*(undefined8 *)puVar1,uVar4,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


