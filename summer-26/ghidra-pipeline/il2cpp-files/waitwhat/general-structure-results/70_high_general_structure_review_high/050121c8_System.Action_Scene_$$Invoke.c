/*
FUNCTION_NAME: System.Action<Scene>$$Invoke
ENTRY_POINT: 050121c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void System_Action<Scene>__Invoke(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  long *plVar10;
  long unaff_x24;
  long unaff_x29;
  
  puVar2 = (undefined4 *)thunk_FUN_031e5890();
  lVar7 = *(long *)(unaff_x29 + -0x20);
  *puVar2 = 0xffffffff;
  piVar3 = (int *)thunk_FUN_031e5890(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(**(long **)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x80) +
                                     0x60);
  if (*piVar3 < 1) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             thunk_FUN_031e5890(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_05012600;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4(lVar7);
    }
    lVar8 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_05012294;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar10,lVar7,0);
LAB_05012294:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x18);
    lVar7 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80);
    FUN_03188a98(lVar7 + 0xe0,8);
    puVar4 = (undefined8 *)thunk_FUN_031e5890(uVar1,lVar7 + 0xe0);
    *puVar4 = uVar5;
    uVar1 = *(undefined8 *)(unaff_x29 + -0x18);
    uVar5 = *(undefined8 *)
             (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80);
    FUN_03188a98(uVar5,4);
    puVar2 = (undefined4 *)thunk_FUN_031e5890(uVar1,uVar5);
    *puVar2 = 0xfffffffd;
    puVar4 = (undefined8 *)
             thunk_FUN_031e5890(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar10 = (long *)*puVar4;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_05012600;
    }
    lVar7 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_070c7c80) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_05012380;
        }
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_070c7c80,0);
LAB_05012380:
    uVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x18));
      uVar1 = *(undefined8 *)(unaff_x29 + -0x18);
      lVar7 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80);
      FUN_03188a98(lVar7 + 0xe0,8);
      puVar6 = (undefined8 *)thunk_FUN_031e5890(uVar1,lVar7 + 0xe0);
      puVar4 = (undefined8 *)0x0;
      *puVar6 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               thunk_FUN_031e5890(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar10 = (long *)*puVar4;
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_05012600;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
      }
      lVar8 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar3 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar3 * 0x10 + 0x138;
            goto System_Action<SerializedCommand>__Invoke;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_031c0d08(plVar10,lVar7,0);
System_Action<SerializedCommand>__Invoke:
      lVar7 = *(long *)(lVar7 + 8);
      *(void **)(unaff_x29 + -0x10) = unaff_x21;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar10,unaff_x29 + -0x10);
      memcpy(unaff_x20,unaff_x21,unaff_x19);
      FUN_03188aa0(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      uVar1 = *(undefined8 *)(unaff_x29 + -0x18);
      uVar5 = *(undefined8 *)
               (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80);
      FUN_03188a98(uVar5,4);
      puVar2 = (undefined4 *)thunk_FUN_031e5890(uVar1,uVar5);
      puVar4 = (undefined8 *)0x1;
      *puVar2 = 1;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05012600:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


