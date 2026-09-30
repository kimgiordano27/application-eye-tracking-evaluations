/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsIEnumerableConverter$$CanProcess
ENTRY_POINT: 05c6c3c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsIEnumerableConverter__CanProcess(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  long *unaff_x20;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_02dd37b4();
  *(undefined1 *)((long)unaff_x19 + 0x11) = 0;
  puVar7 = Method_System_Collections_Generic_List<double>_get_Count__;
  puVar6 = Method_System_Collections_Generic_List<Collider>_GetEnumerator__;
  puVar5 = Method_System_Collections_Generic_List<Collider>_ForEach__;
  puVar4 = Method_System_Collections_Generic_List<Character>_Add__;
  puVar3 = Method_System_Collections_Generic_List<Character>__ctor__;
  puVar2 = PTR_DAT_0675e1b8;
  if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03aaceb0(&stack0x00000008,*unaff_x19,
               *(undefined8 *)Method_System_Collections_Generic_List<Collider>_RemoveAt__);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while( true ) {
    do {
      uVar9 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar6);
      uVar8 = in_stack_00000030;
      if ((uVar9 & 1) == 0) {
        FUN_04a7a49c(&stack0x00000020,*(undefined8 *)puVar5);
        *(undefined1 *)(unaff_x19 + 2) = 0;
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_0606a004(uVar8,0,0);
    } while ((uVar9 & 1) == 0);
    lVar13 = *unaff_x20;
    if (lVar13 == 0) break;
    uVar10 = thunk_FUN_02d9d438(uVar8,*(undefined8 *)puVar3);
    lVar11 = *(long *)(lVar13 + 0x10);
    lVar12 = *(long *)puVar7;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(lVar13 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar13,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = thunk_FUN_02d9d438(uVar8,*(undefined8 *)puVar4);
    if (lVar13 != 0) {
      *(undefined1 *)((long)unaff_x19 + 0x11) = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


