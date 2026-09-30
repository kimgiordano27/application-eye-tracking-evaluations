/*
FUNCTION_NAME: FUN_03e36a74
ENTRY_POINT: 03e36a74
PROGRAM: gunraiders-libil2cpp.so
SCORE: 129
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_03e36a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 local_90 [32];
  
  uVar9 = param_2;
  uVar15 = param_3;
  uVar16 = param_4;
  if ((DAT_045428ed & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fad8);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(StringLiteral_9908);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_IPlayer_TypeInfo);
    FUN_01c5d288(StringLiteral_9909);
    FUN_01c5d288(StringLiteral_9910);
    DAT_045428ed = 1;
  }
  puVar1 = OVRGLTFAccessor_TypeInfo;
  if (param_6 == 0) {
    puVar8 = (undefined8 *)StringLiteral_9910;
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      puVar8 = (undefined8 *)StringLiteral_9910;
    }
LAB_03e36c70:
    FUN_03d04168(*puVar8,0);
    return;
  }
  *(long *)(param_5 + 0x38) = param_6;
  puVar3 = StringLiteral_9908;
  puVar2 = OVREyeGaze_TypeInfo;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_02b1ee9c(uVar5,param_5,*(undefined8 *)puVar3,0);
  FUN_02305eac(param_6,uVar5,0,*(undefined8 *)puVar2);
  if (*(long *)(param_5 + 0x38) != 0) {
    lVar6 = FUN_03f1c734(*(long *)(param_5 + 0x38),0);
    *(long *)(param_5 + 0x30) = lVar6;
    if (lVar6 == 0) {
      puVar8 = (undefined8 *)StringLiteral_9909;
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar8 = (undefined8 *)StringLiteral_9909;
      }
      goto LAB_03e36c70;
    }
    FUN_03f1bbb8(lVar6,*(undefined8 *)(param_5 + 0x18),0);
    if (*(long *)(param_5 + 0x18) != 0) {
      plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0);
      if (*(long *)(param_5 + 0x30) != 0) {
        FUN_03f11ff8(*(long *)(param_5 + 0x30),0);
        auVar17 = FUN_03f24884(0);
        puVar1 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x19) * 0x10 + 0x138);
                goto LAB_03e36cac;
              }
              uVar12 = uVar12 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01c72498(plVar7,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x19
                               );
LAB_03e36cac:
          (*(code *)*puVar8)(plVar7,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,puVar8[1]);
          if (*(long *)(param_5 + 0x18) != 0) {
            plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0);
            if (*(long *)(param_5 + 0x30) != 0) {
              FUN_03f11ff8(*(long *)(param_5 + 0x30),0);
              auVar17 = FUN_03f24884(uVar9,0);
              if (plVar7 != (long *)0x0) {
                lVar6 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar12 != 0) {
                  piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                      puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x2d) * 0x10 + 0x138);
                      goto LAB_03e36d54;
                    }
                    uVar12 = uVar12 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar12 != 0);
                }
                puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x2d);
LAB_03e36d54:
                (*(code *)*puVar8)(plVar7,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,puVar8[1]);
                if (*(long *)(param_5 + 0x18) != 0) {
                  plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0);
                  if (*(long *)(param_5 + 0x30) != 0) {
                    FUN_03f11ff8(*(long *)(param_5 + 0x30),0);
                    auVar17 = FUN_03f24884(uVar15,0);
                    if (plVar7 != (long *)0x0) {
                      lVar6 = *plVar7;
                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar12 != 0) {
                        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x36) * 0x10 + 0x138);
                            goto LAB_03e36dfc;
                          }
                          uVar12 = uVar12 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x36);
LAB_03e36dfc:
                      (*(code *)*puVar8)(plVar7,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,puVar8[1]);
                      if (*(long *)(param_5 + 0x18) != 0) {
                        plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0);
                        if (*(long *)(param_5 + 0x30) != 0) {
                          FUN_03f11ff8(*(long *)(param_5 + 0x30),0);
                          auVar17 = FUN_03f24884(uVar16,0);
                          if (plVar7 != (long *)0x0) {
                            lVar6 = *plVar7;
                            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar12 != 0) {
                              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                  puVar8 = (undefined8 *)
                                           (lVar6 + (long)(*piVar10 + 0x18) * 0x10 + 0x138);
                                  goto LAB_03e36ea4;
                                }
                                uVar12 = uVar12 - 1;
                                piVar10 = piVar10 + 4;
                              } while (uVar12 != 0);
                            }
                            puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x18);
LAB_03e36ea4:
                            (*(code *)*puVar8)(plVar7,auVar17._0_8_,auVar17._8_8_ & 0xffffffff,
                                               puVar8[1]);
                            if (*(long *)(param_5 + 0x18) != 0) {
                              plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0);
                              if (*(long *)(param_5 + 0x38) != 0) {
                                uVar9 = FUN_03f06a14(*(long *)(param_5 + 0x38),0);
                                uVar9 = FUN_03eebcb0(uVar9,0);
                                auVar17 = FUN_03f248ac(uVar9,0);
                                if (plVar7 != (long *)0x0) {
                                  lVar6 = *plVar7;
                                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                  if (uVar12 != 0) {
                                    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                        puVar8 = (undefined8 *)
                                                 (lVar6 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
                                        goto LAB_03e36f50;
                                      }
                                      uVar12 = uVar12 - 1;
                                      piVar10 = piVar10 + 4;
                                    } while (uVar12 != 0);
                                  }
                                  puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x17);
LAB_03e36f50:
                                  (*(code *)*puVar8)(plVar7,auVar17._0_8_,auVar17._8_8_ & 0xffffffff
                                                     ,puVar8[1]);
                                  if (*(long *)(param_5 + 0x18) != 0) {
                                    plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0);
                                    if (*(long *)(param_5 + 0x38) != 0) {
                                      uVar9 = FUN_03f06a14(*(long *)(param_5 + 0x38),0);
                                      uVar9 = FUN_03eefa18(uVar9,0);
                                      auVar17 = FUN_03f24364(uVar9,0);
                                      if (plVar7 != (long *)0x0) {
                                        lVar6 = *plVar7;
                                        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                        if (uVar12 != 0) {
                                          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                              puVar8 = (undefined8 *)
                                                       (lVar6 + (long)(*piVar10 + 0x32) * 0x10 +
                                                       0x138);
                                              goto LAB_03e36ff8;
                                            }
                                            uVar12 = uVar12 - 1;
                                            piVar10 = piVar10 + 4;
                                          } while (uVar12 != 0);
                                        }
                                        puVar8 = (undefined8 *)
                                                 FUN_01c72498(plVar7,*(long *)puVar1,0x32);
LAB_03e36ff8:
                                        (*(code *)*puVar8)(plVar7,auVar17._0_8_,auVar17._8_8_,
                                                           puVar8[1]);
                                        if (*(long *)(param_5 + 0x18) != 0) {
                                          plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 + 0x18),0)
                                          ;
                                          if (*(long *)(param_5 + 0x38) != 0) {
                                            uVar9 = FUN_03f06a14(*(long *)(param_5 + 0x38),0);
                                            auVar17 = FUN_03eefa68(uVar9,0);
                                            FUN_03f24568(local_90,auVar17._0_8_,auVar17._8_8_,0);
                                            if (plVar7 != (long *)0x0) {
                                              lVar6 = *plVar7;
                                              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                              if (uVar12 != 0) {
                                                piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                                    puVar8 = (undefined8 *)
                                                             (lVar6 + (long)(*piVar10 + 0x33) * 0x10
                                                             + 0x138);
                                                    goto LAB_03e370bc;
                                                  }
                                                  uVar12 = uVar12 - 1;
                                                  piVar10 = piVar10 + 4;
                                                } while (uVar12 != 0);
                                              }
                                              puVar8 = (undefined8 *)
                                                       FUN_01c72498(plVar7,*(long *)puVar1,0x33);
LAB_03e370bc:
                                              (*(code *)*puVar8)(plVar7,local_90,puVar8[1]);
                                              uVar9 = param_2;
                                              uVar15 = param_3;
                                              uVar16 = param_4;
                                              fVar13 = (float)FUN_03e3ca5c(param_1,*(undefined8 *)
                                                                                    (param_5 + 0x30)
                                                                           ,0);
                                              if (*(long *)(param_5 + 0x20) != 0) {
                                                uVar5 = uVar9;
                                                plVar7 = (long *)FUN_03f0d9bc(*(long *)(param_5 +
                                                                                       0x20),0);
                                                if (*(long *)(param_5 + 0x30) != 0) {
                                                  fVar14 = (float)FUN_03f11ff8(*(long *)(param_5 +
                                                                                        0x30),0);
                                                  auVar17 = FUN_03f24884(fVar13 - fVar14,0);
                                                  if (plVar7 != (long *)0x0) {
                                                    lVar6 = *plVar7;
                                                    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                                    if (uVar12 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)puVar1) {
                                                          puVar8 = (undefined8 *)
                                                                   (lVar6 + (long)(*piVar10 + 0x19)
                                                                            * 0x10 + 0x138);
                                                          goto LAB_03e37198;
                                                        }
                                                        uVar12 = uVar12 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar12 != 0);
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_01c72498(plVar7,*(long *)puVar1,
                                                                          0x19);
LAB_03e37198:
                                                    (*(code *)*puVar8)(plVar7,auVar17._0_8_,
                                                                       auVar17._8_8_ & 0xffffffff,
                                                                       puVar8[1]);
                                                    if (*(long *)(param_5 + 0x20) != 0) {
                                                      plVar7 = (long *)FUN_03f0d9bc(*(long *)(
                                                  param_5 + 0x20),0);
                                                  if (*(long *)(param_5 + 0x30) != 0) {
                                                    FUN_03f11ff8(*(long *)(param_5 + 0x30),0);
                                                    auVar17 = FUN_03f24884(((float)param_4 +
                                                                           (float)uVar9) -
                                                                           (float)uVar5,0);
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar6 = *plVar7;
                                                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                                      if (uVar12 != 0) {
                                                        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar10 + -2) ==
                                                              *(long *)puVar1) {
                                                            puVar8 = (undefined8 *)
                                                                     (lVar6 + (long)(*piVar10 + 0x2d
                                                                                    ) * 0x10 + 0x138
                                                                     );
                                                            goto LAB_03e37244;
                                                          }
                                                          uVar12 = uVar12 - 1;
                                                          piVar10 = piVar10 + 4;
                                                        } while (uVar12 != 0);
                                                      }
                                                      puVar8 = (undefined8 *)
                                                               FUN_01c72498(plVar7,*(long *)puVar1,
                                                                            0x2d);
LAB_03e37244:
                                                      (*(code *)*puVar8)(plVar7,auVar17._0_8_,
                                                                         auVar17._8_8_ & 0xffffffff,
                                                                         puVar8[1]);
                                                      if ((param_7 & 1) == 0) {
                                                        param_1 = FUN_03d09084(0);
                                                        param_4 = uVar16;
                                                        param_3 = uVar15;
                                                        param_2 = uVar5;
                                                      }
                                                      if (param_5 != 0) {
                                                        *(int *)(param_5 + 0x40) = (int)param_1;
                                                        *(int *)(param_5 + 0x44) = (int)param_2;
                                                        *(int *)(param_5 + 0x48) = (int)param_3;
                                                        *(int *)(param_5 + 0x4c) = (int)param_4;
                                                        if (*(long *)(param_5 + 0x18) != 0) {
                                                          plVar7 = (long *)FUN_03f1d1f4(*(long *)(
                                                  param_5 + 0x18),0);
                                                  plVar11 = *(long **)(param_5 + 0x28);
                                                  if (plVar11 != (long *)0x0) {
                                                    plVar11 = (long *)(**(code **)(*plVar11 + 0x768)
                                                                      )(plVar11,*(undefined8 *)
                                                                                 (*plVar11 + 0x770))
                                                    ;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                PTR_DAT_0422fad8);
                                                    if ((plVar11 != (long *)0x0) &&
                                                       (FUN_03245f44(uVar9,plVar11,
                                                                     *(undefined8 *)
                                                                      (*plVar11 + 0x250),0),
                                                       plVar7 != (long *)0x0)) {
                                                      lVar6 = *plVar7;
                                                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                                      if (uVar12 != 0) {
                                                        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar10 + -2) ==
                                                              *(long *)
                                                  VoxelBusters_EssentialKit_IPlayer_TypeInfo) {
                                                    puVar8 = (undefined8 *)
                                                             (lVar6 + (long)(*piVar10 + 1) * 0x10 +
                                                             0x138);
                                                    goto LAB_03e37340;
                                                  }
                                                  uVar12 = uVar12 - 1;
                                                  piVar10 = piVar10 + 4;
                                                  } while (uVar12 != 0);
                                                  }
                                                  puVar8 = (undefined8 *)
                                                           FUN_01c72498(plVar7,*(long *)
                                                  VoxelBusters_EssentialKit_IPlayer_TypeInfo,1);
LAB_03e37340:
                                                  (*(code *)*puVar8)(plVar7,uVar9,puVar8[1]);
                                                  FUN_03e3739c(param_5);
                                                  uVar4 = FUN_03f14a58(param_6,0);
                                                  FUN_03f14a60(param_6,uVar4 | 1,0);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


