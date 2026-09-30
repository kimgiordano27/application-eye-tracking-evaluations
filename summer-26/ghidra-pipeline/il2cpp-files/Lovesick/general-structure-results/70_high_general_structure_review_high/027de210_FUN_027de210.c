/*
FUNCTION_NAME: FUN_027de210
ENTRY_POINT: 027de210
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_027de210(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,ulong param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  local_60 = param_1;
  fStack_5c = param_2;
  local_58 = param_3;
  uStack_54 = param_4;
  if ((DAT_03788964 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_2668);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_12083);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(Sirenix_Serialization_NodeInfo___TypeInfo);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_keyCode__);
    DAT_03788964 = 1;
  }
  puVar5 = StringLiteral_12083;
  puVar4 = StringLiteral_302;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  if (param_6 != 0) {
    *(long *)(param_5 + 0x38) = param_6;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    puVar5 = StringLiteral_2668;
    if (lVar7 != 0) {
      FUN_012c5834(lVar7,param_5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                   ,0);
      FUN_010bfbd4(param_6,lVar7,0,*(undefined8 *)puVar5);
      if (*(long *)(param_5 + 0x38) != 0) {
        lVar7 = FUN_02753354(*(long *)(param_5 + 0x38),0);
        *(long *)(param_5 + 0x30) = lVar7;
        if (lVar7 == 0) {
          iVar1 = *(int *)(*(long *)puVar4 + 0xe0);
          puVar9 = (undefined8 *)
                   UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo;
          goto joined_r0x027de3f0;
        }
        FUN_02751e94(lVar7,*(undefined8 *)(param_5 + 0x18),0);
        if (*(long *)(param_5 + 0x18) != 0) {
          plVar8 = (long *)FUN_0274adf4(*(long *)(param_5 + 0x18),0);
          if (*(long *)(param_5 + 0x30) != 0) {
            uVar14 = FUN_02748ec4(*(long *)(param_5 + 0x30),0);
            local_80 = CONCAT44(param_2,uVar14);
            local_78 = CONCAT44(param_4,param_3);
            FUN_02688390(&local_80,0);
            auVar20 = FUN_0281d9e8(0);
            puVar4 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar13 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x18) * 0x10 + 0x138);
                    goto LAB_027de430;
                  }
                  uVar13 = uVar13 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_00d59724(plVar8,*(long *)
                                            UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo,0x18
                                   );
LAB_027de430:
              (*(code *)*puVar9)(plVar8,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,puVar9[1]);
              if (*(long *)(param_5 + 0x18) != 0) {
                plVar8 = (long *)FUN_0274adf4(*(long *)(param_5 + 0x18),0);
                if (*(long *)(param_5 + 0x30) != 0) {
                  uVar14 = FUN_02748ec4(*(long *)(param_5 + 0x30),0);
                  local_80 = CONCAT44(param_2,uVar14);
                  local_78 = CONCAT44(param_4,param_3);
                  FUN_026883a0(&local_80,0);
                  auVar20 = FUN_0281d9e8(0);
                  if (plVar8 != (long *)0x0) {
                    lVar7 = *plVar8;
                    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    if (uVar13 != 0) {
                      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0x2a) * 0x10 + 0x138);
                          goto LAB_027de4e8;
                        }
                        uVar13 = uVar13 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0x2a);
LAB_027de4e8:
                    (*(code *)*puVar9)(plVar8,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,puVar9[1]);
                    if (*(long *)(param_5 + 0x18) != 0) {
                      plVar8 = (long *)FUN_0274adf4(*(long *)(param_5 + 0x18),0);
                      if (*(long *)(param_5 + 0x30) != 0) {
                        uVar14 = FUN_02748ec4(*(long *)(param_5 + 0x30),0);
                        local_80 = CONCAT44(param_2,uVar14);
                        local_78 = CONCAT44(param_4,param_3);
                        FUN_026884c4(&local_80,0);
                        auVar20 = FUN_0281d9e8(0);
                        if (plVar8 != (long *)0x0) {
                          lVar7 = *plVar8;
                          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                          if (uVar13 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                                puVar9 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0x31) * 0x10 + 0x138);
                                goto LAB_027de5a0;
                              }
                              uVar13 = uVar13 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar13 != 0);
                          }
                          puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0x31);
LAB_027de5a0:
                          (*(code *)*puVar9)(plVar8,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,
                                             puVar9[1]);
                          if (*(long *)(param_5 + 0x18) != 0) {
                            plVar8 = (long *)FUN_0274adf4(*(long *)(param_5 + 0x18),0);
                            if (*(long *)(param_5 + 0x30) != 0) {
                              uVar14 = FUN_02748ec4(*(long *)(param_5 + 0x30),0);
                              local_80 = CONCAT44(param_2,uVar14);
                              local_78 = CONCAT44(param_4,param_3);
                              FUN_026884d4(&local_80,0);
                              auVar20 = FUN_0281d9e8(0);
                              if (plVar8 != (long *)0x0) {
                                lVar7 = *plVar8;
                                uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                if (uVar13 != 0) {
                                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                                      puVar9 = (undefined8 *)
                                               (lVar7 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
                                      goto LAB_027de658;
                                    }
                                    uVar13 = uVar13 - 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar13 != 0);
                                }
                                puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0x17);
LAB_027de658:
                                (*(code *)*puVar9)(plVar8,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,
                                                   puVar9[1]);
                                fVar18 = fStack_5c;
                                uVar14 = local_58;
                                uVar19 = uStack_54;
                                uVar15 = FUN_0276ad78(local_60,*(undefined8 *)(param_5 + 0x30),0);
                                local_70 = CONCAT44(fVar18,uVar15);
                                local_68 = CONCAT44(uVar19,uVar14);
                                if (*(long *)(param_5 + 0x20) != 0) {
                                  plVar8 = (long *)FUN_0274adf4(*(long *)(param_5 + 0x20),0);
                                  fVar16 = (float)FUN_02688390(&local_70,0);
                                  if (*(long *)(param_5 + 0x30) != 0) {
                                    uVar15 = FUN_02748ec4(*(long *)(param_5 + 0x30),0);
                                    local_80 = CONCAT44(fVar18,uVar15);
                                    local_78 = CONCAT44(uVar19,uVar14);
                                    fVar17 = (float)FUN_02688390(&local_80,0);
                                    auVar20 = FUN_0281d9e8(fVar16 - fVar17,0);
                                    if (plVar8 != (long *)0x0) {
                                      lVar7 = *plVar8;
                                      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                      if (uVar13 != 0) {
                                        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                                            puVar9 = (undefined8 *)
                                                     (lVar7 + (long)(*piVar10 + 0x18) * 0x10 + 0x138
                                                     );
                                            goto LAB_027de73c;
                                          }
                                          uVar13 = uVar13 - 1;
                                          piVar10 = piVar10 + 4;
                                        } while (uVar13 != 0);
                                      }
                                      puVar9 = (undefined8 *)
                                               FUN_00d59724(plVar8,*(long *)puVar4,0x18);
LAB_027de73c:
                                      (*(code *)*puVar9)(plVar8,auVar20._0_8_,
                                                         auVar20._8_8_ & 0xffffffff,puVar9[1]);
                                      if (*(long *)(param_5 + 0x20) != 0) {
                                        plVar8 = (long *)FUN_0274adf4(*(long *)(param_5 + 0x20),0);
                                        fVar16 = (float)FUN_026883a0(&local_70,0);
                                        fVar17 = (float)FUN_026884d4(&local_60,0);
                                        if (*(long *)(param_5 + 0x30) != 0) {
                                          uVar15 = FUN_02748ec4(*(long *)(param_5 + 0x30),0);
                                          local_80 = CONCAT44(fVar18,uVar15);
                                          local_78 = CONCAT44(uVar19,uVar14);
                                          fVar18 = (float)FUN_026883a0(&local_80,0);
                                          fVar16 = fVar16 + fVar17;
                                          auVar20 = FUN_0281d9e8(fVar16 - fVar18,0);
                                          if (plVar8 != (long *)0x0) {
                                            lVar7 = *plVar8;
                                            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                            if (uVar13 != 0) {
                                              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                                                  puVar9 = (undefined8 *)
                                                           (lVar7 + (long)(*piVar10 + 0x2a) * 0x10 +
                                                           0x138);
                                                  goto LAB_027de818;
                                                }
                                                uVar13 = uVar13 - 1;
                                                piVar10 = piVar10 + 4;
                                              } while (uVar13 != 0);
                                            }
                                            puVar9 = (undefined8 *)
                                                     FUN_00d59724(plVar8,*(long *)puVar4,0x2a);
LAB_027de818:
                                            (*(code *)*puVar9)(plVar8,auVar20._0_8_,
                                                               auVar20._8_8_ & 0xffffffff,puVar9[1])
                                            ;
                                            uVar15 = local_60;
                                            fVar18 = fStack_5c;
                                            uVar2 = local_58;
                                            uVar3 = uStack_54;
                                            if ((param_7 & 1) == 0) {
                                              uVar15 = FUN_02688370(0);
                                              fVar18 = fVar16;
                                              uVar2 = uVar14;
                                              uVar3 = uVar19;
                                            }
                                            if (param_5 != 0) {
                                              *(undefined4 *)(param_5 + 0x40) = uVar15;
                                              *(float *)(param_5 + 0x44) = fVar18;
                                              *(undefined4 *)(param_5 + 0x48) = uVar2;
                                              *(undefined4 *)(param_5 + 0x4c) = uVar3;
                                              if (*(long *)(param_5 + 0x18) != 0) {
                                                plVar8 = (long *)FUN_02746b14(*(long *)(param_5 +
                                                                                       0x18),0);
                                                puVar4 = 
                                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__
                                                ;
                                                plVar11 = *(long **)(param_5 + 0x28);
                                                if (plVar11 != (long *)0x0) {
                                                  plVar11 = (long *)(**(code **)(*plVar11 + 0x738))
                                                                              (plVar11,*(undefined8
                                                                                         *)(*plVar11
                                                                                           + 0x740))
                                                  ;
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                                  if (((lVar7 != 0) && (plVar11 != (long *)0x0)) &&
                                                     (FUN_016f27fc(lVar7,plVar11,
                                                                   *(undefined8 *)(*plVar11 + 0x250)
                                                                   ,0), plVar8 != (long *)0x0)) {
                                                    lVar12 = *plVar8;
                                                    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                                    if (uVar13 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)
                                                  Sirenix_Serialization_NodeInfo___TypeInfo) {
                                                    puVar9 = (undefined8 *)
                                                             (lVar12 + (long)(*piVar10 + 1) * 0x10 +
                                                             0x138);
                                                    goto LAB_027de918;
                                                  }
                                                  uVar13 = uVar13 - 1;
                                                  piVar10 = piVar10 + 4;
                                                  } while (uVar13 != 0);
                                                  }
                                                  puVar9 = (undefined8 *)
                                                           FUN_00d59724(plVar8,*(long *)
                                                  Sirenix_Serialization_NodeInfo___TypeInfo,1);
LAB_027de918:
                                                  (*(code *)*puVar9)(plVar8,lVar7,puVar9[1]);
                                                  FUN_027de96c(param_5);
                                                  uVar6 = FUN_0274dcf8(param_6,0);
                                                  FUN_0274dd00(param_6,uVar6 | 1,0);
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
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar1 = *(int *)(*(long *)StringLiteral_302 + 0xe0);
  puVar9 = (undefined8 *)Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_keyCode__
  ;
joined_r0x027de3f0:
  if (iVar1 == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026610e4(*puVar9,0);
  return;
}


