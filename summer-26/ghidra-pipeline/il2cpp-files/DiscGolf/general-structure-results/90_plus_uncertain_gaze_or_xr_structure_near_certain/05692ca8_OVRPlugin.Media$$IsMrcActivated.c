/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcActivated
ENTRY_POINT: 05692ca8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_Media__IsMrcActivated(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  long unaff_x21;
  undefined8 unaff_x22;
  ulong uVar12;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  while( true ) {
    uVar5 = thunk_FUN_02dd3144(param_1);
    FUN_04462620(uVar5,unaff_x20,
                 *(undefined8 *)OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
    bVar3 = FUN_0375e048(unaff_x22,uVar5,*unaff_x28);
    if (unaff_x21 == 0) break;
    lVar6 = *(long *)(unaff_x21 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(byte *)(lVar6 + (int)uVar1 + 0x20) = bVar3 & 1;
    }
    else {
      FUN_03f35398(unaff_x21,bVar3 & 1,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x26 = unaff_x26 + 1;
      if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x26) {
        lVar6 = *(long *)(unaff_x19 + 0x140);
        if (lVar6 == 0) goto LAB_05693108;
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar2 = PTR_DAT_069fc3e0;
        lVar6 = *(long *)(unaff_x19 + 0x138);
        if ((lVar6 == 0) || ((int)*(ulong *)(lVar6 + 0x18) < 1)) goto LAB_05692e00;
        uVar12 = 0;
        uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        goto LAB_05692d80;
      }
      unaff_x20 = thunk_FUN_02dd3144(*unaff_x27);
      FUN_0552aca4(unaff_x20,0);
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) goto LAB_0569310c;
      if (unaff_x20 == 0) goto LAB_05693108;
      puVar11 = (undefined8 *)(unaff_x20 + 0x10);
      *puVar11 = *(undefined8 *)(unaff_x24 + unaff_x26 * 8);
      LeanTween__value(puVar11);
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05693108;
      in_stack_000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
      FUN_0638bff4(&stack0x00000090,&stack0x000000c8,*puVar11,0);
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000e0 = in_stack_000000a0;
      uVar12 = FUN_0638b88c(&stack0x000000d0,0);
    } while ((uVar12 & 1) == 0);
    lVar6 = *(long *)(unaff_x19 + 0x128);
    if (lVar6 == 0) break;
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar8 = *(long *)
             OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
    ;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + 0x30) = in_stack_000000e0;
      *(undefined8 *)(lVar9 + 0x28) = in_stack_000000d8;
      *(undefined8 *)(lVar9 + 0x20) = in_stack_000000d0;
      LeanTween__value(lVar9 + 0x28,0);
    }
    else {
      in_stack_00000098 = in_stack_000000d8;
      in_stack_00000090 = in_stack_000000d0;
      in_stack_000000a0 = in_stack_000000e0;
      FUN_03fd1e18(lVar6,&stack0x00000090,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x21 = *(long *)(unaff_x19 + 0x130);
    unaff_x22 = *(undefined8 *)(unaff_x19 + 0x120);
    param_1 = *(undefined8 *)PTR_DAT_06a0e778;
  }
  goto LAB_05693108;
  while( true ) {
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar10 = *(long *)puVar2;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_05693108;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
    }
    else {
      FUN_03fb3e1c(lVar9,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
    uVar12 = uVar12 + 1;
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar12) break;
LAB_05692d80:
    if (uVar7 <= uVar12) {
LAB_0569310c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar9 = *(long *)(unaff_x19 + 0x140);
    uVar4 = FUN_0631e59c(*(undefined8 *)(lVar6 + 0x20 + uVar12 * 8),0);
    if (lVar9 == 0) goto LAB_05693108;
  }
LAB_05692e00:
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x28),0);
  *(undefined4 *)(unaff_x19 + 0x30) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x38),0);
  *(undefined4 *)(unaff_x19 + 0x40) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x48),0);
  *(undefined4 *)(unaff_x19 + 0x50) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x58),0);
  *(undefined4 *)(unaff_x19 + 0x60) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x68),0);
  *(undefined4 *)(unaff_x19 + 0x70) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x78),0);
  *(undefined4 *)(unaff_x19 + 0x80) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x88),0);
  *(undefined4 *)(unaff_x19 + 0x90) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x98),0);
  *(undefined4 *)(unaff_x19 + 0xa0) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xa8),0);
  *(undefined4 *)(unaff_x19 + 0xb0) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xb8),0);
  *(undefined4 *)(unaff_x19 + 0xc0) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 200),0);
  *(undefined4 *)(unaff_x19 + 0xd0) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xd8),0);
  *(undefined4 *)(unaff_x19 + 0xe0) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xe8),0);
  *(undefined4 *)(unaff_x19 + 0xf0) = uVar4;
  uVar4 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x100),0);
  puVar2 = PTR_DAT_069fb990;
  *(undefined4 *)(unaff_x19 + 0x108) = uVar4;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar12 = FUN_0634eb94(uVar5,0,0);
  if ((uVar12 & 1) == 0) {
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
    uVar4 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0)
    ;
    *(undefined4 *)(unaff_x19 + 0x170) = uVar4;
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
      uVar4 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IPanel>_TypeInfo,0);
      *(undefined4 *)(unaff_x19 + 0x198) = uVar4;
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
        uVar4 = FUN_0631e59c(*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
        *(undefined4 *)(unaff_x19 + 0x1c0) = uVar4;
        return;
      }
    }
  }
LAB_05693108:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


