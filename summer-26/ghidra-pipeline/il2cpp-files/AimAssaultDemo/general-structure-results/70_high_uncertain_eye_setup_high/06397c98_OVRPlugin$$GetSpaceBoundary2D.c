/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 06397c98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceBoundary2D(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  uVar2 = (*(code *)*param_1)();
  *(undefined8 *)(in_stack_00000018 + 0x60) = uVar2;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  plVar5 = (long *)PTR_DAT_07db5908;
LAB_06397cf4:
  do {
    plVar9 = *(long **)(in_stack_00000018 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06397d4c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,0);
LAB_06397d4c:
    uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      FUN_063981b0();
      *(undefined8 *)(in_stack_00000018 + 0x60) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x60),0);
      return 0;
    }
    plVar9 = *(long **)(in_stack_00000018 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06397db8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x23,0);
LAB_06397db8:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar5 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *plVar5)) {
        plVar5 = (long *)FUN_06370e18(plVar9,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db52e8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06397ec8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db52e8,0);
LAB_06397ec8:
        uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        *(undefined8 *)(in_stack_00000018 + 0x68) = uVar2;
        thunk_FUN_037aeb94();
        plVar5 = *(long **)(in_stack_00000018 + 0x68);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        do {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x22) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06397f44;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x22,0);
LAB_06397f44:
          uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          if ((uVar7 & 1) == 0) goto LAB_06398000;
          plVar5 = *(long **)(in_stack_00000018 + 0x68);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x23) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06397fb0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x23,0);
LAB_06397fb0:
          uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar5 = *(long **)(unaff_x21 + 0x10);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar7 = (**(code **)(*plVar5 + 0x178))
                            (plVar5,*(undefined8 *)(in_stack_00000018 + 0x40),uVar2,
                             *(undefined8 *)(in_stack_00000018 + 0x50),
                             *(undefined8 *)(*plVar5 + 0x180));
          if ((uVar7 & 1) != 0) {
            *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
            thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),uVar2);
            *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
            return 1;
          }
          plVar5 = *(long **)(in_stack_00000018 + 0x68);
        } while( true );
      }
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar4 = *(long **)(unaff_x21 + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar7 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined8 *)(in_stack_00000018 + 0x40),plVar9,
                       *(undefined8 *)(in_stack_00000018 + 0x50),*(undefined8 *)(*plVar4 + 0x180));
    if ((uVar7 & 1) != 0) {
      *(long *)(in_stack_00000018 + 0x18) = (long)plVar9;
      thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x18),plVar9);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
      return 1;
    }
  } while( true );
LAB_06398000:
  FUN_06398100();
  *(undefined8 *)(in_stack_00000018 + 0x68) = 0;
  thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x68),0);
  plVar5 = (long *)PTR_DAT_07db5908;
  goto LAB_06397cf4;
}


