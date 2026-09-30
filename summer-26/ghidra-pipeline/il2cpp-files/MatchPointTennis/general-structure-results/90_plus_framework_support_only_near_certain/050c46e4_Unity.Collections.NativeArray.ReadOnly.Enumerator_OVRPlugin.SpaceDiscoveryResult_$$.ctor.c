/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 050c46e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  puVar2 = PTR_DAT_09f1e6b8;
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_094bbcfc(0);
  if (((uVar3 & 1) != 0) && (lVar4 = *unaff_x20, lVar4 != 0)) {
    if (unaff_x21 != 0) {
      FUN_05baf38c();
      lVar4 = *unaff_x20;
    }
    if (lVar4 == 0) goto LAB_050c4848;
    FUN_0945fc10(lVar4,0);
  }
  *unaff_x20 = unaff_x22;
  thunk_FUN_044bb4b4();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_094bbcfc(0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (unaff_x21 != 0) {
    lVar4 = *unaff_x20;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_050c4848;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
  }
  if (unaff_x19 != 0) {
    uVar3 = FUN_09525150();
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*unaff_x20 != 0) {
      FUN_0945fbe0(*unaff_x20,0);
      return;
    }
  }
LAB_050c4848:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


