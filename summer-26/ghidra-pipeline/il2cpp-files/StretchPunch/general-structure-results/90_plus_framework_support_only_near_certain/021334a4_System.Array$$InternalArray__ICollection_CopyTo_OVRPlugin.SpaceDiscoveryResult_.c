/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 021334a4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  long lVar4;
  
  if (in_w9 == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar1 = FUN_033a87c8();
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)
                        Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                      );
  }
  lVar2 = FUN_03d79164(uVar1,0,0);
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8(lVar4);
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_01de26bc(lVar2,lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar2,lVar4);
    }
  }
  return lVar3;
}


