/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler$$OnLobbyChanged
ENTRY_POINT: 05f6f990
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Multiplayer_SessionHandler__OnLobbyChanged(undefined1 param_1 [16])

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  ulong unaff_x21;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined4 uStack0000000000000040;
  ulong uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  ulong uStack0000000000000060;
  undefined1 *puStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  puVar4 = Method_System_Tuple<Vector3,_float>_get_Item2__;
  puVar2 = Method_System_Tuple<Vector3,_float>__ctor__;
  puVar3 = Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
  puStack0000000000000058 = param_1._8_8_;
  uStack0000000000000050 = param_1._0_8_;
  uStack0000000000000070 = 0;
  uStack0000000000000030 = 0;
  puStack0000000000000038 = (undefined1 *)0x0;
  _uStack0000000000000040 = 0;
  uStack0000000000000060 = uStack0000000000000050;
  puStack0000000000000068 = puStack0000000000000058;
  if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_05f6fc00;
  FUN_04e93a24(&stack0x00000008,*(long *)(unaff_x19 + 0x98),
               *(undefined8 *)Method_System_Tuple<string,_string>_get_Item1__);
  uStack0000000000000070 = in_stack_00000028;
  puStack0000000000000058 = in_stack_00000010;
  uStack0000000000000050 = in_stack_00000008;
  puStack0000000000000068 = in_stack_00000020;
  uStack0000000000000060 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = (undefined1 *)&stack0x00000050;
  while (uVar7 = FUN_05232904(&stack0x00000050,*(undefined8 *)puVar4),
        puVar5 = puStack0000000000000068, (uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc43e7 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06dc43e7 = '\x01';
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar6 = FUN_05f72e0c(puVar5,*(undefined4 *)(lVar8 + 0x16c));
    puVar5[0x30] = bVar6 & 1;
  }
  FUN_05232a24(&stack0x00000050,*(undefined8 *)puVar2);
  if ((unaff_x21 & 1) == 0) {
    lVar8 = *(long *)(unaff_x19 + 0x78);
    *(undefined1 *)(unaff_x19 + 0x1ea) = 0;
    if (lVar8 == 0) goto LAB_05f6fc00;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if ((*(long *)(unaff_x19 + 0x68) == 0) ||
       (lVar8 = FUN_04d96360(*(long *)(unaff_x19 + 0x68),
                             *(undefined8 *)Method_System_Tuple<string,_string>_get_Item2__),
       lVar8 == 0)) goto LAB_05f6fc00;
    FUN_03dffb60(&stack0x00000008,lVar8,
                 *(undefined8 *)
                  Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item1__
                );
    puVar4 = Method_System_Tuple<Vector3,_Vector3>_get_Item1__;
    puVar2 = PTR_DAT_069fc3e0;
    puStack0000000000000038 = in_stack_00000010;
    uStack0000000000000030 = in_stack_00000008;
    _uStack0000000000000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = (undefined1 *)&stack0x00000030;
    while (uVar7 = FUN_0520f380(&stack0x00000030,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x78);
      if (lVar8 == 0) {
LAB_05f6fbf4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar10 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_05f6fbf4;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000040;
      }
      else {
        FUN_03fb3e1c(lVar8,_uStack0000000000000040 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0520f37c(&stack0x00000030,*(undefined8 *)Method_System_Tuple<Vector3,_float>_get_Item1__);
    FUN_05f6fcd4();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc43e7 == '\0') {
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc43e7 = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x1a) != '\0') {
      FUN_05f6fd04(0);
    }
    return;
  }
LAB_05f6fc00:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


