/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 03696a24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin_Media__EncodeMrcFrame(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  uStack0000000000000108 = 0;
  thunk_FUN_01f51358();
  if (DAT_0482ee19 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee19 = '\x01';
  }
  puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_03694ee0();
  in_stack_00000118 = in_stack_00000008;
  in_stack_00000110 = in_stack_00000000;
  in_stack_00000128 = in_stack_00000018;
  in_stack_00000120 = in_stack_00000010;
  in_stack_00000130 = in_stack_00000020;
  thunk_FUN_01f51358(unaff_x20 + 0x30,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = *(long *)puVar1;
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  if ((long *)**(long **)(lVar5 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*(long *)**(long **)(lVar5 + 0xb8) + 0x198))(&stack0x00000060);
  in_stack_000000c8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000d0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  in_stack_000000c0 = in_stack_00000060;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_OVRSpatialAnchor_LoadOptions_set_Uuids__;
  FUN_0407bc90(&stack0x00000060,0);
  in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000a0 = in_stack_00000060;
  *(ulong *)(unaff_x22 + 0x14) = CONCAT44(in_stack_00000078,uStack0000000000000074);
  *(ulong *)(unaff_x22 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
  plVar10 = *(long **)(unaff_x19 + 0x128);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03696be4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__
                          ,0);
LAB_03696be4:
    (*(code *)*puVar6)(plVar10,&stack0x000000a0,puVar6[1]);
  }
  puVar4 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
  puVar3 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
  puVar2 = Method_OVRSpaceQuery_Options_ValidateSingleFilter__;
  FUN_02f4400c(&stack0x000000c0,*(undefined8 *)puVar1);
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  while( true ) {
    uVar7 = FUN_02cea124(&stack0x00000080,*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      FUN_02cea3c0(&stack0x00000080,*(undefined8 *)puVar2);
      FUN_02f4400c(&stack0x000000c0,*(undefined8 *)puVar1);
      in_stack_00000088 = in_stack_00000008;
      in_stack_00000080 = in_stack_00000000;
      in_stack_00000098 = in_stack_00000018;
      in_stack_00000090 = in_stack_00000010;
      while( true ) {
        uVar7 = FUN_02cea124(&stack0x00000080,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          FUN_02cea3c0(&stack0x00000080,*(undefined8 *)puVar2);
          memcpy(&stack0x00000000,&stack0x000000e0,0x58);
          *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000038;
          *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000030;
          *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000040;
          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000050;
          thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x148),0);
          return uStack0000000000000108;
        }
        lVar5 = FUN_02ce9fe0(&stack0x00000080,*(undefined8 *)puVar4);
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0xb0) != '\0') {
          FUN_03697024();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = FUN_02ce9fe0(&stack0x00000080,*(undefined8 *)puVar4);
    if (lVar5 == 0) break;
    if (*(char *)(lVar5 + 0xb0) == '\0') {
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_03696e28(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                     in_stack_000000a8 & 0xffffffff);
      }
      FUN_03697024();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


