/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$UpdateDataSource
ENTRY_POINT: 057bd5c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__UpdateDataSource(long param_1)

{
  undefined8 *puVar1;
  void *__src;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  size_t unaff_x20;
  void *unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  long unaff_x29;
  double dVar6;
  double unaff_d8;
  double unaff_d9;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_057bd62c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_057bd62c:
  dVar6 = (double)(*(code *)*puVar1)();
  if (unaff_d9 + dVar6 <= unaff_d8) {
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


