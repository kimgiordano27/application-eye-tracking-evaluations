/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 05b634b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  plVar2 = (long *)FUN_05aab0a8(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x198))
                      (plVar2,*unaff_x20,unaff_x19 & 0xffffffff,*(undefined8 *)(*plVar2 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    plVar2 = (long *)FUN_05a976b0(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x90));
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05b6352c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x198))
                (plVar2,*(undefined2 *)(unaff_x20 + 1),unaff_x19 >> 0x20,
                 *(undefined8 *)(*plVar2 + 0x1a0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


