/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 071e3bfc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_w8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long lVar5;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
    param_3 = *unaff_x22;
    uVar6 = 0;
    uVar7 = 0;
  }
  in_stack_00000088 = (*(undefined8 **)(param_3 + 0xb8))[1];
  in_stack_00000080 = **(undefined8 **)(param_3 + 0xb8);
  in_stack_00000060 = uVar6;
  in_stack_00000068 = uVar7;
  in_stack_00000070 = uVar6;
  in_stack_00000078 = uVar7;
  in_stack_00000070 = FUN_071e2454(*unaff_x21);
  thunk_FUN_037aeb94(&stack0x00000070,in_stack_00000070);
  lVar5 = *unaff_x24;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = in_stack_00000068 & 0xffffffff00000000;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_037756d4(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar2 = System_Func<Color,_Color,_bool>_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  in_stack_00000058 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_037aeb94(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_037aeb94(&stack0x00000078,0);
  *(ulong *)(unaff_x23 + 0x18) = in_stack_00000068;
  *(undefined8 *)(unaff_x23 + 0x10) = in_stack_00000060;
  *(ulong *)(unaff_x23 + 0x28) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x20) = in_stack_00000070;
  thunk_FUN_037aeb94(&stack0x000000a0,0);
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000070 = FUN_071e2454(*(undefined8 *)puVar2);
  thunk_FUN_037aeb94(&stack0x00000070,in_stack_00000070);
  lVar5 = *unaff_x24;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = CONCAT44(in_stack_00000068._4_4_,1);
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_037756d4(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  in_stack_00000058 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_037aeb94(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_037aeb94(&stack0x00000078,0);
  *(ulong *)(unaff_x23 + 0x38) = in_stack_00000068;
  *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000060;
  *(ulong *)(unaff_x23 + 0x48) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x40) = in_stack_00000070;
  thunk_FUN_037aeb94(&stack0x000000c0,0);
  memcpy(&stack0x00000008,&stack0x00000080,0x50);
  if (unaff_x20 != 0) {
    memcpy(&stack0x000000f0,&stack0x00000008,0x50);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar3 = System_Func<int,_IntPtr,_bool>_TypeInfo;
    puVar2 = System_Func<int,_int,_bool>_TypeInfo;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x50;
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar4 + 0x20),&stack0x000000f0,0x50);
        thunk_FUN_037aeb94(lVar4 + 0x40,0);
      }
      else {
        memcpy(&stack0x00000140,&stack0x000000f0,0x50);
        FUN_04ba00f8();
      }
      *(long *)(unaff_x19 + 0x50) = unaff_x20;
      thunk_FUN_037aeb94();
      uVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
      FUN_04a7d54c(uVar6,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
      thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x58),uVar6);
      FUN_075c6420();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


