/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_Create
ENTRY_POINT: 030ca4b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x030ca784) */

ulong Oculus_Platform_CAPI__ovr_GroupPresenceOptions_Create
                (ulong param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  int unaff_w21;
  uint unaff_w23;
  long lVar8;
  long *unaff_x25;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13202);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_13240);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_52__);
    thunk_FUN_01ad9084(StringLiteral_13241);
    thunk_FUN_01ad9084(StringLiteral_13242);
    thunk_FUN_01ad9084(StringLiteral_13243);
    thunk_FUN_01ad9084(StringLiteral_13244);
    thunk_FUN_01ad9084(StringLiteral_13245);
    *(undefined1 *)(unaff_x20 + 0xa20) = 1;
  }
  uStack0000000000000048 = 0;
  uStack000000000000000c = 0;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ff1a48 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_13202);
    DAT_03ff1a48 = '\x01';
  }
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *unaff_x25;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x3a) == '\0') {
    return 0xffffffff;
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24();
  if ((uVar4 & 1) != 0) {
    return 0xffffffff;
  }
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *unaff_x25;
  }
  lVar6 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar6);
  }
  uVar4 = FUN_0391f968(uVar7,0,0);
  lVar3 = *unaff_x25;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar3);
      lVar3 = *unaff_x25;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar3 == 0) goto LAB_030cac08;
    fVar9 = (float)FUN_03928d34(lVar3,0);
    lVar3 = *unaff_x25;
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_030cac08;
    if (*(float *)(**(long **)(lVar3 + 0xb8) + 0x70) <
        (param_4 - unaff_s9) * (param_4 - unaff_s9) +
        (fVar9 - unaff_s11) * (fVar9 - unaff_s11) + (param_3 - unaff_s10) * (param_3 - unaff_s10)) {
      return 0xffffffff;
    }
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar3);
  }
  uVar4 = FUN_030cac10(unaff_w21,0);
  uVar2 = (uint)uVar4;
  if (uVar2 == 0xffffffff) {
    return uVar4;
  }
  lVar3 = *unaff_x25;
  uStack0000000000000048 = uVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *unaff_x25;
  }
  lVar6 = **(long **)(lVar3 + 0xb8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_030cac0c;
    lVar3 = (*(long **)(lVar3 + 0xb8))[5];
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      uVar7 = FUN_0391fab4(lVar3,0);
      if (lVar6 != 0) {
        FUN_030c9b04(lVar6,uVar7);
        lVar3 = FUN_0391c2b8(lVar6,0);
        if (lVar3 != 0) {
          FUN_0391fb70(lVar3,1,0);
          lVar3 = *(long *)(lVar6 + 0x30);
          if (lVar3 != 0) {
            lVar8 = *(long *)(lVar6 + 0x40);
            FUN_0391b78c(lVar3,1,0);
            if (**(long **)(*unaff_x25 + 0xb8) != 0) {
              fVar9 = *(float *)(**(long **)(*unaff_x25 + 0xb8) + 0x50) * unaff_s13;
              if (fVar9 < 0.0) {
                fVar9 = 0.0;
              }
              FUN_038ea5f0(fVar9,lVar3,0);
              FUN_038ea678(lVar3,0);
              FUN_038eae00(DAT_00b5521c,lVar3,0);
              FUN_038eb260(lVar3,1,0);
              FUN_038eb05c(lVar3,2,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x40),0);
              FUN_038eb0b0(0,lVar3,0);
              FUN_038ea808(lVar3);
              FUN_038eb0fc(0,lVar3,0);
              FUN_038eae88(lVar3,unaff_w23 & 1,0);
              FUN_038eb184(lVar3,0,0);
              if (**(long **)(*unaff_x25 + 0xb8) != 0) {
                FUN_038eb1c8(*(undefined4 *)(**(long **)(*unaff_x25 + 0xb8) + 0x58),lVar3,0);
                if (**(long **)(*unaff_x25 + 0xb8) != 0) {
                  FUN_038eb214(*(undefined4 *)(**(long **)(*unaff_x25 + 0xb8) + 0x5c),lVar3,0);
                  uVar7 = FUN_030c766c();
                  FUN_038ea84c(lVar3,uVar7,0);
                  fVar9 = (float)FUN_03925ca4(0);
                  if (unaff_x19 != 0) {
                    fVar10 = (float)FUN_038e9914();
                    *(float *)(lVar6 + 0x48) = fVar9 + fVar10 + (float)unaff_d8;
                    uVar11 = FUN_038ea5b4(lVar3,0);
                    *(undefined4 *)(lVar6 + 0x58) = uVar11;
                    *(undefined4 *)(lVar6 + 0x38) = 0;
                    *(undefined8 *)(lVar6 + 0x70) = 0;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x70),0);
                    *(undefined8 *)(lVar6 + 0x88) = 0;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x88),0);
                    if (unaff_w21 == 1) {
                      lVar5 = *unaff_x25;
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar5 = *unaff_x25;
                      }
                      if ((**(long **)(lVar5 + 0xb8) == 0) ||
                         (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x80), lVar5 == 0))
                      goto LAB_030cac08;
                      FUN_028999ec(lVar5,lVar6,*(undefined8 *)StringLiteral_13240);
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar4 = FUN_0391f968(lVar8,0,0);
                    if ((uVar4 & 1) != 0) {
                      if (lVar8 == 0) goto LAB_030cac08;
                      *(undefined1 *)(lVar8 + 0x20) = 0;
                    }
                    lVar8 = FUN_0391c27c(lVar3,0);
                    if (lVar8 != 0) {
                      FUN_03928dd4(lVar8,0);
                      lVar8 = *unaff_x25;
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar8 = *unaff_x25;
                      }
                      if (**(long **)(lVar8 + 0xb8) != 0) {
                        if (*(char *)(**(long **)(lVar8 + 0xb8) + 0x48) == '\0') {
LAB_030cabdc:
                          if ((float)unaff_d8 <= 0.0) {
                            FUN_038ea890(lVar3,0);
                          }
                          else {
                            FUN_038ea8d0(unaff_d8,lVar3,0);
                          }
                          return (ulong)uStack0000000000000048;
                        }
                        lVar8 = FUN_01b47fd0(*(undefined8 *)
                                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__
                                             ,0xb);
                        if (lVar8 != 0) {
                          if (*(int *)(lVar8 + 0x18) != 0) {
                            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)StringLiteral_13244;
                            thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x20));
                            uVar7 = FUN_0303de64(&stack0x00000048,0);
                            if (1 < *(uint *)(lVar8 + 0x18)) {
                              *(undefined8 *)(lVar8 + 0x28) = uVar7;
                              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x28),uVar7);
                              if (2 < *(uint *)(lVar8 + 0x18)) {
                                *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)StringLiteral_13245;
                                thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x30));
                                uVar7 = FUN_039230bc();
                                if (3 < *(uint *)(lVar8 + 0x18)) {
                                  *(undefined8 *)(lVar8 + 0x38) = uVar7;
                                  thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x38),uVar7);
                                  if (4 < *(uint *)(lVar8 + 0x18)) {
                                    *(undefined8 *)(lVar8 + 0x40) =
                                         *(undefined8 *)StringLiteral_13241;
                                    thunk_FUN_01b4f09c();
                                    if (*(long *)(lVar6 + 0x30) == 0) goto LAB_030cac08;
                                    uStack000000000000000c = FUN_038ea5b4(*(long *)(lVar6 + 0x30),0)
                                    ;
                                    uVar7 = FUN_03052638(&stack0x0000000c,0);
                                    if (5 < *(uint *)(lVar8 + 0x18)) {
                                      *(undefined8 *)(lVar8 + 0x48) = uVar7;
                                      thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x48),uVar7);
                                      if (6 < *(uint *)(lVar8 + 0x18)) {
                                        *(undefined8 *)(lVar8 + 0x50) =
                                             *(undefined8 *)StringLiteral_13242;
                                        thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x50));
                                        uVar7 = FUN_03052638((long)&stack0x00000048 + 4,0);
                                        if (7 < *(uint *)(lVar8 + 0x18)) {
                                          *(undefined8 *)(lVar8 + 0x58) = uVar7;
                                          thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x58),uVar7);
                                          if (8 < *(uint *)(lVar8 + 0x18)) {
                                            *(undefined8 *)(lVar8 + 0x60) =
                                                 *(undefined8 *)StringLiteral_13243;
                                            thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x60));
                                            uStack000000000000000c = FUN_03925ca4(0);
                                            uVar7 = FUN_03052638(&stack0x0000000c,0);
                                            if (9 < *(uint *)(lVar8 + 0x18)) {
                                              *(undefined8 *)(lVar8 + 0x68) = uVar7;
                                              thunk_FUN_01b4f09c((undefined8 *)(lVar8 + 0x68),uVar7)
                                              ;
                                              if (10 < *(uint *)(lVar8 + 0x18)) {
                                                *(undefined8 *)(lVar8 + 0x70) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_52__
                                                ;
                                                thunk_FUN_01b4f09c();
                                                uVar7 = FUN_02ee6e18(lVar8,0);
                                                if (*(int *)(*(long *)
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                                  + 0xe0) == 0) {
                                                  thunk_FUN_01ac7298(*(long *)
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                                  );
                                                }
                                                FUN_038f2acc(uVar7,0);
                                                unaff_d8 = (ulong)uStack000000000000004c;
                                                goto LAB_030cabdc;
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
LAB_030cac0c:
                    /* WARNING: Subroutine does not return */
                          FUN_01b48180();
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
LAB_030cac08:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


