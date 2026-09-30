/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$.ctor
ENTRY_POINT: 045ee004
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x045ee0f8) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = PTR_DAT_06d01f60;
  plVar2 = (long *)FUN_04857988(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_06874620(plVar2);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_045ee0c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar2,*(long *)puVar1,0);
LAB_045ee0c4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


