/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ApplicationOptions_SetLobbySessionId_Native
ENTRY_POINT: 035f9a84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_ApplicationOptions_SetLobbySessionId_Native(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 unaff_w23;
  long *unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 unaff_d8;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
  *(char *)(unaff_x29 + 0x88a) = (char)unaff_w23;
  uVar3 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = unaff_w23;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_d8;
  puVar1 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__;
  lVar2 = FUN_01f08890(*(undefined8 *)
                        Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                       ,2);
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  FUN_04038e44(0,0x3f800000,&stack0x000000f0,0);
  if (lVar2 != 0) {
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    *(undefined8 *)(unaff_x28 + 0x54) = *(undefined8 *)(unaff_x28 + 0x74);
    *(undefined8 *)(unaff_x28 + 0x4c) = *(undefined8 *)(unaff_x28 + 0x6c);
    if (*(int *)(lVar2 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(unaff_x28 + 0x4c);
      *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(unaff_x28 + 0x54);
      *(undefined8 *)(lVar2 + 0x2c) = uVar3;
      *(undefined8 *)(lVar2 + 0x28) = in_stack_000000f8;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_000000f0;
      in_stack_000000b0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      FUN_04038e44(0x3f800000,0x3f800000,&stack0x000000b0,0);
      *(undefined8 *)(unaff_x28 + 0x14) = *(undefined8 *)(unaff_x28 + 0x34);
      *(undefined8 *)(unaff_x28 + 0xc) = *(undefined8 *)(unaff_x28 + 0x2c);
      in_stack_00000098 = in_stack_000000b8;
      in_stack_00000090 = in_stack_000000b0;
      if (1 < *(uint *)(lVar2 + 0x18)) {
        uVar3 = *(undefined8 *)(unaff_x28 + 0xc);
        *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(unaff_x28 + 0x14);
        *(undefined8 *)(lVar2 + 0x48) = uVar3;
        *(undefined8 *)(lVar2 + 0x44) = in_stack_000000b8;
        *(undefined8 *)(lVar2 + 0x3c) = in_stack_000000b0;
        uVar3 = thunk_FUN_01f117cc(*unaff_x27);
        FUN_04039790(uVar3,lVar2,0);
        *unaff_x20 = uVar3;
        thunk_FUN_01f51358();
        lVar2 = FUN_01f08890(*(undefined8 *)puVar1,2);
        in_stack_00000070 = 0;
        uStack0000000000000078 = 0;
        uStack000000000000007c = 0;
        in_stack_00000088 = 0;
        uStack0000000000000080 = 0;
        uStack0000000000000084 = 0;
        FUN_04038e44(0,0x3f800000,&stack0x00000070,0);
        puVar1 = Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_47__;
        if (lVar2 == 0) goto LAB_035f9d00;
        uStack0000000000000064 = CONCAT44(in_stack_00000088,uStack0000000000000084);
        uStack0000000000000058 = uStack0000000000000078;
        in_stack_00000050 = in_stack_00000070;
        uStack000000000000005c = uStack000000000000007c;
        uStack0000000000000060 = uStack0000000000000080;
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined8 *)(lVar2 + 0x34) = uStack0000000000000064;
          *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar2 + 0x20) = in_stack_00000070;
          in_stack_00000030 = 0;
          uStack0000000000000038 = 0;
          uStack000000000000003c = 0;
          in_stack_00000048 = 0;
          uStack0000000000000040 = 0;
          uStack0000000000000044 = 0;
          FUN_04038e44(0x3f800000,0x3f800000,&stack0x00000030,0);
          if (1 < *(uint *)(lVar2 + 0x18)) {
            *(ulong *)(lVar2 + 0x50) = CONCAT44(in_stack_00000048,uStack0000000000000044);
            *(ulong *)(lVar2 + 0x48) = CONCAT44(uStack0000000000000040,uStack000000000000003c);
            *(ulong *)(lVar2 + 0x44) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
            *(undefined8 *)(lVar2 + 0x3c) = in_stack_00000030;
            uVar3 = thunk_FUN_01f117cc(*unaff_x27);
            FUN_04039790(uVar3,lVar2,0);
            *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
            thunk_FUN_01f51358();
            uVar3 = DAT_00c8e790;
            *(undefined4 *)(unaff_x19 + 0x50) = 0;
            *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
            if (DAT_0482ee9c == '\0') {
              thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
              DAT_0482ee9c = '\x01';
            }
            uVar3 = **(undefined8 **)(*unaff_x25 + 0xb8);
            *(undefined1 *)(unaff_x19 + 0x5c) = 0;
            *(undefined8 *)(unaff_x19 + 0x54) = uVar3;
            lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            *(undefined8 *)(lVar2 + 0x20) = unaff_d8;
            FUN_035ac8e8(lVar2,0);
            *(undefined2 *)(lVar2 + 0x10) = 0;
            *(undefined4 *)(lVar2 + 0x14) = 0;
            *(undefined1 *)(lVar2 + 0x18) = 0;
            *(undefined4 *)(lVar2 + 0x1c) = 0;
            *(undefined8 *)(lVar2 + 0x20) = unaff_d8;
            *(long *)(unaff_x19 + 0x60) = lVar2;
            thunk_FUN_01f51358();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_035f9d00:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


