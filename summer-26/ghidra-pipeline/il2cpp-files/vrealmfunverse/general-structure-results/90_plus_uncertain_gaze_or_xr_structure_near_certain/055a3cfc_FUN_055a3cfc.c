/*
FUNCTION_NAME: FUN_055a3cfc
ENTRY_POINT: 055a3cfc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055a4300) */
/* WARNING: Removing unreachable block (ram,0x055a4560) */
/* WARNING: Removing unreachable block (ram,0x055a44fc) */

long * FUN_055a3cfc(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo;
  if ((DAT_066d1776 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(PTR_DAT_0631caa0);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TryGetValue__
                );
    FUN_02b3c81c(UnityEngine_PlayerLoop_EarlyUpdate_var);
    FUN_02b3c81c(Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass45_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_UI_Dropdown_var);
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    DAT_066d1776 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_0558ab50(param_2,0,0);
  if ((uVar8 & 1) != 0) {
    param_2 = FUN_055a2ad8(param_1);
  }
  if (param_2 != 0) {
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar9 = FUN_05596150(uVar16,0);
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x20) != 1)) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      plVar14 = (long *)FUN_055a1fd0(param_1);
      if (plVar14 != (long *)0x0) {
        plVar14 = (long *)(**(code **)(*plVar14 + 0x608))
                                    (plVar14,*(undefined8 *)(param_1 + 0x18),
                                     *(undefined8 *)(*plVar14 + 0x610));
        if ((param_3 & 1) != 0) {
          FUN_055a59dc(param_1,plVar14,0,0);
        }
        if ((plVar14 != (long *)0x0) &&
           (plVar10 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
           plVar10 != (long *)0x0)) {
          iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          if (iVar6 == 0) {
            plVar10 = (long *)(**(code **)(*plVar14 + 0x228))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x230));
            if (plVar10 == (long *)0x0) goto LAB_055a4504;
            iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            if (iVar6 == 0) {
              plVar14 = (long *)thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631caa0);
              FUN_04dbdb8c(plVar14,0);
              return plVar14;
            }
          }
          lVar9 = *plVar14;
          bVar2 = *(byte *)(*(long *)UnityEngine_PlayerLoop_EarlyUpdate_var + 0x130);
          if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)UnityEngine_PlayerLoop_EarlyUpdate_var)) {
            plVar10 = (long *)FUN_02b3c908(*(undefined8 *)
                                            Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass45_0_TypeInfo
                                           ,1);
            if (plVar10 != (long *)0x0) {
              lVar9 = thunk_FUN_02b79548(plVar14,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar9 == 0) {
                uVar16 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar16,0);
              }
              if ((int)plVar10[3] != 0) {
                plVar10[4] = (long)plVar14;
                thunk_FUN_02bb0e9c(plVar10 + 4,plVar14);
                return plVar10;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
          }
          else {
            plVar10 = (long *)(**(code **)(lVar9 + 0x228))(plVar14,*(undefined8 *)(lVar9 + 0x230));
            if (plVar10 != (long *)0x0) {
              iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
              plVar10 = (long *)(**(code **)(*plVar14 + 0x1f8))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x200));
              if (plVar10 != (long *)0x0) {
                iVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                plVar10 = (long *)FUN_02b3c908(*(undefined8 *)
                                                Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass45_0_TypeInfo
                                               ,iVar7 + iVar6);
                plVar11 = (long *)(**(code **)(*plVar14 + 0x228))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x230));
                if (plVar11 != (long *)0x0) {
                  plVar11 = (long *)(**(code **)(*plVar11 + 0x1b8))
                                              (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                  puVar5 = UnityEngine_UI_Dropdown_var;
                  puVar4 = PTR_DAT_06312f90;
                  uVar18 = 0;
                  do {
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    lVar9 = *plVar11;
                    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar8 != 0) {
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_055a4130;
                        }
                        uVar8 = uVar8 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar4,0);
LAB_055a4130:
                    uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                    puVar3 = PTR_DAT_06312f78;
                    if ((uVar8 & 1) == 0) {
                      plVar11 = (long *)thunk_FUN_02b79548(plVar11,*(undefined8 *)PTR_DAT_06312f78);
                      if (plVar11 == (long *)0x0) goto LAB_055a42f4;
                      lVar9 = *plVar11;
                      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar8 == 0) goto System_Net_HttpWebRequest__FlattenException;
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      goto LAB_055a4270;
                    }
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    lVar9 = *plVar11;
                    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar8 != 0) {
                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                          goto LAB_055a4198;
                        }
                        uVar8 = uVar8 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar4,1);
