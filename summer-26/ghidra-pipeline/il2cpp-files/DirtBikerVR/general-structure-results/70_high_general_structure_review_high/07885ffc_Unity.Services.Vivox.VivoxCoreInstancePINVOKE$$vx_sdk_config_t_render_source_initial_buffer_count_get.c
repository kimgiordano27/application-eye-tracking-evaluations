/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_render_source_initial_buffer_count_get
ENTRY_POINT: 07885ffc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07886788) */
/* WARNING: Removing unreachable block (ram,0x0788678c) */
/* WARNING: Removing unreachable block (ram,0x07886abc) */
/* WARNING: Removing unreachable block (ram,0x07886818) */
/* WARNING: Removing unreachable block (ram,0x07886c64) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_render_source_initial_buffer_count_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar16;
  undefined8 unaff_x22;
  long lVar17;
  long unaff_x23;
  undefined8 uVar18;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *in_stack_00000010;
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
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  
  do {
    FUN_05fa1a5c(unaff_x23,unaff_x22,*unaff_x26);
    while( true ) {
      uVar9 = FUN_06289248(&stack0x00000130,*unaff_x19);
      uVar7 = in_stack_00000150;
      uVar18 = in_stack_00000148;
      unaff_x22 = in_stack_00000140;
      if ((uVar9 & 1) == 0) {
        FUN_06289384(&stack0x00000130,
                     *(undefined8 *)
                      System_Collections_Generic_IReadOnlyCollection<SortColumnDescription>_TypeInfo
                    );
        plVar16 = (long *)PTR_DAT_0848b5c8;
        lVar13 = *in_stack_00000010;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 == 0) goto LAB_07886094;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_0788607c;
      }
      in_stack_00000120 = in_stack_00000148;
      in_stack_00000128 = in_stack_00000150;
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_0584b040(&stack0x00000120,*unaff_x25);
      unaff_x23 = *unaff_x21;
      if ((uVar9 & 1) != 0) break;
      in_stack_00000120 = uVar18;
      in_stack_00000128 = uVar7;
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05fa052c(unaff_x23,unaff_x22,in_stack_00000120,*unaff_x27);
    }
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar15 = piVar15 + 4;
    if (uVar9 == 0) break;
LAB_0788607c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0848b5c8) {
      puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
      goto LAB_078860b4;
    }
  }
LAB_07886094:
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*(long *)PTR_DAT_0848b5c8,8);
LAB_078860b4:
  (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  if ((extraout_x1 & 0xff) != 0) {
    lVar13 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_07886118;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,8);
LAB_07886118:
    lVar13 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
    puVar1 = System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo;
    lVar14 = *(long *)System_Collections_Generic_IReadOnlyList<IResettable>_TypeInfo;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar14);
      lVar14 = *(long *)puVar1;
    }
    puVar10 = *(undefined8 **)(lVar14 + 0xb8);
    lVar17 = puVar10[1];
    if (lVar17 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar14);
        puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar18 = *puVar10;
      lVar17 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084895f8);
      FUN_05d14b18(lVar17,uVar18,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyList<IMetric>_TypeInfo,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar11 = lVar17;
      thunk_FUN_03afed3c(plVar11,lVar17);
    }
    if (lVar13 == 0) goto LAB_07886aac;
    FUN_04d8dba4(lVar13,lVar17,*(undefined8 *)PTR_DAT_08489610);
    FUN_04d8cc6c(&stack0x00000030,lVar13,*(undefined8 *)PTR_DAT_0848c858);
    puVar2 = Unity_Services_Vivox_IReadOnlyDictionary<string,_IParticipant>_TypeInfo;
    puVar1 = PTR_DAT_0848c848;
    in_stack_00000108 = in_stack_00000038;
    in_stack_00000100 = in_stack_00000030;
    in_stack_00000110 = in_stack_00000040;
    in_stack_00000030 = 0;
    in_stack_00000038 = &stack0x00000100;
    while (uVar9 = FUN_061ac870(&stack0x00000100,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de9d78(*(long *)(unaff_x20 + 0x48),in_stack_00000110 & 0xffffffff,*(undefined8 *)puVar2)
      ;
    }
    FUN_061ac86c(&stack0x00000100,*(undefined8 *)PTR_DAT_0848c840);
  }
  lVar13 = *in_stack_00000010;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar16) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
        goto LAB_07886298;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,9);
LAB_07886298:
  (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  if ((extraout_x1_00 & 0xff) != 0) {
    plVar11 = (long *)(unaff_x20 + 0x48);
    if (*plVar11 == 0) {
      lVar13 = *in_stack_00000010;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *plVar16) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
            goto LAB_07886308;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,9);
LAB_07886308:
      lVar13 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
      if (lVar13 == 0) goto LAB_07886aac;
      uVar8 = *(undefined4 *)(lVar13 + 0x18);
      lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                   System_Collections_Generic_IReadOnlyList<IEventMetric>_TypeInfo);
      FUN_04de7dc0(lVar13,uVar8,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyList<byte>_TypeInfo);
      *plVar11 = lVar13;
      thunk_FUN_03afed3c(plVar11,lVar13);
    }
    lVar13 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_078863a4;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,9);
LAB_078863a4:
    lVar13 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
    if (lVar13 == 0) goto LAB_07886aac;
    FUN_04dac170(&stack0x00000030,lVar13,
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
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de937c(*plVar11,in_stack_000000f0 & 0xffffffff,in_stack_000000f8,*(undefined8 *)puVar2);
    }
    FUN_061b6e9c(&stack0x000000e0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
  }
  lVar13 = *in_stack_00000010;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar16) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
        goto LAB_0788647c;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,10);
LAB_0788647c:
  (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  if ((extraout_x1_01 & 0xff) != 0) {
    lVar13 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
          goto LAB_078864e0;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,10);
LAB_078864e0:
    lVar13 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
    if (lVar13 == 0) {
LAB_07886aac:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05ed172c(&stack0x00000030,lVar13,
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
                               ), lVar13 = in_stack_000000c8, (uVar9 & 1) != 0) {
      if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar14 = FUN_04de82e0(*(long *)(unaff_x20 + 0x48),*(undefined4 *)(in_stack_000000c8 + 0x10),
                            *(undefined8 *)
                             System_Collections_Generic_IReadOnlyList<HDProbe>_TypeInfo);
      if (*(char *)(lVar13 + 0x20) != '\0') {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar13 + 0x18);
        thunk_FUN_03afed3c();
      }
      if (*(char *)(lVar13 + 0x30) != '\0') {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(lVar13 + 0x28);
      }
      in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x40);
      in_stack_000000a0 = *(long *)(lVar13 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar9 = FUN_0584b040(&stack0x000000a0,
                           *(undefined8 *)System_IObserver<InputRemoting_Message>_TypeInfo);
      if ((uVar9 & 1) == 0) {
        in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000000a0 = *(long *)(lVar13 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar9 = FUN_0584b0bc(&stack0x000000a0,
                             *(undefined8 *)
                              UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
        if ((uVar9 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          plVar16 = (long *)(lVar14 + 0x28);
          if (*plVar16 == 0) {
            lVar14 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ae00);
            FUN_05f9f7c4(lVar14,*(undefined8 *)PTR_DAT_0848adf8);
            *plVar16 = lVar14;
            thunk_FUN_03afed3c(plVar16,lVar14);
          }
          in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x40);
          in_stack_000000a0 = *(long *)(lVar13 + 0x38);
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
          while (uVar12 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar6),
                uVar18 = in_stack_00000090, lVar13 = in_stack_00000088, uVar9 = in_stack_00000080,
                (uVar12 & 1) != 0) {
            in_stack_00000060 = in_stack_00000088;
            in_stack_00000068 = in_stack_00000090;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar12 = FUN_0584b040(&stack0x00000060,*(undefined8 *)puVar1);
            lVar14 = *plVar16;
            if ((uVar12 & 1) == 0) {
              in_stack_00000060 = lVar13;
              in_stack_00000068 = uVar18;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05fa052c(lVar14,uVar9,in_stack_00000060,*(undefined8 *)puVar5);
            }
            else {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05fa1a5c(lVar14,uVar9,*(undefined8 *)puVar4);
            }
          }
          FUN_06289384(&stack0x00000070,
                       *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo)
          ;
        }
      }
      else {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar14 + 0x28) != 0) {
          FUN_05fa06c8(*(long *)(lVar14 + 0x28),
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
        }
      }
    }
    FUN_06272918(&stack0x000000b0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    plVar16 = (long *)PTR_DAT_0848b5c8;
  }
  lVar13 = *in_stack_00000010;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar16) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
        goto LAB_0788686c;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,0xc);
LAB_0788686c:
  uVar9 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  if ((uVar9 & 0xff00000000) != 0) {
    lVar13 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,0xc);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set:
    uVar8 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
    *(undefined4 *)(unaff_x20 + 0x70) = uVar8;
  }
  lVar13 = *in_stack_00000010;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar16) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
        goto LAB_07886930;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,0xb);
LAB_07886930:
  (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  if ((extraout_x1_02 & 0xff) != 0) {
    lVar13 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xb) * 0x10 + 0x138);
          goto LAB_07886994;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,0xb);
LAB_07886994:
    uVar18 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
    *(undefined8 *)(unaff_x20 + 0x58) = uVar18;
    thunk_FUN_03afed3c();
  }
  lVar13 = *in_stack_00000010;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar16) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
        goto LAB_07886a00;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,0xd);
LAB_07886a00:
  (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
  if ((extraout_x1_03 & 0xff) != 0) {
    lVar13 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar16) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
          goto LAB_07886a64;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000010,*plVar16,0xd);
LAB_07886a64:
    uVar18 = (*(code *)*puVar10)(in_stack_00000010,puVar10[1]);
    *(undefined8 *)(unaff_x20 + 0x68) = uVar18;
  }
  return;
}


