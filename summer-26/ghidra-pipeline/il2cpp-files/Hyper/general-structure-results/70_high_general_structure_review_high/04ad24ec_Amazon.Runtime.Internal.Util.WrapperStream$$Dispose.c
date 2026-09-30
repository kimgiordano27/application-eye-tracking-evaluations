/*
FUNCTION_NAME: Amazon.Runtime.Internal.Util.WrapperStream$$Dispose
ENTRY_POINT: 04ad24ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ad2740) */

long * Amazon_Runtime_Internal_Util_WrapperStream__Dispose(long *param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint uVar9;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 uStack0000000000000010;
  undefined8 *puStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  do {
    uStack0000000000000010 = 0;
    puStack0000000000000018 = unaff_x20;
    do {
      do {
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x28) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04ad2540;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(unaff_x19,*unaff_x28,0);
LAB_04ad2540:
        uVar7 = (*(code *)*puVar4)(unaff_x19,puVar4[1]);
        plVar5 = in_stack_00000078;
        if ((uVar7 & 1) == 0) {
          plVar5 = (long *)0x0;
          uVar9 = 2;
          goto Amazon_Runtime_Internal_Util_WrapperStream__FlushAsync;
        }
        if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar6 = *in_stack_00000078;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x29) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto FUN_04ad25a4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000078,*unaff_x29,0);
FUN_04ad25a4:
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        unaff_x19 = in_stack_00000078;
        param_1 = in_stack_00000078;
      } while (plVar5[0xf] == 0);
      bVar1 = *(byte *)(*unaff_x22 + 0x130);
    } while ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22));
    uVar9 = 6;
Amazon_Runtime_Internal_Util_WrapperStream__FlushAsync:
    plVar2 = in_stack_00000078;
    if (in_stack_00000078 != (long *)0x0) {
      lVar6 = *in_stack_00000078;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_04ad2674;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000078,*(long *)PTR_DAT_0ac09b90,0);
FUN_04ad2674:
      (*(code *)*puVar4)(plVar2,puVar4[1]);
    }
    unaff_x20 = &stack0x00000078;
    if ((uVar9 | 2) != 2) {
LAB_04ad26ec:
      lVar6 = in_stack_00000068;
      FUN_05fd4ce4(in_stack_00000070,*unaff_x26);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948184(lVar6);
      }
      return plVar5;
    }
    do {
      uVar7 = FUN_05fd4ce8(&stack0x00000110,*unaff_x23);
      if ((uVar7 & 1) == 0) {
        plVar5 = (long *)0x0;
        goto LAB_04ad26ec;
      }
      FUN_05fd4d14(&stack0x00000010,&stack0x00000110,*unaff_x24);
      memcpy(&stack0x000000a0,&stack0x00000010,0x58);
      uVar3 = FUN_09c8c3d8(&stack0x000000a0,0);
      uVar7 = FUN_08bd8f18(uVar3,0);
    } while ((uVar7 & 1) != 0);
    uVar3 = FUN_09c8c3d8(&stack0x000000a0,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_09cb207c(&stack0x00000010,uVar3,0);
    in_stack_00000088 = puStack0000000000000018;
    in_stack_00000080 = uStack0000000000000010;
    in_stack_00000098 = in_stack_00000028;
    in_stack_00000090 = in_stack_00000020;
    param_1 = (long *)FUN_0665faec(&stack0x00000080,*(undefined8 *)PTR_DAT_0ac0e8f8);
    unaff_x19 = param_1;
    in_stack_00000078 = param_1;
  } while( true );
}


