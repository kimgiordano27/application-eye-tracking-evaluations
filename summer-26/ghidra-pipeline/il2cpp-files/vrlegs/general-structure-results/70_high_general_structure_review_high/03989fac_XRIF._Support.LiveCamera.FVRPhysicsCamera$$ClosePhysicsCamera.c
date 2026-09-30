/*
FUNCTION_NAME: XRIF._Support.LiveCamera.FVRPhysicsCamera$$ClosePhysicsCamera
ENTRY_POINT: 03989fac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0398a0d4) */

void XRIF__Support_LiveCamera_FVRPhysicsCamera__ClosePhysicsCamera
               (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03989f90 with catch @ 03989fac
                       catch(type#2 @ 00000000) { ... } // from try @ 03989fa4 with catch @ 03989fac
                        */
    uVar7 = (undefined4)param_2;
    FUN_01b5f2c8(&stack0x00000020);
    uVar2 = FUN_0304a150(in_stack_00000000,in_stack_00000008,0);
    uVar3 = thunk_FUN_025bd1c0(uVar2,*unaff_x26,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_025bd1c0(uVar2,*unaff_x28,0);
      if ((uVar3 & 1) != 0) {
        FUN_01b5f3b4(&stack0x00000020);
        uVar7 = FUN_0304cb98(in_stack_00000000,in_stack_00000008,0);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined4 *)(unaff_x19 + 0x1c) = uVar7;
      }
    }
    else {
      FUN_01b5f3b4(&stack0x00000020);
      uVar6 = FUN_0398a1a8(in_stack_00000000,in_stack_00000008);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined4 *)(unaff_x19 + 0x10) = uVar6;
      *(undefined4 *)(unaff_x19 + 0x14) = uVar7;
      *(undefined4 *)(unaff_x19 + 0x18) = param_3;
    }
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03989f34;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec();
LAB_03989f34:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) break;
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03989f90;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec();
LAB_03989f90:
    (*(code *)*puVar1)();
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    param_2 = in_stack_00000010;
  } while( true );
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0398a090;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec();
LAB_0398a090:
    (*(code *)*puVar1)();
  }
  return;
}


