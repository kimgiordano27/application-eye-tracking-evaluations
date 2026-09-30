/*
FUNCTION_NAME: UniJSON.Utf8String$$Subbytes
ENTRY_POINT: 02f46858
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f46bfc) */
/* WARNING: Removing unreachable block (ram,0x02f46960) */
/* WARNING: Removing unreachable block (ram,0x02f46c0c) */

long * UniJSON_Utf8String__Subbytes(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while (unaff_x21 = (long *)FUN_01ab6d3c(unaff_x21,param_2,*unaff_x29),
        plVar3 = (long *)PTR_DAT_03cbed08, unaff_x21 == (long *)0x0) {
    do {
      do {
        lVar7 = *unaff_x24;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02f4670c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01a472ec();
LAB_02f4670c:
        uVar8 = (*(code *)*puVar5)();
        if ((uVar8 & 1) == 0) {
          unaff_x21 = (long *)0x0;
          plVar3 = (long *)PTR_DAT_03cbed08;
          goto LAB_02f468c4;
        }
        lVar7 = *unaff_x24;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x28) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_02f4676c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01a472ec();
LAB_02f4676c:
        plVar3 = (long *)(*(code *)*puVar5)();
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*plVar3 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
        plVar3 = (long *)*puVar5;
        lVar7 = *unaff_x26;
        if (plVar3 == (long *)0x0) {
LAB_02f467b8:
          plVar3 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_02f467b8;
          if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) !=
              lVar7) {
            plVar3 = (long *)0x0;
          }
        }
        unaff_x21 = (long *)puVar5[1];
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar7);
        }
        uVar8 = FUN_02787b20(plVar3,0,0);
      } while ((uVar8 & 1) == 0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = FUN_02788c98(plVar3,0);
    } while ((((uVar8 & 1) == 0) ||
             (uVar2 = (**(code **)(*plVar3 + 0x388))(plVar3), unaff_x21 == (long *)0x0)) ||
            (((uVar2 ^ 1) & 1) != 0));
    plVar3 = (long *)PTR_DAT_03cbed08;
    if (*unaff_x21 != *unaff_x23) goto LAB_02f468c4;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    param_2 = *unaff_x25;
  }
  (**(code **)(*unaff_x19 + 0x318))();
LAB_02f468c4:
  puVar1 = PTR_DAT_03cc4e90;
  plVar4 = (long *)thunk_FUN_01a89d6c();
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f46948;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*plVar3,0);
LAB_02f46948:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (unaff_x21 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = (**(code **)(*unaff_x20 + 0x4c8))();
    if ((uVar8 & 1) == 0) {
LAB_02f46b48:
      uVar8 = FUN_02788c98();
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03d23cb8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x21 = (long *)(**(code **)(*unaff_x19 + 0x308))();
        goto LAB_02f46b90;
      }
    }
    else {
      uVar6 = (**(code **)(*unaff_x20 + 0x558))();
      uVar10 = *(undefined8 *)PTR_DAT_03cc5398;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_0277b678(uVar10,0);
      uVar8 = FUN_02786d28(uVar6,uVar10,0);
      if ((uVar8 & 1) == 0) goto LAB_02f46b48;
      if (*(int *)(*(long *)PTR_DAT_03d23cb8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x21 = (long *)(**(code **)(*unaff_x19 + 0x308))();
LAB_02f46b90:
      if (unaff_x21 != (long *)0x0) goto LAB_02f46968;
    }
    uVar6 = *(undefined8 *)puVar1;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0277b678(uVar6,0);
    unaff_x21 = (long *)(**(code **)(*unaff_x19 + 0x308))();
    lVar7 = *unaff_x26;
    if (unaff_x21 != (long *)0x0) goto LAB_02f4696c;
  }
  else {
LAB_02f46968:
    lVar7 = *unaff_x26;
LAB_02f4696c:
    if (*(byte *)(lVar7 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) {
      plVar3 = unaff_x21;
      if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7
         ) {
        plVar3 = (long *)0x0;
      }
      goto LAB_02f4699c;
    }
  }
  plVar3 = (long *)0x0;
LAB_02f4699c:
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02787b20(plVar3,0,0);
  puVar1 = PTR_DAT_03d23cb8;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03d23cb8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_x21 = (long *)FUN_02f41188(plVar3);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_0278a094(plVar3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_03cd8520 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_0267bc0c(uVar6,0,0);
    if ((uVar8 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*unaff_x19 + 0x318))();
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return unaff_x21;
}


