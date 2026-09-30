/*
FUNCTION_NAME: FUN_01cb4004
ENTRY_POINT: 01cb4004
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


long FUN_01cb4004(ulong param_1,long param_2,long param_3,undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long unaff_x23;
  long *unaff_x26;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1007);
    thunk_FUN_01ad9084(StringLiteral_1025);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x23 + 0xa15) = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(param_3,0,0);
  if ((uVar4 & 1) == 0) {
    if (((param_3 == 0) || (lVar7 = FUN_0391c27c(param_3,0), lVar7 == 0)) ||
       (uVar5 = FUN_03928c2c(lVar7,0), param_5 == 0)) goto LAB_01cb43c0;
  }
  else {
    if ((param_5 == 0) || (*(long *)(param_5 + 0x30) == 0)) goto LAB_01cb43c0;
    uVar5 = FUN_0391fab4(*(long *)(param_5 + 0x30),0);
  }
  puVar3 = StringLiteral_1007;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  if (*(long *)(param_5 + 0x38) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_5 + 0x38) + 0x4c);
    if (*(int *)(*(long *)StringLiteral_1007 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_01cb4f18(param_3,uVar1,param_4);
    lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0391fe00(lVar7,uVar6,0);
    if ((lVar7 != 0) && (lVar8 = FUN_0391fab4(lVar7,0), lVar8 != 0)) {
      FUN_03929660(lVar8,uVar5,0,0);
      lVar8 = FUN_0391fab4(lVar7,0);
      lVar9 = FUN_0391c27c(param_2,0);
      if ((lVar9 != 0) && (FUN_03928d34(lVar9,0), lVar8 != 0)) {
        FUN_03928dd4(lVar8,0);
        lVar8 = FUN_0391fab4(lVar7,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar8 != 0) {
          puVar10 = *(undefined4 **)
                     (*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8
                     );
          FUN_03929060(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar8,0);
          lVar8 = FUN_0391fab4(lVar7,0);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          puVar2 = StringLiteral_1025;
          if (lVar8 != 0) {
            lVar9 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_039293f4(*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                         *(undefined4 *)(lVar9 + 0x14),lVar8,0);
            lVar8 = FUN_01ed7044(lVar7,*(undefined8 *)puVar2);
            if ((*(long *)(param_5 + 0x38) != 0) && (lVar8 != 0)) {
              *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(*(long *)(param_5 + 0x38) + 0x4c);
              *(undefined4 *)(lVar8 + 0x28) = param_4;
              *(undefined1 *)(lVar8 + 0x2c) = *(undefined1 *)(param_2 + 0x25);
              *(undefined1 *)(lVar8 + 0x2d) = *(undefined1 *)(param_2 + 0x26);
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar4 = FUN_0391f968(param_3,0,0);
              if ((uVar4 & 1) == 0) {
                if (*(long *)(param_5 + 0x30) == 0) goto LAB_01cb43c0;
                param_3 = *(long *)(param_5 + 0x10);
                lVar9 = FUN_0391fab4(*(long *)(param_5 + 0x30),0);
                lVar11 = *(long *)puVar3;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar11);
                }
              }
              else {
                lVar9 = param_3;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
              }
              FUN_01cb70b0(lVar7,param_3,lVar9);
              fVar12 = -1.0;
              if ((*(char *)(param_2 + 0x24) == '\0') &&
                 (fVar12 = *(float *)(param_2 + 0x20), fVar12 <= 0.0)) {
                lVar7 = *(long *)(param_5 + 0x10);
                if (lVar7 == 0) goto LAB_01cb43c0;
                fVar12 = 0.0;
                if (0.0 < *(float *)(lVar7 + 0x68)) {
                  in_stack_00000008 =
                       CONCAT44(*(float *)(lVar7 + 0x68),*(undefined4 *)(lVar7 + 100));
                  fVar13 = *(float *)(param_5 + 0x28) + *(float *)(param_5 + 0x28);
                  fVar14 = *(float *)(param_5 + 0x2c) + *(float *)(param_5 + 0x2c);
                  fVar12 = (float)FUN_01d077bc(*(float *)(param_5 + 0x24) +
                                               *(float *)(param_5 + 0x24),&stack0x00000008,0);
                  if (DAT_03fed25c == '\0') {
                    thunk_FUN_01ad9084(
                                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                      );
                    DAT_03fed25c = '\x01';
                  }
                  if (*(int *)(*(long *)
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  fVar12 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) * 0.5;
                }
              }
              *(float *)(lVar8 + 0x20) = fVar12;
              return lVar8;
            }
          }
        }
      }
    }
  }
LAB_01cb43c0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


