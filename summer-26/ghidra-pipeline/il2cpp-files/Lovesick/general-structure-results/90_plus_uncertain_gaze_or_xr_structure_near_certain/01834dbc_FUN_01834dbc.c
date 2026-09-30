/*
FUNCTION_NAME: FUN_01834dbc
ENTRY_POINT: 01834dbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0183554c) */
/* WARNING: Removing unreachable block (ram,0x0183568c) */
/* WARNING: Removing unreachable block (ram,0x01835c8c) */
/* WARNING: Removing unreachable block (ram,0x01835d68) */

long * FUN_01834dbc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  
  if ((DAT_03779538 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8910);
    thunk_FUN_00d48444(StringLiteral_7740);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Renderer>__);
    thunk_FUN_00d48444(PTR_DAT_033f29f0);
    thunk_FUN_00d48444(PTR_DAT_033ec330);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_f32__);
    thunk_FUN_00d48444(System_Func<STMWaveData,_string>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__);
    thunk_FUN_00d48444(StringLiteral_8640);
    thunk_FUN_00d48444(StringLiteral_5975);
    thunk_FUN_00d48444(
                      Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_6922);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<Manifest>_GetAwaiter__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_03779538 = 1;
  }
  puVar4 = Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__;
  puVar2 = Method_System_Threading_Tasks_Task<Manifest>_GetAwaiter__;
  local_78._8_8_ = 0;
  local_68 = 0;
  local_78._0_8_ = 0;
  if (*(long *)(param_1 + 0x98) == 0) {
    plVar19 = (long *)FUN_00da4fb8(*(undefined8 *)System_Func<STMWaveData,_string>_TypeInfo,1);
    if (plVar19 != (long *)0x0) {
      lVar14 = *(long *)(param_1 + 0x90);
      if ((lVar14 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar9 == 0)) {
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((int)plVar19[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar19[4] = lVar14;
      plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (plVar10 != (long *)0x0) {
        FUN_01320f6c(plVar10,plVar19,*(undefined8 *)StringLiteral_6922);
        return plVar10;
      }
    }
    goto LAB_01835c80;
  }
  plVar19 = *(long **)(*(long *)(param_1 + 0x98) + 0x18);
  if (plVar19 != (long *)0x0) {
    lVar14 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01834fa4;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,0);
LAB_01834fa4:
    iVar7 = (*(code *)*puVar8)(plVar19,puVar8[1]);
    puVar5 = Method_System_Linq_Enumerable_Where<Renderer>__;
    puVar3 = 
    Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
    ;
    if (iVar7 != 0) {
      lVar14 = *(long *)(param_1 + 0x98);
      if (lVar14 != 0) {
        switch(*(undefined4 *)(lVar14 + 0x10)) {
        case 0:
          return *(long **)(lVar14 + 0x18);
        case 1:
          if (*(long *)(lVar14 + 0x28) == 0) {
            thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_25__);
            uVar11 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar12 = thunk_FUN_00d48444(
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_AddInteractor__
                                       );
            thunk_FUN_01802838(uVar11,uVar12,0);
            uVar12 = thunk_FUN_00d48444(System_Func<TuneTarget,_float>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,uVar12);
          }
          plVar19 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (plVar19 != (long *)0x0) {
            FUN_01320e50(plVar19,*(undefined8 *)puVar3);
            if ((*(long *)(param_1 + 0x98) != 0) &&
               (plVar10 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar10 != (long *)0x0)) {
              lVar9 = *plVar10;
              lVar14 = *(long *)puVar5;
              uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar14) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_018350fc;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar8 = (undefined8 *)FUN_00d59724(plVar10,lVar14,0);
LAB_018350fc:
              plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
              puVar6 = StringLiteral_8640;
              puVar5 = StringLiteral_5975;
              puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
              puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
              puVar2 = PTR_DAT_033f29f0;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              do {
                lVar9 = *plVar10;
                lVar14 = *(long *)puVar4;
                uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar14) {
                      puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_01835188;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar10,lVar14,0);
LAB_01835188:
                uVar17 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                if ((uVar17 & 1) == 0) {
                  if (plVar10 == (long *)0x0) {
                    return plVar19;
                  }
                  lVar14 = *plVar10;
                  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar17 == 0) goto LAB_018356d0;
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  goto LAB_018356b8;
                }
                lVar14 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_033ec330) {
                      puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_018351ec;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)PTR_DAT_033ec330,0);
LAB_018351ec:
                lVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                plVar20 = *(long **)(lVar14 + 0x80);
                if (plVar20 != (long *)0x0) {
                  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar9 = *plVar20;
                  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x28);
                  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_7740) {
                        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                        goto LAB_0183526c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_7740,7);
LAB_0183526c:
                  uVar17 = (*(code *)*puVar8)(plVar20,uVar11,&local_68,puVar8[1]);
                  uVar11 = local_68;
                  if ((uVar17 & 1) != 0) {
                    lVar9 = *plVar19;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                          goto LAB_018352e0;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,2);
LAB_018352e0:
                    (*(code *)*puVar8)(plVar19,uVar11,puVar8[1]);
                  }
                }
                plVar20 = *(long **)(lVar14 + 0x88);
                if (plVar20 != (long *)0x0) {
                  lVar9 = *plVar20;
                  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) ==
                          *(long *)Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__) {
                        puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_0183534c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar8 = (undefined8 *)
                           FUN_00d59724(plVar20,*(long *)
                                                 Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__
                                        ,0);
LAB_0183534c:
                  plVar20 = (long *)(*(code *)*puVar8)(plVar20,puVar8[1]);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
LAB_01835360:
                  lVar15 = *plVar20;
                  lVar9 = *(long *)puVar4;
                  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == lVar9) {
                        puVar8 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_018353ac;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724(plVar20,lVar9,0);
LAB_018353ac:
                  uVar17 = (*(code *)*puVar8)(plVar20,puVar8[1]);
                  if ((uVar17 & 1) != 0) {
                    lVar9 = *plVar20;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                          puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_01835408;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_00d59724(plVar20,*(long *)puVar2,0);
LAB_01835408:
                    auVar21 = (*(code *)*puVar8)(plVar20,puVar8[1]);
                    local_78 = auVar21;
                    if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x28);
                    uVar11 = FUN_00beca20(local_78,*(undefined8 *)puVar6);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar17 = FUN_0201fbe8(uVar12,uVar11,0);
                    if ((uVar17 & 1) != 0) {
                      uVar11 = FUN_00becb24(local_78,*(undefined8 *)puVar5);
                      lVar9 = *plVar19;
                      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                            goto LAB_018354c0;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,2);
LAB_018354c0:
                      (*(code *)*puVar8)(plVar19,uVar11,puVar8[1]);
                    }
                    goto LAB_01835360;
                  }
                  if (plVar20 != (long *)0x0) {
                    lVar9 = *plVar20;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_10310) {
                          puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_01835534;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_10310,0);
