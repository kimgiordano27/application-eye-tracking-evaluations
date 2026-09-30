/*
FUNCTION_NAME: UnityEngine.ResourceRequest$$get_asset
ENTRY_POINT: 065c44dc
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


long * UnityEngine_ResourceRequest__get_asset(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int in_w9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *unaff_x27;
  long *unaff_x28;
  
  *(int *)(param_1 + 0x18) = in_w9 + -1;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar12 = (long *)unaff_x20[4];
  (**(code **)(*unaff_x22 + 0x1b8))();
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
        goto LAB_065c4554;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar12,*unaff_x27,6);
LAB_065c4554:
  (*(code *)*puVar5)(plVar12);
  plVar12 = unaff_x28 + 4;
  *plVar12 = unaff_x22[4];
  thunk_FUN_02f411dc(plVar12);
  puVar3 = ES3Types_ES3Type_MainModule_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
  do {
    plVar13 = (long *)unaff_x20[3];
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar9 = *plVar13;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_065c45e8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar13,lVar8,1);
LAB_065c45e8:
    iVar4 = (*(code *)*puVar5)(plVar13,1,puVar5[1]);
    plVar13 = (long *)unaff_x20[3];
    if (2 < iVar4 - 0x28U) {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto UnityEngine_AsyncOperation__InternalDestroy;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar9 = *plVar13;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_065c465c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar13,lVar8,1);
LAB_065c465c:
    iVar4 = (*(code *)*puVar5)(plVar13,1,puVar5[1]);
    if (iVar4 == 0x28) {
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar8 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        lVar9 = thunk_FUN_02ef170c(lVar8,uVar14);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar8,uVar14);
        }
      }
      plVar13 = (long *)unaff_x20[4];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_065c4940;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar13,*unaff_x27,0);
LAB_065c4940:
      plVar13 = (long *)(*(code *)*puVar5)(plVar13,lVar9,puVar5[1]);
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar13);
        }
      }
      plVar13 = (long *)unaff_x20[4];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_065c4ab0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar13,*unaff_x27,6);
LAB_065c4ab0:
      (*(code *)*puVar5)(plVar13);
      uVar14 = 0xc;
    }
    else if (iVar4 == 0x29) {
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar8 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        lVar9 = thunk_FUN_02ef170c(lVar8,uVar14);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar8,uVar14);
        }
      }
      plVar13 = (long *)unaff_x20[4];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto FUN_065c48a0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar13,*unaff_x27,0);
FUN_065c48a0:
      plVar13 = (long *)(*(code *)*puVar5)(plVar13,lVar9,puVar5[1]);
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar13);
        }
      }
      plVar13 = (long *)unaff_x20[4];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto UnityEngine_Resources__LoadAsync;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar13,*unaff_x27,6);
UnityEngine_Resources__LoadAsync:
      (*(code *)*puVar5)(plVar13);
      uVar14 = 0xb;
    }
    else {
      if (iVar4 != 0x2a) {
        lVar8 = unaff_x20[3];
        thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
        uVar14 = thunk_FUN_02ef1808();
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
        FUN_064698ac(uVar14,uVar7,0xf,0,lVar8,0);
        uVar7 = thunk_FUN_02f239f0(ES3Types_ES3Type_double_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar14,uVar7);
      }
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar8 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      else {
        uVar14 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
        lVar9 = thunk_FUN_02ef170c(lVar8,uVar14);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar8,uVar14);
        }
      }
      plVar13 = (long *)unaff_x20[4];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_065c49e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar13,*unaff_x27,0);
LAB_065c49e0:
      plVar13 = (long *)(*(code *)*puVar5)(plVar13,lVar9,puVar5[1]);
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar13);
        }
      }
      plVar13 = (long *)unaff_x20[4];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_065c4adc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar13,*unaff_x27,6);
LAB_065c4adc:
      (*(code *)*puVar5)(plVar13);
      uVar14 = 10;
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0646d2cc();
    plVar13 = (long *)FUN_065c5274();
    lVar8 = unaff_x20[2];
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + -1;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar15 = (long *)unaff_x20[4];
    (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar8 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_065c4bac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar15,*unaff_x27,6);
LAB_065c4bac:
    (*(code *)*puVar5)(plVar15);
    lVar9 = *plVar12;
    lVar16 = plVar13[4];
    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_065afb80(lVar8,uVar14,lVar9,lVar16);
    *plVar12 = lVar8;
    thunk_FUN_02f411dc(plVar12,lVar8);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_065c4c54;
    }
  }
UnityEngine_AsyncOperation__InternalDestroy:
  puVar5 = (undefined8 *)
           FUN_02eea86c(plVar13,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c4c54:
  uVar14 = (*(code *)*puVar5)(plVar13,0xffffffff,puVar5[1]);
  (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,uVar14,*(undefined8 *)(*unaff_x28 + 0x1b0));
  plVar12 = (long *)unaff_x20[4];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
        goto LAB_065c4cd0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar12,*unaff_x27,8);
LAB_065c4cd0:
  plVar12 = (long *)(*(code *)*puVar5)(plVar12);
  if (plVar12 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar12);
    }
  }
  (**(code **)(*unaff_x28 + 0x1c8))(unaff_x28,plVar12,*(undefined8 *)(*unaff_x28 + 0x1d0));
  plVar12 = (long *)unaff_x20[4];
  uVar14 = (**(code **)(*unaff_x28 + 0x1b8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1c0));
  lVar8 = (**(code **)(*unaff_x28 + 0x178))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x180));
  lVar9 = (**(code **)(*unaff_x28 + 0x198))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1a0));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar16 = *unaff_x27;
  uVar7 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_02ef170c(lVar8,uVar7);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar8,uVar7);
    }
    uVar7 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  }
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_02ef170c(lVar9,uVar7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar9,uVar7);
    }
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar16) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x13) * 0x10 + 0x138);
        goto LAB_065c4e28;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar12,lVar16,0x13);
LAB_065c4e28:
  (*(code *)*puVar5)(plVar12,uVar14,lVar6,lVar8,puVar5[1]);
  return unaff_x28;
}


