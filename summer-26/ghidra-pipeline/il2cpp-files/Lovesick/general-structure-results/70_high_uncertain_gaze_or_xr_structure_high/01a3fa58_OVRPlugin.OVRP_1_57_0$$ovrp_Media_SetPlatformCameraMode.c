/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_SetPlatformCameraMode
ENTRY_POINT: 01a3fa58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_57_0__ovrp_Media_SetPlatformCameraMode(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
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
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  *(undefined4 *)(unaff_x20 + 0x25c) = 0;
  uStack00000000000001e8 = 0;
  uStack00000000000001e0 = 0;
  FUN_02666aac(&stack0x000001e0,0);
  *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
  in_stack_000001c8 = uStack00000000000001e8;
  in_stack_000001c0 = uStack00000000000001e0;
  if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x260) = 0xf;
    uVar12 = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x21 + 0x54);
    *(undefined8 *)(unaff_x20 + 0x270) = uVar12;
    *(undefined8 *)(unaff_x20 + 0x26c) = uStack00000000000001e8;
    *(undefined8 *)(unaff_x20 + 0x264) = uStack00000000000001e0;
    uVar7 = DAT_0294629c;
    uVar6 = DAT_02946298;
    uVar5 = DAT_02946294;
    uVar4 = DAT_02946290;
    uVar3 = DAT_0294628c;
    uVar2 = DAT_02946288;
    uVar1 = DAT_02946284;
    *(undefined4 *)(unaff_x20 + 0x280) = 0;
    in_stack_000001a8 = 0;
    in_stack_000001b0 = 0;
    in_stack_000001a0 = 0;
    in_stack_000001b8 = 0;
    FUN_02666aac(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,&stack0x000001a0,0);
    *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
    in_stack_00000188 = in_stack_000001a8;
    in_stack_00000180 = in_stack_000001a0;
    if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x284) = 0x10;
      uVar12 = *(undefined8 *)(unaff_x21 + 0xc);
      *(undefined8 *)(unaff_x20 + 0x29c) = *(undefined8 *)(unaff_x21 + 0x14);
      *(undefined8 *)(unaff_x20 + 0x294) = uVar12;
      *(undefined8 *)(unaff_x20 + 0x290) = in_stack_000001a8;
      *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001a0;
      uVar7 = DAT_029462b8;
      uVar6 = DAT_029462b4;
      uVar5 = DAT_029462b0;
      uVar4 = DAT_029462ac;
      uVar3 = DAT_029462a8;
      uVar2 = DAT_029462a4;
      uVar1 = DAT_029462a0;
      *(undefined4 *)(unaff_x20 + 0x2a4) = 0;
      uStack0000000000000168 = 0;
      uStack000000000000016c = 0;
      uStack0000000000000170 = 0;
      uStack0000000000000174 = 0;
      in_stack_00000160 = 0;
      in_stack_00000178 = 0;
      FUN_02666aac(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,&stack0x00000160,0);
      uStack0000000000000154 = CONCAT44(in_stack_00000178,uStack0000000000000174);
      uStack0000000000000150 = uStack0000000000000170;
      uStack0000000000000148 = uStack0000000000000168;
      uStack000000000000014c = uStack000000000000016c;
      in_stack_00000140 = in_stack_00000160;
      if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2a8) = 0x11;
        *(undefined8 *)(unaff_x20 + 0x2c0) = uStack0000000000000154;
        *(ulong *)(unaff_x20 + 0x2b8) = CONCAT44(uStack0000000000000170,uStack000000000000016c);
        *(ulong *)(unaff_x20 + 0x2b4) = CONCAT44(uStack000000000000016c,uStack0000000000000168);
        *(undefined8 *)(unaff_x20 + 0x2ac) = in_stack_00000160;
        uVar3 = DAT_029462c4;
        uVar2 = DAT_029462c0;
        uVar1 = DAT_029462bc;
        *(undefined4 *)(unaff_x20 + 0x2c8) = 0;
        uStack0000000000000128 = 0;
        uStack000000000000012c = 0;
        uStack0000000000000130 = 0;
        uStack0000000000000134 = 0;
        in_stack_00000120 = 0;
        in_stack_00000138 = 0;
        FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000120,0);
        uStack0000000000000114 = CONCAT44(in_stack_00000138,uStack0000000000000134);
        uStack0000000000000110 = uStack0000000000000130;
        uStack0000000000000108 = uStack0000000000000128;
        uStack000000000000010c = uStack000000000000012c;
        in_stack_00000100 = in_stack_00000120;
        if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
          *(undefined8 *)(unaff_x20 + 0x2e4) = uStack0000000000000114;
          *(ulong *)(unaff_x20 + 0x2dc) = CONCAT44(uStack0000000000000130,uStack000000000000012c);
          uVar1 = DAT_029462c8;
          *(ulong *)(unaff_x20 + 0x2d8) = CONCAT44(uStack000000000000012c,uStack0000000000000128);
          *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
          uVar3 = DAT_029462d0;
          uVar2 = DAT_029462cc;
          *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
          uStack00000000000000e8 = 0;
          uStack00000000000000ec = 0;
          uStack00000000000000f0 = 0;
          uStack00000000000000f4 = 0;
          in_stack_000000e0 = 0;
          in_stack_000000f8 = 0;
          FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000e0,0);
          uStack00000000000000d4 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
          uStack00000000000000d0 = uStack00000000000000f0;
          uStack00000000000000c8 = uStack00000000000000e8;
          uStack00000000000000cc = uStack00000000000000ec;
          in_stack_000000c0 = in_stack_000000e0;
          if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
            *(undefined8 *)(unaff_x20 + 0x308) = uStack00000000000000d4;
            *(ulong *)(unaff_x20 + 0x300) = CONCAT44(uStack00000000000000f0,uStack00000000000000ec);
            *(ulong *)(unaff_x20 + 0x2fc) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
            *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
            uVar3 = DAT_029462dc;
            uVar2 = DAT_029462d8;
            uVar1 = DAT_029462d4;
            *(undefined4 *)(unaff_x20 + 0x310) = 0;
            uStack00000000000000a8 = 0;
            uStack00000000000000ac = 0;
            uStack00000000000000b0 = 0;
            uStack00000000000000b4 = 0;
            in_stack_000000a0 = 0;
            in_stack_000000b8 = 0;
            FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x000000a0,0);
            uStack0000000000000094 = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
            uStack0000000000000090 = uStack00000000000000b0;
            uStack0000000000000088 = uStack00000000000000a8;
            uStack000000000000008c = uStack00000000000000ac;
            in_stack_00000080 = in_stack_000000a0;
            if (0x15 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
              *(undefined8 *)(unaff_x20 + 0x32c) = uStack0000000000000094;
              *(ulong *)(unaff_x20 + 0x324) =
                   CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
              *(ulong *)(unaff_x20 + 800) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
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
                *(ulong *)(unaff_x20 + 0x348) =
                     CONCAT44(uStack0000000000000070,uStack000000000000006c);
                *(ulong *)(unaff_x20 + 0x344) =
                     CONCAT44(uStack000000000000006c,uStack0000000000000068);
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
                  *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034)
                  ;
                  *(ulong *)(unaff_x20 + 0x36c) =
                       CONCAT44(uStack0000000000000030,uStack000000000000002c);
                  *(ulong *)(unaff_x20 + 0x368) =
                       CONCAT44(uStack000000000000002c,uStack0000000000000028);
                  *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
                  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
                  *(long *)(unaff_x19 + 0x10) = unaff_x20;
                  **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
                  lVar10 = thunk_FUN_00d62348(*unaff_x23);
                  if (lVar10 != 0) {
                    FUN_01a3f050();
                    puVar9 = StringLiteral_2439;
                    puVar8 = 
                    System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped_TypeInfo;
                    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                      uVar12 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                      lVar11 = *(long *)StringLiteral_2439;
                      if (*(int *)(lVar11 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar11 = *(long *)puVar9;
                      }
                      uVar13 = **(undefined8 **)(lVar11 + 0xb8);
                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
                      puVar9 = 
                      Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
                      puVar8 = 
                      Method_System_Collections_Generic_List_Enumerator<SubtitleData>_MoveNext__;
                      if (lVar11 != 0) {
                        FUN_012d239c(lVar11,uVar13,
                                     *(undefined8 *)
                                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                     ,0);
                        uVar12 = FUN_010dcdb8(uVar12,lVar11,*(undefined8 *)puVar9);
                        uVar12 = FUN_010df6b8(uVar12,*(undefined8 *)puVar8);
                        *(undefined8 *)(lVar10 + 0x10) = uVar12;
                        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar10;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


