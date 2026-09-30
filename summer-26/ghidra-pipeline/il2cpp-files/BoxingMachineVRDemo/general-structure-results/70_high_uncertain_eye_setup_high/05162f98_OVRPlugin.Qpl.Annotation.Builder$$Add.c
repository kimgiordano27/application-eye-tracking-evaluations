/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05162f98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  int iVar7;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000050;
  
  iVar7 = 0;
  do {
    FUN_04a7a49c(&stack0x00000020,*unaff_x23);
    if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae0(unaff_x22);
    }
    if (((iVar7 != 6) && (iVar7 != 0)) ||
       (uVar2 = FUN_04a7a4a0(&stack0x00000040,*unaff_x26), plVar1 = in_stack_00000050,
       (uVar2 & 1) == 0)) {
      FUN_04a7a49c(&stack0x00000040,*unaff_x23);
      return;
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*unaff_x19 + 0x1d8))();
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_05162d38;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar1,*unaff_x24,3);
LAB_05162d38:
    lVar5 = (*(code *)*puVar3)(plVar1,puVar3[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03aaceb0(&stack0x00000008,lVar5,*unaff_x25);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar2 = FUN_04a7a4a0(&stack0x00000020,*unaff_x26), plVar1 = in_stack_00000030,
          (uVar2 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar5 = *in_stack_00000030;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_05162dcc;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x24,8);
LAB_05162dcc:
      uVar4 = (*(code *)*puVar3)(plVar1,puVar3[1]);
      uVar2 = thunk_FUN_04e8bd3c(uVar4,*unaff_x27,0);
      if ((uVar2 & 1) != 0) {
        lVar5 = *plVar1;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_05162e38;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar1,*unaff_x24,1);
LAB_05162e38:
        uVar4 = (*(code *)*puVar3)(plVar1,puVar3[1]);
        uVar2 = FUN_04e8c024(uVar4,*unaff_x28,0);
        if ((uVar2 & 1) != 0) {
          lVar5 = *plVar1;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_05162ea4;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(plVar1,*unaff_x24,1);
LAB_05162ea4:
          (*(code *)*puVar3)(plVar1,puVar3[1]);
          lVar5 = *plVar1;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                goto LAB_05162f04;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(plVar1,*unaff_x24,5);
LAB_05162f04:
          (*(code *)*puVar3)(plVar1,puVar3[1]);
          (**(code **)(*unaff_x19 + 0x1f8))();
        }
      }
    }
    unaff_x22 = 0;
    iVar7 = 6;
  } while( true );
}


