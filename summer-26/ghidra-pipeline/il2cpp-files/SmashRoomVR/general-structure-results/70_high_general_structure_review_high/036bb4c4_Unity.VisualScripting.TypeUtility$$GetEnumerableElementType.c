/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility$$GetEnumerableElementType
ENTRY_POINT: 036bb4c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_TypeUtility__GetEnumerableElementType
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
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
  
  puVar2 = StringLiteral_455;
  if ((DAT_03ff74ee & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_455);
    DAT_03ff74ee = 1;
    param_6 = extraout_x1;
  }
  auVar12._8_8_ = param_6;
  auVar12._0_8_ = *(long *)puVar2;
  lVar6 = *(long *)(param_5 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    auVar12 = thunk_FUN_01ac7298();
  }
  if (lVar6 != 0) {
    auVar12 = FUN_038ffa04(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x8c),0);
    if ((auVar12._0_8_ & 1) == 0) {
      return;
    }
    auVar12._8_8_ = auVar12._8_8_;
    auVar12._0_8_ = *(long *)puVar2;
    lVar6 = *(long *)(param_5 + 0x110);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      auVar12 = thunk_FUN_01ac7298();
    }
    if (lVar6 != 0) {
      uVar3 = FUN_038ff584(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x8c),0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      auVar12 = FUN_03922f24(uVar3,0,0);
      if ((auVar12._0_8_ & 1) != 0) {
        return;
      }
      auVar12._8_8_ = auVar12._8_8_;
      auVar12._0_8_ = *(long *)puVar2;
      lVar6 = *(long *)(param_5 + 0x110);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        auVar12 = thunk_FUN_01ac7298();
      }
      if (lVar6 != 0) {
        fVar7 = (float)thunk_FUN_03900198(lVar6,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar2 + 0xb8) + 0x94),0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        uVar4 = (ulong)(uint)(param_2 * DAT_00b552c8);
        puVar5 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        uVar8 = (ulong)(uint)(param_3 * DAT_00b552c8);
        uVar11 = *puVar5;
        uVar10 = puVar5[1];
        uVar9 = puVar5[2];
        uVar3 = FUN_03914564(fVar7 * DAT_00b552c8,uVar4,uVar8,0);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        FUN_03910ecc(&stack0x00000050,uVar11,uVar10,uVar9,uVar3,uVar4,uVar8,param_4,0);
        in_stack_000000b8 = in_stack_00000078;
        in_stack_000000b0 = in_stack_00000070;
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_00000098 = in_stack_00000058;
        in_stack_00000090 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000068;
        in_stack_000000a0 = in_stack_00000060;
        *(undefined8 *)(param_5 + 0x784) = in_stack_00000078;
        *(undefined8 *)(param_5 + 0x77c) = in_stack_00000070;
        *(undefined8 *)(param_5 + 0x794) = in_stack_00000088;
        *(undefined8 *)(param_5 + 0x78c) = in_stack_00000080;
        *(undefined8 *)(param_5 + 0x764) = in_stack_00000058;
        *(undefined8 *)(param_5 + 0x75c) = in_stack_00000050;
        *(undefined8 *)(param_5 + 0x774) = in_stack_00000068;
        *(undefined8 *)(param_5 + 0x76c) = in_stack_00000060;
        uVar4 = CONCAT44(0,*(uint *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90));
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar4;
        auVar12 = auVar1 << 0x40;
        if (*(long *)(param_5 + 0x110) != 0) {
          in_stack_00000018 = in_stack_00000058;
          in_stack_00000010 = in_stack_00000050;
          in_stack_00000028 = in_stack_00000068;
          in_stack_00000020 = in_stack_00000060;
          in_stack_00000038 = in_stack_00000078;
          in_stack_00000030 = in_stack_00000070;
          in_stack_00000048 = in_stack_00000088;
          in_stack_00000040 = in_stack_00000080;
          FUN_03900814(*(long *)(param_5 + 0x110),uVar4,&stack0x00000010,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(auVar12._0_8_,auVar12._8_8_);
}


