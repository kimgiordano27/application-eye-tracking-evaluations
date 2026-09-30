/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Create
ENTRY_POINT: 05162d9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162f4c) */
/* WARNING: Removing unreachable block (ram,0x05162f50) */
/* WARNING: Removing unreachable block (ram,0x05162ff8) */

void OVRPlugin_Qpl_Annotation_Builder__Create(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *piVar6;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
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
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138);
      goto LAB_05162dcc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x20,param_3,8);
LAB_05162dcc:
        uVar3 = (*(code *)*puVar2)(unaff_x20,puVar2[1]);
        uVar4 = thunk_FUN_04e8bd3c(uVar3,*unaff_x27,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_05162e38;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,1);
LAB_05162e38:
          uVar3 = (*(code *)*puVar2)(unaff_x20,puVar2[1]);
          uVar4 = FUN_04e8c024(uVar3,*unaff_x28,0);
          if ((uVar4 & 1) != 0) {
            lVar5 = *unaff_x20;
            uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar4 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x24) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_05162ea4;
                }
                uVar4 = uVar4 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,1);
LAB_05162ea4:
            (*(code *)*puVar2)(unaff_x20,puVar2[1]);
            lVar5 = *unaff_x20;
            uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar4 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x24) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                  goto LAB_05162f04;
                }
                uVar4 = uVar4 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,5);
LAB_05162f04:
            (*(code *)*puVar2)(unaff_x20,puVar2[1]);
            (**(code **)(*unaff_x19 + 0x1f8))();
          }
        }
        while (uVar4 = FUN_04a7a4a0(&stack0x00000020,*unaff_x26), (uVar4 & 1) == 0) {
          FUN_04a7a49c(&stack0x00000020,*unaff_x23);
          uVar4 = FUN_04a7a4a0(&stack0x00000040,*unaff_x26);
          plVar1 = in_stack_00000050;
          if ((uVar4 & 1) == 0) {
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
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_05162d38;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d9a5d4(plVar1,*unaff_x24,3);
LAB_05162d38:
          lVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_03aaceb0(&stack0x00000008,lVar5,*unaff_x25);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
        }
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        param_1 = *in_stack_00000030;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x20 = in_stack_00000030;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


