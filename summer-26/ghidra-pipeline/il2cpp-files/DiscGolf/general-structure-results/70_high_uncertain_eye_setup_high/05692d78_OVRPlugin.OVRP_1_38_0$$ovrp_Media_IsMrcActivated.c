/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcActivated
ENTRY_POINT: 05692d78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcActivated(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *plVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  plVar9 = *(long **)(unaff_x23 + 0x3e0);
  do {
    if ((param_1 & 0xffffffff) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar7 = *(long *)(unaff_x19 + 0x140);
    uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x21 + 0x20 + unaff_x22 * 8),0);
    if (lVar7 == 0) goto LAB_05693108;
    lVar5 = *(long *)(lVar7 + 0x10);
    lVar6 = *plVar9;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_05693108;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
    }
    else {
      FUN_03fb3e1c(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = (ulong)*(uint *)(unaff_x21 + 0x18);
    unaff_x22 = unaff_x22 + 1;
  } while ((long)unaff_x22 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x28),0);
  *(undefined4 *)(unaff_x19 + 0x30) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x38),0);
  *(undefined4 *)(unaff_x19 + 0x40) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x48),0);
  *(undefined4 *)(unaff_x19 + 0x50) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x58),0);
  *(undefined4 *)(unaff_x19 + 0x60) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x68),0);
  *(undefined4 *)(unaff_x19 + 0x70) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x78),0);
  *(undefined4 *)(unaff_x19 + 0x80) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x88),0);
  *(undefined4 *)(unaff_x19 + 0x90) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x98),0);
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xa8),0);
  *(undefined4 *)(unaff_x19 + 0xb0) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xb8),0);
  *(undefined4 *)(unaff_x19 + 0xc0) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 200),0);
  *(undefined4 *)(unaff_x19 + 0xd0) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xd8),0);
  *(undefined4 *)(unaff_x19 + 0xe0) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xe8),0);
  *(undefined4 *)(unaff_x19 + 0xf0) = uVar3;
  uVar3 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x100),0);
  puVar2 = PTR_DAT_069fb990;
  *(undefined4 *)(unaff_x19 + 0x108) = uVar3;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_0634eb94(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    in_stack_000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
    FUN_0638bff4(&stack0x000000b0,&stack0x000000c8,
                 *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo,0);
    puVar2 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
    in_stack_00000058 = in_stack_000000b8;
    in_stack_00000050 = in_stack_000000b0;
    in_stack_00000060 = in_stack_000000c0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    FUN_043316c8(&stack0x00000090,&stack0x00000050,
                 *(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000098;
    *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 0x160) = in_stack_000000a0;
    LeanTween__value(unaff_x19 + 0x160,0);
    uVar3 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0)
    ;
    *(undefined4 *)(unaff_x19 + 0x170) = uVar3;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      in_stack_000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
      FUN_0638bff4(&stack0x00000078,&stack0x000000c8,
                   *(undefined8 *)System_Collections_Generic_List<IPAddress>_TypeInfo,0);
      in_stack_00000018 = in_stack_00000080;
      in_stack_00000010 = in_stack_00000078;
      in_stack_00000020 = in_stack_00000088;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      FUN_043316c8(&stack0x00000050,&stack0x00000010,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000050;
      *(undefined8 *)(unaff_x19 + 400) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000060;
      LeanTween__value(unaff_x19 + 0x188,0);
      uVar3 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IPanel>_TypeInfo,0);
      *(undefined4 *)(unaff_x19 + 0x198) = uVar3;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        in_stack_000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
        FUN_0638bff4(&stack0x00000038,&stack0x000000c8,
                     *(undefined8 *)System_Collections_Generic_List<IOvrGpuSkinner>_TypeInfo,0);
        in_stack_000000f8 = in_stack_00000040;
        in_stack_000000f0 = in_stack_00000038;
        in_stack_00000100 = in_stack_00000048;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = 0;
        FUN_043316c8(&stack0x00000010,&stack0x000000f0,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_00000018;
        *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000010;
        *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000028;
        *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000020;
        LeanTween__value(unaff_x19 + 0x1b0,0);
        uVar3 = FUN_0631e59c(*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
        *(undefined4 *)(unaff_x19 + 0x1c0) = uVar3;
        return;
      }
    }
  }
LAB_05693108:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