LAB_01835534:
                    (*(code *)*puVar8)(plVar20,puVar8[1]);
                  }
                }
                lVar9 = *plVar19;
                uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                      puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_018355ac;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,0);
LAB_018355ac:
                iVar7 = (*(code *)*puVar8)(plVar19,puVar8[1]);
                if (((iVar7 == 0) && (*(char *)(lVar14 + 0xa1) != '\0')) &&
                   (lVar14 = *(long *)(lVar14 + 0x90), lVar14 != 0)) {
                  lVar9 = *plVar19;
                  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_01835624;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,2);
LAB_01835624:
                  (*(code *)*puVar8)(plVar19,lVar14,puVar8[1]);
                }
              } while( true );
            }
          }
          break;
        case 2:
          plVar19 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (plVar19 != (long *)0x0) {
            FUN_01320e50(plVar19,*(undefined8 *)puVar3);
            if ((*(long *)(param_1 + 0x98) != 0) &&
               (plVar10 = *(long **)(*(long *)(param_1 + 0x98) + 0x18), plVar10 != (long *)0x0)) {
              lVar9 = *plVar10;
              lVar14 = *(long *)puVar5;
              uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar14) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_018356ec;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar8 = (undefined8 *)FUN_00d59724(plVar10,lVar14,0);
LAB_018356ec:
              plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
              puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_f32__;
              puVar2 = PTR_DAT_033ec330;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              do {
                lVar14 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                      puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_01835764;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,0);
LAB_01835764:
                uVar17 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                if ((uVar17 & 1) == 0) {
                  if (plVar10 == (long *)0x0) {
                    return plVar19;
                  }
                  lVar14 = *plVar10;
                  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar17 == 0) goto LAB_01835b98;
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  goto LAB_01835b80;
                }
                lVar14 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                      puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_018357c0;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_018357c0:
                lVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                plVar20 = *(long **)(lVar14 + 0x78);
                if (*(char *)(lVar14 + 0xa0) == '\0') {
                  if (plVar20 != (long *)0x0) {
                    lVar9 = *plVar20;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                          puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_0183596c;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_8910,0);
LAB_0183596c:
                    iVar7 = (*(code *)*puVar8)(plVar20,puVar8[1]);
                    if (0 < iVar7) {
                      plVar20 = *(long **)(lVar14 + 0x78);
                      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar9 = *plVar20;
                      lVar14 = *(long *)puVar4;
                      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == lVar14) {
                            puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_01835ad8;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_00d59724(plVar20,lVar14,0);
LAB_01835ad8:
                      uVar11 = (*(code *)*puVar8)(plVar20,0,puVar8[1]);
                      lVar14 = *plVar19;
                      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                            goto LAB_01835b44;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,2);
LAB_01835b44:
                      (*(code *)*puVar8)(plVar19,uVar11,puVar8[1]);
                    }
                  }
                }
                else {
                  if (plVar20 != (long *)0x0) {
                    lVar9 = *plVar20;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                          puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_01835884;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_8910,0);
LAB_01835884:
                    iVar7 = (*(code *)*puVar8)(plVar20,puVar8[1]);
                    if (0 < iVar7) {
                      plVar20 = *(long **)(lVar14 + 0x78);
                      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      lVar9 = *plVar20;
                      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                            puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_018358f4;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_8910,0);
LAB_018358f4:
                      iVar7 = (*(code *)*puVar8)(plVar20,puVar8[1]);
                      if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x30) + -1;
                      if (iVar1 < iVar7) {
                        plVar20 = *(long **)(lVar14 + 0x78);
                        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        lVar15 = *plVar20;
                        lVar9 = *(long *)puVar4;
                        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
                        if (uVar17 != 0) {
                          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == lVar9) {
                              puVar8 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                              goto LAB_018359d4;
                            }
                            uVar17 = uVar17 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar17 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_00d59724(plVar20,lVar9,0);
LAB_018359d4:
                        uVar11 = (*(code *)*puVar8)(plVar20,iVar1,puVar8[1]);
                        lVar9 = *plVar19;
                        uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                        if (uVar17 != 0) {
                          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                              goto LAB_01835a40;
                            }
                            uVar17 = uVar17 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar17 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,2);
