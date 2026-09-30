/*
FUNCTION_NAME: FUN_065c5274
ENTRY_POINT: 065c5274
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


long * FUN_065c5274(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  
  puVar3 = ES3Types_ES3Type_doubleArray_TypeInfo;
  if ((DAT_071ceba2 & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_enum_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_doubleArray_TypeInfo);
    DAT_071ceba2 = 1;
  }
  plVar9 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_065ce34c(plVar9,0);
  puVar3 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  plVar19 = (long *)param_1[3];
  if (plVar19 == (long *)0x0) {
LAB_065c66c8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar15 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
        puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_065c537c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c537c:
  uVar11 = (*(code *)*puVar10)(plVar19,1,puVar10[1]);
  if (plVar9 == (long *)0x0) goto LAB_065c66c8;
  (**(code **)(*plVar9 + 0x188))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 400));
  puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
  plVar19 = (long *)param_1[3];
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar15 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) ==
          *(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo) {
        puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_065c5404;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo,1)
  ;
LAB_065c5404:
  iVar8 = (*(code *)*puVar10)(plVar19,1,puVar10[1]);
  puVar7 = ES3Types_ES3Type_GuidArray_TypeInfo;
  puVar6 = System_Collections_Generic_HashSet<uint>_TypeInfo;
  puVar5 = System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo;
  puVar4 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  if (iVar8 - 4U < 8) {
switchD_065c5460_caseD_2e:
    plVar19 = (long *)param_1[4];
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar15 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
          goto LAB_065c5504;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c5504:
    plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
    if (plVar19 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar19);
      }
    }
    lVar15 = *(long *)puVar7;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar15 = *(long *)puVar7;
    }
    FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x178),0);
    plVar12 = (long *)FUN_065c6708(param_1);
    lVar15 = param_1[2];
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar20 = (long *)param_1[4];
    uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar15 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
          goto LAB_065c55fc;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar6,6);
LAB_065c55fc:
    (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
    plVar9[4] = plVar12[4];
    thunk_FUN_02f411dc();
  }
  else {
    switch(iVar8) {
    case 0x27:
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto UnityEngine_CreateAssetMenuAttribute__set_order;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
UnityEngine_CreateAssetMenuAttribute__set_order:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar19);
        }
      }
      lVar15 = *(long *)puVar7;
      lVar16 = param_1[3];
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar15 = *(long *)puVar7;
      }
      lVar15 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,lVar16,0x27,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x1a0),
                          *(undefined8 *)(*param_1 + 0x1c0));
      if (lVar15 == 0) {
        lVar16 = 0;
      }
      else {
        uVar11 = *(undefined8 *)puVar4;
        lVar16 = thunk_FUN_02ef170c(lVar15,uVar11);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar15,uVar11);
        }
      }
      plVar12 = (long *)param_1[4];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_065c5cc8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar6,0);
LAB_065c5cc8:
      plVar12 = (long *)(*(code *)*puVar10)(plVar12,lVar16,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar12);
        }
      }
      plVar20 = (long *)param_1[4];
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_065c5dfc;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar6,6);
LAB_065c5dfc:
      (*(code *)*puVar10)(plVar20,plVar19,plVar12,puVar10[1]);
      FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x1a8),0);
      plVar12 = (long *)FUN_065c6708(param_1);
      lVar15 = param_1[2];
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar20 = (long *)param_1[4];
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_065c5f74;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar6,6);
LAB_065c5f74:
      (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
      lVar16 = plVar12[4];
      lVar15 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_enum_TypeInfo);
      FUN_065cf2a8(lVar15,1,lVar16,0);
      plVar9[4] = lVar15;
      thunk_FUN_02f411dc(plVar9 + 4,lVar15);
      break;
    default:
      lVar15 = param_1[3];
      thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
      uVar11 = thunk_FUN_02ef1808();
      uVar14 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
      FUN_064698ac(uVar11,uVar14,0x11,0,lVar15,0);
      uVar14 = thunk_FUN_02f239f0(ES3Types_ES3Type_float_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar11,uVar14);
    case 0x2b:
    case 0x2c:
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto LAB_065c56c4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c56c4:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar19);
        }
      }
      plVar12 = (long *)param_1[3];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar16 = *plVar12;
      lVar15 = *(long *)puVar3;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_065c5758;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar12,lVar15,0);
LAB_065c5758:
      uVar11 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
      plVar12 = (long *)param_1[3];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_065c57c4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c57c4:
      iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
      if (0x2a < iVar8) {
        plVar12 = (long *)param_1[3];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_065c5834;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,1);
LAB_065c5834:
        iVar8 = (*(code *)*puVar10)(plVar12,1,puVar10[1]);
        if (iVar8 < 0x2d) {
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c58a0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar2,0);
LAB_065c58a0:
          (*(code *)*puVar10)(plVar12,puVar10[1]);
          plVar12 = (long *)param_1[4];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_065c5900;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar6,0);
LAB_065c5900:
          plVar20 = (long *)(*(code *)*puVar10)(plVar12,uVar11,puVar10[1]);
          if (plVar20 != (long *)0x0) {
            lVar15 = *(long *)puVar5;
            if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
               (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8) !=
                lVar15)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar20,lVar15);
            }
          }
          lVar15 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_065c5994;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar6,6);
LAB_065c5994:
          (*(code *)*puVar10)(plVar12,plVar19,plVar20,puVar10[1]);
          if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(undefined1 *)(param_1[2] + 0x1c) = 0;
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar15 = *(long *)puVar7;
          }
          FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x188),0);
          plVar12 = (long *)FUN_065c6708(param_1);
          lVar15 = param_1[2];
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          plVar20 = (long *)param_1[4];
          uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar15 = *plVar20;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_065c5a6c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar6,6);
LAB_065c5a6c:
          (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
          lVar16 = plVar12[4];
          lVar15 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_enum_TypeInfo);
          FUN_065cf2a8(lVar15,0,lVar16,0);
          plVar9[4] = lVar15;
          thunk_FUN_02f411dc(plVar9 + 4,lVar15);
          break;
        }
      }
      lVar15 = param_1[3];
      thunk_FUN_02f239f0(System_Collections_Generic_ICollection<Exception>_TypeInfo);
      uVar11 = thunk_FUN_02ef1808();
      FUN_0647183c(uVar11,0,lVar15,0);
      uVar14 = thunk_FUN_02f239f0(ES3Types_ES3Type_float_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar11,uVar14);
    case 0x2d:
      plVar19 = (long *)param_1[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
            goto UnityEngine_HelpURLAttribute___ctor;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02eea86c(plVar19,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
UnityEngine_HelpURLAttribute___ctor:
      plVar19 = (long *)(*(code *)*puVar10)(plVar19,puVar10[1]);
      if (plVar19 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar19);
        }
      }
      lVar15 = *(long *)puVar7;
      lVar16 = param_1[3];
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar15 = *(long *)puVar7;
      }
      lVar15 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,lVar16,0x2d,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 400),
                          *(undefined8 *)(*param_1 + 0x1c0));
      if (lVar15 == 0) {
        lVar16 = 0;
      }
      else {
        uVar11 = *(undefined8 *)puVar4;
        lVar16 = thunk_FUN_02ef170c(lVar15,uVar11);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar15,uVar11);
        }
      }
      plVar12 = (long *)param_1[4];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_065c5d60;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar6,0);
LAB_065c5d60:
      plVar12 = (long *)(*(code *)*puVar10)(plVar12,lVar16,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar12);
        }
      }
      plVar20 = (long *)param_1[4];
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_065c5eb8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar6,6);
LAB_065c5eb8:
      (*(code *)*puVar10)(plVar20,plVar19,plVar12,puVar10[1]);
      FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x198),0);
      plVar12 = (long *)FUN_065c6708(param_1);
      lVar15 = param_1[2];
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar20 = (long *)param_1[4];
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto LAB_065c5fd4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar6,6);
LAB_065c5fd4:
      (*(code *)*puVar10)(plVar20,plVar19,uVar11,puVar10[1]);
      lVar16 = plVar12[4];
      lVar15 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_enum_TypeInfo);
      FUN_065cf2a8(lVar15,2,lVar16,0);
      plVar9[4] = lVar15;
      thunk_FUN_02f411dc(plVar9 + 4,lVar15);
      break;
    case 0x2e:
      goto switchD_065c5460_caseD_2e;
    }
  }
  plVar12 = (long *)param_1[3];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar16 = *plVar12;
  lVar15 = *(long *)puVar3;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar15) {
        puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_065c6074;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02eea86c(plVar12,lVar15,0);
LAB_065c6074:
  uVar11 = (*(code *)*puVar10)(plVar12,0xffffffff,puVar10[1]);
  (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1b0));
  plVar12 = (long *)param_1[4];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar15 = *plVar12;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
        puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
        goto LAB_065c60f0;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)puVar6,8);
LAB_065c60f0:
  plVar19 = (long *)(*(code *)*puVar10)(plVar12,plVar19,puVar10[1]);
  if (plVar19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar19);
    }
  }
  (**(code **)(*plVar9 + 0x1c8))(plVar9,plVar19,*(undefined8 *)(*plVar9 + 0x1d0));
  plVar19 = (long *)param_1[4];
  uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  lVar15 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  lVar16 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar21 = *(long *)puVar6;
  uVar14 = *(undefined8 *)puVar4;
  if (lVar15 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_02ef170c(lVar15,uVar14);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar15,uVar14);
    }
    uVar14 = *(undefined8 *)puVar4;
  }
  if (lVar16 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = thunk_FUN_02ef170c(lVar16,uVar14);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar16,uVar14);
    }
  }
  lVar16 = *plVar19;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar21) {
        puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x13) * 0x10 + 0x138);
        goto LAB_065c6230;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02eea86c(plVar19,lVar21,0x13);
LAB_065c6230:
  (*(code *)*puVar10)(plVar19,uVar11,lVar13,lVar15,puVar10[1]);
  return plVar9;
}


