/*
FUNCTION_NAME: FUN_03487014
ENTRY_POINT: 03487014
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_03487014(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x22;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto 
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>
        ;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02e759c0();

  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>
  :
  lVar4 = (*(code *)*puVar3)();
  if (DAT_06e84e3e == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e84e3e = '\x01';
  }
  puVar1 = PTR_DAT_06a2ef80;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  puVar6 = *(undefined4 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
  UnityEngine_UIElements_TextElement__set_cursorColor(*puVar6,puVar6[1],puVar6[2],lVar4,0);
  plVar10 = *(long **)(unaff_x20 + 0x28);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar4 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_03487204;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02e759c0(plVar10,*unaff_x22,4);
LAB_03487204:
  lVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if (DAT_06e84e3e == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e84e3e = '\x01';
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  puVar6 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  UnityEngine_UIElements_TextElement___cctor(*puVar6,puVar6[1],puVar6[2],lVar4,0);
  plVar10 = *(long **)(unaff_x20 + 0x28);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar4 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_034872a8;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02e759c0(plVar10,*unaff_x22,4);
LAB_034872a8:
  lVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_062efe6c(unaff_x19[6],unaff_x19[7],unaff_x19[8],lVar4,2,0);
  uVar5 = FUN_062695b0();
  puVar1 = PTR_DAT_06a5def0;
  if (*(int *)(*(long *)PTR_DAT_06a5def0 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  _in_stack_00000020 = FUN_05c28928(0x3f000000,0,8,uVar5,0,0);
  thunk_FUN_02ee2be8(&stack0x00000020,0);
  uVar7 = in_stack_00000028;
  plVar10 = in_stack_00000020;
  _in_stack_00000010 = _in_stack_00000020;
  if (DAT_06e86de3 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5def0);
    DAT_06e86de3 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  if (DAT_06e86de4 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5df08);
    DAT_06e86de4 = '\x01';
  }
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034873d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02e759c0(plVar10,*(long *)PTR_DAT_06a5df08,0);
LAB_034873d0:
    iVar2 = (*(code *)*puVar3)(plVar10,uVar7 & 0xffffffff,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
      thunk_FUN_02ee2be8(unaff_x19 + 10,0);
      FUN_034954f0(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  if (DAT_06e86de5 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5df08);
    DAT_06e86de5 = '\x01';
  }
  plVar10 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar4 = *in_stack_00000010;
    uVar8 = in_stack_00000018 & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_034870e8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02e759c0(in_stack_00000010,*(long *)PTR_DAT_06a5df08,2);
LAB_034870e8:
    (*(code *)*puVar3)(plVar10,uVar8,puVar3[1]);
  }
  if (unaff_x20 != 0) {
    FUN_03993028();
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
                    /* try { // try from 03487118 to 0358713f has its CatchHandler @ 034872e8 */
    *unaff_x19 = 0xfffffffe;
    Game_Views_UI_Screens_Menu_MenuPanel__SetActivePublishSceneWidget(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


