/*
FUNCTION_NAME: FUN_065c6708
ENTRY_POINT: 065c6708
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


long * FUN_065c6708(long *param_1)

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
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  
  puVar3 = ES3Types_ES3Type_floatArray_TypeInfo;
  if ((DAT_071ceba3 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_int_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_intArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_floatArray_TypeInfo);
    DAT_071ceba3 = 1;
  }
  plVar9 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_065ce408(plVar9,0);
  puVar3 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  plVar17 = (long *)param_1[3];
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_065c681c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02eea86c(plVar17,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c681c:
    uVar11 = (*(code *)*puVar10)(plVar17,1,puVar10[1]);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x188))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 400));
      puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
      plVar17 = (long *)param_1[3];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_065c68a4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar17,*(long *)
                                      System_Collections_Generic_HashSet<StyleSheet>_TypeInfo,1);
LAB_065c68a4:
      uVar7 = (*(code *)*puVar10)(plVar17,1,puVar10[1]);
      puVar5 = System_Collections_Generic_HashSet<uint>_TypeInfo;
      puVar4 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
      if (uVar7 - 4 < 6) {
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_065c69cc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02eea86c(plVar17,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3)
        ;
LAB_065c69cc:
        plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
        puVar2 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar17);
          }
        }
        lVar14 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar14 = *(long *)puVar2;
        }
        FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1c8),0);
        plVar12 = (long *)FUN_065c7820(param_1);
        lVar14 = param_1[2];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar19 = (long *)param_1[4];
        uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto LAB_065c6ad4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,6);
LAB_065c6ad4:
        (*(code *)*puVar10)(plVar19,plVar17,uVar11,puVar10[1]);
        plVar9[4] = plVar12[4];
        thunk_FUN_02f411dc();
      }
      else if ((uVar7 & 0xfffffffe) == 10) {
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto UnityEngine_GameObject__GetComponentInChildren;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02eea86c(plVar17,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3)
        ;
UnityEngine_GameObject__GetComponentInChildren:
        plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
        puVar6 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar17);
          }
        }
        lVar14 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar14 = *(long *)puVar6;
        }
        FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1d0),0);
        plVar12 = (long *)FUN_065c9300(param_1);
        lVar14 = param_1[2];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar19 = (long *)param_1[4];
        uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto LAB_065c6dc4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,6);
LAB_065c6dc4:
        (*(code *)*puVar10)(plVar19,plVar17,uVar11,puVar10[1]);
        plVar19 = plVar9 + 4;
        *plVar19 = plVar12[4];
        thunk_FUN_02f411dc(plVar19);
        plVar20 = (long *)param_1[3];
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_065c6f00;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar2,1);
LAB_065c6f00:
        iVar8 = (*(code *)*puVar10)(plVar20,1,puVar10[1]);
        if (iVar8 == 0x2e) {
          lVar14 = *(long *)puVar6;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar14 = *(long *)puVar6;
          }
          FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1d8),0);
          plVar20 = (long *)FUN_065ca084(param_1);
          lVar14 = param_1[2];
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          plVar22 = (long *)param_1[4];
          uVar11 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
          if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar14 = *plVar22;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto LAB_065c7168;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar22,*(long *)puVar5,6);
LAB_065c7168:
          (*(code *)*puVar10)(plVar22,plVar17,uVar11,puVar10[1]);
          if (plVar20[4] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar18 = plVar12[4];
          uVar11 = FUN_03fd275c(plVar20[4],*(undefined8 *)ES3Types_ES3Type_intArray_TypeInfo);
          lVar14 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_int_TypeInfo);
          FUN_065b5750(lVar14,lVar18,uVar11);
          *plVar19 = lVar14;
          thunk_FUN_02f411dc(plVar19,lVar14);
        }
      }
      else {
        if (uVar7 != 0x2e) {
          lVar14 = param_1[3];
          thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
          uVar11 = thunk_FUN_02ef1808();
          uVar23 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
          FUN_064698ac(uVar11,uVar23,0x13,0,lVar14,0);
          uVar23 = thunk_FUN_02f239f0(ES3Types_ES3Type_long_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar11,uVar23);
        }
        plVar17 = (long *)param_1[4];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_065c6c14;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02eea86c(plVar17,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3)
        ;
LAB_065c6c14:
        plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
        puVar2 = ES3Types_ES3Type_GuidArray_TypeInfo;
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar17);
          }
        }
        lVar18 = param_1[3];
        lVar14 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar14 = *(long *)puVar2;
        }
        lVar14 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,lVar18,0x2e,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1b0),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar14 == 0) {
          lVar18 = 0;
        }
        else {
          uVar11 = *(undefined8 *)puVar4;
          lVar18 = thunk_FUN_02ef170c(lVar14,uVar11);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar14,uVar11);
          }
        }
        plVar12 = (long *)param_1[4];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_065c6d20;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar5,0);
LAB_065c6d20:
        plVar12 = (long *)(*(code *)*puVar10)(plVar12,lVar18,puVar10[1]);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar12);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto LAB_065c6e44;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,6);
LAB_065c6e44:
        (*(code *)*puVar10)(plVar19,plVar17,plVar12,puVar10[1]);
        FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1b8),0);
        plVar12 = (long *)FUN_065bbaf4(param_1);
        lVar14 = param_1[2];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar19 = (long *)param_1[4];
        uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto LAB_065c6fd0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,6);
LAB_065c6fd0:
        (*(code *)*puVar10)(plVar19,plVar17,uVar11,puVar10[1]);
        lVar14 = (**(code **)(*param_1 + 0x1b8))
                           (param_1,param_1[3],0x2f,
                            *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c0),
                            *(undefined8 *)(*param_1 + 0x1c0));
        if (lVar14 == 0) {
          lVar18 = 0;
        }
        else {
          uVar11 = *(undefined8 *)puVar4;
          lVar18 = thunk_FUN_02ef170c(lVar14,uVar11);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(lVar14,uVar11);
          }
        }
        plVar19 = (long *)param_1[4];
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar19;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_065c708c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar5,0);
LAB_065c708c:
        plVar19 = (long *)(*(code *)*puVar10)(plVar19,lVar18,puVar10[1]);
        if (plVar19 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar19);
          }
        }
        plVar20 = (long *)param_1[4];
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar20;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
              goto UnityEngine_Component__set_tag;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar5,6);
UnityEngine_Component__set_tag:
        (*(code *)*puVar10)(plVar20,plVar17,plVar19,puVar10[1]);
        plVar9[4] = plVar12[4];
        thunk_FUN_02f411dc();
      }
      plVar12 = (long *)param_1[3];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar14 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_065c7220;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar3,0);
LAB_065c7220:
      uVar11 = (*(code *)*puVar10)(plVar12,0xffffffff,puVar10[1]);
      (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1b0));
      plVar12 = (long *)param_1[4];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar14 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
            goto LAB_065c729c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar5,8);
LAB_065c729c:
      plVar17 = (long *)(*(code *)*puVar10)(plVar12,plVar17,puVar10[1]);
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
      (**(code **)(*plVar9 + 0x1c8))(plVar9,plVar17,*(undefined8 *)(*plVar9 + 0x1d0));
      plVar17 = (long *)param_1[4];
      uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      lVar14 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
      lVar18 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar21 = *(long *)puVar5;
      uVar23 = *(undefined8 *)puVar4;
      if (lVar14 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = thunk_FUN_02ef170c(lVar14,uVar23);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar14,uVar23);
        }
        uVar23 = *(undefined8 *)puVar4;
      }
      if (lVar18 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = thunk_FUN_02ef170c(lVar18,uVar23);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar18,uVar23);
        }
      }
      lVar18 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar21) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
            goto LAB_065c73e4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar17,lVar21,0x13);
LAB_065c73e4:
      (*(code *)*puVar10)(plVar17,uVar11,lVar13,lVar14,puVar10[1]);
      return plVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


