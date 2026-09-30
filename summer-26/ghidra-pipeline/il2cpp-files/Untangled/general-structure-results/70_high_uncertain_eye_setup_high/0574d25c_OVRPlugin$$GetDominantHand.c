/*
FUNCTION_NAME: OVRPlugin$$GetDominantHand
ENTRY_POINT: 0574d25c
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


undefined8 OVRPlugin__GetDominantHand(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  undefined4 in_w9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  *(undefined4 *)(param_1 + 0x10) = in_w9;
  plVar5 = (long *)PTR_DAT_06d58778;
  plVar2 = (long *)PTR_DAT_06d586b0;
LAB_0574d274:
  do {
    plVar12 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0574d2cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar12,*unaff_x23,0);
LAB_0574d2cc:
    uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      FUN_0574da08();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar12 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0574d338;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar12,*unaff_x21,0);
LAB_0574d338:
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) {
      if (plVar12 == (long *)0x0) {
LAB_0574d3cc:
        lVar9 = *(long *)(in_stack_00000018 + 0x40);
        cVar8 = '\0';
        if (lVar9 != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          cVar8 = *(char *)(lVar9 + 0x20);
        }
        if (cVar8 != '\0') {
          lVar9 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar4 = FUN_055b5920(0);
          if (plVar12 != (long *)0x0) {
            plVar5 = (long *)thunk_FUN_02ebbee0(plVar12,0);
            if (plVar5 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d59358);
              uVar4 = FUN_056f1630(uVar7,uVar4,uVar6,0);
              thunk_FUN_02f239f0(PTR_DAT_06d55148);
              uVar6 = thunk_FUN_02ef1808();
              FUN_05693110(uVar6,uVar4,0);
              uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d59360);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar6,uVar4);
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
      }
      else {
        lVar9 = *plVar12;
        bVar1 = *(byte *)(*plVar2 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar2)) {
          bVar1 = *(byte *)(*plVar5 + 0x130);
          if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5))
          goto LAB_0574d3cc;
        }
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06d581b0) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0574d1a0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)PTR_DAT_06d581b0,0);
LAB_0574d1a0:
        uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
        thunk_FUN_02f411dc();
        plVar5 = *(long **)(in_stack_00000018 + 0x58);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0574d1fc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x23,0);
LAB_0574d1fc:
        uVar10 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar10 & 1) != 0) {
          plVar5 = *(long **)(in_stack_00000018 + 0x58);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0574d498;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          break;
        }
        FUN_0574d958();
        *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
        thunk_FUN_02f411dc((undefined8 *)(in_stack_00000018 + 0x58),0);
        plVar5 = (long *)PTR_DAT_06d58778;
        plVar2 = (long *)PTR_DAT_06d586b0;
      }
      goto LAB_0574d274;
    }
    lVar9 = FUN_0574d694(plVar12,*(undefined8 *)(in_stack_00000018 + 0x40),
                         *(ulong *)(unaff_x22 + 0x10) >> 0x20);
    if (lVar9 != 0) {
      *(long *)(in_stack_00000018 + 0x18) = lVar9;
      thunk_FUN_02f411dc();
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x21) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0574d4b4;
    }
  }
LAB_0574d498:
  puVar3 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x21,0);
LAB_0574d4b4:
  uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar4;
  thunk_FUN_02f411dc();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


