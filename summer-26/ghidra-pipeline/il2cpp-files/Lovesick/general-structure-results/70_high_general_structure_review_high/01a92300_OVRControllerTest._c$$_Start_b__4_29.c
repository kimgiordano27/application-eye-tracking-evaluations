/*
FUNCTION_NAME: OVRControllerTest.<>c$$<Start>b__4_29
ENTRY_POINT: 01a92300
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVRControllerTest_<>c__<Start>b__4_29(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  thunk_FUN_00d48444(StringLiteral_8940);
  thunk_FUN_00d48444(Method_System_String_Replace__);
  thunk_FUN_00d48444(Method_System_Data_DataColumn_set_Prefix__);
  thunk_FUN_00d48444(StringLiteral_13950);
  thunk_FUN_00d48444(StringLiteral_8453);
  thunk_FUN_00d48444(StringLiteral_9912);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_f64__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__);
  thunk_FUN_00d48444(Method_OVRSpatialAnchor_LoadUnboundAnchorsAsync__);
  thunk_FUN_00d48444(Method_MotelTombstone_MiddleRightPiecePlaced__);
  *(undefined1 *)(unaff_x22 + 0xd28) = 1;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000060 = 0;
  uVar9 = FUN_0112d330();
  puVar2 = StringLiteral_9912;
  puVar3 = Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    puVar8 = StringLiteral_13950;
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
    ;
    uVar9 = FUN_010a0568(&stack0x000000b0,&stack0x000000a0,*(undefined8 *)puVar2);
    puVar7 = StringLiteral_302;
    puVar6 = Method_OVRSpatialAnchor_LoadUnboundAnchorsAsync__;
    puVar5 = Method_MotelTombstone_MiddleRightPiecePlaced__;
    puVar4 = Method_System_Data_DataColumn_set_Prefix__;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if ((uVar9 & 1) == 0) {
      in_stack_00000038 = unaff_x19;
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__,
                                  &stack0x00000038);
      uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000034);
      uVar12 = FUN_01600b5c(*(undefined8 *)puVar6,uVar12,uVar13,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar5,uVar12,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
      FUN_026610e4(uVar12,0);
      FUN_0112c260(0,&stack0x000000dc,&stack0x00000040,*(undefined8 *)puVar8);
      in_stack_000000c8 = in_stack_00000048;
      in_stack_000000c0 = in_stack_00000040;
      in_stack_000000d0 = in_stack_00000050;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01a92654(&stack0x00000040,0x9b8056f);
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
      lVar10 = *(long *)(*(long *)puVar4 + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000080,*(undefined8 *)(lVar10 + 0x80));
      puVar2 = Method_System_Collections_Generic_List<UIRenderDevice_AllocToUpdate>_Add__;
      if (*pcVar11 != '\0') {
        FUN_00c075a0(&stack0x00000040,&stack0x00000080,*(undefined8 *)Method_System_String_Replace__
                    );
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        if (in_stack_000000a0 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (long)*(int *)(in_stack_000000a0 + 0x18);
        }
        FUN_01b7b498(&stack0x00000040,&stack0x00000060,*(undefined8 *)puVar2,lVar10,0,0);
      }
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_w20);
      FUN_0112c260(in_stack_000000a0,&stack0x00000040,&stack0x000000c0,*(undefined8 *)puVar8);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar2 = StringLiteral_8453;
    FUN_01a92720(0x9b8056f);
    in_stack_00000050 = in_stack_000000d0;
    in_stack_00000048 = in_stack_000000c8;
    in_stack_00000040 = in_stack_000000c0;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000018 = in_stack_00000048;
    in_stack_00000010 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000050;
    FUN_01351f70(&stack0x000000b0,&stack0x00000010,*(undefined8 *)puVar2);
  }
  return;
}


