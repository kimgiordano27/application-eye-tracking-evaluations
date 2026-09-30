/*
FUNCTION_NAME: OVRManager$$FindMainCamera
ENTRY_POINT: 06369e10
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FindMainCamera(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x24;
  
  thunk_FUN_03798b70();
  uVar4 = FUN_03f426d0(unaff_w21,*unaff_x22);
  lVar7 = *unaff_x24;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
    lVar7 = *unaff_x24;
  }
  puVar1 = PTR_DAT_07db5788;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar7);
      lVar7 = *unaff_x24;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5790);
    FUN_0449f1b4(lVar10,uVar11,*(undefined8 *)PTR_DAT_07db57a8,0);
    plVar5 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_037aeb94(plVar5,lVar10);
  }
  plVar5 = (long *)FUN_03f7a0ac(uVar4,lVar10,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db5798) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06369f18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db5798,0);
LAB_06369f18:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar1 = PTR_DAT_07d89700;
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06369f80;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d89700,0);
LAB_06369f80:
      uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar8 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_0636a1a4;
        (**(code **)(*unaff_x19 + 0x5d8))();
        puVar2 = PTR_DAT_07db57a0;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db57a0) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0636a000;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db57a0,0);
LAB_0636a000:
        uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        lVar10 = *plVar5;
        lVar7 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0636a05c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar5,lVar7,0);
LAB_0636a05c:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar8 & 1) == 0) {
          FUN_063651b0(uVar3);
          (**(code **)(*unaff_x19 + 0x698))();
        }
        else {
          (**(code **)(*unaff_x19 + 0x598))();
          FUN_063651b0(uVar3);
          (**(code **)(*unaff_x19 + 0x698))();
          do {
            lVar7 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0636a0ec;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_0636a0ec:
            (*(code *)*puVar6)(plVar5,puVar6[1]);
            FUN_063651b0();
            (**(code **)(*unaff_x19 + 0x698))();
            lVar10 = *plVar5;
            lVar7 = *(long *)puVar1;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0636a160;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar5,lVar7,0);
LAB_0636a160:
            uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          } while ((uVar8 & 1) != 0);
          (**(code **)(*unaff_x19 + 0x5a8))();
        }
      }
      return;
    }
  }
LAB_0636a1a4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


