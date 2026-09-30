/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03f1ec64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x24;
  
  thunk_FUN_036a1978(param_1);
  lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar1 = *(uint *)(*(long *)(*unaff_x24 + 0xb8) + 0x84);
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = 0;
    thunk_FUN_036b7ad0(puVar2,0);
    lVar4 = *(long *)(*unaff_x24 + 0xb8);
    *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + -1;
    *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + -1;
    *(int *)(lVar4 + 0x3c) = *(int *)(lVar4 + 0x3c) + -1;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar3 = thunk_FUN_0367fe20();
    FUN_0502fbac(uVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    lVar4 = *unaff_x24;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *unaff_x24;
    }
    *(int *)(*(long *)(lVar4 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar4 + 0xb8) + 0x3c) + 1;
    FUN_03804dc8(uVar3,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


