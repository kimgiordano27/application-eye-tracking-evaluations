/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 076f6b00
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  float in_stack_00000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  thunk_FUN_04484e3c();
  FUN_0744298c();
  in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x50);
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x21 + 0x50),&stack0x00000018);
  FUN_0744298c();
  uStack0000000000000014 = *(undefined4 *)(unaff_x19 + 0x58);
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x21 + 0x50),&stack0x00000014);
  FUN_0744298c();
  in_stack_00000010 = *(undefined4 *)(unaff_x19 + 0x48);
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x21 + 0x50),&stack0x00000010);
  FUN_0744298c();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x4c);
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x21 + 0x50),&stack0x0000000c);
  FUN_0744298c();
  in_stack_00000008 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0xa4));
  in_stack_00000008 = in_stack_00000008 / *(float *)(unaff_x19 + 0xa0);
  thunk_FUN_04484e3c(*(undefined8 *)(unaff_x21 + 0x78),&stack0x00000008);
  FUN_0744298c();
  uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2fac0);
  FUN_077077ac(uVar2,6);
  thunk_FUN_07707d38(uVar2,0);
  puVar1 = PTR_DAT_09f2f908;
  plVar7 = *(long **)(unaff_x19 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2f9e8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_076f6c9c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f2f9e8,2);
LAB_076f6c9c:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
    plVar7 = *(long **)(unaff_x19 + 0x18);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
    FUN_073ab0a8();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2f9f0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_076f6d28;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f2f9f0,1);
LAB_076f6d28:
      (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


