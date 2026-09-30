/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARPointCloud$$get_identifiers
ENTRY_POINT: 05da01a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_XR_ARFoundation_ARPointCloud__get_identifiers
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_35c [108];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2cc [108];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [200];
  undefined1 auStack_d0 [200];
  long lStack_8;
  
  puVar3 = Method_Unity_Properties_PropertyBag_Register<StyleBackgroundPosition>__;
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3ac0 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__);
    FUN_02f08768(PTR_DAT_067cbf08);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleBackgroundPosition>__);
    DAT_06bc3ac0 = 1;
  }
  puVar2 = PTR_DAT_067cbf08;
  memset(auStack_d0,0,200);
  uStack_1cc = 0;
  uStack_1d0 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1e0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__;
  FUN_05d9ffe0(auStack_d0,param_5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_06126ea0(0);
  uStack_238 = 0;
  uStack_240 = 0;
  FUN_03e20d34(&uStack_240,uVar5,*(undefined8 *)puVar3);
  if (param_5 != 0) {
    uVar4 = FUN_060a46e0(param_5,0);
    FUN_06124964(&uStack_1c0,uStack_240,uStack_238,uVar4,0xffffffff,0,0);
    FUN_06124a64(&uStack_1c0,1,0);
    FUN_06127030(&uStack_230,0,0);
    uStack_258 = uStack_1b8;
    uStack_260 = uStack_1c0;
    uStack_248 = uStack_1a8;
    uStack_250 = uStack_1b0;
    memcpy(auStack_2cc,&uStack_230,0x6c);
    lVar6 = *param_2;
    if (lVar6 != 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_198,auStack_d0,200);
      uStack_2e8 = uStack_258;
      uStack_2f0 = uStack_260;
      uStack_2d8 = uStack_248;
      uStack_2e0 = uStack_250;
      memcpy(auStack_35c,auStack_2cc,0x6c);
      FUN_05dace88(param_4,param_3,auStack_198,&uStack_2f0,auStack_35c,lVar6 + 0x10,0);
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
        return;
      }
      goto LAB_05da03a8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05da03a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


