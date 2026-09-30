/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 03696860
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 147
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped
          (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
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
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
    thunk_FUN_01efb3a4(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__);
    thunk_FUN_01efb3a4(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_LoadOptions_set_Uuids__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_RectiPair_get_Item__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    *(undefined1 *)(unaff_x20 + 0xef5) = 1;
  }
  in_stack_00000130 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  _uStack00000000000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  thunk_FUN_01f51358(&stack0x00000100);
  FUN_03695c0c();
  in_stack_000000e8 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
  uVar13 = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  in_stack_000000e0 = in_stack_00000000;
  *(ulong *)(unaff_x22 + 0x54) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
  *(undefined8 *)(unaff_x22 + 0x4c) = uVar13;
  puVar1 = Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__;
  _uStack00000000000000f8 = CONCAT44(0x7f800000,uStack00000000000000f8);
  plVar10 = *(long **)(unaff_x19 + 0x138);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__
           ) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03696998;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,0);
LAB_03696998:
    iVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_036969f8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,1);
LAB_036969f8:
    puVar1 = Method_OVRPlugin_RectiPair_get_Item__;
    uVar12 = (*(code *)*puVar6)(plVar10,iVar5 + -1,puVar6[1]);
    in_stack_00000108 = 0;
    thunk_FUN_01f51358(&stack0x00000108,0);
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    puVar2 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
    lVar7 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    uStack0000000000000008 = 0;
    uStack000000000000000c = 0;
    in_stack_00000000 = 0;
    uStack0000000000000018 = 0;
    uStack000000000000001c = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000014 = 0;
    in_stack_00000020 = 0;
    FUN_03694ee0(uVar12,uVar13,param_4,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                 *(undefined4 *)(lVar7 + 0x20),0);
    in_stack_00000118 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    in_stack_00000128 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000120 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    in_stack_00000110 = in_stack_00000000;
    in_stack_00000130 = in_stack_00000020;
    thunk_FUN_01f51358(&stack0x00000110,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = *(long *)puVar2;
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
    if ((long *)**(long **)(lVar7 + 0xb8) != (long *)0x0) {
      (**(code **)(*(long *)**(long **)(lVar7 + 0xb8) + 0x198))(&stack0x00000060);
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
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_41__) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03696be4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
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
      in_stack_00000088 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000098 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000090 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      in_stack_00000080 = in_stack_00000000;
      while( true ) {
        uVar8 = FUN_02cea124(&stack0x00000080,*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          FUN_02cea3c0(&stack0x00000080,*(undefined8 *)puVar2);
          FUN_02f4400c(&stack0x000000c0,*(undefined8 *)puVar1);
          in_stack_00000088 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          in_stack_00000098 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_00000090 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          in_stack_00000080 = in_stack_00000000;
          while( true ) {
            uVar8 = FUN_02cea124(&stack0x00000080,*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
              FUN_02cea3c0(&stack0x00000080,*(undefined8 *)puVar2);
              memcpy(&stack0x00000000,&stack0x000000e0,0x58);
              *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000038;
              *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000030;
              *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000048;
              *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000040;
              *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000050;
              thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x148),0);
              return in_stack_00000108;
            }
            lVar7 = FUN_02ce9fe0(&stack0x00000080,*(undefined8 *)puVar4);
            if (lVar7 == 0) break;
            if (*(char *)(lVar7 + 0xb0) != '\0') {
              FUN_03697024();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = FUN_02ce9fe0(&stack0x00000080,*(undefined8 *)puVar4);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0xb0) == '\0') {
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


