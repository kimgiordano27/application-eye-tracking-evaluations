/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_notify_close_t$$Invoke
ENTRY_POINT: 062f8e04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x062f914c) */
/* WARNING: Removing unreachable block (ram,0x062f935c) */
/* WARNING: Removing unreachable block (ram,0x062f92b8) */
/* WARNING: Removing unreachable block (ram,0x062f933c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  char cStack0000000000000054;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  FUN_03642964(PTR_DAT_07a30fd8);
  FUN_03642964(PTR_DAT_07a0e930);
  FUN_03642964(PTR_DAT_079fb398);
  *(undefined1 *)(unaff_x20 + 0xed8) = 1;
  puVar1 = PTR_DAT_079f4610;
  in_stack_00000068 = 0;
  in_stack_00000058 = 0;
  cStack0000000000000054 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar6 = FUN_05e30794();
  puVar3 = PTR_DAT_07a30eb0;
  if ((uVar6 & 1) != 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar8 = thunk_FUN_0367fe20();
    uVar11 = thunk_FUN_036aa1c8(PTR_DAT_079fe4f8);
    FUN_05d7e1a0(uVar8,uVar11,0);
    uVar11 = thunk_FUN_036aa1c8(PTR_DAT_07a30fe0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar8,uVar11);
  }
  lVar7 = *(long *)PTR_DAT_07a30eb0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar3;
  }
  cStack0000000000000054 = '\0';
  in_stack_00000058 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  FUN_05e7c56c(in_stack_00000058,&stack0x00000054,0);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar3;
  }
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar6 = FUN_056b0f3c();
  if ((uVar6 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = (**(code **)(*unaff_x19 + 0x3b8))();
    if ((uVar6 & 1) == 0) {
      uVar8 = *(undefined8 *)PTR_DAT_07a01f50;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_05e26f18(uVar8,0);
      uVar6 = (**(code **)(*unaff_x19 + 0x1f8))();
      if ((uVar6 & 1) == 0) {
        uVar8 = (**(code **)(*unaff_x19 + 0x2d8))();
        plVar10 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        in_stack_00000068 =
             FUN_05c981c8(uVar8,*(undefined8 *)PTR_DAT_079fb398,*(undefined8 *)(lVar7 + 0x10),0);
      }
      else {
        uVar8 = (**(code **)(*unaff_x19 + 0x2d8))();
        plVar10 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        in_stack_00000068 =
             FUN_05c981c8(uVar8,*(undefined8 *)PTR_DAT_079fb398,*(undefined8 *)(lVar7 + 0x10),0);
      }
    }
    else {
      uVar8 = (**(code **)(*unaff_x19 + 0x458))();
      lVar7 = FUN_03cc668c(uVar8,*(undefined8 *)PTR_DAT_07a02168);
      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a30fc8);
      FUN_0422a220(lVar9,*(undefined8 *)PTR_DAT_07a30fc0);
      puVar5 = PTR_DAT_07a30fd0;
      puVar4 = PTR_DAT_07a30fb0;
      puVar2 = PTR_DAT_07a0e930;
      puVar1 = PTR_DAT_07a02718;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      while (0 < *(int *)(lVar7 + 0x18)) {
        plVar10 = (long *)FUN_0459ed6c(lVar7,0,*(undefined8 *)puVar2);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar6 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
        if ((uVar6 & 1) != 0) {
          uVar8 = (**(code **)(*plVar10 + 0x458))(plVar10,*(undefined8 *)(*plVar10 + 0x460));
          FUN_0459f24c(lVar7,uVar8,*(undefined8 *)puVar1);
        }
        uVar8 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18(uVar8,uVar8);
        }
        FUN_0422b414(lVar9,uVar8,*(undefined8 *)puVar4);
        FUN_045a0804(lVar7,0,*(undefined8 *)puVar5);
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x2d8))();
      plVar10 = (long *)(**(code **)(*unaff_x19 + 0x2e8))();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      in_stack_00000068 =
           FUN_05c981c8(uVar8,*(undefined8 *)PTR_DAT_079fb398,*(undefined8 *)(lVar7 + 0x10),0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0422ad98(lVar9,*(undefined8 *)PTR_DAT_07a30fb8);
      puVar1 = PTR_DAT_07a30fa0;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000040 = in_stack_00000010;
      while (uVar6 = FUN_05897378(&stack0x00000030,*(undefined8 *)puVar1), lVar7 = in_stack_00000068
            , plVar10 = in_stack_00000040, (uVar6 & 1) != 0) {
        if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar8 = (**(code **)(*in_stack_00000040 + 0x1c8))
                          (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x1d0));
        lVar9 = *plVar10;
        lVar9 = (**(code **)(lVar9 + 0x298))(plVar10,*(undefined8 *)(lVar9 + 0x2a0));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        in_stack_00000068 = FUN_05c9a0b4(lVar7,uVar8,*(undefined8 *)(lVar9 + 0x10),0);
      }
      FUN_05897374(&stack0x00000030,*(undefined8 *)PTR_DAT_07a30f98);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar7 = *(long *)puVar3;
    }
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_056af3d4();
  }
  if (cStack0000000000000054 != '\0') {
    thunk_FUN_036509ac(in_stack_00000058,0);
  }
  return in_stack_00000068;
}