LAB_055a4198:
                    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                    if (plVar13 == (long *)0x0) {
                      if (plVar10 == (long *)0x0) goto LAB_055a451c;
                    }
                    else {
                      lVar9 = *(long *)puVar5;
                      bVar2 = *(byte *)(lVar9 + 0x130);
                      if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3ce44(plVar13);
                      }
                      if (plVar10 == (long *)0x0) {
LAB_055a451c:
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      lVar9 = thunk_FUN_02b79548(plVar13,*(undefined8 *)(*plVar10 + 0x40));
                      if (lVar9 == 0) {
                        uVar16 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                        FUN_02b3c988(uVar16,0);
                      }
                    }
                    if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cacc();
                    }
                    plVar10[(long)(int)uVar18 + 4] = (long)plVar13;
                    thunk_FUN_02bb0e9c(plVar10 + (long)(int)uVar18 + 4,plVar13);
                    uVar18 = uVar18 + 1;
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar16 = *(undefined8 *)(lVar9 + 0x10);
      uVar17 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_04d8a7b0(uVar17,0);
      uVar8 = FUN_04d938a0(uVar16,uVar17,0);
      if ((uVar8 & 1) != 0) {
        uVar8 = FUN_055a329c(param_1);
        if ((uVar8 & 1) != 0) {
          return (long *)0x0;
        }
        plVar14 = (long *)FUN_055a2f00(param_1);
        return plVar14;
      }
      plVar14 = *(long **)(param_1 + 0x18);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      if (plVar14 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar14 + 0x558))(plVar14,*(undefined8 *)(*plVar14 + 0x560));
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TryGetValue__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)
                              Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_List<IXRTargetPriorityInteractor>>_TryGetValue__
                            );
        }
        plVar14 = (long *)FUN_05599008(lVar9,uVar16);
        return plVar14;
      }
    }
  }
  goto LAB_055a4504;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_055a44b8:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_055a44ec;
    }
  }
LAB_055a44d0:
  puVar12 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar3,0);
LAB_055a44ec:
  (*(code *)*puVar12)(plVar14,puVar12[1]);
  return plVar10;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_055a4270:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_055a42e8;
    }
  }
System_Net_HttpWebRequest__FlattenException:
  puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar3,0);
LAB_055a42e8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_055a42f4:
  plVar14 = (long *)(**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200));
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)(**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    do {
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_055a438c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar4,0);
LAB_055a438c:
      uVar8 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      if ((uVar8 & 1) == 0) {
        plVar14 = (long *)thunk_FUN_02b79548(plVar14,*(undefined8 *)puVar3);
        if (plVar14 == (long *)0x0) {
          return plVar10;
        }
        lVar9 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 == 0) goto LAB_055a44d0;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_055a44b8;
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar14;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_055a43f4;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(plVar14,*(long *)puVar4,1);
LAB_055a43f4:
      plVar11 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
      if (plVar11 == (long *)0x0) {
        if (plVar10 == (long *)0x0) goto LAB_055a4534;
      }
      else {
        lVar9 = *(long *)puVar5;
        bVar2 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar11);
        }
        if (plVar10 == (long *)0x0) {
LAB_055a4534:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar9 = thunk_FUN_02b79548(plVar11,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar9 == 0) {
          uVar16 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar16,0);
        }
      }
      if (*(uint *)(plVar10 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar9 = (long)(int)uVar18;
      lVar1 = (long)(int)uVar18;
      uVar18 = uVar18 + 1;
      plVar10[lVar9 + 4] = (long)plVar11;
      thunk_FUN_02bb0e9c(plVar10 + lVar1 + 4,plVar11);
    } while( true );
  }
LAB_055a4504:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


