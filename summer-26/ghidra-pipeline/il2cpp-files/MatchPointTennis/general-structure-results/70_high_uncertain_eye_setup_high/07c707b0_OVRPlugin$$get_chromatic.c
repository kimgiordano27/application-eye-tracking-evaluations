/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 07c707b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_chromatic(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  
  puVar1 = PTR_DAT_09f4dea8;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f4dea8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_07c7081c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_07c7081c:
    (*(code *)*puVar4)();
    plVar8 = *(long **)(unaff_x19 + 0x198);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_07c70898;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,5);
LAB_07c70898:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      uVar2 = FUN_07c6f42c();
      uVar3 = FUN_07c6f65c();
      uVar2 = (*(uint *)(unaff_x19 + 400) | uVar2) & (uVar3 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 400) = uVar2;
      if ((uVar3 != 0) && (uVar2 == 0)) {
        *(undefined1 *)(unaff_x19 + 0x179) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


