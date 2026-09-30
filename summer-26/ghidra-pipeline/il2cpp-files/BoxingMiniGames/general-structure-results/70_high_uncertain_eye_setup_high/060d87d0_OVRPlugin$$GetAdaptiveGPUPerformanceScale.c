/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 060d87d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAdaptiveGPUPerformanceScale(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03642964(PTR_DAT_07a21270);
  FUN_03642964(PTR_DAT_07a21278);
  FUN_03642964(PTR_DAT_07a21280);
  FUN_03642964(PTR_DAT_07a246d0);
  FUN_03642964(PTR_DAT_07a21288);
  FUN_03642964(PTR_DAT_07a246e0);
  *(undefined1 *)(unaff_x20 + 0xae0) = 1;
  plVar7 = *(long **)(unaff_x19 + 0x50);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a246d0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_060d8884;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a246d0,0);
LAB_060d8884:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a246e0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_060d88ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a246e0,0);
LAB_060d88ec:
      plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a21288) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_060d8958;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a21288,1);
LAB_060d8958:
        puVar2 = PTR_DAT_07a21278;
        puVar1 = PTR_DAT_07a21270;
        (*(code *)*puVar3)(&stack0x00000018,plVar7,puVar3[1]);
        while (uVar5 = FUN_058847b8(&stack0x00000018,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
          FUN_05ffc194();
          FUN_05ffc20c();
        }
        FUN_058847b4(&stack0x00000018,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


