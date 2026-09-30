/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Start
ENTRY_POINT: 057bd5d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Start
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  void *__src;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  size_t unaff_x20;
  void *unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  long unaff_x29;
  double dVar5;
  double unaff_d8;
  double unaff_d9;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02feb2c4(param_3);
  }
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_057bd62c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_057bd62c:
  dVar5 = (double)(*(code *)*puVar1)();
  if (unaff_d9 + dVar5 <= unaff_d8) {
    FUN_02b28244();
    memcpy(unaff_x22,unaff_x24,unaff_x20);
    FUN_02fe9280();
  }
  __src = (void *)thunk_FUN_02fdd5fc();
  memcpy(unaff_x22,__src,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x58),unaff_x22,unaff_x20);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


