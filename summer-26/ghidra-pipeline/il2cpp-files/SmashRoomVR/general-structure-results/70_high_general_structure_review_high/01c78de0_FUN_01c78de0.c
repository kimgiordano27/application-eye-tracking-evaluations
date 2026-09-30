/*
FUNCTION_NAME: FUN_01c78de0
ENTRY_POINT: 01c78de0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_01c78de0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed779 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_303);
    thunk_FUN_01ad9084(StringLiteral_304);
    thunk_FUN_01ad9084(StringLiteral_305);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__);
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_306);
    thunk_FUN_01ad9084(StringLiteral_307);
    thunk_FUN_01ad9084(StringLiteral_308);
    thunk_FUN_01ad9084(StringLiteral_309);
    thunk_FUN_01ad9084(StringLiteral_310);
    thunk_FUN_01ad9084(Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_311);
    DAT_03fed779 = 1;
  }
  uVar11 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(*(undefined8 *)StringLiteral_311,0);
    return;
  }
  lVar5 = FUN_0391c27c(param_5,0);
  if (lVar5 != 0) {
    uVar13 = FUN_03928d34(lVar5,0);
    uVar11 = param_2;
    uVar15 = param_3;
    lVar5 = FUN_0391c27c(param_5,0);
    if (lVar5 != 0) {
      uVar14 = FUN_039274a0(lVar5,0);
      lVar5 = FUN_0391c27c(param_5,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      if (lVar5 != 0) {
        puVar8 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_03928dd4(*puVar8,puVar8[1],puVar8[2],lVar5,0);
        lVar5 = FUN_0391c27c(param_5,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar5 != 0) {
          puVar8 = *(undefined4 **)
                    (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                    + 0xb8);
          FUN_03928f54(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar5,0);
          lVar5 = FUN_0391c2b8(param_5,0);
          if (lVar5 != 0) {
            uVar6 = FUN_01ed712c(lVar5,*(undefined8 *)
                                        Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__
                                );
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            uVar4 = FUN_03922f24(uVar6,0,0);
            if ((uVar4 & 1) != 0) {
              lVar5 = FUN_0391c2b8(param_5,0);
              if (lVar5 == 0) goto LAB_01c7947c;
              lVar5 = FUN_01ed7044(lVar5,*(undefined8 *)
                                          Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__
                                  );
              lVar7 = FUN_0391c27c(param_5,0);
              if (((lVar7 == 0) ||
                  (lVar7 = FUN_01e8ac5c(lVar7,*(undefined8 *)StringLiteral_304), lVar7 == 0)) ||
                 (uVar6 = FUN_038fe800(lVar7,0), lVar5 == 0)) goto LAB_01c7947c;
              FUN_038fe8bc(lVar5,uVar6,0);
              FUN_038fe8bc(lVar5,*(undefined8 *)(param_5 + 0x20),0);
            }
            lVar5 = FUN_01e8b468(param_5,*(undefined8 *)StringLiteral_305);
            lVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_310);
            FUN_02b591b0(lVar7,*(undefined8 *)StringLiteral_307);
            puVar3 = StringLiteral_306;
            if (lVar5 != 0) {
              if (1 < (int)*(ulong *)(lVar5 + 0x18)) {
                uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                lVar12 = 5;
                do {
                  if (uVar4 <= lVar12 - 4U) goto LAB_01c79480;
                  if (lVar7 == 0) goto LAB_01c7947c;
                  uVar6 = *(undefined8 *)(lVar5 + lVar12 * 8);
                  lVar9 = *(long *)(lVar7 + 0x10);
                  lVar10 = *(long *)puVar3;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_01c7947c;
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    thunk_FUN_01b4f09c();
                  }
                  else {
                    FUN_02b599e4(lVar7,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
                  lVar9 = lVar12 + -3;
                  lVar12 = lVar12 + 1;
                } while (lVar9 < (int)*(uint *)(lVar5 + 0x18));
              }
              if (lVar7 != 0) {
                lVar5 = FUN_01b47fd0(*(undefined8 *)StringLiteral_303,*(undefined4 *)(lVar7 + 0x18))
                ;
                puVar3 = StringLiteral_309;
                if (0 < *(int *)(lVar7 + 0x18)) {
                  if (lVar5 == 0) goto LAB_01c7947c;
                  uVar4 = 0;
                  lVar12 = lVar5 + 0x20;
                  do {
                    lVar9 = FUN_02b59714(lVar7,uVar4 & 0xffffffff,*(undefined8 *)puVar3);
                    if (lVar9 == 0) goto LAB_01c7947c;
                    uVar6 = FUN_03900d8c(lVar9,0);
                    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_01c79480:
                    /* WARNING: Subroutine does not return */
                      FUN_01b48180();
                    }
                    FUN_03905b24(lVar12,uVar6,0);
                    lVar9 = FUN_02b59714(lVar7,uVar4 & 0xffffffff,*(undefined8 *)puVar3);
                    if ((lVar9 == 0) || (lVar9 = FUN_0391c27c(lVar9,0), lVar9 == 0))
                    goto LAB_01c7947c;
                    FUN_03928848(&local_100,lVar9,0);
                    uStack_b8 = uStack_f8;
                    local_c0 = local_100;
                    uStack_a8 = uStack_e8;
                    uStack_b0 = uStack_f0;
                    uStack_98 = uStack_d8;
                    local_a0 = local_e0;
                    uStack_88 = uStack_c8;
                    uStack_90 = uStack_d0;
                    if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_01c79480;
                    uStack_138 = uStack_f8;
                    local_140 = local_100;
                    uStack_128 = uStack_e8;
                    uStack_130 = uStack_f0;
                    uStack_118 = uStack_d8;
                    local_120 = local_e0;
                    uStack_108 = uStack_c8;
                    uStack_110 = uStack_d0;
                    FUN_03905bb4(lVar12,&local_140,0);
                    lVar9 = FUN_02b59714(lVar7,uVar4 & 0xffffffff,*(undefined8 *)puVar3);
                    if ((lVar9 == 0) || (lVar9 = FUN_0391c2b8(lVar9,0), lVar9 == 0))
                    goto LAB_01c7947c;
                    FUN_0391fb70(lVar9,0,0);
                    uVar4 = uVar4 + 1;
                    lVar12 = lVar12 + 0x68;
                  } while ((long)uVar4 < (long)*(int *)(lVar7 + 0x18));
                }
                lVar7 = FUN_0391c2b8(param_5,0);
                if (lVar7 != 0) {
                  lVar7 = FUN_01ed712c(lVar7,*(undefined8 *)
                                              Method_System_Collections_Stack_StackEnumerator_get_Current__
                                      );
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)puVar2);
                  }
                  uVar4 = FUN_03922f24(lVar7,0,0);
                  if ((uVar4 & 1) != 0) {
                    lVar7 = FUN_0391c2b8(param_5,0);
                    if (lVar7 == 0) goto LAB_01c7947c;
                    lVar7 = FUN_01ed7044(lVar7,*(undefined8 *)
                                                Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                                        );
                  }
                  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                              Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__
                                            );
                  FUN_03901184(uVar6,0);
                  if (lVar7 != 0) {
                    FUN_03900e48(lVar7,uVar6,0);
                    lVar7 = FUN_03900e0c(lVar7,0);
                    if (lVar7 != 0) {
                      FUN_039051a4(lVar7,lVar5,1,1,0);
                      lVar5 = FUN_0391c27c(param_5,0);
                      if ((lVar5 != 0) && (lVar5 = FUN_0391c2b8(lVar5,0), lVar5 != 0)) {
                        FUN_0391fb70(lVar5,1,0);
                        lVar5 = FUN_0391c27c(param_5,0);
                        if (lVar5 != 0) {
                          FUN_03928dd4(uVar13,param_2,param_3,lVar5,0);
                          lVar5 = FUN_0391c27c(param_5,0);
                          if (lVar5 != 0) {
                            FUN_03928f54(uVar14,uVar11,uVar15,param_4,lVar5,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c7947c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


