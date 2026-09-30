/*
FUNCTION_NAME: FUN_05da0190
ENTRY_POINT: 05da0190
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_05da0190(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_3ac [108];
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_31c [108];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [200];
  undefined1 auStack_120 [200];
  long local_58;
  
  puVar3 = Method_Unity_Properties_PropertyBag_Register<StyleBackgroundPosition>__;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
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
  memset(auStack_120,0,200);
  uStack_21c = 0;
  uStack_220 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  local_224 = 0;
  uStack_230 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__;
  FUN_05d9ffe0(auStack_120,param_5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_06126ea0(0);
  local_288 = 0;
  local_290 = 0;
  FUN_03e20d34(&local_290,uVar5,*(undefined8 *)puVar3);
  if (param_5 != 0) {
    uVar4 = FUN_060a46e0(param_5,0);
    FUN_06124964(&local_210,local_290,local_288,uVar4,0xffffffff,0,0);
    FUN_06124a64(&local_210,1,0);
    FUN_06127030(&local_280,0,0);
    uStack_2a8 = uStack_208;
    local_2b0 = local_210;
    uStack_298 = uStack_1f8;
    uStack_2a0 = uStack_200;
    memcpy(auStack_31c,&local_280,0x6c);
    lVar6 = *param_2;
    if (lVar6 != 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_1e8,auStack_120,200);
      uStack_338 = uStack_2a8;
      local_340 = local_2b0;
      uStack_328 = uStack_298;
      uStack_330 = uStack_2a0;
      memcpy(auStack_3ac,auStack_31c,0x6c);
      FUN_05dace88(param_4,param_3,auStack_1e8,&local_340,auStack_3ac,lVar6 + 0x10,0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_05da03a8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05da03a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


