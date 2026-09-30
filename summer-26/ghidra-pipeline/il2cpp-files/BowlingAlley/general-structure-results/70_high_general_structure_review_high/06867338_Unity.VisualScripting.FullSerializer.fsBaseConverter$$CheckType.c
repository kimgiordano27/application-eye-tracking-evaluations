/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$CheckType
ENTRY_POINT: 06867338
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined4 Unity_VisualScripting_FullSerializer_fsBaseConverter__CheckType(long param_1)

{
  void *__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined1 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long lStack0000000000000118;
  
  lStack0000000000000118 = param_1;
  if ((DAT_076e0f95 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<TeleportationProvider,_List<IXRInteractor>>_get_Key__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                      );
    DAT_076e0f95 = 1;
  }
  in_stack_000000c8 = (undefined1 *)&stack0x00000118;
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
LAB_0686746c:
    uVar7 = FUN_0533d278(param_1 + 0x60,
                         *(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
                        );
    if ((uVar7 & 1) == 0) {
      FUN_06867674();
      uVar8 = 0;
      *(undefined8 *)(lStack0000000000000118 + 0xa8) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0xa0) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0xb8) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0xb0) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x88) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x80) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x98) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x90) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x68) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x60) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x78) = 0;
      *(undefined8 *)(lStack0000000000000118 + 0x70) = 0;
    }
    else {
      in_stack_00000108 = *(undefined8 *)(lStack0000000000000118 + 0x78);
      in_stack_00000100 = *(undefined8 *)(lStack0000000000000118 + 0x70);
      in_stack_00000070 = *(undefined8 *)(lStack0000000000000118 + 0x80);
      in_stack_00000080 = *(undefined8 *)(lStack0000000000000118 + 0x90);
      uVar2 = *(undefined8 *)(lStack0000000000000118 + 0x98);
      uVar9 = *(undefined8 *)(lStack0000000000000118 + 0xa0);
      uVar5 = *(uint *)(lStack0000000000000118 + 0xa8);
      uVar1 = *(undefined8 *)(lStack0000000000000118 + 0xb0);
      uVar3 = *(undefined8 *)(lStack0000000000000118 + 0xb8);
      in_stack_00000088 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      in_stack_00000078 = (ulong)*(uint *)(lStack0000000000000118 + 0x88);
      thunk_FUN_0333a630(&stack0x00000080);
      in_stack_00000088 = uVar2;
      thunk_FUN_0333a630(&stack0x00000088,0);
      in_stack_000000f8 = in_stack_00000088;
      in_stack_000000e8 = in_stack_00000078;
      in_stack_000000d8 = in_stack_00000068;
      in_stack_000000d0 = in_stack_00000060;
      in_stack_00000088 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      in_stack_00000078 = (ulong)uVar5;
      in_stack_000000e0 = in_stack_00000070;
      in_stack_000000f0 = in_stack_00000080;
      in_stack_00000070 = uVar9;
      in_stack_00000080 = uVar1;
      thunk_FUN_0333a630(&stack0x00000080,uVar1);
      in_stack_00000088 = uVar3;
      thunk_FUN_0333a630(&stack0x00000088,0);
      in_stack_00000008 = in_stack_00000068;
      in_stack_00000000 = in_stack_00000060;
      in_stack_00000018 = in_stack_00000078;
      in_stack_00000010 = in_stack_00000070;
      in_stack_00000028 = in_stack_00000088;
      in_stack_00000020 = in_stack_00000080;
      *(ulong *)(lStack0000000000000118 + 0xd8) = in_stack_00000078;
      *(undefined8 *)(lStack0000000000000118 + 0xd0) = in_stack_00000070;
      *(undefined8 *)(lStack0000000000000118 + 0xe8) = in_stack_00000088;
      *(undefined8 *)(lStack0000000000000118 + 0xe0) = in_stack_00000080;
      *(undefined8 *)(lStack0000000000000118 + 200) = in_stack_00000068;
      *(undefined8 *)(lStack0000000000000118 + 0xc0) = in_stack_00000060;
      thunk_FUN_0333a630(lStack0000000000000118 + 0xe0,0);
      in_stack_00000068 = in_stack_00000108;
      in_stack_00000060 = in_stack_00000100;
      *(undefined8 *)(lStack0000000000000118 + 200) = in_stack_00000108;
      *(undefined8 *)(lStack0000000000000118 + 0xc0) = in_stack_00000100;
      in_stack_000000d8 = in_stack_00000108;
      in_stack_000000d0 = in_stack_00000100;
      *(undefined8 *)(lStack0000000000000118 + 0x40) = in_stack_000000f8;
      *(undefined8 *)(lStack0000000000000118 + 0x38) = in_stack_000000f0;
      *(ulong *)(lStack0000000000000118 + 0x30) = in_stack_000000e8;
      *(undefined8 *)(lStack0000000000000118 + 0x28) = in_stack_000000e0;
      *(undefined8 *)(lStack0000000000000118 + 0x20) = in_stack_00000108;
      *(undefined8 *)(lStack0000000000000118 + 0x18) = in_stack_00000100;
      thunk_FUN_0333a630(lStack0000000000000118 + 0x38,0);
      uVar8 = 1;
      *(undefined4 *)(lStack0000000000000118 + 0x10) = 1;
    }
  }
  else {
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0xe0);
      thunk_FUN_0333a630(param_1 + 0x38,0);
      *(undefined4 *)(lStack0000000000000118 + 0x10) = 2;
      return 1;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x50);
      if (lVar6 != 0) {
        FUN_0438fe24(lVar6,*(undefined8 *)
                            Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                    );
        memcpy(&stack0x00000060,&stack0x00000000,0x60);
        __dest = (void *)(lStack0000000000000118 + 0x60);
        memcpy(__dest,&stack0x00000060,0x60);
        thunk_FUN_0333a630(__dest,0);
        *(undefined4 *)(lStack0000000000000118 + 0x10) = 0xfffffffd;
        param_1 = lStack0000000000000118;
        goto LAB_0686746c;
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}


