/*
FUNCTION_NAME: FUN_065c26c0
ENTRY_POINT: 065c26c0
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


long * FUN_065c26c0(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  
  puVar3 = ES3Types_ES3Type_byteArray_TypeInfo;
  if ((DAT_071ceb9f & 1) == 0) {
    FUN_02f07e70(ES3Types_ES3Type_MainModule_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_GuidArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_byteArray_TypeInfo);
    DAT_071ceb9f = 1;
  }
  plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_065ce118(plVar8,0);
  plVar18 = (long *)param_1[3];
  if (plVar18 != (long *)0x0) {
    lVar14 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_065c27cc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02eea86c(plVar18,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c27cc:
    uVar10 = (*(code *)*puVar9)(plVar18,1,puVar9[1]);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x188))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 400));
      puVar3 = System_Collections_Generic_HashSet<uint>_TypeInfo;
      plVar18 = (long *)param_1[4];
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar14 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)System_Collections_Generic_HashSet<uint>_TypeInfo)
          {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
            goto LAB_065c2854;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02eea86c(plVar18,*(long *)System_Collections_Generic_HashSet<uint>_TypeInfo,3);
LAB_065c2854:
      plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
      puVar4 = ES3Types_ES3Type_GuidArray_TypeInfo;
      if (plVar18 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar18);
        }
      }
      lVar14 = *(long *)ES3Types_ES3Type_GuidArray_TypeInfo;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar14 = *(long *)puVar4;
      }
      FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x110),0);
      plVar11 = (long *)FUN_065c34bc(param_1);
      lVar14 = param_1[2];
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar19 = (long *)param_1[4];
      uVar10 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar14 = *plVar19;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
            goto LAB_065c295c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_02eea86c(plVar19,*(long *)puVar3,6);
LAB_065c295c:
      (*(code *)*puVar9)(plVar19,plVar18,uVar10,puVar9[1]);
      plVar19 = plVar8 + 4;
      *plVar19 = plVar11[4];
      thunk_FUN_02f411dc(plVar19);
      puVar5 = ES3Types_ES3Type_MainModule_TypeInfo;
      puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
      do {
        plVar11 = (long *)param_1[3];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_065c29f0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar11,lVar14,1);
LAB_065c29f0:
        uVar6 = (*(code *)*puVar9)(plVar11,1,puVar9[1]);
        plVar11 = (long *)param_1[3];
        if ((uVar6 & 0xfffffffe) != 0x24) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 == 0) goto LAB_065c2ebc;
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_065c2ea4;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar2;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_065c2a64;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar11,lVar14,1);
LAB_065c2a64:
        iVar7 = (*(code *)*puVar9)(plVar11,1,puVar9[1]);
        if (iVar7 == 0x24) {
          lVar14 = *(long *)puVar4;
          lVar15 = param_1[3];
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar14 = *(long *)puVar4;
          }
          lVar14 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar15,0x24,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x118),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar14 == 0) {
            lVar15 = 0;
          }
          else {
            uVar10 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
            lVar15 = thunk_FUN_02ef170c(lVar14,uVar10);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(lVar14,uVar10);
            }
          }
          plVar11 = (long *)param_1[4];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_065c2bf0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,0);
LAB_065c2bf0:
          plVar11 = (long *)(*(code *)*puVar9)(plVar11,lVar15,puVar9[1]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar11);
            }
          }
          plVar20 = (long *)param_1[4];
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar14 = *plVar20;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                goto LAB_065c2d34;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar3,6);
LAB_065c2d34:
          (*(code *)*puVar9)(plVar20,plVar18,plVar11,puVar9[1]);
          uVar10 = 0x10;
        }
        else {
          if (iVar7 != 0x25) {
            lVar14 = param_1[3];
            thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                              );
            uVar10 = thunk_FUN_02ef1808();
            uVar12 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
            FUN_064698ac(uVar10,uVar12,0xb,0,lVar14,0);
            uVar12 = thunk_FUN_02f239f0(ES3Types_ES3Type_char_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar10,uVar12);
          }
          lVar14 = *(long *)puVar4;
          lVar15 = param_1[3];
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar14 = *(long *)puVar4;
          }
          lVar14 = (**(code **)(*param_1 + 0x1b8))
                             (param_1,lVar15,0x25,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x120),
                              *(undefined8 *)(*param_1 + 0x1c0));
          if (lVar14 == 0) {
            lVar15 = 0;
          }
          else {
            uVar10 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
            lVar15 = thunk_FUN_02ef170c(lVar14,uVar10);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(lVar14,uVar10);
            }
          }
          plVar11 = (long *)param_1[4];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_065c2c90;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,0);
LAB_065c2c90:
          plVar11 = (long *)(*(code *)*puVar9)(plVar11,lVar15,puVar9[1]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar11);
            }
          }
          plVar20 = (long *)param_1[4];
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar14 = *plVar20;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                goto LAB_065c2d60;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar3,6);
LAB_065c2d60:
          (*(code *)*puVar9)(plVar20,plVar18,plVar11,puVar9[1]);
          uVar10 = 0x11;
        }
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar14 = *(long *)puVar4;
        }
        FUN_0646d2cc(param_1,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x128),0);
        plVar11 = (long *)FUN_065c34bc(param_1);
        lVar14 = param_1[2];
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar20 = (long *)param_1[4];
        uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar14 = *plVar20;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
              goto LAB_065c2e30;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02eea86c(plVar20,*(long *)puVar3,6);
LAB_065c2e30:
        (*(code *)*puVar9)(plVar20,plVar18,uVar12,puVar9[1]);
        lVar15 = *plVar19;
        lVar21 = plVar11[4];
        lVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
        FUN_065afb80(lVar14,uVar10,lVar15,lVar21);
        *plVar19 = lVar14;
        thunk_FUN_02f411dc(plVar19,lVar14);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_065c2ea4:
    if (*(long *)(piVar17 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_065c2ed8;
    }
  }
LAB_065c2ebc:
  puVar9 = (undefined8 *)
           FUN_02eea86c(plVar11,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c2ed8:
  uVar10 = (*(code *)*puVar9)(plVar11,0xffffffff,puVar9[1]);
  (**(code **)(*plVar8 + 0x1a8))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x1b0));
  plVar11 = (long *)param_1[4];
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar14 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 8) * 0x10 + 0x138);
        goto LAB_065c2f54;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_02eea86c(plVar11,*(long *)puVar3,8);
LAB_065c2f54:
  plVar18 = (long *)(*(code *)*puVar9)(plVar11,plVar18,puVar9[1]);
  if (plVar18 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar18);
    }
  }
  (**(code **)(*plVar8 + 0x1c8))(plVar8,plVar18,*(undefined8 *)(*plVar8 + 0x1d0));
  plVar18 = (long *)param_1[4];
  uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  lVar14 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
  lVar15 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar21 = *(long *)puVar3;
  uVar12 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = thunk_FUN_02ef170c(lVar14,uVar12);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar14,uVar12);
    }
    uVar12 = *(undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
  }
  if (lVar15 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = thunk_FUN_02ef170c(lVar15,uVar12);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar15,uVar12);
    }
  }
  lVar15 = *plVar18;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == lVar21) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0x13) * 0x10 + 0x138);
        goto LAB_065c30ac;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_02eea86c(plVar18,lVar21,0x13);
LAB_065c30ac:
  (*(code *)*puVar9)(plVar18,uVar10,lVar13,lVar14,puVar9[1]);
  return plVar8;
}


