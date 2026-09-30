/*
FUNCTION_NAME: Tooltip.<CloseTimer>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 05da42e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05da43a0) */

void Tooltip_<CloseTimer>d__15__System_IDisposable_Dispose(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *in_stack_00000028;
  
  do {
    FUN_05d9cd24();
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *in_stack_00000028;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05da4228;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000028,*unaff_x25,0);
LAB_05da4228:
    uVar4 = (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_031c3cac(in_stack_00000028,*unaff_x24);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_05da4344;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *in_stack_00000028;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_05da4290;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000028,*unaff_x25,1);
LAB_05da4290:
    plVar2 = (long *)(*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
    thunk_FUN_031c3ef0();
    FUN_05d9cd24();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_05da4360;
    }
  }
LAB_05da4344:
  puVar1 = (undefined8 *)FUN_031c0d08(plVar2,*unaff_x24,0);
LAB_05da4360:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
}


