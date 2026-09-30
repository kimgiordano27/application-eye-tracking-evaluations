/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 046c08e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Span<OVRPlugin_Vector4s>__ToArray(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined4 unaff_w21;
  
  lVar2 = FUN_02dcfd18();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = FUN_02d966a4(lVar2,unaff_w21);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x19;
    iVar1 = *(int *)(unaff_x19 + 1);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    FUN_03599190(lVar2 + 0x20,uVar4,(long)iVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


