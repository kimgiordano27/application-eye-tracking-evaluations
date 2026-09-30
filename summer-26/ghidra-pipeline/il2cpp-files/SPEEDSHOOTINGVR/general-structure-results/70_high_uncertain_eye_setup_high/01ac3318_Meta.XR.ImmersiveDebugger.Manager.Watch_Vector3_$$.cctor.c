/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.cctor
ENTRY_POINT: 01ac3318
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01ac3414) */

void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___cctor(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  
  lVar1 = FUN_0103c244();
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  plVar2 = (long *)FUN_01beff18();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_021581a8(plVar2);
  (**(code **)(*unaff_x20 + 0x898))();
  (**(code **)(*unaff_x20 + 0x198))();
  lVar1 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0234bef0) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_01ac33e8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(plVar2,*(long *)PTR_DAT_0234bef0,0);
LAB_01ac33e8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