LAB_01835a40:
                        (*(code *)*puVar8)(plVar19,uVar11,puVar8[1]);
                      }
                    }
                  }
                  if ((*(char *)(lVar14 + 0xa2) != '\0') &&
                     (lVar14 = *(long *)(lVar14 + 0x98), lVar14 != 0)) {
                    lVar9 = *plVar19;
                    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_8910) {
                          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                          goto LAB_01835ab8;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_8910,2);
LAB_01835ab8:
                    (*(code *)*puVar8)(plVar19,lVar14,puVar8[1]);
                  }
                }
              } while( true );
            }
          }
          break;
        case 3:
          goto switchD_01834fec_caseD_3;
        default:
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar11 = FUN_01731954(0);
          lVar14 = *(long *)(param_1 + 0x98);
          FUN_00ac2be8(lVar14);
          local_7c = *(undefined4 *)(lVar14 + 0x10);
          uVar12 = thunk_FUN_00d48444(StringLiteral_2432);
          uVar12 = thunk_FUN_00d61fa0(uVar12,&local_7c);
          uVar13 = thunk_FUN_00d48444(StringLiteral_7407);
          uVar11 = FUN_018651d4(uVar13,uVar11,uVar12,0);
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar12 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar13 = thunk_FUN_00d48444(Method_System_Net_Sockets_NetworkStream_Close__);
          FUN_016efd4c(uVar12,uVar13,uVar11,0);
          uVar11 = thunk_FUN_00d48444(System_Func<TuneTarget,_float>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar12,uVar11);
        }
      }
LAB_01835c80:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
switchD_01834fec_caseD_3:
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *(long *)puVar4;
  }
  return (long *)**(undefined8 **)(lVar14 + 0xb8);
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_01835b80:
    if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01835bb4;
    }
  }
LAB_01835b98:
  puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_10310,0);
LAB_01835bb4:
  pcVar16 = (code *)*puVar8;
  uVar11 = puVar8[1];
  goto LAB_01835bd4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_018356b8:
    if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01835bcc;
    }
  }
LAB_018356d0:
  puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_10310,0);
LAB_01835bcc:
  pcVar16 = (code *)*puVar8;
  uVar11 = puVar8[1];
LAB_01835bd4:
  (*pcVar16)(plVar10,uVar11);
  return plVar19;
}


