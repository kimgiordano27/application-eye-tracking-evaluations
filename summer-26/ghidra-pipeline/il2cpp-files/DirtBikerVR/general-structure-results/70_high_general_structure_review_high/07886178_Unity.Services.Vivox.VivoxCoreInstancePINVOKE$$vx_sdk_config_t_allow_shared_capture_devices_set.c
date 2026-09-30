/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_allow_shared_capture_devices_set
ENTRY_POINT: 07886178
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_allow_shared_capture_devices_set
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x21;
  long *plVar15;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
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
  
  uVar8 = thunk_FUN_03ac74bc(*param_1);
  FUN_05d14b18();
  puVar9 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8);
  *puVar9 = uVar8;
  thunk_FUN_03afed3c(puVar9,uVar8);
  if (unaff_x21 != 0) {
    FUN_04d8dba4();
    FUN_04d8cc6c(&stack0x00000030);
    puVar2 = Unity_Services_Vivox_IReadOnlyDictionary<string,_IParticipant>_TypeInfo;
    puVar1 = PTR_DAT_0848c848;
    in_stack_00000108 = in_stack_00000038;
    in_stack_00000100 = in_stack_00000030;
    in_stack_00000110 = in_stack_00000040;
    in_stack_00000030 = 0;
    in_stack_00000038 = &stack0x00000100;
    while (uVar10 = FUN_061ac870(&stack0x00000100,*(undefined8 *)puVar1), (uVar10 & 1) != 0) {
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de9d78(*(long *)(unaff_x24 + 0x48),in_stack_00000110 & 0xffffffff,*(undefined8 *)puVar2)
      ;
    }
    FUN_061ac86c(&stack0x00000100,*(undefined8 *)PTR_DAT_0848c840);
    lVar13 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_07886298;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_07886298:
    (*(code *)*puVar9)();
    if ((extraout_x1 & 0xff) != 0) {
      plVar15 = (long *)(unaff_x24 + 0x48);
      if (*plVar15 == 0) {
        lVar13 = *unaff_x25;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
              goto LAB_07886308;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_07886308:
        lVar13 = (*(code *)*puVar9)();
        if (lVar13 == 0) goto LAB_07886aac;
        uVar7 = *(undefined4 *)(lVar13 + 0x18);
        lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                     System_Collections_Generic_IReadOnlyList<IEventMetric>_TypeInfo
                                   );
        FUN_04de7dc0(lVar13,uVar7,
                     *(undefined8 *)System_Collections_Generic_IReadOnlyList<byte>_TypeInfo);
        *plVar15 = lVar13;
        thunk_FUN_03afed3c(plVar15,lVar13);
      }
      lVar13 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_078863a4;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_078863a4:
      lVar13 = (*(code *)*puVar9)();
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
      while (uVar10 = FUN_061b6ea0(&stack0x000000e0,*(undefined8 *)puVar1), (uVar10 & 1) != 0) {
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_04de937c(*plVar15,in_stack_000000f0 & 0xffffffff,in_stack_000000f8,*(undefined8 *)puVar2
                    );
      }
      FUN_061b6e9c(&stack0x000000e0,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    }
    lVar13 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 10) * 0x10 + 0x138);
          goto LAB_0788647c;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788647c:
    (*(code *)*puVar9)();
    if ((extraout_x1_00 & 0xff) != 0) {
      lVar13 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 10) * 0x10 + 0x138);
            goto LAB_078864e0;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_078864e0:
      lVar13 = (*(code *)*puVar9)();
      if (lVar13 == 0) goto LAB_07886aac;
      FUN_05ed172c(&stack0x00000030,lVar13,
                   *(undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo);
      puVar6 = System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo;
      puVar5 = System_Collections_Generic_IReadOnlyCollection<RealtimeModel>_TypeInfo;
      puVar4 = System_Collections_Generic_IReadOnlyCollection<Realtime>_TypeInfo;
      puVar3 = System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo;
      puVar2 = System_Collections_Generic_IReadOnlyCollection<IEventMetric>_TypeInfo;
      puVar1 = 
      System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
      ;
      in_stack_000000b8 = in_stack_00000038;
      in_stack_000000b0 = in_stack_00000030;
      in_stack_000000c8 = in_stack_00000048;
      in_stack_000000c0 = in_stack_00000040;
      in_stack_000000d0 = in_stack_00000050;
      while (uVar10 = FUN_062727f4(&stack0x000000b0,
                                   *(undefined8 *)
                                    System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo
                                  ), lVar13 = in_stack_000000c8, (uVar10 & 1) != 0) {
        if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = FUN_04de82e0(*(long *)(unaff_x24 + 0x48),*(undefined4 *)(in_stack_000000c8 + 0x10),
                              *(undefined8 *)
                               System_Collections_Generic_IReadOnlyList<HDProbe>_TypeInfo);
        if (*(char *)(lVar13 + 0x20) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar13 + 0x18);
          thunk_FUN_03afed3c();
        }
        if (*(char *)(lVar13 + 0x30) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(lVar13 + 0x28);
        }
        in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000000a0 = *(long *)(lVar13 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_0584b040(&stack0x000000a0,
                              *(undefined8 *)System_IObserver<InputRemoting_Message>_TypeInfo);
        if ((uVar10 & 1) == 0) {
          in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x40);
          in_stack_000000a0 = *(long *)(lVar13 + 0x38);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar10 = FUN_0584b0bc(&stack0x000000a0,
                                *(undefined8 *)
                                 UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
          if ((uVar10 & 1) != 0) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            plVar15 = (long *)(lVar11 + 0x28);
            if (*plVar15 == 0) {
              lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ae00);
              FUN_05f9f7c4(lVar11,*(undefined8 *)PTR_DAT_0848adf8);
              *plVar15 = lVar11;
              thunk_FUN_03afed3c(plVar15,lVar11);
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
                  uVar8 = in_stack_00000090, lVar13 = in_stack_00000088, uVar10 = in_stack_00000080,
                  (uVar12 & 1) != 0) {
              in_stack_00000060 = in_stack_00000088;
              in_stack_00000068 = in_stack_00000090;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar12 = FUN_0584b040(&stack0x00000060,*(undefined8 *)puVar1);
              lVar11 = *plVar15;
              if ((uVar12 & 1) == 0) {
                in_stack_00000060 = lVar13;
                in_stack_00000068 = uVar8;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05fa052c(lVar11,uVar10,in_stack_00000060,*(undefined8 *)puVar5);
              }
              else {
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c0();
                }
                FUN_05fa1a5c(lVar11,uVar10,*(undefined8 *)puVar4);
              }
            }
            FUN_06289384(&stack0x00000070,
                         *(undefined8 *)
                          System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
          }
        }
        else {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(lVar11 + 0x28) != 0) {
            FUN_05fa06c8(*(long *)(lVar11 + 0x28),
                         *(undefined8 *)
                          System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
          }
        }
      }
      FUN_06272918(&stack0x000000b0,
                   *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
      unaff_x26 = (long *)PTR_DAT_0848b5c8;
    }
    lVar13 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
          goto LAB_0788686c;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
LAB_0788686c:
    uVar10 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
    if ((uVar10 & 0xff00000000) != 0) {
      lVar13 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
            goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set:
      uVar7 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
      *(undefined4 *)(unaff_x24 + 0x70) = uVar7;
    }
    lVar13 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
          goto LAB_07886930;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886930:
    (*(code *)*puVar9)(unaff_x25,puVar9[1]);
    if ((extraout_x1_01 & 0xff) != 0) {
      lVar13 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
            goto LAB_07886994;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886994:
      uVar8 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
      *(undefined8 *)(unaff_x24 + 0x58) = uVar8;
      thunk_FUN_03afed3c();
    }
    lVar13 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
          goto LAB_07886a00;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a00:
    (*(code *)*puVar9)(unaff_x25,puVar9[1]);
    if ((extraout_x1_02 & 0xff) != 0) {
      lVar13 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
            goto LAB_07886a64;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a64:
      uVar8 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
      *(undefined8 *)(unaff_x24 + 0x68) = uVar8;
    }
    return;
  }
LAB_07886aac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


