/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 05c78eac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (param_1 == 0) {
    FUN_02d9a33c();
    param_1 = *(long *)(unaff_x21 + 0x38);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  in_stack_00000058 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_02dd37b4(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x23 + 0x38) = in_stack_00000068;
  *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000060;
  *(undefined8 *)(unaff_x23 + 0x48) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x40) = in_stack_00000070;
  thunk_FUN_02dd37b4(&stack0x000000c0,0);
  memcpy(&stack0x00000008,&stack0x00000080,0x50);
  if (unaff_x20 != 0) {
    memcpy(&stack0x000000f0,&stack0x00000008,0x50);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar3 = Method_System_Collections_Generic_List<ICanvasElement>_Add__;
    puVar2 = Method_System_Collections_Generic_List<IBinding>_GetEnumerator__;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x50;
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar4 + 0x20),&stack0x000000f0,0x50);
        thunk_FUN_02dd37b4(lVar4 + 0x40,0);
      }
      else {
        memcpy(&stack0x00000140,&stack0x000000f0,0x50);
        FUN_03c2a6c4();
      }
      *(long *)(unaff_x19 + 0x50) = unaff_x20;
      thunk_FUN_02dd37b4();
      uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_03b33514(uVar5,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
      thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x58),uVar5);
      FUN_06084660();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


