/*
FUNCTION_NAME: FUN_065c42b8
ENTRY_POINT: 065c42b8
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


long * FUN_065c42b8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  
  puVar3 = ES3Types_ES3Type_decimalArray_TypeInfo;
  if ((DAT_071ceba1 & 1) == 0) {
    FUN_02f07e70(ES3Types_ES3Type_MainModule_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_decimalArray_TypeInfo);
    DAT_071ceba1 = 1;
  }
  plVar7 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_065ce290(plVar7,0);
  plVar17 = (long *)param_1[3];
  if (plVar17 != (long *)0x0) {
    lVar13 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_065c43c4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02eea86c(plVar17,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c43c4:
    uVar9 = (*(code *)*puVar8)(plVar17,1,puVar8[1]);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x188))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 400));
      puVar3 = System_Collections_Generic_HashSet<uint>_TypeInfo;
      plVar17 = (long *)param_1[4];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_065c444c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02eea86c(plVar17,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c444c:
      plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
      puVar4 = ES3Types_ES3Type_GuidArray_TypeInfo;
      if (plVar17 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar17);
        }
      }
      lVar13 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar13 = *(long *)puVar4;
      }
      FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x150),0);
      plVar10 = (long *)FUN_065c5274(param_1);
      lVar13 = param_1[2];
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar18 = (long *)param_1[4];
      uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto LAB_065c4554;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar3,6);
LAB_065c4554:
      (*(code *)*puVar8)(plVar18,plVar17,uVar9,puVar8[1]);
      plVar18 = plVar7 + 4;
      *plVar18 = plVar10[4];
      thunk_FUN_02f411dc(plVar18);
      puVar5 = ES3Types_ES3Type_MainModule_TypeInfo;
      puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
      do {
        plVar10 = (long *)param_1[3];
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar13) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_065c45e8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar10,lVar13,1);
LAB_065c45e8:
        iVar6 = (*(code *)*puVar8)(plVar10,1,puVar8[1]);
        plVar10 = (long *)param_1[3];
        if (2 < iVar6 - 0x28U) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 == 0) goto UnityEngine_AsyncOperation__InternalDestroy;
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto UnityEngine_AsyncInstantiateOperationHelper__SetAsyncInstantiateOperationResult;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar13) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_065c465c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar10,lVar13,1);
LAB_065c465c:
        iVar6 = (*(code *)*puVar8)(plVar10,1,puVar8[1]);
        if (iVar6 == 0x28) {
          lVar13 = *(long *)puVar4;
          lVar14 = param_1[3];
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar13 = *(long *)puVar4;
          }
          lVar13 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar14,0x28,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x158),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar13 == 0) {
            lVar14 = 0;
          }
          else {
            uVar9 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
            lVar14 = thunk_FUN_02ef170c(lVar13,uVar9);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(lVar13,uVar9);
            }
          }
          plVar10 = (long *)param_1[4];
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_065c4940;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0);
LAB_065c4940:
          plVar10 = (long *)(*(code *)*puVar8)(plVar10,lVar14,puVar8[1]);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar10);
            }
          }
          plVar19 = (long *)param_1[4];
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar19;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto LAB_065c4ab0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar3,6);
LAB_065c4ab0:
          (*(code *)*puVar8)(plVar19,plVar17,plVar10,puVar8[1]);
          uVar9 = 0xc;
        }
        else if (iVar6 == 0x29) {
          lVar13 = *(long *)puVar4;
          lVar14 = param_1[3];
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar13 = *(long *)puVar4;
          }
          lVar13 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar14,0x29,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x160),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar13 == 0) {
            lVar14 = 0;
          }
          else {
            uVar9 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
            lVar14 = thunk_FUN_02ef170c(lVar13,uVar9);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(lVar13,uVar9);
            }
          }
          plVar10 = (long *)param_1[4];
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto FUN_065c48a0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0);
FUN_065c48a0:
          plVar10 = (long *)(*(code *)*puVar8)(plVar10,lVar14,puVar8[1]);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar10);
            }
          }
          plVar19 = (long *)param_1[4];
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar19;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto UnityEngine_Resources__LoadAsync;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar3,6);
UnityEngine_Resources__LoadAsync:
          (*(code *)*puVar8)(plVar19,plVar17,plVar10,puVar8[1]);
          uVar9 = 0xb;
        }
        else {
          if (iVar6 != 0x2a) {
            lVar13 = param_1[3];
            thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                              );
            uVar9 = thunk_FUN_02ef1808();
            uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
            FUN_064698ac(uVar9,uVar11,0xf,0,lVar13,0);
            uVar11 = thunk_FUN_02f239f0(ES3Types_ES3Type_double_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar9,uVar11);
          }
          lVar13 = *(long *)puVar4;
          lVar14 = param_1[3];
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar13 = *(long *)puVar4;
          }
          lVar13 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar14,0x2a,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x168),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar13 == 0) {
            lVar14 = 0;
          }
          else {
            uVar9 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
            lVar14 = thunk_FUN_02ef170c(lVar13,uVar9);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(lVar13,uVar9);
            }
          }
          plVar10 = (long *)param_1[4];
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_065c49e0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,0);
LAB_065c49e0:
          plVar10 = (long *)(*(code *)*puVar8)(plVar10,lVar14,puVar8[1]);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar10);
            }
          }
          plVar19 = (long *)param_1[4];
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar13 = *plVar19;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto LAB_065c4adc;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar3,6);
LAB_065c4adc:
          (*(code *)*puVar8)(plVar19,plVar17,plVar10,puVar8[1]);
          uVar9 = 10;
        }
        lVar13 = *(long *)puVar4;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar13 = *(long *)puVar4;
        }
        FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x170),0);
        plVar10 = (long *)FUN_065c5274(param_1);
        lVar13 = param_1[2];
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar19 = (long *)param_1[4];
        uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar13 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto LAB_065c4bac;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar3,6);
LAB_065c4bac:
        (*(code *)*puVar8)(plVar19,plVar17,uVar11,puVar8[1]);
        lVar14 = *plVar18;
        lVar20 = plVar10[4];
        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
        FUN_065afb80(lVar13,uVar9,lVar14,lVar20);
        *plVar18 = lVar13;
        thunk_FUN_02f411dc(plVar18,lVar13);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
UnityEngine_AsyncInstantiateOperationHelper__SetAsyncInstantiateOperationResult:
    if (*(long *)(piVar16 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_065c4c54;
    }
  }
UnityEngine_AsyncOperation__InternalDestroy:
  puVar8 = (undefined8 *)
           FUN_02eea86c(plVar10,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c4c54:
  uVar9 = (*(code *)*puVar8)(plVar10,0xffffffff,puVar8[1]);
  (**(code **)(*plVar7 + 0x1a8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x1b0));
  plVar10 = (long *)param_1[4];
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar13 = *plVar10;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 8) * 0x10 + 0x138);
        goto LAB_065c4cd0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar3,8);
LAB_065c4cd0:
  plVar17 = (long *)(*(code *)*puVar8)(plVar10,plVar17,puVar8[1]);
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar17);
    }
  }
  (**(code **)(*plVar7 + 0x1c8))(plVar7,plVar17,*(undefined8 *)(*plVar7 + 0x1d0));
  plVar17 = (long *)param_1[4];
  uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
  lVar13 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
  lVar14 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar20 = *(long *)puVar3;
  uVar11 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  if (lVar13 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = thunk_FUN_02ef170c(lVar13,uVar11);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar13,uVar11);
    }
    uVar11 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  }
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_02ef170c(lVar14,uVar11);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar14,uVar11);
    }
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar20) {
        puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
        goto LAB_065c4e28;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar17,lVar20,0x13);
LAB_065c4e28:
  (*(code *)*puVar8)(plVar17,uVar9,lVar12,lVar13,puVar8[1]);
  return plVar7;
}


