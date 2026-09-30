/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02dda0f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  
  uVar1 = thunk_FUN_02b79644();
  FUN_04cf4310();
  FUN_02dd65f0(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x25);
  FUN_04380420();
  FUN_02dd6768(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788();
  lVar2 = FUN_04dc0fdc(uVar4,uVar1,0);
  if (lVar2 == 0) {
    lVar3 = 0;
    plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar5 = 0;
  }
  else {
    uVar1 = *unaff_x22;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,uVar1);
    }
    uVar1 = *unaff_x22;
    plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar5 = lVar3;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,uVar1);
    }
  }
  thunk_FUN_02bb0e9c(plVar5,lVar3);
  return;
}


