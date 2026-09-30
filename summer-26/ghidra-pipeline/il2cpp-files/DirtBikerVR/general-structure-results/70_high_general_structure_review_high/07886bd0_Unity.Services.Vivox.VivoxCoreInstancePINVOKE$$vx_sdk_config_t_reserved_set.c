/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_reserved_set
ENTRY_POINT: 07886bd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07886788) */
/* WARNING: Removing unreachable block (ram,0x0788678c) */
/* WARNING: Removing unreachable block (ram,0x07886abc) */
/* WARNING: Removing unreachable block (ram,0x07886818) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_reserved_set
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 uStack0000000000000008;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  uStack0000000000000008 = param_1;
  if (param_2 != 1) {
    FUN_03a535c4(&stack0x00000030);
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc(uStack0000000000000008);
  }
  plVar12 = (long *)__cxa_begin_catch(param_1);
  lVar15 = *plVar12;
  in_stack_00000030 = lVar15;
  __cxa_end_catch();
  FUN_061b6e9c(in_stack_00000038,
               *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
  if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(lVar15);
  }
  lVar15 = *unaff_x25;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 10) * 0x10 + 0x138);
        goto LAB_0788647c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_0788647c:
  (*(code *)*puVar9)();
  if ((extraout_x1 & 0xff) != 0) {
    lVar15 = *unaff_x25;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 10) * 0x10 + 0x138);
          goto LAB_078864e0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_078864e0:
    lVar15 = (*(code *)*puVar9)();
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05ed172c(&stack0x00000030,lVar15,
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
    while (uVar13 = FUN_062727f4(&stack0x000000b0,
                                 *(undefined8 *)
                                  System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo
                                ), lVar15 = in_stack_000000c8, (uVar13 & 1) != 0) {
      if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(unaff_x24 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = FUN_04de82e0(*(long *)(unaff_x24 + 0x48),*(undefined4 *)(in_stack_000000c8 + 0x10),
                            *(undefined8 *)
                             System_Collections_Generic_IReadOnlyList<HDProbe>_TypeInfo);
      if (*(char *)(lVar15 + 0x20) != '\0') {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar15 + 0x18);
        thunk_FUN_03afed3c();
      }
      if (*(char *)(lVar15 + 0x30) != '\0') {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar15 + 0x28);
      }
      in_stack_000000a8 = *(undefined8 *)(lVar15 + 0x40);
      in_stack_000000a0 = *(long *)(lVar15 + 0x38);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_0584b040(&stack0x000000a0,
                            *(undefined8 *)System_IObserver<InputRemoting_Message>_TypeInfo);
      if ((uVar13 & 1) == 0) {
        in_stack_000000a8 = *(undefined8 *)(lVar15 + 0x40);
        in_stack_000000a0 = *(long *)(lVar15 + 0x38);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_0584b0bc(&stack0x000000a0,
                              *(undefined8 *)
                               UnityEngine_UIElements_INotifyValueChanged<string>_TypeInfo);
        if ((uVar13 & 1) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          plVar12 = (long *)(lVar10 + 0x28);
          if (*plVar12 == 0) {
            lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ae00);
            FUN_05f9f7c4(lVar10,*(undefined8 *)PTR_DAT_0848adf8);
            *plVar12 = lVar10;
            thunk_FUN_03afed3c(plVar12,lVar10);
          }
          in_stack_000000a8 = *(undefined8 *)(lVar15 + 0x40);
          in_stack_000000a0 = *(long *)(lVar15 + 0x38);
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
          while (uVar13 = FUN_06289248(&stack0x00000070,*(undefined8 *)puVar6),
                uVar7 = in_stack_00000090, lVar15 = in_stack_00000088, uVar11 = in_stack_00000080,
                (uVar13 & 1) != 0) {
            in_stack_00000060 = in_stack_00000088;
            in_stack_00000068 = in_stack_00000090;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_0584b040(&stack0x00000060,*(undefined8 *)puVar1);
            lVar10 = *plVar12;
            if ((uVar13 & 1) == 0) {
              in_stack_00000060 = lVar15;
              in_stack_00000068 = uVar7;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05fa052c(lVar10,uVar11,in_stack_00000060,*(undefined8 *)puVar5);
            }
            else {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_05fa1a5c(lVar10,uVar11,*(undefined8 *)puVar4);
            }
          }
          FUN_06289384(&stack0x00000070,
                       *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo)
          ;
        }
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar10 + 0x28) != 0) {
          FUN_05fa06c8(*(long *)(lVar10 + 0x28),
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
        }
      }
    }
    FUN_06272918(&stack0x000000b0,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    unaff_x26 = (long *)PTR_DAT_0848b5c8;
  }
  lVar15 = *unaff_x25;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
        goto LAB_0788686c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
LAB_0788686c:
  uVar13 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
  if ((uVar13 & 0xff00000000) != 0) {
    lVar15 = *unaff_x25;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xc);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_calloc_func_set:
    uVar8 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
    *(undefined4 *)(unaff_x24 + 0x70) = uVar8;
  }
  lVar15 = *unaff_x25;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
        goto LAB_07886930;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886930:
  (*(code *)*puVar9)(unaff_x25,puVar9[1]);
  if ((extraout_x1_00 & 0xff) != 0) {
    lVar15 = *unaff_x25;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
          goto LAB_07886994;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xb);
LAB_07886994:
    uVar11 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
    *(undefined8 *)(unaff_x24 + 0x58) = uVar11;
    thunk_FUN_03afed3c();
  }
  lVar15 = *unaff_x25;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
        goto LAB_07886a00;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a00:
  (*(code *)*puVar9)(unaff_x25,puVar9[1]);
  if ((extraout_x1_01 & 0xff) != 0) {
    lVar15 = *unaff_x25;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
          goto LAB_07886a64;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(unaff_x25,*unaff_x26,0xd);
LAB_07886a64:
    uVar11 = (*(code *)*puVar9)(unaff_x25,puVar9[1]);
    *(undefined8 *)(unaff_x24 + 0x68) = uVar11;
  }
  return;
}


