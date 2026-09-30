/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 052e76b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation
               (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long lVar8;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while( true ) {
    uVar5 = FUN_0692c3cc(param_1,param_2);
    thunk_FUN_05464b70(uVar5,*unaff_x24,0);
    uVar3 = FUN_04de5d9c(&stack0x00000040,*unaff_x21);
    if ((uVar3 & 1) == 0) break;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    lVar8 = *(long *)(unaff_x19 + 0x120);
    lVar4 = FUN_0692c3cc(&stack0x00000030,0);
    lVar6 = *unaff_x22;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *(long *)(lVar8 + 0x10);
    lVar7 = *unaff_x23;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(lVar8,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = &stack0x00000030;
    param_2 = 0;
  }
  FUN_04de5d98(&stack0x00000040,*(undefined8 *)PTR_DAT_06d3db60);
  _in_stack_00000020 = FUN_052e67b4();
  lVar6 = FUN_0692d804(&stack0x00000020,0);
  if (lVar6 != 0) {
    FUN_0546954c(lVar6,0);
  }
  auVar9 = FUN_052e67b4();
  _in_stack_00000020 = auVar9;
  lVar6 = FUN_0692d76c(&stack0x00000020,0);
  if (lVar6 != 0) {
    FUN_0546954c(lVar6,0);
  }
  if (unaff_x19 == 0) {
LAB_052e77c0:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar2 = FUN_052e82c4();
  *(undefined4 *)(unaff_x19 + 0x118) = uVar2;
  uVar5 = FUN_052e8604();
  *(undefined8 *)(unaff_x19 + 0x138) = uVar5;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x138));
  uVar3 = FUN_0692d6b4(&stack0x00000060,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_052e77c0;
    FUN_04759f10(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x138),
                 *(undefined8 *)PTR_DAT_06d3db90);
  }
  return;
}


