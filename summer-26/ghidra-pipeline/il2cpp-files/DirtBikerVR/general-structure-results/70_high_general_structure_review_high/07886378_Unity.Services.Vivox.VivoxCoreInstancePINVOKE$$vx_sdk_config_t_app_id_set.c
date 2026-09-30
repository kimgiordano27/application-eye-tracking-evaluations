/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_app_id_set
ENTRY_POINT: 07886378
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_app_id_set
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
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long in_x9;
  int *in_x10;
  int *piVar14;
  long *unaff_x21;
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
  
  do {
    in_x9 = in_x9 + -1;
    piVar14 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar8 = (undefined8 *)FUN_03ac43c4();
      goto LAB_078863a4;
    }
    plVar15 = (long *)(in_x10 + 2);
    in_x10 = piVar14;
  } while (*plVar15 != param_3);
  puVar8 = (undefined8 *)(param_1 + (long)(*piVar14 + 9) * 0x10 + 0x138);
LAB_078863a4:
  lVar9 = (*(code *)*puVar8)();
  if (lVar9 != 0) {
    FUN_04dac170(&stack0x00000030,lVar9,
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
      if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de937c(*unaff_x21,in_stack_000000f0 & 0xffffffff,in_stack_000000f8,*(undefined8 *)puVar2
                  );
    }
    FUN_061b6e9c(&stack0x000000e0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 10) * 0x10 + 0x138);
          goto LAB_0788647c;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_0788647c:
    (*(code *)*puVar8)();
    if ((extraout_x1 & 0xff) != 0) {
      lVar9 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 10) * 0x10 + 0x138);
            goto LAB_078864e0;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4();
LAB_078864e0:
      lVar9 = (*(code *)*puVar8)();
      if (lVar9 == 0) goto LAB_07886aac;
      FUN_05ed172c(&stack0x00000030,lVar9,
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
                                  ), lVar9 = in_stack_000000c8, (uVar10 & 1) != 0) {
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
        if (*(char *)(lVar9 + 0x20) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar9 + 0x18);
          thunk_FUN_03afed3c();
        }
        if (*(char *)(lVar9 + 0x30) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(lVar9 + 0x28);
        }
        in_stack_000000a8 = *(undefined8 *)(lVar9 + 0x40);
        in_stack_000000a0 = *(long *)(lVar9 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_0584b040(&stack0x000000a0,
                              *(undefined8 *)System_IObserver<InputRemoting_Message>_TypeInfo);
        if ((uVar10 & 1) == 0) {
          in_stack_000000a8 = *(undefined8 *)(lVar9 + 0x40);
          in_stack_000000a0 = *(long *)(lVar9 + 0x38);
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
            in_stack_000000a8 = *(undefined8 *)(lVar9 + 0x40);
            in_stack_000000a0 = *(long *)(lVar9 + 0x38);
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
                  uVar13 = in_stack_00000090, lVar9 = in_stack_00000088, uVar10 = in_stack_00000080,
                  (uVar12 & 1) != 0) {
              in_stack_00000060 = in_stack_00000088;
              in_stack_00000068 = in_stack_00000090;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar12 = FUN_0584b040(&stack0x00000060,*(undefined8 *)puVar1);
              lVar11 = *plVar15;
              if ((uVar12 & 1) == 0) {
                in_stack_00000060 = lVar9;
                in_stack_00000068 = uVar13;
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
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
          goto LAB_0788686c;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
LAB_0788686c:
    uVar10 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    if ((uVar10 & 0xff00000000) != 0) {
      lVar9 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
            goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set:
      uVar7 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
      *(undefined4 *)(unaff_x24 + 0x70) = uVar7;
    }
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
          goto LAB_07886930;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886930:
    (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    if ((extraout_x1_00 & 0xff) != 0) {
      lVar9 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
            goto LAB_07886994;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886994:
      uVar13 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
      *(undefined8 *)(unaff_x24 + 0x58) = uVar13;
      thunk_FUN_03afed3c();
    }
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
          goto LAB_07886a00;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a00:
    (*(code *)*puVar8)(unaff_x25,puVar8[1]);
    if ((extraout_x1_01 & 0xff) != 0) {
      lVar9 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
            goto LAB_07886a64;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a64:
      uVar13 = (*(code *)*puVar8)(unaff_x25,puVar8[1]);
      *(undefined8 *)(unaff_x24 + 0x68) = uVar13;
    }
    return;
  }
LAB_07886aac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


