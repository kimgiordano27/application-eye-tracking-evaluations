/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 07c83f28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ChangeVirtualKeyboardTextContext
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_04447ba8(PTR_DAT_09f500a8);
  *(undefined1 *)(unaff_x20 + 0x7d5) = 1;
  plVar5 = *(long **)(unaff_x19 + 0x68);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f28c08) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07c83fb4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f28c08,0);
LAB_07c83fb4:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (unaff_x21 != 0) {
    FUN_07c838b4();
    if (*(char *)(unaff_x21 + 0x34) != '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
      if (*(int *)(*(long *)PTR_DAT_09f500a8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_07c5dcf0();
      uVar6 = FUN_07c83804();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x148);
        uVar10 = param_3;
        FUN_07c5df1c();
        uVar7 = FUN_09516c60(0);
        lVar2 = FUN_095258d0();
        if (lVar2 != 0) {
          FUN_0953af30(uVar6,uVar8,param_3,uVar7,uVar9,uVar10,param_4,lVar2,0);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_094da31c(*(long *)(unaff_x19 + 0x40),1,0);
            plVar5 = *(long **)(unaff_x19 + 0x58);
            if (plVar5 == (long *)0x0) {
              uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
            }
            else {
              lVar2 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f4d2c8) {
                    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_07c8411c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar3 != 0);
              }
              puVar1 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f4d2c8,0);
LAB_07c8411c:
              uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
            }
            lVar2 = 0x98;
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              lVar2 = 0x90;
            }
            if (*(long *)(unaff_x19 + lVar2) != 0) {
              FUN_094bab0c(uVar3,*(long *)(unaff_x19 + lVar2),0);
              FUN_07c83d40();
              FUN_07c84184();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


