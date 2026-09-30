/*
FUNCTION_NAME: Unity.VisualScripting.VariableDeclarationsCloner$$FillClone
ENTRY_POINT: 0644bb08
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_VariableDeclarationsCloner__FillClone(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long lVar7;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x7e8));
  FUN_02f07e70(System_Func<float,_object>_TypeInfo);
  FUN_02f07e70(System_Func<float,_float>_TypeInfo);
  FUN_02f07e70(System_Func<SocketPose,_bool>_TypeInfo);
  FUN_02f07e70(System_Func<SocketPose,_int>_TypeInfo);
  FUN_02f07e70(System_Func<object,_bool>_TypeInfo);
  FUN_02f07e70(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x9ba) = 1;
  in_stack_00000058 = 0;
  *(undefined8 *)(unaff_x23 + 0x38) = 0;
  *(undefined8 *)(unaff_x23 + 0x30) = 0;
  *(undefined8 *)(unaff_x23 + 0x48) = 0;
  *(undefined8 *)(unaff_x23 + 0x40) = 0;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  *(undefined8 *)(unaff_x23 + 0x10) = 0;
  *(undefined8 *)(unaff_x23 + 0x28) = 0;
  *(undefined8 *)(unaff_x23 + 0x20) = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  *(undefined4 *)(unaff_x19 + 0x30) = 3;
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  uVar4 = *unaff_x21;
  *(undefined8 *)(unaff_x23 + 0x5c) = 0x3d4ccccd00000014;
  puVar3 = System_Func<Stream,_Task>_TypeInfo;
  in_stack_000000e8 = FUN_0644a474(uVar4);
  thunk_FUN_02f411dc(&stack0x000000e8);
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_000000e8;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_000000e0;
  *(undefined8 *)(unaff_x19 + 0x38) = in_stack_000000d8;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x48),0);
  lVar5 = thunk_FUN_02ef1808(*unaff_x25);
  FUN_0417b00c(lVar5,*unaff_x20);
  lVar6 = *unaff_x22;
  *(undefined8 *)(unaff_x23 + 0x38) = 0;
  *(undefined8 *)(unaff_x23 + 0x30) = 0;
  *(undefined8 *)(unaff_x23 + 0x48) = 0;
  *(undefined8 *)(unaff_x23 + 0x40) = 0;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  *(undefined8 *)(unaff_x23 + 0x10) = 0;
  *(undefined8 *)(unaff_x23 + 0x28) = 0;
  *(undefined8 *)(unaff_x23 + 0x20) = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar6 = *unaff_x22;
  }
  in_stack_00000088 = (*(undefined8 **)(lVar6 + 0xb8))[1];
  in_stack_00000080 = **(undefined8 **)(lVar6 + 0xb8);
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000070 = FUN_0644a474(*unaff_x21);
  thunk_FUN_02f411dc(&stack0x00000070,in_stack_00000070);
  lVar7 = *(long *)puVar3;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = in_stack_00000068 & 0xffffffff00000000;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02eea7c4(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = System_Func<object,_bool>_TypeInfo;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768();
  }
  in_stack_00000058 = **(undefined8 **)(lVar6 + 0xb8);
  thunk_FUN_02f411dc(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_02f411dc(&stack0x00000078,0);
  *(ulong *)(unaff_x23 + 0x18) = in_stack_00000068;
  *(undefined8 *)(unaff_x23 + 0x10) = in_stack_00000060;
  *(undefined8 *)(unaff_x23 + 0x28) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x20) = in_stack_00000070;
  thunk_FUN_02f411dc(&stack0x000000a0,0);
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000070 = FUN_0644a474(*(undefined8 *)puVar2);
  thunk_FUN_02f411dc(&stack0x00000070,in_stack_00000070);
  lVar7 = *(long *)puVar3;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = CONCAT44(in_stack_00000068._4_4_,1);
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02eea7c4(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768();
  }
  in_stack_00000058 = **(undefined8 **)(lVar6 + 0xb8);
  thunk_FUN_02f411dc(&stack0x00000058);
  in_stack_00000078 = in_stack_00000058;
  thunk_FUN_02f411dc(&stack0x00000078,0);
  *(ulong *)(unaff_x23 + 0x38) = in_stack_00000068;
  *(undefined8 *)(unaff_x23 + 0x30) = in_stack_00000060;
  *(undefined8 *)(unaff_x23 + 0x48) = in_stack_00000078;
  *(undefined8 *)(unaff_x23 + 0x40) = in_stack_00000070;
  thunk_FUN_02f411dc(&stack0x000000c0,0);
  memcpy(&stack0x00000008,&stack0x00000080,0x50);
  if (lVar5 != 0) {
    lVar7 = *(long *)System_Func<string,_CallSite<Func<CallSite,_object,_object>>>_TypeInfo;
    memcpy(&stack0x000000f0,&stack0x00000008,0x50);
    lVar6 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar2 = System_Func<SocketPose,_int>_TypeInfo;
    puVar3 = System_Func<float,_float>_TypeInfo;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x50;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar6 + 0x20),&stack0x000000f0,0x50);
        thunk_FUN_02f411dc(lVar6 + 0x40,0);
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000140,&stack0x000000f0,0x50);
        FUN_0417b950(lVar5,&stack0x00000140,uVar4);
      }
      *(long *)(unaff_x19 + 0x50) = lVar5;
      thunk_FUN_02f411dc((long *)(unaff_x19 + 0x50),lVar5);
      uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_04082338(uVar4,*(undefined8 *)puVar3);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x58),uVar4);
      FUN_066f6380();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


