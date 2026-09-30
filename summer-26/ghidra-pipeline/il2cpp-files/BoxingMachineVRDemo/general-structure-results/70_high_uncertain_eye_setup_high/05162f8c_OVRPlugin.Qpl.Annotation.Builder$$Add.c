/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05162f8c
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
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long *unaff_x19;
  int iVar6;
  long lVar7;
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
  
  plVar4 = (long *)__cxa_begin_catch();
  lVar7 = *plVar4;
  __cxa_end_catch();
  iVar6 = 0;
  do {
    FUN_04a7a49c(&stack0x00000020,*unaff_x23);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae0(lVar7);
    }
    if (((iVar6 != 6) && (iVar6 != 0)) ||
       (uVar1 = FUN_04a7a4a0(&stack0x00000040,*unaff_x26), plVar4 = in_stack_00000050,
       (uVar1 & 1) == 0)) {
      FUN_04a7a49c(&stack0x00000040,*unaff_x23);
      return;
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*unaff_x19 + 0x1d8))();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar4;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_05162d38;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,*unaff_x24,3);
LAB_05162d38:
    lVar7 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03aaceb0(&stack0x00000008,lVar7,*unaff_x25);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar1 = FUN_04a7a4a0(&stack0x00000020,*unaff_x26), plVar4 = in_stack_00000030,
          (uVar1 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *in_stack_00000030;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_05162dcc;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x24,8);
LAB_05162dcc:
      uVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      uVar1 = thunk_FUN_04e8bd3c(uVar3,*unaff_x27,0);
      if ((uVar1 & 1) != 0) {
        lVar7 = *plVar4;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_05162e38;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,*unaff_x24,1);
LAB_05162e38:
        uVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
        uVar1 = FUN_04e8c024(uVar3,*unaff_x28,0);
        if ((uVar1 & 1) != 0) {
          lVar7 = *plVar4;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_05162ea4;
              }
              uVar1 = uVar1 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar1 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,*unaff_x24,1);
LAB_05162ea4:
          (*(code *)*puVar2)(plVar4,puVar2[1]);
          lVar7 = *plVar4;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                goto LAB_05162f04;
              }
              uVar1 = uVar1 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar1 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,*unaff_x24,5);
LAB_05162f04:
          (*(code *)*puVar2)(plVar4,puVar2[1]);
          (**(code **)(*unaff_x19 + 0x1f8))();
        }
      }
    }
    lVar7 = 0;
    iVar6 = 6;
  } while( true );
}


