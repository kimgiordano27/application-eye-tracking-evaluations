/*
FUNCTION_NAME: OVRPlugin$$GetMachineID
ENTRY_POINT: 0574d328
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetMachineID(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long in_stack_00000018;
  
LAB_0574d338:
  do {
    plVar3 = (long *)(*(code *)*param_1)(unaff_x19,param_1[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) {
      if (plVar3 == (long *)0x0) {
LAB_0574d3cc:
        lVar4 = *(long *)(in_stack_00000018 + 0x40);
        cVar8 = '\0';
        if (lVar4 != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          cVar8 = *(char *)(lVar4 + 0x20);
        }
        if (cVar8 != '\0') {
          lVar4 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar5 = FUN_055b5920(0);
          if (plVar3 != (long *)0x0) {
            plVar3 = (long *)thunk_FUN_02ebbee0(plVar3,0);
            if (plVar3 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
              uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d59358);
              uVar5 = FUN_056f1630(uVar7,uVar5,uVar6,0);
              thunk_FUN_02f239f0(PTR_DAT_06d55148);
              uVar6 = thunk_FUN_02ef1808();
              FUN_05693110(uVar6,uVar5,0);
              uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d59360);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar6,uVar5);
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
      }
      else {
        lVar4 = *plVar3;
        bVar1 = *(byte *)(*unaff_x20 + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x20)) {
          bVar1 = *(byte *)(*unaff_x25 + 0x130);
          if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25))
          goto LAB_0574d3cc;
        }
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d581b0) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0574d1a0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d581b0,0);
LAB_0574d1a0:
        uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        *(undefined8 *)(in_stack_00000018 + 0x58) = uVar5;
        thunk_FUN_02f411dc();
        plVar3 = *(long **)(in_stack_00000018 + 0x58);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar4 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0574d1fc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x23,0);
LAB_0574d1fc:
        uVar9 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        if ((uVar9 & 1) != 0) {
          plVar3 = *(long **)(in_stack_00000018 + 0x58);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar4 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 == 0) goto LAB_0574d498;
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          break;
        }
        FUN_0574d958();
        *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
        thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x58),0);
        unaff_x20 = (long *)PTR_DAT_06d586b0;
        unaff_x25 = (long *)PTR_DAT_06d58778;
      }
    }
    else {
      lVar4 = FUN_0574d694(plVar3,*(undefined8 *)(in_stack_00000018 + 0x40),
                           *(ulong *)(unaff_x22 + 0x10) >> 0x20);
      if (lVar4 != 0) {
        *(long *)(in_stack_00000018 + 0x18) = lVar4;
        thunk_FUN_02f411dc();
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
        return 1;
      }
    }
    plVar3 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0574d2cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x23,0);
LAB_0574d2cc:
    uVar9 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      FUN_0574da08();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    unaff_x19 = *(long **)(in_stack_00000018 + 0x50);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0574d338;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    param_1 = (undefined8 *)FUN_02eea86c(unaff_x19,*unaff_x21,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0574d4b4;
    }
  }
LAB_0574d498:
  puVar2 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x21,0);
LAB_0574d4b4:
  uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
  thunk_FUN_02f411dc();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


