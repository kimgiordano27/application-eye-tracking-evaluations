/*
FUNCTION_NAME: OVRPlugin$$GetActionStateFloat
ENTRY_POINT: 05bc1938
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateFloat(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long *unaff_x21;
  uint *unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  undefined4 uVar10;
  
  FUN_03188a78(PTR_DAT_07112228);
  FUN_03188a78(PTR_DAT_071122b8);
  FUN_03188a78(PTR_DAT_07116390);
  *(undefined1 *)(unaff_x24 + 0xac1) = 1;
  puVar1 = PTR_DAT_07116390;
  puVar2 = PTR_DAT_07112248;
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07112248) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_05bc19e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05bc19e0:
    uVar4 = (*(code *)*puVar5)();
    *unaff_x22 = uVar4 & unaff_w23;
    FUN_05bc1d34();
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05bc1a50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05bc1a50:
    (*(code *)*puVar5)();
    puVar1 = PTR_DAT_07112228;
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07112228) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05bc1ab8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05bc1ab8:
      plVar6 = (long *)(*(code *)*puVar5)();
      puVar3 = PTR_DAT_071122b8;
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_071122b8) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_05bc1b24;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_071122b8,4);
LAB_05bc1b24:
        uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        lVar7 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05bc1b80;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05bc1b80:
        plVar6 = (long *)(*(code *)*puVar5)();
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05bc1be0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar3,0);
LAB_05bc1be0:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
          lVar7 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                goto LAB_05bc1c40;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05bc1c40:
          (*(code *)*puVar5)(uVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


