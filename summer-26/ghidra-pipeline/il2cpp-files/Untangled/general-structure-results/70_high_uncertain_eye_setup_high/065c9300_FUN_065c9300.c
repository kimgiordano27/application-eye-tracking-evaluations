/*
FUNCTION_NAME: FUN_065c9300
ENTRY_POINT: 065c9300
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


long * FUN_065c9300(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  
  puVar2 = ES3Types_ES3Type_sbyteArray_TypeInfo;
  if ((DAT_071ceba5 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_short_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_sbyteArray_TypeInfo);
    DAT_071ceba5 = 1;
  }
  plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_065ce580(plVar8,0);
  puVar2 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  plVar16 = (long *)param_1[3];
  if (plVar16 != (long *)0x0) {
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_065c9408;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02eea86c(plVar16,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c9408:
    uVar10 = (*(code *)*puVar9)(plVar16,1,puVar9[1]);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x188))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 400));
      plVar16 = (long *)param_1[3];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_065c9490;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02eea86c(plVar16,*(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo
                            ,1);
LAB_065c9490:
      iVar7 = (*(code *)*puVar9)(plVar16,1,puVar9[1]);
      puVar5 = System_Collections_Generic_HashSet<uint>_TypeInfo;
      puVar4 = System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo;
      puVar3 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
      if (iVar7 == 10) {
        plVar16 = (long *)param_1[4];
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_065c9568;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_02eea86c(plVar16,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c9568:
        plVar16 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
        puVar6 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar16 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar16);
          }
        }
        lVar17 = param_1[3];
        lVar13 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar13 = *(long *)puVar6;
        }
        lVar13 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar17,10,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x210),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar13 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          uVar10 = *(undefined8 *)puVar3;
          plVar11 = (long *)thunk_FUN_02ef170c(lVar13,uVar10);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar13,uVar10);
          }
        }
        plVar18 = (long *)param_1[4];
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar13 = *plVar18;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_065c9774;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar5,0);
LAB_065c9774:
        plVar18 = (long *)(*(code *)*puVar9)(plVar18,plVar11,puVar9[1]);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar18);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar13 = *plVar19;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
              goto LAB_065c98a8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,6);
LAB_065c98a8:
        (*(code *)*puVar9)(plVar19,plVar16,plVar18,puVar9[1]);
        if (plVar11 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar13 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
                goto LAB_065c9a68;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,10);
LAB_065c9a68:
          uVar10 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        }
        lVar13 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_short_TypeInfo);
        FUN_05645a04(lVar13,0);
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
        thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x10),uVar10);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar8[4] = lVar13;
        thunk_FUN_02f411dc(plVar8 + 4,lVar13);
LAB_065c9ab8:
        plVar11 = (long *)param_1[3];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_065c9b0c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar2,0);
LAB_065c9b0c:
        uVar10 = (*(code *)*puVar9)(plVar11,0xffffffff,puVar9[1]);
        (**(code **)(*plVar8 + 0x1a8))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x1b0));
        plVar11 = (long *)param_1[4];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
              goto LAB_065c9b88;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar5,8);
LAB_065c9b88:
        plVar16 = (long *)(*(code *)*puVar9)(plVar11,plVar16,puVar9[1]);
        if (plVar16 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar16);
          }
        }
        (**(code **)(*plVar8 + 0x1c8))(plVar8,plVar16,*(undefined8 *)(*plVar8 + 0x1d0));
        plVar16 = (long *)param_1[4];
        uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        lVar13 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        lVar17 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar20 = *(long *)puVar5;
        uVar21 = *(undefined8 *)puVar3;
        if (lVar13 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = thunk_FUN_02ef170c(lVar13,uVar21);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar13,uVar21);
          }
          uVar21 = *(undefined8 *)puVar3;
        }
        if (lVar17 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = thunk_FUN_02ef170c(lVar17,uVar21);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar17,uVar21);
          }
        }
        lVar17 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar20) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar15 + 0x13) * 0x10 + 0x138);
              goto LAB_065c9cc8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar16,lVar20,0x13);
LAB_065c9cc8:
        (*(code *)*puVar9)(plVar16,uVar10,lVar12,lVar13,puVar9[1]);
        return plVar8;
      }
      if (iVar7 != 0xb) {
        lVar13 = param_1[3];
        thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
        uVar10 = thunk_FUN_02ef1808();
        uVar21 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
        FUN_064698ac(uVar10,uVar21,0x15,0,lVar13,0);
        uVar21 = thunk_FUN_02f239f0(ES3Types_ES3Type_shortArray_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar10,uVar21);
      }
      plVar16 = (long *)param_1[4];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_065c9670;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02eea86c(plVar16,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c9670:
      plVar16 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
      puVar6 = ES3Types_ES3Type_GuidArray_TypeInfo;
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar16);
        }
      }
      lVar17 = param_1[3];
      lVar13 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar13 = *(long *)puVar6;
      }
      lVar13 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,lVar17,0xb,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x218),
                          *(undefined8 *)(*param_1 + 0x1c0));
      if (lVar13 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        uVar10 = *(undefined8 *)puVar3;
        plVar11 = (long *)thunk_FUN_02ef170c(lVar13,uVar10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar13,uVar10);
        }
      }
      plVar18 = (long *)param_1[4];
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_065c980c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02eea86c(plVar18,*(long *)puVar5,0);
LAB_065c980c:
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,plVar11,puVar9[1]);
      if (plVar18 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar18);
        }
      }
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar13 = *plVar19;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
            goto LAB_065c9920;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,6);
LAB_065c9920:
      (*(code *)*puVar9)(plVar19,plVar16,plVar18,puVar9[1]);
      if (plVar11 != (long *)0x0) {
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_065c9988;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,10);
LAB_065c9988:
        lVar13 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        lVar17 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_065c99e8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,10);
LAB_065c99e8:
        lVar17 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        if (lVar17 != 0) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar10 = FUN_05466d54(lVar13,1,*(int *)(lVar17 + 0x10) + -2,0);
          lVar13 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_short_TypeInfo);
          FUN_05645a04(lVar13,0);
          *(undefined8 *)(lVar13 + 0x10) = uVar10;
          thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x10),uVar10);
          plVar8[4] = lVar13;
          thunk_FUN_02f411dc(plVar8 + 4,lVar13);
          goto LAB_065c9ab8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


