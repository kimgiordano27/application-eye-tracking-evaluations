/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$Core_InitEvent
ENTRY_POINT: 04312a38
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__Core_InitEvent(void)

{
  long *plVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x24;
  long unaff_x28;
  long *in_stack_00000040;
  undefined2 uStack0000000000000048;
  undefined6 uStack000000000000004a;
  undefined4 uStack000000000000005c;
  undefined4 *in_stack_00000068;
  
  thunk_FUN_0408f364();
  if (*(char *)(unaff_x24 + 0xe0d) == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    *(undefined1 *)(unaff_x24 + 0xe0d) = 1;
  }
  uVar2 = uStack0000000000000048;
  plVar1 = in_stack_00000040;
  if (in_stack_00000040 != (long *)0x0) {
    lVar6 = *in_stack_00000040;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04312ab8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000040,*(long *)PTR_DAT_08f67c08,0);
LAB_04312ab8:
    iVar3 = (*(code *)*puVar4)(plVar1,uVar2,puVar4[1]);
    if (iVar3 == 0) {
      uStack000000000000005c = 1;
      *in_stack_00000068 = 1;
      uVar5 = *(undefined8 *)PTR_DAT_08f736e0;
      *(ulong *)(in_stack_00000068 + 10) = CONCAT62(uStack000000000000004a,uStack0000000000000048);
      *(long **)(in_stack_00000068 + 8) = in_stack_00000040;
      FUN_04322a74(in_stack_00000068 + 2,&stack0x00000040,in_stack_00000068,uVar5);
      return;
    }
  }
  if (*(char *)(unaff_x28 + 0xe0e) == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    *(undefined1 *)(unaff_x28 + 0xe0e) = 1;
  }
  uVar2 = uStack0000000000000048;
  plVar1 = in_stack_00000040;
  if (in_stack_00000040 != (long *)0x0) {
    lVar6 = *in_stack_00000040;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_04312b4c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000040,*(long *)PTR_DAT_08f67c08,2);
LAB_04312b4c:
    (*(code *)*puVar4)(plVar1,uVar2,puVar4[1]);
  }
  if (unaff_x19 != 0) {
    FUN_04311a44();
    *in_stack_00000068 = 0xfffffffe;
    FUN_04174940(in_stack_00000068 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


