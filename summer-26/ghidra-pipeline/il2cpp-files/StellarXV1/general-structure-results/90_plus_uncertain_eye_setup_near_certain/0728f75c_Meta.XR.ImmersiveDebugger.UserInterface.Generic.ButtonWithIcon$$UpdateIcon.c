/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 0728f75c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 extraout_var;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *plVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  undefined1 auVar14 [12];
  
  plVar10 = *(long **)(unaff_x20 + 0x10);
  if (plVar10 != (long *)0x0) {
    lVar5 = thunk_FUN_04096bb4(*(undefined8 *)
                                (*plVar10 +
                                 (ulong)*(ushort *)(*(long *)PTR_DAT_092c1f48 + 0x50) * 0x10 + 0x140
                                ));
    lVar5 = (**(code **)(lVar5 + 8))(plVar10,lVar5);
    *unaff_x21 = lVar5;
    thunk_FUN_040ec700();
    if (unaff_w22 == 0) {
      bVar3 = false;
    }
    else {
      fVar13 = (float)FUN_0728f490();
      if ((unaff_w22 != 1) || (0.0 <= fVar13)) {
        bVar3 = 0.0 < fVar13 && unaff_w22 == 2;
        if (unaff_x19 == (long *)0x0) goto LAB_0728fa08;
        goto LAB_0728f7c4;
      }
      bVar3 = true;
    }
    if (unaff_x19 != (long *)0x0) {
LAB_0728f7c4:
      puVar2 = PTR_DAT_092c1f40;
      puVar1 = PTR_DAT_092c1f38;
      lVar5 = 0;
      iVar11 = 0;
      do {
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0728f82c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0728f82c:
        iVar4 = (*(code *)*puVar6)();
        if (iVar4 <= iVar11) {
          return;
        }
        lVar7 = *unaff_x21;
        if (lVar5 == 0) {
          if (((lVar7 == 0) ||
              (lVar5 = FUN_07289ed8(lVar7,*(undefined8 *)(unaff_x20 + 0x10)), lVar5 == 0)) ||
             (*unaff_x21 == 0)) break;
          FUN_0728a2f0(lVar5,*(undefined8 *)(unaff_x20 + 0x10),lVar5,*(undefined8 *)(lVar5 + 0x28));
        }
        else {
          if (lVar7 == 0) break;
          FUN_0728a960(lVar7,*(undefined8 *)(unaff_x20 + 0x10),lVar5);
          lVar5 = *(long *)(lVar5 + 0x38);
        }
        if (bVar3) {
          lVar7 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0728f8e0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0728f8e0:
          (*(code *)*puVar6)();
        }
        if (lVar5 == 0) break;
        lVar7 = *unaff_x19;
        lVar12 = *(long *)(lVar5 + 0x40);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0728f948;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0728f948:
        auVar14 = (*(code *)*puVar6)();
        if (lVar12 == 0) break;
        *(undefined1 (*) [12])(lVar12 + 0x28) = auVar14;
        lVar7 = *unaff_x19;
        lVar12 = *(long *)(lVar5 + 0x40);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0728f9b4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00();
LAB_0728f9b4:
        (*(code *)*puVar6)();
        if (lVar12 == 0) break;
        lVar7 = *(long *)(lVar5 + 0x28);
        *(undefined4 *)(lVar12 + 0x44) = extraout_var;
        *(undefined4 *)(lVar5 + 0x58) = 1;
        if (lVar7 == 0) break;
        iVar11 = iVar11 + 1;
        *(undefined4 *)(lVar7 + 0x58) = 0xffffffff;
      } while( true );
    }
  }
LAB_0728fa08:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


