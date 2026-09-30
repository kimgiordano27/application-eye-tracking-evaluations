/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$get_Array
ENTRY_POINT: 040efeb8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__get_Array(void)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  lVar1 = FUN_0367c9fc();
  lVar2 = *(long *)(unaff_x22 + 0x20);
  uVar3 = **(undefined8 **)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  (**(code **)(lVar1 + 0x10))(uVar3);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


