/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 05692ec4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
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
  
  *(undefined4 *)(unaff_x19 + 0xc0) = param_2;
  uVar2 = FUN_0631e59c(param_1,0);
  *(undefined4 *)(unaff_x19 + 0xd0) = uVar2;
  uVar2 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xd8),0);
  *(undefined4 *)(unaff_x19 + 0xe0) = uVar2;
  uVar2 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xe8),0);
  *(undefined4 *)(unaff_x19 + 0xf0) = uVar2;
  uVar2 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x100),0);
  puVar1 = PTR_DAT_069fb990;
  *(undefined4 *)(unaff_x19 + 0x108) = uVar2;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_0634eb94(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    in_stack_000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
    FUN_0638bff4(&stack0x000000b0,&stack0x000000c8,
                 *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo,0);
    puVar1 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
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
    uVar2 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0)
    ;
    *(undefined4 *)(unaff_x19 + 0x170) = uVar2;
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
      FUN_043316c8(&stack0x00000050,&stack0x00000010,*(undefined8 *)puVar1);
      *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000050;
      *(undefined8 *)(unaff_x19 + 400) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000060;
      LeanTween__value(unaff_x19 + 0x188,0);
      uVar2 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IPanel>_TypeInfo,0);
      *(undefined4 *)(unaff_x19 + 0x198) = uVar2;
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
        FUN_043316c8(&stack0x00000010,&stack0x000000f0,*(undefined8 *)puVar1);
        *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_00000018;
        *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000010;
        *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000028;
        *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000020;
        LeanTween__value(unaff_x19 + 0x1b0,0);
        uVar2 = FUN_0631e59c(*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
        *(undefined4 *)(unaff_x19 + 0x1c0) = uVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


