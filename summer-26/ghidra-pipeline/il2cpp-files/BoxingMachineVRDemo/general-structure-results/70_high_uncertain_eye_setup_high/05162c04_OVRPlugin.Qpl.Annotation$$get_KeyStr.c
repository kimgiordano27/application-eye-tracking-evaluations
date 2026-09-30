/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$get_KeyStr
ENTRY_POINT: 05162c04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162f4c) */
/* WARNING: Removing unreachable block (ram,0x05162f50) */
/* WARNING: Removing unreachable block (ram,0x05162ff8) */

void OVRPlugin_Qpl_Annotation__get_KeyStr(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  while( true ) {
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
    FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_06782428);
    if (lVar4 == 0) break;
    do {
      lVar7 = *(long *)(lVar4 + 0x10);
      lVar9 = *unaff_x29;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05162fe8;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = (long)unaff_x20;
        thunk_FUN_02dd37b4(plVar5,unaff_x20);
      }
      else {
        FUN_03aac494(lVar4,unaff_x20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      do {
        if (unaff_x20 == (long *)0x0) goto LAB_05162fe8;
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_05162b8c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,4);
LAB_05162b8c:
        unaff_x20 = (long *)(*(code *)*puVar3)(unaff_x20,puVar3[1]);
        if (unaff_x20 == (long *)0x0) {
          if (lVar4 == 0) {
            return;
          }
          FUN_03aadce4(lVar4,*unaff_x22);
          FUN_03aaceb0(&stack0x00000008,lVar4,*unaff_x25);
          in_stack_00000048 = in_stack_00000010;
          in_stack_00000040 = in_stack_00000008;
          in_stack_00000050 = in_stack_00000018;
          goto LAB_05162cbc;
        }
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto FUN_05162bec;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,0);
FUN_05162bec:
        iVar2 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
      } while (iVar2 != 1);
    } while (lVar4 != 0);
  }
LAB_05162fe8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05162cbc:
  uVar8 = FUN_04a7a4a0(&stack0x00000040,*unaff_x26);
  plVar5 = in_stack_00000050;
  if ((uVar8 & 1) == 0) {
    FUN_04a7a49c(&stack0x00000040,*unaff_x23);
    return;
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  (**(code **)(*unaff_x19 + 0x1d8))();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_05162d38;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x24,3);
LAB_05162d38:
  lVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03aaceb0(&stack0x00000008,lVar4,*unaff_x25);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar8 = FUN_04a7a4a0(&stack0x00000020,*unaff_x26), plVar5 = in_stack_00000030,
        (uVar8 & 1) != 0) {
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *in_stack_00000030;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_05162dcc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x24,8);
LAB_05162dcc:
    uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    uVar8 = thunk_FUN_04e8bd3c(uVar6,*unaff_x27,0);
    if ((uVar8 & 1) != 0) {
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05162e38;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x24,1);
LAB_05162e38:
      uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      uVar8 = FUN_04e8c024(uVar6,*unaff_x28,0);
      if ((uVar8 & 1) != 0) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_05162ea4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x24,1);
LAB_05162ea4:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_05162f04;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x24,5);
LAB_05162f04:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
        (**(code **)(*unaff_x19 + 0x1f8))();
      }
    }
  }
  FUN_04a7a49c(&stack0x00000020,*unaff_x23);
  goto LAB_05162cbc;
}


