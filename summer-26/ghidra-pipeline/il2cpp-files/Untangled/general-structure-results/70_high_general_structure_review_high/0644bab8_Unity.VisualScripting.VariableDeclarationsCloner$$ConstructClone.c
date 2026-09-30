/*
FUNCTION_NAME: Unity.VisualScripting.VariableDeclarationsCloner$$ConstructClone
ENTRY_POINT: 0644bab8
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_VariableDeclarationsCloner__ConstructClone(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined8 in_stack_000000e8;
  
  puVar5 = System_Func<SpriteGlyph,_uint>_TypeInfo;
  puVar4 = System_Func<SocketPose,_bool>_TypeInfo;
  puVar3 = System_Func<float,_object>_TypeInfo;
  puVar2 = System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo;
  if ((DAT_071cd9ba & 1) == 0) {
    FUN_02f07e70(System_Func<Stream,_Task>_TypeInfo);
    FUN_02f07e70(System_Func<SpriteGlyph,_uint>_TypeInfo);
    FUN_02f07e70(System_Func<string,_CallSite<Func<CallSite,_object,_object>>>_TypeInfo);
    FUN_02f07e70(System_Func<float,_object>_TypeInfo);
    FUN_02f07e70(System_Func<float,_float>_TypeInfo);
    FUN_02f07e70(System_Func<SocketPose,_bool>_TypeInfo);
    FUN_02f07e70(System_Func<SocketPose,_int>_TypeInfo);
    FUN_02f07e70(System_Func<object,_bool>_TypeInfo);
    FUN_02f07e70(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
    DAT_071cd9ba = 1;
  }
  in_stack_00000058 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x30) = 3;
  puVar6 = System_Func<Stream,_Task>_TypeInfo;
  in_stack_000000d8 = 0;
  uStack00000000000000e4 = 0;
  uStack00000000000000dc = 0x14;
  in_stack_000000e0 = 0x3d4ccccd;
  in_stack_000000e8 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&stack0x000000e8);
  *(undefined8 *)(param_1 + 0x48) = in_stack_000000e8;
  *(ulong *)(param_1 + 0x40) = CONCAT44(uStack00000000000000e4,in_stack_000000e0);
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack00000000000000dc,in_stack_000000d8);
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x48),0);
  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_0417b00c(lVar7,*(undefined8 *)puVar3);
  lVar8 = *(long *)puVar5;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar5;
  }
  in_stack_00000088 = (*(undefined8 **)(lVar8 + 0xb8))[1];
  in_stack_00000080 = **(undefined8 **)(lVar8 + 0xb8);
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000070 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&stack0x00000070,in_stack_00000070);
  lVar10 = *(long *)puVar6;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = in_stack_00000068 & 0xffffffff00000000;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_02eea7c4(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = System_Func<object,_bool>_TypeInfo;
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  in_stack_00000058 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_02f411dc(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_02f411dc(&stack0x00000078,0);
  in_stack_00000098 = in_stack_00000068;
  in_stack_00000090 = in_stack_00000060;
  in_stack_000000a8 = in_stack_00000078;
  in_stack_000000a0 = in_stack_00000070;
  thunk_FUN_02f411dc(&stack0x000000a0,0);
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000070 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&stack0x00000070,in_stack_00000070);
  lVar10 = *(long *)puVar6;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = CONCAT44(in_stack_00000068._4_4_,1);
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_02eea7c4(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02eea768();
  }
  in_stack_00000058 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_02f411dc(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_02f411dc(&stack0x00000078,0);
  in_stack_000000b8 = in_stack_00000068;
  in_stack_000000b0 = in_stack_00000060;
  in_stack_000000c8 = in_stack_00000078;
  in_stack_000000c0 = in_stack_00000070;
  thunk_FUN_02f411dc(&stack0x000000c0,0);
  memcpy(&stack0x00000008,&stack0x00000080,0x50);
  if (lVar7 != 0) {
    lVar10 = *(long *)System_Func<string,_CallSite<Func<CallSite,_object,_object>>>_TypeInfo;
    memcpy(&stack0x000000f0,&stack0x00000008,0x50);
    lVar8 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = System_Func<SocketPose,_int>_TypeInfo;
    puVar2 = System_Func<float,_float>_TypeInfo;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x50;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar8 + 0x20),&stack0x000000f0,0x50);
        thunk_FUN_02f411dc(lVar8 + 0x40,0);
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000140,&stack0x000000f0,0x50);
        FUN_0417b950(lVar7,&stack0x00000140,uVar9);
      }
      *(long *)(param_1 + 0x50) = lVar7;
      thunk_FUN_02f411dc((long *)(param_1 + 0x50),lVar7);
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_04082338(uVar9,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x58) = uVar9;
      thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x58),uVar9);
      FUN_066f6380(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


