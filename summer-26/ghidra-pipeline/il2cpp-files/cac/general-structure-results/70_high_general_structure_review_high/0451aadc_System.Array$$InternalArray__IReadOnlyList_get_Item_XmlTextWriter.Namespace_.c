/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<XmlTextWriter.Namespace>
ENTRY_POINT: 0451aadc
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0451adc4) */

void System_Array__InternalArray__IReadOnlyList_get_Item<XmlTextWriter_Namespace>(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f4e590(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6,0);
    }
    if (*(uint *)(unaff_x22 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    unaff_x22[8] = lVar4;
    thunk_FUN_03f86000(unaff_x22 + 8,lVar4);
    uVar6 = FUN_07328074(*unaff_x27,unaff_x22,0);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_08791f2c(uVar6);
LAB_0451a8e8:
    while( true ) {
      uVar1 = FUN_072070ec(&stack0x00000020,
                           *(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x30));
      lVar4 = in_stack_00000030;
      if ((uVar1 & 1) == 0) {
        FUN_072070e8(&stack0x00000020,*(undefined8 *)(*(long *)(in_stack_00000038 + 0x38) + 0x38));
        return;
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar1 = FUN_087fdf64(lVar4,0,0);
      if ((uVar1 & 1) == 0) break;
      lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f4b260(lVar5);
      }
      lVar5 = thunk_FUN_03f4e590(lVar4,lVar5);
      if (lVar5 == 0) break;
      FUN_04fc8b0c();
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar1 = FUN_087fdf64();
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)FUN_03f13470(*unaff_x25,4);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f4e590(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar6,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      plVar2[4] = lVar4;
      thunk_FUN_03f86000(plVar2 + 4,lVar4);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0x58);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      plVar7 = (long *)FUN_074c4a14(uVar6,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_03f4e590(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar6,0);
      }
      if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      plVar2[5] = lVar5;
      thunk_FUN_03f86000(plVar2 + 5,lVar5);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f4e590(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      plVar2[6] = lVar4;
      thunk_FUN_03f86000(plVar2 + 6,lVar4);
      plVar7 = (long *)FUN_074c4a14(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0x60),
                                    0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f4e590(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar6,0);
      }
      if ((*(uint *)(plVar2 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      plVar2[7] = lVar4;
      thunk_FUN_03f86000(plVar2 + 7,lVar4);
      uVar6 = FUN_07328074(*unaff_x29,plVar2,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      FUN_08791e24(uVar6,0);
      goto LAB_0451a8e8;
    }
    unaff_x22 = (long *)FUN_03f13470(*unaff_x25,5);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f4e590(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6,0);
    }
    if ((int)unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    unaff_x22[4] = lVar4;
    thunk_FUN_03f86000(unaff_x22 + 4,lVar4);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0x58);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    plVar2 = (long *)FUN_074c4a14(uVar6,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar5 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_03f4e590(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6,0);
    }
    if ((*(uint *)(unaff_x22 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    unaff_x22[5] = lVar5;
    thunk_FUN_03f86000(unaff_x22 + 5,lVar5);
    if ((unaff_x19 != 0) && (lVar5 = thunk_FUN_03f4e590(), lVar5 == 0)) {
      uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6,0);
    }
    if (*(uint *)(unaff_x22 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    unaff_x22[6] = unaff_x19;
    thunk_FUN_03f86000();
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f4e590(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_03f5c134();
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6,0);
    }
    if ((*(uint *)(unaff_x22 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    unaff_x22[7] = lVar4;
    thunk_FUN_03f86000(unaff_x22 + 7,lVar4);
    param_1 = (long *)FUN_074c4a14(*(undefined8 *)
                                    (*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0x60),0
                                  );
  } while( true );
}


