/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 05595338
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong in_x9;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_0338f618(param_1);
  }
  plVar2 = (long *)FUN_05acea04(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x198))
                      (plVar2,*unaff_x20,unaff_w22,*(undefined8 *)(*plVar2 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618();
    }
    plVar2 = (long *)FUN_05ae2100(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x90));
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x055953bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(unaff_x20 + 2));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


