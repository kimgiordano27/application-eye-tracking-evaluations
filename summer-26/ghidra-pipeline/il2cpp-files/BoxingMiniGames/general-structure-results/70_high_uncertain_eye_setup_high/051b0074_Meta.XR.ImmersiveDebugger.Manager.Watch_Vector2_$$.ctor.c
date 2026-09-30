/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.ctor
ENTRY_POINT: 051b0074
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___ctor(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  lVar2 = FUN_0367c9fc();
  plVar3 = (long *)FUN_053ebb78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x198))
                      (plVar3,*unaff_x20,unaff_x19 & 0xffffffff,*(undefined8 *)(*plVar3 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    plVar3 = (long *)FUN_053ebb78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x051b00ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x198))
                (plVar3,unaff_x20[1],unaff_x19 >> 0x20,*(undefined8 *)(*plVar3 + 0x1a0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


