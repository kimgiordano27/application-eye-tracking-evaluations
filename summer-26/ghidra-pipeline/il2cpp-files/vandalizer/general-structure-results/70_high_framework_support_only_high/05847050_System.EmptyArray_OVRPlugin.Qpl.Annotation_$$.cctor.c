/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 05847050
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Qpl_Annotation>___cctor
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  void *__src;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(5);
  }
  FUN_03f79a48(param_3,0xf,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x200));
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
  }
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_0322f04c(param_2,lVar2);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(param_2,lVar2);
    }
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
  }
  if (param_3 != (long *)0x0) {
    if (*(long *)(*param_3 + 0x40) == *(long *)(lVar2 + 0x40)) {
      __src = (void *)thunk_FUN_0322f29c(param_3);
      memcpy(&stack0x00000000,__src,0xd0);
      uVar3 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) +
                                   0x20) + 0xc0) + 0x110);
      memcpy(&stack0x000000d0,&stack0x00000000,0xd0);
      FUN_05845360(param_1,lVar1,&stack0x000000d0,2,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2730(param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


