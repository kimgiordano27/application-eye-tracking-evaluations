/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_num_web_threads_set
ENTRY_POINT: 07885d78
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07886788) */
/* WARNING: Removing unreachable block (ram,0x0788678c) */
/* WARNING: Removing unreachable block (ram,0x07886abc) */
/* WARNING: Removing unreachable block (ram,0x07886818) */
/* WARNING: Removing unreachable block (ram,0x07886c64) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_num_web_threads_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long lVar12;
  long lVar13;
  long in_x9;
  long in_x10;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  ulong in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 *in_stack_00000108;
  ulong in_stack_00000110;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 *in_stack_00000138;
  ulong in_stack_00000140;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  
  piVar14 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar14 + -2) == param_3) {
      puVar8 = (undefined8 *)(param_1 + (long)(*piVar14 + 7) * 0x10 + 0x138);
      goto LAB_07885db4;
    }
    in_x9 = in_x9 + -1;
    piVar14 = piVar14 + 4;
  } while (in_x9 != 0);
  puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_07885db4:
  _in_stack_00000160 = (*(code *)*puVar8)();
  puVar1 = System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo;
  if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<IMetric>_TypeInfo + 0xe4) ==
      0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = FUN_0584b040(&stack0x00000160,*(undefined8 *)System_IObserver<InputEventPtr>_TypeInfo);
  if ((uVar9 & 1) == 0) {
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 7) * 0x10 + 0x138);
          goto LAB_07885e64;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_07885e64:
    auVar17 = (*(code *)*puVar8)();
    _in_stack_00000160 = auVar17;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_0584b0bc(&stack0x00000160,*(undefined8 *)System_IObservable<InputEventPtr>_TypeInfo)
    ;
    if ((uVar9 & 1) != 0) {
      plVar10 = (long *)(unaff_x24 + 0x50);
      if (*plVar10 == 0) {
        lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848af28);
        FUN_05f9f7c4(lVar12,*(undefined8 *)PTR_DAT_0848af20);
        *plVar10 = lVar12;
        thunk_FUN_03afed3c(plVar10,lVar12);
      }
      lVar12 = *unaff_x25;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 7) * 0x10 + 0x138);
            goto LAB_07885f30;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_07885f30:
      auVar17 = (*(code *)*puVar8)();
      lVar12 = *(long *)puVar1;
      _in_stack_00000160 = auVar17;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar12);
      }
      if (in_stack_00000160 == 0) goto LAB_07886aac;
      FUN_05f6ec70(&stack0x00000030,in_stack_00000160,
                   *(undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<NetworkClient>_TypeInfo);
      puVar5 = System_Collections_Generic_IReadOnlyCollection<Vector2>_TypeInfo;
      puVar4 = System_Collections_Generic_IReadOnlyCollection<RuntimeElement>_TypeInfo;
      puVar3 = System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo;
      puVar2 = System_Collections_Generic_IReadOnlyCollection<IResettable>_TypeInfo;
      puVar1 = 
      System_Collections_Generic_IReadOnlyCollection<KeyValuePair<ulong,_NetworkClient>>_TypeInfo;
      in_stack_00000138 = in_stack_00000038;
      in_stack_00000130 = in_stack_00000030;
      in_stack_00000148 = in_stack_00000048;
      in_stack_00000140 = in_stack_00000040;
      in_stack_00000038 = &stack0x00000130;
      in_stack_00000158 = in_stack_00000058;
      in_stack_00000150 = in_stack_00000050;
      in_stack_00000030 = 0;
      while (uVar11 = FUN_06289248(&stack0x00000130,*(undefined8 *)puVar5),
            uVar16 = in_stack_00000150, lVar12 = in_stack_00000148, uVar9 = in_stack_00000140,
            (uVar11 & 1) != 0) {
        in_stack_00000120 = in_stack_00000148;
        in_stack_00000128 = in_stack_00000150;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar11 = FUN_0584b040(&stack0x00000120,*(undefined8 *)puVar1);
        lVar13 = *plVar10;
        if ((uVar11 & 1) == 0) {
          in_stack_00000120 = lVar12;
          in_stack_00000128 = uVar16;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05fa052c(lVar13,uVar9,in_stack_00000120,*(undefined8 *)puVar4);
        }
        else {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05fa1a5c(lVar13,uVar9,*(undefined8 *)puVar3);
        }
      }
      FUN_06289384(&stack0x00000130,
                   *(undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<SortColumnDescription>_TypeInfo);
      unaff_x26 = (long *)PTR_DAT_0848b5c8;
    }
  }
  else if (*(long *)(unaff_x24 + 0x50) != 0) {
    FUN_05fa06c8(*(long *)(unaff_x24 + 0x50),
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
  }
  lVar12 = *unaff_x25;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
        goto LAB_078860b4;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,8);
LAB_078860b4:
  (*(code *)*puVar8)(unaff_x25,puVar8[1]);
  if ((extraout_x1 & 0xff) != 0) {
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_07886118;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,8);
LAB_07886118:
    lVar12 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    puVar1 = System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo;
    lVar13 = *(long *)System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar13);
      lVar13 = *(long *)puVar1;
    }
    puVar8 = *(undefined8 **)(lVar13 + 0xb8);
    lVar15 = puVar8[1];
    if (lVar15 == 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar13);
        puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar16 = *puVar8;
      lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084895f8);
      FUN_05d14b18(lVar15,uVar16,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyList<IMetric>_TypeInfo,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar10 = lVar15;
      thunk_FUN_03afed3c(plVar10,lVar15);
    }
    if (lVar12 == 0) goto LAB_07886aac;
    FUN_04d8dba4(lVar12,lVar15,*(undefined8 *)PTR_DAT_08489610);
    FUN_04d8cc6c(&stack0x00000030,lVar12,*(undefined8 *)PTR_DAT_0848c858);
    puVar2 = Unity_Services_Vivox_IReadOnlyDictionary<string,_IParticipant>_TypeInfo;
    puVar1 = PTR_DAT_0848c848;
    in_stack_00000108 = in_stack_00000038;
    in_stack_00000100 = in_stack_00000030;
    in_stack_00000110 = in_stack_00000040;
    in_stack_00000030 = 0;
    in_stack_00000038 = &stack0x00000100;
    while (uVar9 = FUN_061ac870(&stack0x00000100,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de9d78(*(long *)(unaff_x24 + 0x48),in_stack_00000110 & 0xffffffff,*(undefined8 *)puVar2)
      ;
    }
    FUN_061ac86c(&stack0x00000100,*(undefined8 *)PTR_DAT_0848c840);
  }
  lVar12 = *unaff_x25;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
        goto LAB_07886298;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,9);
LAB_07886298:
  (*(code *)*puVar8)(unaff_x25,puVar8[1]);
  if ((extraout_x1_00 & 0xff) != 0) {
    plVar10 = (long *)(unaff_x24 + 0x48);
    if (*plVar10 == 0) {
      lVar12 = *unaff_x25;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_07886308;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,9);
LAB_07886308:
      lVar12 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
      if (lVar12 == 0) goto LAB_07886aac;
      uVar7 = *(undefined4 *)(lVar12 + 0x18);
      lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_IReadOnlyList<IEventMetric>_TypeInfo);
      FUN_04de7dc0(lVar12,uVar7,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyList<byte>_TypeInfo);
      *plVar10 = lVar12;
      thunk_FUN_03afed3c(plVar10,lVar12);
    }
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_078863a4;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,9);
LAB_078863a4:
    lVar12 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    if (lVar12 == 0) goto LAB_07886aac;
    FUN_04dac170(&stack0x00000030,lVar12,
                 *(undefined8 *)
                  Unity_Services_Vivox_IReadOnlyDictionary<ChannelId,_IChannelSession>_TypeInfo);
    puVar2 = Unity_Services_Vivox_IReadOnlyDictionary<string,_IAudioDevice>_TypeInfo;
    puVar1 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo;
    in_stack_000000e8 = in_stack_00000038;
    in_stack_000000e0 = in_stack_00000030;
    in_stack_000000f8 = in_stack_00000048;
    in_stack_000000f0 = in_stack_00000040;
    in_stack_00000030 = 0;
    in_stack_00000038 = &stack0x000000e0;
    while (uVar9 = FUN_061b6ea0(&stack0x000000e0,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
      if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de937c(*plVar10,in_stack_000000f0 & 0xffffffff,in_stack_000000f8,*(undefined8 *)puVar2);
    }
    FUN_061b6e9c(&stack0x000000e0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
  }
  lVar12 = *unaff_x25;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
        goto LAB_0788647c;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,10);
LAB_0788647c:
  (*(code *)*puVar8)(unaff_x25,puVar8[1]);
  if ((extraout_x1_01 & 0xff) != 0) {
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
          goto LAB_078864e0;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,10);
LAB_078864e0:
    lVar12 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    if (lVar12 == 0) {
LAB_07886aac:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05ed172c(&stack0x00000030,lVar12,
                 *(undefined8 *)
                  System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
    puVar6 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
    puVar5 = System_Collections_Generic_IReadOnlyCollection<RealtimeModel>_TypeInfo;
    puVar4 = System_Collections_Generic_IReadOnlyCollection<Realtime>_TypeInfo;
    puVar3 = System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo;
    puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
    puVar1 = 
    System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_000000c8 = in_stack_00000048;
    in_stack_000000c0 = in_stack_00000040;
    in_stack_000000d0 = in_stack_00000050;
    while (uVar9 = FUN_062727f4(&stack0x000000b0,
                                *(undefined8 *)
                                 System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo
                               ), lVar12 = in_stack_000000c8, (uVar9 & 1) != 0) {
      if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar13 = FUN_04de82e0(*(long *)(unaff_x24 + 0x48),*(undefined4 *)(in_stack_000000c8 + 0x10),
                            *(undefined8 *)
                             System_Collections_Generic_IReadOnlyList<HDProbe>_TypeInfo);
      if (*(char *)(lVar12 + 0x20) != '\0') {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar12 + 0x18);
        thunk_FUN_03afed3c();
      }
      if (*(char *)(lVar12 + 0x30) != '\0') {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(lVar12 + 0x28);
      }
      in_stack_000000a8 = *(undefined8 *)(lVar12 + 0x40);
      in_stack_000000a0 = *(long *)(lVar12 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_0584b040(&stack0x000000a0,
                           *(undefined8 *)System_IObserver<InputRemoting_Message>_TypeInfo);
      if ((uVar9 & 1) == 0) {
        in_stack_000000a8 = *(undefined8 *)(lVar12 + 0x40);
        in_stack_000000a0 = *(long *)(lVar12 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar9 = FUN_0584b0bc(&stack0x000000a0,
                             *(undefined8 *)
                              UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
        if ((uVar9 & 1) != 0) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          plVar10 = (long *)(lVar13 + 0x28);
          if (*plVar10 == 0) {
            lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ae00);
            FUN_05f9f7c4(lVar13,*(undefined8 *)PTR_DAT_0848adf8);
            *plVar10 = lVar13;
            thunk_FUN_03afed3c(plVar10,lVar13);
          }
          in_stack_000000a8 = *(undefined8 *)(lVar12 + 0x40);
          in_stack_000000a0 = *(long *)(lVar12 + 0x38);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          if (in_stack_000000a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6ec70(&stack0x00000030,in_stack_000000a0,
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000030 = 0;
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000090 = in_stack_00000050;
          in_stack_00000038 = &stack0x00000070;
          while (uVar11 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar6),
                uVar16 = in_stack_00000090, lVar12 = in_stack_00000088, uVar9 = in_stack_00000080,
                (uVar11 & 1) != 0) {
            in_stack_00000060 = in_stack_00000088;
            in_stack_00000068 = in_stack_00000090;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar11 = FUN_0584b040(&stack0x00000060,*(undefined8 *)puVar1);
            lVar13 = *plVar10;
            if ((uVar11 & 1) == 0) {
              in_stack_00000060 = lVar12;
              in_stack_00000068 = uVar16;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05fa052c(lVar13,uVar9,in_stack_00000060,*(undefined8 *)puVar5);
            }
            else {
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05fa1a5c(lVar13,uVar9,*(undefined8 *)puVar4);
            }
          }
          FUN_06289384(&stack0x00000070,
                       *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo)
          ;
        }
      }
      else {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar13 + 0x28) != 0) {
          FUN_05fa06c8(*(long *)(lVar13 + 0x28),
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
        }
      }
    }
    FUN_06272918(&stack0x000000b0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    unaff_x26 = (long *)PTR_DAT_0848b5c8;
  }
  lVar12 = *unaff_x25;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
        goto LAB_0788686c;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
LAB_0788686c:
  uVar9 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
  if ((uVar9 & 0xff00000000) != 0) {
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set:
    uVar7 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    *(undefined4 *)(unaff_x24 + 0x70) = uVar7;
  }
  lVar12 = *unaff_x25;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
        goto LAB_07886930;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886930:
  (*(code *)*puVar8)(unaff_x25,puVar8[1]);
  if ((extraout_x1_02 & 0xff) != 0) {
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
          goto LAB_07886994;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886994:
    uVar16 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    *(undefined8 *)(unaff_x24 + 0x58) = uVar16;
    thunk_FUN_03afed3c();
  }
  lVar12 = *unaff_x25;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
        goto LAB_07886a00;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a00:
  (*(code *)*puVar8)(unaff_x25,puVar8[1]);
  if ((extraout_x1_03 & 0xff) != 0) {
    lVar12 = *unaff_x25;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
          goto LAB_07886a64;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a64:
    uVar16 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    *(undefined8 *)(unaff_x24 + 0x68) = uVar16;
  }
  return;
}


