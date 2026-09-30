/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 01b3323c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  puVar1 = PTR_DAT_0234d9f0;
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)PTR_DAT_0234d9f0;
    thunk_FUN_0106e12c();
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0103c244();
    }
    uVar3 = FUN_01d47d28(unaff_x20 + 4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x120));
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
      thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x30),uVar3);
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)puVar1;
        thunk_FUN_0106e12c();
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0103c244();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0103c244();
        }
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000018 = *(undefined4 *)(unaff_x20 + 8);
        in_stack_00000008 = lVar2;
        uVar3 = FUN_01d7bfd8(&stack0x00000008,0);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
          thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x40),uVar3);
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)PTR_DAT_0234d4e0;
            thunk_FUN_0106e12c();
            FUN_01c515a0();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


