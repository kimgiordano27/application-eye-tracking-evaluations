/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 0566cdfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_06a0e888;
  if ((DAT_06dbc631 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(System_Collections_Generic_List<GUILayoutEntry>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e888);
    DAT_06dbc631 = 1;
  }
  lVar4 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x214) = param_2;
  *(undefined4 *)(param_1 + 0x1a0) = 2;
  lVar4 = *(long *)(lVar4 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  puVar2 = System_Collections_Generic_List<GUILayoutEntry>_TypeInfo;
  puVar1 = PTR_DAT_069fc868;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_054521e8(uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar4 != 0) {
    FUN_056872e4(lVar4,param_1,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


