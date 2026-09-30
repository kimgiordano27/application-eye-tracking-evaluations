/*
FUNCTION_NAME: FUN_071457d4
ENTRY_POINT: 071457d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_11;strong_file_logging_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07145c40) */

undefined8 FUN_071457d4(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  
                    /* try { // try from 071457dc to 072457ef has its CatchHandler @ 07145dc0 */
  if ((DAT_07eed247 & 1) == 0) {
    FUN_03642964(PTR_DAT_079ff7b8);
    FUN_03642964(PTR_DAT_079fda70);
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__);
    FUN_03642964(PTR_DAT_079fea60);
    FUN_03642964(PTR_DAT_079fda80);
    FUN_03642964(PTR_DAT_079f67f8);
    FUN_03642964(PTR_DAT_079f48c8);
    FUN_03642964(PTR_DAT_079f4e48);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(PTR_DAT_079fb338);
    FUN_03642964(PTR_DAT_07a0c360);
    FUN_03642964(PTR_DAT_079f49f0);
    FUN_03642964(PTR_DAT_07a0de08);
    FUN_03642964(PTR_DAT_07a167d0);
    FUN_03642964(PTR_DAT_07a0bcd0);
    FUN_03642964(PTR_DAT_079f4d38);
    FUN_03642964(PTR_DAT_079f4a08);
    FUN_03642964(PTR_DAT_079fda60);
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<float>_RoundToMultipleOf__);
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__);
    FUN_03642964(Method_UnityEngine_UIElements_BaseSlider<float>_add_onSetValueWithoutNotify__);
    DAT_07eed247 = 1;
  }
  if ((param_1 == 0) ||
     (plVar7 = (long *)thunk_FUN_03652da4(param_1,0), puVar5 = PTR_DAT_079fda80,
     plVar7 == (long *)0x0)) {
LAB_07146360:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x418))(plVar7,*(undefined8 *)(*plVar7 + 0x420));
  lVar16 = *(long *)puVar5;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar16);
  }
  if (plVar7 == (long *)0x0) goto LAB_07146360;
  uVar8 = FUN_05e328c8(plVar7,0);
  puVar4 = PTR_DAT_079f4610;
  if ((uVar8 & 1) != 0) {
    lVar16 = *(long *)(PTR_DAT_079f4610 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
    uVar8 = FUN_05e30794(plVar7,uVar9,0);
    if ((uVar8 & 1) == 0) {
      lVar16 = *(long *)(puVar4 + 0x28);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
      uVar8 = FUN_05e30794(plVar7,uVar9,0);
      if ((uVar8 & 1) == 0) {
        lVar16 = *(long *)(puVar4 + 0x18);
        if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
        uVar8 = FUN_05e30794(plVar7,uVar9,0);
        if ((uVar8 & 1) == 0) {
          lVar16 = *(long *)(puVar4 + 0x30);
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
          uVar8 = FUN_05e30794(plVar7,uVar9,0);
          if ((uVar8 & 1) == 0) {
            lVar16 = *(long *)(puVar4 + 0x38);
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
            uVar8 = FUN_05e30794(plVar7,uVar9,0);
            if ((uVar8 & 1) != 0) {
              FUN_03157130(param_1,*(undefined8 *)PTR_DAT_07a0c360);
              uVar9 = FUN_07152e74();
              return uVar9;
            }
            lVar16 = *(long *)(puVar4 + 0x68);
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
            uVar8 = FUN_05e30794(plVar7,uVar9,0);
            if ((uVar8 & 1) != 0) {
              FUN_03157130(param_1,*(undefined8 *)PTR_DAT_07a0de08);
              uVar9 = FUN_07152e04();
              return uVar9;
            }
            lVar16 = *(long *)(puVar4 + 0x78);
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
            uVar8 = FUN_05e30794(plVar7,uVar9,0);
            if ((uVar8 & 1) == 0) {
              lVar16 = *(long *)(puVar4 + 0x80);
              if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
              uVar8 = FUN_05e30794(plVar7,uVar9,0);
              if ((uVar8 & 1) == 0) {
                lVar16 = *(long *)(puVar4 + 0x88);
                if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
                uVar8 = FUN_05e30794(plVar7,uVar9,0);
                if ((uVar8 & 1) == 0) {
                  return 0;
                }
                FUN_03157130(param_1,*(undefined8 *)PTR_DAT_079f4e48);
                uVar9 = FUN_07152cb4();
                return uVar9;
              }
              FUN_03157130(param_1,*(undefined8 *)PTR_DAT_079fb338);
              uVar9 = FUN_07152d24();
              return uVar9;
            }
            FUN_03157130(param_1,*(undefined8 *)PTR_DAT_079f4d38);
            uVar9 = FUN_07152d94();
            return uVar9;
          }
          uVar9 = *(undefined8 *)PTR_DAT_07a0bcd0;
          lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
          if (lVar16 != 0) {
            uVar9 = FUN_07152f54();
            return uVar9;
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_07176120(*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__,
                       0);
          uVar9 = *(undefined8 *)PTR_DAT_079f48c8;
          lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
          if (lVar16 != 0) {
            uVar9 = FUN_07152ee4();
            return uVar9;
          }
        }
      }
      else {
        uVar9 = *(undefined8 *)PTR_DAT_079f67f8;
        lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
        if (lVar16 != 0) {
          uVar9 = FUN_07152fc4();
          return uVar9;
        }
      }
    }
    else {
      uVar9 = *(undefined8 *)PTR_DAT_079f49f0;
      lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
      if (lVar16 != 0) {
        uVar9 = FUN_07153040();
        return uVar9;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03643084(param_1,uVar9);
  }
  lVar16 = *(long *)(PTR_DAT_079f4610 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar9 = FUN_05e26f18(lVar16 + 0x20,0);
  uVar8 = FUN_05e30794(plVar7,uVar9,0);
  if ((uVar8 & 1) != 0) {
    uVar9 = *(undefined8 *)PTR_DAT_079f4a08;
    lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(param_1,uVar9);
    }
    uVar6 = thunk_FUN_03651e98(param_1,0,0);
    puVar5 = PTR_DAT_079fda60;
    lVar10 = *(long *)PTR_DAT_079fda60;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar10 = *(long *)puVar5;
    }
    uVar18 = uVar6;
    if (((int)**(uint **)(lVar10 + 0xb8) < (int)uVar6) &&
       (uVar18 = **(uint **)(lVar10 + 0xb8), *(int *)(lVar10 + 0xe4) == 0)) {
      thunk_FUN_036a1978();
      uVar18 = **(uint **)(*(long *)puVar5 + 0xb8);
    }
    lVar10 = FUN_07147ff4(*(undefined8 *)
                           Method_UnityEngine_UIElements_BaseSlider<float>_RoundToMultipleOf__);
    if (DAT_07eed070 == (code *)0x0) {
      DAT_07eed070 = (code *)FUN_03642928(
                                         "UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)"
                                         );
    }
    uVar9 = (*DAT_07eed070)(uVar6,lVar10,0);
    if (lVar10 != 0) {
      if (DAT_07eeccd0 == (code *)0x0) {
        DAT_07eeccd0 = (code *)FUN_03642928("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)")
        ;
      }
      (*DAT_07eeccd0)(lVar10);
    }
    bVar1 = 0 < (int)uVar18;
    if (bVar1) {
      FUN_07150384(uVar18);
    }
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar10 = *(long *)puVar5;
        }
        iVar2 = **(int **)(lVar10 + 0xb8);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = (int)uVar8 / iVar2;
        }
        if ((int)uVar8 == iVar3 * iVar2) {
          if (DAT_07eecc88 == (code *)0x0) {
            DAT_07eecc88 = (code *)FUN_03642928(
                                               "UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)"
                                               );
          }
          (*DAT_07eecc88)(0);
          FUN_07150384(uVar18);
          bVar1 = true;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        uVar11 = FUN_07150124(*(undefined8 *)(lVar16 + 0x20 + uVar8 * 8));
        if (DAT_07eed100 == (code *)0x0) {
          DAT_07eed100 = (code *)FUN_03642928(
                                             "UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)"
                                             );
        }
        (*DAT_07eed100)(uVar9,uVar8 & 0xffffffff,uVar11);
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    if (!bVar1) {
      return uVar9;
    }
    if (DAT_07eecc88 == (code *)0x0) {
      DAT_07eecc88 = (code *)FUN_03642928("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
    }
    (*DAT_07eecc88)(0);
    return uVar9;
  }
  uVar9 = *(undefined8 *)PTR_DAT_079fda70;
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar9 = FUN_05e26f18(uVar9,0);
  uVar8 = FUN_05e30794(plVar7,uVar9,0);
  if ((uVar8 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_079fea60;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar14 = (long *)FUN_05e26f18(uVar9,0);
    lVar16 = *(long *)puVar5;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar16);
    }
    if (plVar14 == (long *)0x0) goto LAB_07146360;
    uVar8 = (**(code **)(*plVar14 + 0x298))(plVar14,plVar7,*(undefined8 *)(*plVar14 + 0x2a0));
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_036aa1c8(
                                Method_UnityEngine_UIElements_BaseSlider<float>_get_clampedDragger__
                                );
      uVar11 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar15 = thunk_FUN_036aa1c8(PTR_DAT_079fdaa8);
      uVar9 = FUN_05c981c8(uVar9,uVar11,uVar15,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
      uVar11 = thunk_FUN_0367fe20();
      FUN_05e4fb54(uVar11,uVar9,0);
      uVar9 = thunk_FUN_036aa1c8(Method_UnityEngine_UIElements_BaseSlider<float>_get_direction__);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar11,uVar9);
    }
    uVar9 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__;
    lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
    if (lVar16 == 0) goto LAB_07146384;
    uVar6 = thunk_FUN_03651e98(param_1,0,0);
    lVar10 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a167d0,(ulong)uVar6);
    lVar12 = FUN_07147ff4(*(undefined8 *)
                           Method_UnityEngine_UIElements_BaseSlider<float>_add_onSetValueWithoutNotify__
                         );
    if (0 < (int)uVar6) {
      uVar8 = 0;
      lVar19 = 0;
      do {
        if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_07146364;
        if (*(long *)(lVar16 + 0x20 + uVar8 * 8) == 0) {
          if (lVar10 == 0) goto LAB_07146360;
          if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_07146364;
          *(undefined8 *)(lVar10 + 0x20 + uVar8 * 8) = 0;
LAB_07146068:
          lVar17 = lVar19;
        }
        else {
          uVar9 = FUN_07155e44();
          if (lVar10 == 0) goto LAB_07146360;
          if ((*(uint *)(lVar10 + 0x18) <= uVar8) ||
             (*(undefined8 *)(lVar10 + 0x20 + uVar8 * 8) = uVar9, *(uint *)(lVar16 + 0x18) <= uVar8)
             ) goto LAB_07146364;
          lVar17 = *(long *)(lVar16 + 0x20 + uVar8 * 8);
          if ((lVar17 == 0) ||
             ((lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0 ||
              (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)))) goto LAB_07146360;
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar19 != 0) {
            if (lVar19 != lVar12) {
              if (DAT_07eeccd8 == (code *)0x0) {
                DAT_07eeccd8 = (code *)FUN_03642928(
                                                  "UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)"
                                                  );
              }
              uVar13 = (*DAT_07eeccd8)(lVar19,lVar17);
              lVar17 = lVar12;
              if ((uVar13 & 1) == 0) goto LAB_0714606c;
            }
            goto LAB_07146068;
          }
        }
LAB_0714606c:
        lVar19 = lVar17;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      goto FUN_07146084;
    }
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_079ff7b8;
    lVar16 = thunk_FUN_0367fd24(param_1,uVar9);
    if (lVar16 == 0) {
LAB_07146384:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(param_1,uVar9);
    }
    uVar6 = thunk_FUN_03651e98(param_1,0,0);
    lVar10 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a167d0,(ulong)uVar6);
    lVar12 = FUN_07147ff4(*(undefined8 *)
                           Method_UnityEngine_UIElements_BaseSlider<float>_add_onSetValueWithoutNotify__
                         );
    if (0 < (int)uVar6) {
      uVar8 = 0;
      lVar19 = 0;
      do {
        if (*(uint *)(lVar16 + 0x18) <= uVar8) {
LAB_07146364:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar17 = *(long *)(lVar16 + 0x20 + uVar8 * 8);
        if (lVar17 == 0) {
          if (lVar10 == 0) goto LAB_07146360;
          if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_07146364;
          *(undefined8 *)(lVar10 + 0x20 + uVar8 * 8) = 0;
LAB_07145e20:
          lVar17 = lVar19;
        }
        else {
          uVar9 = 0;
          if (*(long *)(lVar17 + 0x10) != 0) {
            uVar9 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x18);
          }
          if (lVar10 == 0) goto LAB_07146360;
          if ((*(uint *)(lVar10 + 0x18) <= uVar8) ||
             (*(undefined8 *)(lVar10 + 0x20 + uVar8 * 8) = uVar9, *(uint *)(lVar16 + 0x18) <= uVar8)
             ) goto LAB_07146364;
          if (*(long *)(lVar17 + 0x18) == 0) goto LAB_07146360;
          lVar17 = *(long *)(*(long *)(lVar17 + 0x18) + 0x18);
          if (lVar19 != 0) {
            if (lVar19 != lVar12) {
              if (DAT_07eeccd8 == (code *)0x0) {
                DAT_07eeccd8 = (code *)FUN_03642928(
                                                  "UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)"
                                                  );
              }
              uVar13 = (*DAT_07eeccd8)(lVar19,lVar17);
              lVar17 = lVar12;
              if ((uVar13 & 1) == 0) goto LAB_07145e24;
            }
            goto LAB_07145e20;
          }
        }
LAB_07145e24:
        lVar19 = lVar17;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      goto FUN_07146084;
    }
  }
  lVar19 = 0;
FUN_07146084:
  uVar9 = FUN_07152c44(lVar10,lVar19);
  if (lVar12 != 0) {
    if (DAT_07eeccd0 == (code *)0x0) {
      DAT_07eeccd0 = (code *)FUN_03642928("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
    }
    (*DAT_07eeccd0)(lVar12);
  }
  return uVar9;
}


