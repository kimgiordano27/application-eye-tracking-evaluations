/*
FUNCTION_NAME: UnityEngine.ResourceRequest$$GetResult
ENTRY_POINT: 065c4458
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long * UnityEngine_ResourceRequest__GetResult(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x20;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *unaff_x27;
  long *unaff_x28;
  
  puVar3 = ES3Types_ES3Type_GuidArray_TypeInfo;
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                     0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_1);
    }
  }
  if (*(int *)(*(long *)ES3Types_ES3Type_GuidArray_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0646d2cc();
  plVar6 = (long *)FUN_065c5274();
  lVar11 = unaff_x20[2];
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar15 = (long *)unaff_x20[4];
  uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
        goto LAB_065c4554;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar15,*unaff_x27,6);
LAB_065c4554:
  (*(code *)*puVar8)(plVar15,param_1,uVar7,puVar8[1]);
  plVar15 = unaff_x28 + 4;
  *plVar15 = plVar6[4];
  thunk_FUN_02f411dc(plVar15);
  puVar4 = ES3Types_ES3Type_MainModule_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
  do {
    plVar6 = (long *)unaff_x20[3];
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_065c45e8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar6,lVar11,1);
LAB_065c45e8:
    iVar5 = (*(code *)*puVar8)(plVar6,1,puVar8[1]);
    plVar6 = (long *)unaff_x20[3];
    if (2 < iVar5 - 0x28U) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto UnityEngine_AsyncOperation__InternalDestroy;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_065c465c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar6,lVar11,1);
LAB_065c465c:
    iVar5 = (*(code *)*puVar8)(plVar6,1,puVar8[1]);
    if (iVar5 == 0x28) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar11 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar11 == 0) {
        lVar12 = 0;
      }
      else {
        uVar7 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        lVar12 = thunk_FUN_02ef170c(lVar11,uVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar11,uVar7);
        }
      }
      plVar6 = (long *)unaff_x20[4];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_065c4940;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,0);
LAB_065c4940:
      plVar6 = (long *)(*(code *)*puVar8)(plVar6,lVar12,puVar8[1]);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar6);
        }
      }
      plVar16 = (long *)unaff_x20[4];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
            goto LAB_065c4ab0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar16,*unaff_x27,6);
LAB_065c4ab0:
      (*(code *)*puVar8)(plVar16,param_1,plVar6,puVar8[1]);
      uVar7 = 0xc;
    }
    else if (iVar5 == 0x29) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar11 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar11 == 0) {
        lVar12 = 0;
      }
      else {
        uVar7 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        lVar12 = thunk_FUN_02ef170c(lVar11,uVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar11,uVar7);
        }
      }
      plVar6 = (long *)unaff_x20[4];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto FUN_065c48a0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,0);
FUN_065c48a0:
      plVar6 = (long *)(*(code *)*puVar8)(plVar6,lVar12,puVar8[1]);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar6);
        }
      }
      plVar16 = (long *)unaff_x20[4];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
            goto UnityEngine_Resources__LoadAsync;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar16,*unaff_x27,6);
UnityEngine_Resources__LoadAsync:
      (*(code *)*puVar8)(plVar16,param_1,plVar6,puVar8[1]);
      uVar7 = 0xb;
    }
    else {
      if (iVar5 != 0x2a) {
        lVar11 = unaff_x20[3];
        thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
        uVar7 = thunk_FUN_02ef1808();
        uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
        FUN_064698ac(uVar7,uVar9,0xf,0,lVar11,0);
        uVar9 = thunk_FUN_02f239f0(ES3Types_ES3Type_double_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar7,uVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar11 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar11 == 0) {
        lVar12 = 0;
      }
      else {
        uVar7 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        lVar12 = thunk_FUN_02ef170c(lVar11,uVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar11,uVar7);
        }
      }
      plVar6 = (long *)unaff_x20[4];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_065c49e0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,0);
LAB_065c49e0:
      plVar6 = (long *)(*(code *)*puVar8)(plVar6,lVar12,puVar8[1]);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar6);
        }
      }
      plVar16 = (long *)unaff_x20[4];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar11 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
            goto LAB_065c4adc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02eea86c(plVar16,*unaff_x27,6);
LAB_065c4adc:
      (*(code *)*puVar8)(plVar16,param_1,plVar6,puVar8[1]);
      uVar7 = 10;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0646d2cc();
    plVar6 = (long *)FUN_065c5274();
    lVar11 = unaff_x20[2];
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar16 = (long *)unaff_x20[4];
    uVar9 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar11 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
          goto LAB_065c4bac;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar16,*unaff_x27,6);
LAB_065c4bac:
    (*(code *)*puVar8)(plVar16,param_1,uVar9,puVar8[1]);
    lVar12 = *plVar15;
    lVar17 = plVar6[4];
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
    FUN_065afb80(lVar11,uVar7,lVar12,lVar17);
    *plVar15 = lVar11;
    thunk_FUN_02f411dc(plVar15,lVar11);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_065c4c54;
    }
  }
UnityEngine_AsyncOperation__InternalDestroy:
  puVar8 = (undefined8 *)
           FUN_02eea86c(plVar6,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c4c54:
  uVar7 = (*(code *)*puVar8)(plVar6,0xffffffff,puVar8[1]);
  (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,uVar7,*(undefined8 *)(*unaff_x28 + 0x1b0));
  plVar6 = (long *)unaff_x20[4];
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar11 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 8) * 0x10 + 0x138);
        goto LAB_065c4cd0;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,8);
LAB_065c4cd0:
  plVar6 = (long *)(*(code *)*puVar8)(plVar6,param_1,puVar8[1]);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar6);
    }
  }
  (**(code **)(*unaff_x28 + 0x1c8))(unaff_x28,plVar6,*(undefined8 *)(*unaff_x28 + 0x1d0));
  plVar6 = (long *)unaff_x20[4];
  uVar7 = (**(code **)(*unaff_x28 + 0x1b8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1c0));
  lVar11 = (**(code **)(*unaff_x28 + 0x178))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x180));
  lVar12 = (**(code **)(*unaff_x28 + 0x198))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1a0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar17 = *unaff_x27;
  uVar9 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = thunk_FUN_02ef170c(lVar11,uVar9);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar11,uVar9);
    }
    uVar9 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  }
  if (lVar12 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = thunk_FUN_02ef170c(lVar12,uVar9);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar12,uVar9);
    }
  }
  lVar12 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar17) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
        goto LAB_065c4e28;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar6,lVar17,0x13);
LAB_065c4e28:
  (*(code *)*puVar8)(plVar6,uVar7,lVar10,lVar11,puVar8[1]);
  return unaff_x28;
}


