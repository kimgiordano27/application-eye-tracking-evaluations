/*
FUNCTION_NAME: FUN_07ed4bc8
ENTRY_POINT: 07ed4bc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_07ed4bc8(undefined4 param_1,float param_2,undefined4 param_3,float param_4,long param_5,
                 long param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  fVar13 = param_2;
  uVar16 = param_3;
  fVar15 = param_4;
  if ((DAT_0899ad7b & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488640);
    FUN_03a8a718(PTR_DAT_08494d30);
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(PTR_DAT_08493c30);
    FUN_03a8a718(Method_System_Collections_Concurrent_ConcurrentQueue<LayoutHandle>__ctor__);
    FUN_03a8a718(PTR_DAT_08493d20);
    FUN_03a8a718(PTR_DAT_08492790);
    FUN_03a8a718(PTR_DAT_084914d0);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<Expression,_Expression_ExtensionInfo>_TryGetValue__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
                );
    DAT_0899ad7b = 1;
  }
  puVar2 = Method_System_Collections_Concurrent_ConcurrentQueue<LayoutHandle>__ctor__;
  puVar1 = PTR_DAT_08493c30;
  if (param_6 == 0) {
    puVar7 = (undefined8 *)
             Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
    ;
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar7 = (undefined8 *)
               Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
      ;
    }
    goto LAB_07ed4f40;
  }
  plVar11 = (long *)(param_5 + 0x38);
  *plVar11 = param_6;
  thunk_FUN_03afed3c(plVar11,param_6);
  lVar12 = *plVar11;
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_064612a8(uVar5,param_5,*(undefined8 *)puVar2,0);
  if (lVar12 == 0) goto LAB_07ed577c;
  FUN_0446886c(lVar12,uVar5,0,*(undefined8 *)PTR_DAT_08494d30);
  if (*plVar11 == 0) goto LAB_07ed577c;
  lVar12 = FUN_07e05018(*plVar11,0);
  if (lVar12 == 0) goto LAB_07ed4e64;
  if ((*plVar11 == 0) || (plVar6 = (long *)FUN_07e05018(*plVar11,0), plVar6 == (long *)0x0))
  goto LAB_07ed577c;
  lVar12 = *plVar6;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08493d20) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_07ed4dac;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_08493d20,2);
LAB_07ed4dac:
  iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (iVar3 == 0) {
    lVar12 = FUN_07f4bff4(*plVar11,0);
    puVar1 = PTR_DAT_08486738;
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
    }
    uVar9 = FUN_07c9c218(lVar12,0,0);
    if ((uVar9 & 1) == 0) goto LAB_07ed4e64;
    if (lVar12 == 0) goto LAB_07ed577c;
    uVar5 = FUN_07f51400(lVar12,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar1);
    }
    uVar9 = FUN_07c9c218(uVar5,0,0);
    if ((uVar9 & 1) == 0) goto LAB_07ed4e64;
    lVar8 = FUN_07f51400(lVar12,0);
    if (lVar8 == 0) goto LAB_07ed577c;
    if (*(int *)(lVar8 + 0x30) != 1) goto LAB_07ed4e64;
    uVar5 = FUN_07f45640(lVar12,0);
  }
  else {
LAB_07ed4e64:
    if (*plVar11 == 0) goto LAB_07ed577c;
    uVar5 = FUN_07e10eac(*plVar11,0,0);
  }
  *(undefined8 *)(param_5 + 0x30) = uVar5;
  thunk_FUN_03afed3c();
  if (*(long *)(param_5 + 0x30) == 0) {
    puVar7 = (undefined8 *)
             Method_System_Runtime_CompilerServices_ConditionalWeakTable<Expression,_Expression_ExtensionInfo>_TryGetValue__
    ;
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar7 = (undefined8 *)
               Method_System_Runtime_CompilerServices_ConditionalWeakTable<Expression,_Expression_ExtensionInfo>_TryGetValue__
      ;
    }
LAB_07ed4f40:
    FUN_07c4fb40(*puVar7,0);
    return;
  }
  FUN_07e102a4(*(long *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x18),0);
  if (*(long *)(param_5 + 0x18) != 0) {
    plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
    if (*(long *)(param_5 + 0x30) != 0) {
      FUN_07e052e8(*(long *)(param_5 + 0x30),0);
      auVar18 = FUN_07e25028(0);
      puVar1 = PTR_DAT_08492790;
      if (plVar6 != (long *)0x0) {
        lVar12 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08492790) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0x43) * 0x10 + 0x138);
              goto LAB_07ed4f7c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)PTR_DAT_08492790,0x43);
LAB_07ed4f7c:
        (*(code *)*puVar7)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar7[1]);
        if (*(long *)(param_5 + 0x18) != 0) {
          plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
          if (*(long *)(param_5 + 0x30) != 0) {
            FUN_07e052e8(*(long *)(param_5 + 0x30),0);
            auVar18 = FUN_07e25028(fVar13,0);
            if (plVar6 != (long *)0x0) {
              lVar12 = *plVar6;
              uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                    puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0x6f) * 0x10 + 0x138);
                    goto LAB_07ed5020;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x6f);
LAB_07ed5020:
              (*(code *)*puVar7)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar7[1]);
              if (*(long *)(param_5 + 0x18) != 0) {
                plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
                if (*(long *)(param_5 + 0x30) != 0) {
                  FUN_07e052e8(*(long *)(param_5 + 0x30),0);
                  auVar18 = FUN_07e25028(uVar16,0);
                  if (plVar6 != (long *)0x0) {
                    lVar12 = *plVar6;
                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    if (uVar9 != 0) {
                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0xa7) * 0x10 + 0x138);
                          goto LAB_07ed50c4;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0xa7);
LAB_07ed50c4:
                    (*(code *)*puVar7)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar7[1]);
                    if (*(long *)(param_5 + 0x18) != 0) {
                      plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
                      if (*(long *)(param_5 + 0x30) != 0) {
                        FUN_07e052e8(*(long *)(param_5 + 0x30),0);
                        auVar18 = FUN_07e25028(fVar15,0);
                        if (plVar6 != (long *)0x0) {
                          lVar12 = *plVar6;
                          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                          if (uVar9 != 0) {
                            piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                puVar7 = (undefined8 *)
                                         (lVar12 + (long)(*piVar10 + 0x3f) * 0x10 + 0x138);
                                goto LAB_07ed5168;
                              }
                              uVar9 = uVar9 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar9 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x3f);
LAB_07ed5168:
                          (*(code *)*puVar7)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,
                                             puVar7[1]);
                          if (*(long *)(param_5 + 0x18) != 0) {
                            plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
                            if (*plVar11 != 0) {
                              uVar5 = FUN_07dfdfd8(*plVar11,0);
                              uVar5 = FUN_07f6a05c(uVar5,0);
                              auVar18 = FUN_07e2504c(uVar5,0);
                              if (plVar6 != (long *)0x0) {
                                lVar12 = *plVar6;
                                uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                if (uVar9 != 0) {
                                  piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                      puVar7 = (undefined8 *)
                                               (lVar12 + (long)(*piVar10 + 0x3d) * 0x10 + 0x138);
                                      goto LAB_07ed5210;
                                    }
                                    uVar9 = uVar9 - 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar9 != 0);
                                }
                                puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,*(long *)puVar1,0x3d);
LAB_07ed5210:
                                (*(code *)*puVar7)(plVar6,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,
                                                   puVar7[1]);
                                if (*(long *)(param_5 + 0x18) != 0) {
                                  plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
                                  if (*plVar11 != 0) {
                                    uVar5 = FUN_07dfdfd8(*plVar11,0);
                                    uVar5 = FUN_07f6e614(uVar5,0);
                                    auVar18 = FUN_07e24938(uVar5,0);
                                    if (plVar6 != (long *)0x0) {
                                      lVar12 = *plVar6;
                                      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                      if (uVar9 != 0) {
                                        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                            puVar7 = (undefined8 *)
                                                     (lVar12 + (long)(*piVar10 + 0x81) * 0x10 +
                                                     0x138);
                                            goto LAB_07ed52b8;
                                          }
                                          uVar9 = uVar9 - 1;
                                          piVar10 = piVar10 + 4;
                                        } while (uVar9 != 0);
                                      }
                                      puVar7 = (undefined8 *)
                                               FUN_03ac43c4(plVar6,*(long *)puVar1,0x81);
LAB_07ed52b8:
                                      (*(code *)*puVar7)(plVar6,auVar18._0_8_,auVar18._8_8_,
                                                         puVar7[1]);
                                      if (*(long *)(param_5 + 0x18) != 0) {
                                        plVar6 = (long *)FUN_07e05b1c(*(long *)(param_5 + 0x18),0);
                                        if (*plVar11 != 0) {
                                          uVar5 = FUN_07dfdfd8(*plVar11,0);
                                          auVar18 = FUN_07f6e664(uVar5,0);
                                          FUN_07e24c9c(&local_a8,auVar18._0_8_,auVar18._8_8_,0);
                                          if (plVar6 != (long *)0x0) {
                                            lVar12 = *plVar6;
                                            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                            if (uVar9 != 0) {
                                              piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                                                  puVar7 = (undefined8 *)
                                                           (lVar12 + (long)(*piVar10 + 0x83) * 0x10
                                                           + 0x138);
                                                  goto 
                                                  UnityEngine_XR_InputDevices__TryGetFeatureValue_Vector3f_Injected
                                                  ;
                                                }
                                                uVar9 = uVar9 - 1;
                                                piVar10 = piVar10 + 4;
                                              } while (uVar9 != 0);
                                            }
                                            puVar7 = (undefined8 *)
                                                     FUN_03ac43c4(plVar6,*(long *)puVar1,0x83);
UnityEngine_XR_InputDevices__TryGetFeatureValue_Vector3f_Injected:
                                            uStack_88 = uStack_a0;
                                            local_90 = local_a8;
                                            local_80 = local_98;
                                            (*(code *)*puVar7)(plVar6,&local_90,puVar7[1]);
                                            fVar13 = (float)
                                                  UnityEngine_UIElements_PointerCaptureHelper__ShouldSendCompatibilityMouseEvents
                                                            (param_1,*(undefined8 *)(param_5 + 0x30)
                                                             ,0);
                                            if (*(long *)(param_5 + 0x30) != 0) {
                                              fVar15 = param_2;
                                              uVar16 = param_3;
                                              fVar17 = param_4;
                                              FUN_07e052e8(*(long *)(param_5 + 0x30),0);
                                              *(float *)(param_5 + 0x58) =
                                                   (param_2 + param_4) - fVar15;
                                              if (*(long *)(param_5 + 0x30) != 0) {
                                                fVar14 = (float)FUN_07e052e8(*(long *)(param_5 +
                                                                                      0x30),0);
                                                *(float *)(param_5 + 0x5c) = fVar13 - fVar14;
                                                if (*(long *)(param_5 + 0x20) != 0) {
                                                  plVar11 = (long *)FUN_07e05b1c(*(long *)(param_5 +
                                                                                          0x20),0);
                                                  auVar18 = FUN_07e25028(*(undefined4 *)
                                                                          (param_5 + 0x5c),0);
                                                  if (plVar11 != (long *)0x0) {
                                                    lVar12 = *plVar11;
                                                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                    if (uVar9 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)puVar1) {
                                                          puVar7 = (undefined8 *)
                                                                   (lVar12 + (long)(*piVar10 + 0x43)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_07ed546c;
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar9 != 0);
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_03ac43c4(plVar11,*(long *)puVar1,
                                                                          0x43);
LAB_07ed546c:
                                                    (*(code *)*puVar7)(plVar11,auVar18._0_8_,
                                                                       auVar18._8_8_ & 0xffffffff,
                                                                       puVar7[1]);
                                                    if (*(long *)(param_5 + 0x20) != 0) {
                                                      plVar11 = (long *)FUN_07e05b1c(*(long *)(
                                                  param_5 + 0x20),0);
                                                  auVar18 = FUN_07e25028(*(undefined4 *)
                                                                          (param_5 + 0x58),0);
                                                  if (plVar11 != (long *)0x0) {
                                                    lVar12 = *plVar11;
                                                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                    if (uVar9 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)puVar1) {
                                                          puVar7 = (undefined8 *)
                                                                   (lVar12 + (long)(*piVar10 + 0x6f)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_07ed54fc;
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar9 != 0);
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_03ac43c4(plVar11,*(long *)puVar1,
                                                                          0x6f);
LAB_07ed54fc:
                                                    (*(code *)*puVar7)(plVar11,auVar18._0_8_,
                                                                       auVar18._8_8_ & 0xffffffff,
                                                                       puVar7[1]);
                                                    if (*(long *)(param_5 + 0x20) != 0) {
                                                      plVar11 = (long *)FUN_07e05b1c(*(long *)(
                                                  param_5 + 0x20),0);
                                                  uVar5 = FUN_07e22840(0);
                                                  auVar18 = FUN_07e2504c(uVar5,0);
                                                  if (plVar11 != (long *)0x0) {
                                                    lVar12 = *plVar11;
                                                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                    if (uVar9 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)puVar1) {
                                                          puVar7 = (undefined8 *)
                                                                   (lVar12 + (long)(*piVar10 + 0x4f)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_07ed5590;
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar9 != 0);
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_03ac43c4(plVar11,*(long *)puVar1,
                                                                          0x4f);
LAB_07ed5590:
                                                    (*(code *)*puVar7)(plVar11,auVar18._0_8_,
                                                                       auVar18._8_8_ & 0xffffffff,
                                                                       puVar7[1]);
                                                    if (*(long *)(param_5 + 0x20) != 0) {
                                                      plVar11 = (long *)FUN_07e05b1c(*(long *)(
                                                  param_5 + 0x20),0);
                                                  uVar5 = FUN_07e22840(0);
                                                  auVar18 = FUN_07e2504c(uVar5,0);
                                                  if (plVar11 != (long *)0x0) {
                                                    lVar12 = *plVar11;
                                                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                    if (uVar9 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)puVar1) {
                                                          puVar7 = (undefined8 *)
                                                                   (lVar12 + (long)(*piVar10 + 0x51)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_07ed5624;
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar9 != 0);
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_03ac43c4(plVar11,*(long *)puVar1,
                                                                          0x51);
LAB_07ed5624:
                                                    (*(code *)*puVar7)(plVar11,auVar18._0_8_,
                                                                       auVar18._8_8_ & 0xffffffff,
                                                                       puVar7[1]);
                                                    if ((param_7 & 1) == 0) {
                                                      fVar13 = (float)FUN_07c54cf0(0);
                                                      param_2 = fVar15;
                                                      param_3 = uVar16;
                                                      param_4 = fVar17;
                                                    }
                                                    if (param_5 != 0) {
                                                      *(float *)(param_5 + 0x40) = fVar13;
                                                      *(float *)(param_5 + 0x44) = param_2;
                                                      *(undefined4 *)(param_5 + 0x48) = param_3;
                                                      *(float *)(param_5 + 0x4c) = param_4;
                                                      if (*(long *)(param_5 + 0x18) != 0) {
                                                        plVar11 = (long *)FUN_07e120c0(*(long *)(
                                                  param_5 + 0x18),0);
                                                  plVar6 = *(long **)(param_5 + 0x28);
                                                  if (plVar6 != (long *)0x0) {
                                                    plVar6 = (long *)(**(code **)(*plVar6 + 0x988))
                                                                               (plVar6,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x990));
                                                  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                              PTR_DAT_08488640);
                                                  if ((plVar6 != (long *)0x0) &&
                                                     (FUN_066b5934(uVar5,plVar6,
                                                                   *(undefined8 *)(*plVar6 + 0x270),
                                                                   0), plVar11 != (long *)0x0)) {
                                                    lVar12 = *plVar11;
                                                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                                                    if (uVar9 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)PTR_DAT_084914d0) {
                                                          puVar7 = (undefined8 *)
                                                                   (lVar12 + (long)(*piVar10 + 1) *
                                                                             0x10 + 0x138);
                                                          goto LAB_07ed5720;
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar9 != 0);
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_03ac43c4(plVar11,*(long *)
                                                  PTR_DAT_084914d0,1);
LAB_07ed5720:
                                                  (*(code *)*puVar7)(plVar11,uVar5,puVar7[1]);
                                                  *(undefined1 *)(param_5 + 0x65) = 0;
                                                  FUN_07ed5780(param_5);
                                                  uVar4 = FUN_07e080d8(param_6,0);
                                                  FUN_07e080e0(param_6,uVar4 | 1,0);
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
      }
    }
  }
LAB_07ed577c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


