/*
FUNCTION_NAME: FUN_065c0400
ENTRY_POINT: 065c0400
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * FUN_065c0400(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  
  puVar4 = ES3Types_ES3Type_VelocityOverLifetimeModule_TypeInfo;
  if ((DAT_071ceb9d & 1) == 0) {
    FUN_02f07e70(ES3Types_ES3Type_MainModule_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_VelocityOverLifetimeModule_TypeInfo);
    DAT_071ceb9d = 1;
  }
  plVar9 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar4);
  FUN_065cdfa0(plVar9,0);
  plVar19 = *(long **)(param_1 + 0x18);
  if (plVar19 != (long *)0x0) {
    lVar16 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_065c050c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c050c:
    uVar11 = (*(code *)*puVar10)(plVar19,1,puVar10[1]);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x188))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 400));
      puVar4 = System_Collections_Generic_HashSet<uint>_TypeInfo;
      plVar19 = *(long **)(param_1 + 0x20);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar16 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_065c0594;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c0594:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      puVar5 = ES3Types_ES3Type_GuidArray_TypeInfo;
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar19);
        }
      }
      lVar16 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar16 = *(long *)puVar5;
      }
      FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0xc0),0);
      plVar12 = (long *)FUN_065c1540(param_1);
      lVar16 = *(long *)(param_1 + 0x10);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar20 = *(long **)(param_1 + 0x20);
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar16 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_065c069c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar4,6);
LAB_065c069c:
      (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
      plVar20 = plVar9 + 4;
      *plVar20 = plVar12[4];
      thunk_FUN_02f411dc(plVar20);
      puVar6 = ES3Types_ES3Type_MainModule_TypeInfo;
      puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
      do {
        plVar12 = *(long **)(param_1 + 0x18);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar16 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_065c0730;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c0730:
        uVar7 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
        puVar3 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        plVar12 = *(long **)(param_1 + 0x18);
        if ((uVar7 & 0xfffffffc) != 0x1c) {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 == 0) goto LAB_065c0e9c;
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_065c0e84;
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar16 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_065c07a4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c07a4:
        uVar7 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
        if ((uVar7 & 0xfffffffe) == 0x1c) {
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c0874;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_02eea86c(plVar12,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,
                                 0);
LAB_065c0874:
          uVar11 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_065c0948;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c0948:
          iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
          if (iVar8 < 0x1c) {
LAB_065c10fc:
            uVar14 = *(undefined8 *)(param_1 + 0x18);
            thunk_FUN_02f239f0(System_Collections_Generic_ICollection<Exception>_TypeInfo);
            uVar11 = thunk_FUN_02ef1808();
            FUN_0647183c(uVar11,0,uVar14,0);
            uVar14 = thunk_FUN_02f239f0(ES3Types_ES3Type_bool_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar11,uVar14);
          }
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_065c0a28;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c0a28:
          iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
          if (0x1d < iVar8) goto LAB_065c10fc;
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c0b04;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,0);
LAB_065c0b04:
          (*(code *)*puVar10)(plVar12,puVar10[1]);
          plVar12 = *(long **)(param_1 + 0x20);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c0bc4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,0);
LAB_065c0bc4:
          plVar13 = (long *)(*(code *)*puVar10)(plVar12,uVar11,puVar10[1]);
          if (plVar13 != (long *)0x0) {
            lVar16 = *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
            ;
            if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar16 + 0x130)) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar13,lVar16);
            }
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_065c0cf8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,6);
LAB_065c0cf8:
          (*(code *)*puVar10)(plVar12,plVar19,plVar13,puVar10[1]);
          lVar16 = *(long *)(param_1 + 0x10);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar11 = 7;
        }
        else {
          plVar12 = *(long **)(param_1 + 0x18);
          if ((uVar7 & 0xfffffffe) != 0x1e) {
            thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                              );
            uVar11 = thunk_FUN_02ef1808();
            uVar14 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
            FUN_064698ac(uVar11,uVar14,7,0,plVar12,0);
            uVar14 = thunk_FUN_02f239f0(ES3Types_ES3Type_bool_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar11,uVar14);
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c08dc;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_02eea86c(plVar12,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,
                                 0);
LAB_065c08dc:
          uVar11 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_065c09b8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c09b8:
          iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
          if (iVar8 < 0x1e) {
LAB_065c10bc:
            uVar14 = *(undefined8 *)(param_1 + 0x18);
            thunk_FUN_02f239f0(System_Collections_Generic_ICollection<Exception>_TypeInfo);
            uVar11 = thunk_FUN_02ef1808();
            FUN_0647183c(uVar11,0,uVar14,0);
            uVar14 = thunk_FUN_02f239f0(ES3Types_ES3Type_bool_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar11,uVar14);
          }
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_065c0a98;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c0a98:
          iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
          if (0x1f < iVar8) goto LAB_065c10bc;
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto FUN_065c0b64;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,0);
FUN_065c0b64:
          (*(code *)*puVar10)(plVar12,puVar10[1]);
          plVar12 = *(long **)(param_1 + 0x20);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c0c5c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,0);
LAB_065c0c5c:
          plVar13 = (long *)(*(code *)*puVar10)(plVar12,uVar11,puVar10[1]);
          if (plVar13 != (long *)0x0) {
            lVar16 = *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
            ;
            if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar16 + 0x130)) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar13,lVar16);
            }
          }
          lVar16 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_065c0d2c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,6);
LAB_065c0d2c:
          (*(code *)*puVar10)(plVar12,plVar19,plVar13,puVar10[1]);
          lVar16 = *(long *)(param_1 + 0x10);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar11 = 2;
        }
        *(undefined1 *)(lVar16 + 0x1c) = 0;
        lVar16 = *(long *)puVar5;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar16 = *(long *)puVar5;
        }
        FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0xd8),0);
        plVar12 = (long *)FUN_065c1540(param_1);
        lVar16 = *(long *)(param_1 + 0x10);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar13 = *(long **)(param_1 + 0x20);
        uVar14 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar16 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 6) * 0x10 + 0x138);
              goto LAB_065c0e08;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar13,*(long *)puVar4,6);
LAB_065c0e08:
        (*(code *)*puVar10)(plVar13,plVar19,uVar14,puVar10[1]);
        lVar21 = *plVar20;
        lVar22 = plVar12[4];
        lVar16 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
        FUN_065afb80(lVar16,uVar11,lVar21,lVar22);
        *plVar20 = lVar16;
        thunk_FUN_02f411dc(plVar20,lVar16);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_065c0e84:
    if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto UnityEngine_Vector2Int__get_magnitude;
    }
  }
LAB_065c0e9c:
  puVar10 = (undefined8 *)
            FUN_02eea86c(plVar12,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
UnityEngine_Vector2Int__get_magnitude:
  uVar11 = (*(code *)*puVar10)(plVar12,0xffffffff,puVar10[1]);
  (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1b0));
  plVar12 = *(long **)(param_1 + 0x20);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar16 = *plVar12;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 8) * 0x10 + 0x138);
        goto LAB_065c0f34;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar4,8);
LAB_065c0f34:
  plVar19 = (long *)(*(code *)*puVar10)(plVar12,plVar19,puVar10[1]);
  if (plVar19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar19);
    }
  }
  (**(code **)(*plVar9 + 0x1c8))(plVar9,plVar19,*(undefined8 *)(*plVar9 + 0x1d0));
  plVar19 = *(long **)(param_1 + 0x20);
  uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  lVar16 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  lVar21 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar22 = *(long *)puVar4;
  uVar14 = *(undefined8 *)puVar3;
  if (lVar16 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = thunk_FUN_02ef170c(lVar16,uVar14);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar16,uVar14);
    }
    uVar14 = *(undefined8 *)puVar3;
  }
  if (lVar21 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = thunk_FUN_02ef170c(lVar21,uVar14);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar21,uVar14);
    }
  }
  lVar21 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar22) {
        puVar10 = (undefined8 *)(lVar21 + (long)(*piVar18 + 0x13) * 0x10 + 0x138);
        goto LAB_065c107c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02eea86c(plVar19,lVar22,0x13);
LAB_065c107c:
  (*(code *)*puVar10)(plVar19,uVar11,lVar15,lVar16,puVar10[1]);
  return plVar9;
}


