/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03f63a60
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4();
  }
  iVar2 = *(int *)(param_1 + 0xfc);
  if (*(int *)(*(long *)PTR_DAT_0759d328 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_05d8635c(0);
  plVar6 = *(long **)(unaff_x21 + 0x38);
  lVar5 = *plVar6;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
    plVar6 = *(long **)(unaff_x21 + 0x38);
  }
  lVar1 = plVar6[1];
  iVar3 = *(int *)(*plVar6 + 0x28);
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
  if (-1 < iVar3) {
    unaff_x20 = unaff_x29 + -0x28;
  }
  FUN_031f2c78(lVar5,lVar1,(long)&stack0x00000000 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),
               unaff_x20,unaff_x29 + -0x20,unaff_x29 + -0x10);
  FUN_05c94b84();
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


