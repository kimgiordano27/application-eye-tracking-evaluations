/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$HideLogDetailsPanel
ENTRY_POINT: 01443558
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__HideLogDetailsPanel(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x27;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      return 0;
    }
    plVar4 = *(long **)(unaff_x19 + 0x50);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x1c8))
                        (plVar4,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(*plVar4 + 0x1d0));
      *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        plVar4 = *(long **)(unaff_x19 + 0x50);
        uVar3 = FUN_0145b018(*(long *)(unaff_x19 + 0x28),0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) && (plVar4 != (long *)0x0)) {
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                     (plVar4,uVar3 & 1,
                                      *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x30),
                                      *(undefined8 *)(*plVar4 + 0x1b0));
          *(long **)(unaff_x19 + 0x60) = plVar4;
          if (plVar4 != (long *)0x0) {
            lVar7 = *plVar4;
            uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x27) {
                  puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_01443758;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x27,0);
LAB_01443758:
            uVar8 = (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
            if ((uVar8 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x38) != 0) {
                *(undefined1 *)(*(long *)(unaff_x19 + 0x38) + 0x10) = 0;
                return 0;
              }
            }
            else if ((unaff_x20 != 0) &&
                    (plVar4 = *(long **)(unaff_x19 + 0x60), plVar4 != (long *)0x0)) {
              lVar7 = *plVar4;
              uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
              uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
              uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x27) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                    goto LAB_014437e8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x27,1);
LAB_014437e8:
              uVar5 = (*(code *)*puVar6)(plVar4,uVar2,uVar1,uVar5);
              *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
              *(undefined4 *)(unaff_x19 + 0x10) = 3;
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


