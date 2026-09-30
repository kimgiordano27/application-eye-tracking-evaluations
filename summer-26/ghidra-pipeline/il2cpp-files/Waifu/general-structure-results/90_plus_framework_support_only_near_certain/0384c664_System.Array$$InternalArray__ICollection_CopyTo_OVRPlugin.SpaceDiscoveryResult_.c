/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0384c664
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_0338f674();
  }
  if (param_2 == 0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar1 = thunk_FUN_03398a84();
    uVar2 = FUN_033d1ba8(&DAT_0844fcf0);
    FUN_0677f140(uVar1,uVar2,0);
    goto LAB_0384c770;
  }
  if (unaff_w21 < 0) {
LAB_0384c6c8:
    FUN_033d1ba8(&DAT_083c8a18);
    uVar1 = thunk_FUN_03398a84();
    uVar2 = FUN_033d1ba8(&DAT_084587c8);
    puVar4 = &DAT_0843d338;
  }
  else {
    if (*(int *)(param_2 + 0x18) < unaff_w21) goto LAB_0384c6c8;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(param_2 + 0x18) - unaff_w21)) {
      FUN_0385fc34(param_2,param_3);
      return;
    }
    FUN_033d1ba8(&DAT_083c8a18);
    uVar1 = thunk_FUN_03398a84();
    uVar2 = FUN_033d1ba8(&DAT_08451328);
    puVar4 = &DAT_08437fe8;
  }
  uVar3 = FUN_033d1ba8(puVar4);
  FUN_06782c1c(uVar1,uVar2,uVar3,0);
LAB_0384c770:
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar1);
}


