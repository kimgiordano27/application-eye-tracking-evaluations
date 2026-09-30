/*
FUNCTION_NAME: FUN_030ca458
ENTRY_POINT: 030ca458
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

ulong FUN_030ca458(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined1 param_5 [16],undefined8 param_6,long param_7,int param_8,uint param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  ulong uVar16;
  undefined4 local_84;
  uint local_48;
  float local_44;
  
  puVar2 = StringLiteral_13202;
  fVar15 = param_5._0_4_;
  uVar16 = param_5._0_8_;
  uVar8 = param_2;
  uVar14 = param_3;
  local_44 = fVar15;
  if ((DAT_03ff1a20 & 1) == 0) {
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
    DAT_03ff1a20 = 1;
  }
  fVar13 = (float)uVar14;
  fVar12 = (float)uVar8;
  local_48 = 0;
  local_84 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ff1a48 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_13202);
    DAT_03ff1a48 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x3a) == '\0') {
    return 0xffffffff;
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(param_7,0,0);
  if ((uVar5 & 1) != 0) {
    return 0xffffffff;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
  }
  uVar5 = FUN_0391f968(uVar8,0,0);
  lVar4 = *(long *)puVar2;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar4);
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
    if (lVar4 == 0) goto LAB_030cac08;
    fVar10 = (float)FUN_03928d34(lVar4,0);
    lVar4 = *(long *)puVar2;
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_030cac08;
    fVar10 = fVar10 - (float)param_1;
    fVar12 = fVar12 - (float)param_2;
    fVar13 = fVar13 - (float)param_3;
    if (*(float *)(**(long **)(lVar4 + 0xb8) + 0x70) <
        fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12) {
      return 0xffffffff;
    }
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar4);
  }
  uVar5 = FUN_030cac10(param_8,0);
  uVar3 = (uint)uVar5;
  if (uVar3 == 0xffffffff) {
    return uVar5;
  }
  lVar4 = *(long *)puVar2;
  local_48 = uVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = **(long **)(lVar4 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x78), lVar7 != 0)) {
    if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_030cac0c;
    lVar4 = (*(long **)(lVar4 + 0xb8))[5];
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
      uVar8 = FUN_0391fab4(lVar4,0);
      if (lVar7 != 0) {
        FUN_030c9b04(lVar7,uVar8);
        lVar4 = FUN_0391c2b8(lVar7,0);
        if (lVar4 != 0) {
          FUN_0391fb70(lVar4,1,0);
          lVar4 = *(long *)(lVar7 + 0x30);
          if (lVar4 != 0) {
            lVar9 = *(long *)(lVar7 + 0x40);
            FUN_0391b78c(lVar4,1,0);
            if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
              param_4 = *(float *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x50) * param_4;
              if (param_4 < 0.0) {
                param_4 = 0.0;
              }
              FUN_038ea5f0(param_4,lVar4,0);
              FUN_038ea678(param_6,lVar4,0);
              FUN_038eae00(DAT_00b5521c,lVar4,0);
              FUN_038eb260(lVar4,1,0);
              FUN_038eb05c(lVar4,2,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40),0);
              FUN_038eb0b0(0,lVar4,0);
              FUN_038ea808(lVar4,param_7,0);
              FUN_038eb0fc(0,lVar4,0);
              FUN_038eae88(lVar4,param_9 & 1,0);
              FUN_038eb184(lVar4,0,0);
              if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
                FUN_038eb1c8(*(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x58),lVar4,0);
                if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
                  FUN_038eb214(*(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x5c),lVar4,0);
                  uVar8 = FUN_030c766c();
                  FUN_038ea84c(lVar4,uVar8,0);
                  fVar12 = (float)FUN_03925ca4(0);
                  if (param_7 != 0) {
                    fVar13 = (float)FUN_038e9914(param_7,0);
                    *(float *)(lVar7 + 0x48) = fVar12 + fVar13 + fVar15;
                    uVar11 = FUN_038ea5b4(lVar4,0);
                    *(undefined4 *)(lVar7 + 0x58) = uVar11;
                    *(undefined4 *)(lVar7 + 0x38) = 0;
                    *(undefined8 *)(lVar7 + 0x70) = 0;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x70),0);
                    *(undefined8 *)(lVar7 + 0x88) = 0;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar7 + 0x88),0);
                    if (param_8 == 1) {
                      lVar6 = *(long *)puVar2;
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar6 = *(long *)puVar2;
                      }
                      if ((**(long **)(lVar6 + 0xb8) == 0) ||
                         (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x80), lVar6 == 0))
                      goto LAB_030cac08;
                      FUN_028999ec(lVar6,lVar7,*(undefined8 *)StringLiteral_13240);
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar5 = FUN_0391f968(lVar9,0,0);
                    if ((uVar5 & 1) != 0) {
                      if (lVar9 == 0) goto LAB_030cac08;
                      *(undefined1 *)(lVar9 + 0x20) = 0;
                    }
                    lVar9 = FUN_0391c27c(lVar4,0);
                    if (lVar9 != 0) {
                      FUN_03928dd4(param_1,param_2,param_3,lVar9,0);
                      lVar9 = *(long *)puVar2;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar9 = *(long *)puVar2;
                      }
                      if (**(long **)(lVar9 + 0xb8) != 0) {
                        if (*(char *)(**(long **)(lVar9 + 0xb8) + 0x48) == '\0') {
LAB_030cabdc:
                          if ((float)uVar16 <= 0.0) {
                            FUN_038ea890(lVar4,0);
                          }
                          else {
                            FUN_038ea8d0(uVar16,lVar4,0);
                          }
                          return (ulong)local_48;
                        }
                        lVar9 = FUN_01b47fd0(*(undefined8 *)
                                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__
                                             ,0xb);
                        if (lVar9 != 0) {
                          if (*(int *)(lVar9 + 0x18) != 0) {
                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)StringLiteral_13244;
                            thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x20));
                            uVar8 = FUN_0303de64(&local_48,0);
                            if (1 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x28) = uVar8;
                              thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x28),uVar8);
                              if (2 < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)StringLiteral_13245;
                                thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x30));
                                uVar8 = FUN_039230bc(param_7,0);
                                if (3 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                  thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x38),uVar8);
                                  if (4 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x40) =
                                         *(undefined8 *)StringLiteral_13241;
                                    thunk_FUN_01b4f09c();
                                    if (*(long *)(lVar7 + 0x30) == 0) goto LAB_030cac08;
                                    local_84 = FUN_038ea5b4(*(long *)(lVar7 + 0x30),0);
                                    uVar8 = FUN_03052638(&local_84,0);
                                    if (5 < *(uint *)(lVar9 + 0x18)) {
                                      *(undefined8 *)(lVar9 + 0x48) = uVar8;
                                      thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x48),uVar8);
                                      if (6 < *(uint *)(lVar9 + 0x18)) {
                                        *(undefined8 *)(lVar9 + 0x50) =
                                             *(undefined8 *)StringLiteral_13242;
                                        thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x50));
                                        uVar8 = FUN_03052638(&local_44,0);
                                        if (7 < *(uint *)(lVar9 + 0x18)) {
                                          *(undefined8 *)(lVar9 + 0x58) = uVar8;
                                          thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x58),uVar8);
                                          if (8 < *(uint *)(lVar9 + 0x18)) {
                                            *(undefined8 *)(lVar9 + 0x60) =
                                                 *(undefined8 *)StringLiteral_13243;
                                            thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x60));
                                            local_84 = FUN_03925ca4(0);
                                            uVar8 = FUN_03052638(&local_84,0);
                                            if (9 < *(uint *)(lVar9 + 0x18)) {
                                              *(undefined8 *)(lVar9 + 0x68) = uVar8;
                                              thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x68),uVar8)
                                              ;
                                              if (10 < *(uint *)(lVar9 + 0x18)) {
                                                *(undefined8 *)(lVar9 + 0x70) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_52__
                                                ;
                                                thunk_FUN_01b4f09c();
                                                uVar8 = FUN_02ee6e18(lVar9,0);
                                                if (*(int *)(*(long *)
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                                  + 0xe0) == 0) {
                                                  thunk_FUN_01ac7298(*(long *)
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                                  );
                                                }
                                                FUN_038f2acc(uVar8,0);
                                                uVar16 = (ulong)(uint)local_44;
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


