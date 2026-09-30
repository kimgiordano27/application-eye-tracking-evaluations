/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03548f28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_02f08768(PTR_DAT_067c9a28);
    param_1 = *(undefined8 **)(unaff_x19 + 0x38);
    if (param_1 == (undefined8 *)0x0) {
      FUN_02f41ef8();
      param_1 = *(undefined8 **)(unaff_x19 + 0x38);
    }
  }
  puVar2 = PTR_DAT_067c9338;
  uVar6 = *param_1;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar3 = FUN_050e4454(uVar6,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = FUN_050ef21c(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar5 = (long *)FUN_050e4454(uVar6,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067c9a28 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_067c9a28) {
      plVar5 = (long *)0x0;
    }
  }
  uVar6 = thunk_FUN_02f1bb70(plVar5,0);
  return uVar6;
}


