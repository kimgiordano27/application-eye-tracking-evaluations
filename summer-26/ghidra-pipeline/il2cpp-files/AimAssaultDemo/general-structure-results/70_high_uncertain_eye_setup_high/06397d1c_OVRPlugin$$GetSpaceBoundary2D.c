/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 06397d1c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceBoundary2D(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long *unaff_x19;
  long *plVar8;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
code_r0x06397d1c:
  if (in_x11 == param_3) {
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    goto LAB_06397d4c;
  }
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 == 0) {
LAB_06397d30:
    puVar2 = (undefined8 *)FUN_0377596c(unaff_x19,param_3,0);
LAB_06397d4c:
    uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
    if ((uVar3 & 1) == 0) {
      FUN_063981b0();
      *(undefined8 *)(in_stack_00000018 + 0x60) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x60),0);
      return 0;
    }
    plVar8 = *(long **)(in_stack_00000018 + 0x60);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06397db8;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar8,*unaff_x23,0);
LAB_06397db8:
    plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x20 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x20)) {
        plVar8 = (long *)FUN_06370e18(plVar8,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db52e8) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06397ec8;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07db52e8,0);
LAB_06397ec8:
        uVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        *(undefined8 *)(in_stack_00000018 + 0x68) = uVar5;
        thunk_FUN_037aeb94();
        plVar8 = *(long **)(in_stack_00000018 + 0x68);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        do {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x22) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_06397f44;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_0377596c(plVar8,*unaff_x22,0);
LAB_06397f44:
          uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
          if ((uVar3 & 1) == 0) goto LAB_06398000;
          plVar8 = *(long **)(in_stack_00000018 + 0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_06397fb0;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_0377596c(plVar8,*unaff_x23,0);
LAB_06397fb0:
          uVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar8 = *(long **)(unaff_x21 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar3 = (**(code **)(*plVar8 + 0x178))
                            (plVar8,*(undefined8 *)(in_stack_00000018 + 0x40),uVar5,
                             *(undefined8 *)(in_stack_00000018 + 0x50),
                             *(undefined8 *)(*plVar8 + 0x180));
          if ((uVar3 & 1) != 0) {
            *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
            thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),uVar5);
            *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
            return 1;
          }
          plVar8 = *(long **)(in_stack_00000018 + 0x68);
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
    uVar3 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined8 *)(in_stack_00000018 + 0x40),plVar8,
                       *(undefined8 *)(in_stack_00000018 + 0x50),*(undefined8 *)(*plVar4 + 0x180));
    if ((uVar3 & 1) != 0) {
      *(long *)(in_stack_00000018 + 0x18) = (long)plVar8;
      thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x18),plVar8);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
      return 1;
    }
    goto LAB_06397cf4;
  }
  goto LAB_06397d18;
LAB_06398000:
  FUN_06398100();
  *(undefined8 *)(in_stack_00000018 + 0x68) = 0;
  thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x68),0);
  unaff_x20 = (long *)PTR_DAT_07db5908;
LAB_06397cf4:
  unaff_x19 = *(long **)(in_stack_00000018 + 0x60);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  param_1 = *unaff_x19;
  param_3 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x06397d10;
  goto LAB_06397d30;
code_r0x06397d10:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06397d18:
  in_x11 = *(long *)(in_x10 + -2);
  goto code_r0x06397d1c;
}


