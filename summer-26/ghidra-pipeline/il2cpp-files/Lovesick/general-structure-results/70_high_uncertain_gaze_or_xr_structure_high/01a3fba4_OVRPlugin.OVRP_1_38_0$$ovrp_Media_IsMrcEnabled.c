/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 01a3fba4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 uStack0000000000000140;
  
  uStack0000000000000140 = param_2._0_8_;
  if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
    uVar8 = *(undefined8 *)(unaff_x22 + 0xcc);
    *(undefined8 *)(unaff_x20 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0xd4);
    *(undefined8 *)(unaff_x20 + 0x2b8) = uVar8;
    *(long *)(unaff_x20 + 0x2b4) = param_2._8_8_;
    *(undefined8 *)(unaff_x20 + 0x2ac) = uStack0000000000000140;
    uVar3 = DAT_029462c4;
    uVar2 = DAT_029462c0;
    uVar1 = DAT_029462bc;
    *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
    in_stack_00000128 = 0;
    in_stack_00000130 = 0;
    in_stack_00000120 = 0;
    in_stack_00000138 = 0;
    FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120,0);
    *(undefined8 *)(unaff_x22 + 0x94) = *(undefined8 *)(unaff_x22 + 0xb4);
    *(undefined8 *)(unaff_x22 + 0x8c) = *(undefined8 *)(unaff_x22 + 0xac);
    in_stack_00000108 = in_stack_00000128;
    in_stack_00000100 = in_stack_00000120;
    if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x8c);
      *(undefined8 *)(unaff_x20 + 0x2e4) = *(undefined8 *)(unaff_x22 + 0x94);
      *(undefined8 *)(unaff_x20 + 0x2dc) = uVar8;
      uVar1 = DAT_029462c8;
      *(undefined8 *)(unaff_x20 + 0x2d8) = in_stack_00000128;
      *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
      uVar3 = DAT_029462d0;
      uVar2 = DAT_029462cc;
      *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
      in_stack_000000e8 = 0;
      in_stack_000000f0 = 0;
      in_stack_000000e0 = 0;
      in_stack_000000f8 = 0;
      FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
      *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
      *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
      in_stack_000000c8 = in_stack_000000e8;
      in_stack_000000c0 = in_stack_000000e0;
      if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
        uVar8 = *(undefined8 *)(unaff_x22 + 0x4c);
        *(undefined8 *)(unaff_x20 + 0x308) = *(undefined8 *)(unaff_x22 + 0x54);
        *(undefined8 *)(unaff_x20 + 0x300) = uVar8;
        *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000e8;
        *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
        uVar3 = DAT_029462dc;
        uVar2 = DAT_029462d8;
        uVar1 = DAT_029462d4;
        *(undefined4 *)(unaff_x20 + 0x310) = 0;
        in_stack_000000a8 = 0;
        in_stack_000000b0 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
        *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
        *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
        in_stack_00000088 = in_stack_000000a8;
        in_stack_00000080 = in_stack_000000a0;
        if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
          uVar8 = *(undefined8 *)(unaff_x22 + 0xc);
          *(undefined8 *)(unaff_x20 + 0x32c) = *(undefined8 *)(unaff_x22 + 0x14);
          *(undefined8 *)(unaff_x20 + 0x324) = uVar8;
          *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
          *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
          uVar3 = DAT_029462e8;
          uVar2 = DAT_029462e4;
          uVar1 = DAT_029462e0;
          *(undefined4 *)(unaff_x20 + 0x334) = 0;
          uStack0000000000000068 = 0;
          uStack000000000000006c = 0;
          uStack0000000000000070 = 0;
          uStack0000000000000074 = 0;
          in_stack_00000060 = 0;
          in_stack_00000078 = 0;
          FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
          uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
          uStack0000000000000050 = uStack0000000000000070;
          uStack0000000000000048 = uStack0000000000000068;
          uStack000000000000004c = uStack000000000000006c;
          in_stack_00000040 = in_stack_00000060;
          if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
            *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
            *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
            *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
            *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
            uVar3 = DAT_029462f4;
            uVar2 = DAT_029462f0;
            uVar1 = DAT_029462ec;
            *(undefined4 *)(unaff_x20 + 0x358) = 0;
            uStack0000000000000028 = 0;
            uStack000000000000002c = 0;
            uStack0000000000000030 = 0;
            uStack0000000000000034 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
            if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
              *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
              *(ulong *)(unaff_x20 + 0x36c) =
                   CONCAT44(uStack0000000000000030,uStack000000000000002c);
              *(ulong *)(unaff_x20 + 0x368) =
                   CONCAT44(uStack000000000000002c,uStack0000000000000028);
              *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
              *(undefined4 *)(unaff_x20 + 0x37c) = 0;
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
              lVar6 = thunk_FUN_00d62348(*unaff_x23);
              if (lVar6 != 0) {
                FUN_01a3f050();
                puVar5 = StringLiteral_2439;
                puVar4 = 
                System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped_TypeInfo;
                if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                  uVar8 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                  lVar7 = *(long *)StringLiteral_2439;
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar7 = *(long *)puVar5;
                  }
                  uVar9 = **(undefined8 **)(lVar7 + 0xb8);
                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  puVar5 = 
                  Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
                  puVar4 = 
                  Method_System_Collections_Generic_List_Enumerator<SubtitleData>_MoveNext__;
                  if (lVar7 != 0) {
                    FUN_012d239c(lVar7,uVar9,
                                 *(undefined8 *)
                                  Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                 ,0);
                    uVar8 = FUN_010dcdb8(uVar8,lVar7,*(undefined8 *)puVar5);
                    uVar8 = FUN_010df6b8(uVar8,*(undefined8 *)puVar4);
                    *(undefined8 *)(lVar6 + 0x10) = uVar8;
                    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar6;
                    return;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


