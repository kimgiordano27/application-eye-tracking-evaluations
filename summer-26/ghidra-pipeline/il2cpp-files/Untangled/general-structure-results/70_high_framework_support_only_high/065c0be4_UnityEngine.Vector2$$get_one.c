/*
FUNCTION_NAME: UnityEngine.Vector2$$get_one
ENTRY_POINT: 065c0be4
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * UnityEngine_Vector2__get_one(undefined **param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 uVar13;
  long *unaff_x24;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000008;
  
code_r0x065c0be4:
  lVar10 = *(long *)param_1[0x60];
  if ((*(byte *)(*unaff_x23 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(unaff_x23,lVar10);
  }
LAB_065c0c14:
  lVar10 = *unaff_x24;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == param_3) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
        goto LAB_065c0cf8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(unaff_x24,param_3,6);
LAB_065c0cf8:
  (*(code *)*puVar5)(unaff_x24);
  lVar10 = *(long *)(unaff_x20 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar13 = 7;
  do {
    *(undefined1 *)(lVar10 + 0x1c) = 0;
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0646d2cc();
    plVar6 = (long *)FUN_065c1540();
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar15 = *(long **)(unaff_x20 + 0x20);
    (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
          goto LAB_065c06d8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar15,*unaff_x27,6);
LAB_065c06d8:
    (*(code *)*puVar5)(plVar15);
    uVar16 = *unaff_x22;
    lVar10 = plVar6[4];
    uVar7 = thunk_FUN_02ef1808(*unaff_x29);
    FUN_065afb80(uVar7,uVar13,uVar16,lVar10);
    *unaff_x22 = uVar7;
    thunk_FUN_02f411dc();
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_065c0730;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,1);
LAB_065c0730:
    uVar3 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
    puVar2 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if ((uVar3 & 0xfffffffc) != 0x1c) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_065c0e9c;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_065c0e84;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_065c07a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,1);
LAB_065c07a4:
    uVar3 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
    if ((uVar3 & 0xfffffffe) == 0x1c) goto code_r0x065c07c0;
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if ((uVar3 & 0xfffffffe) != 0x1e) {
      thunk_FUN_02f239f0(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
      uVar13 = thunk_FUN_02ef1808();
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d02130);
      FUN_064698ac(uVar13,uVar7,7,0,plVar6,0);
      uVar7 = thunk_FUN_02f239f0(ES3Types_ES3Type_bool_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar13,uVar7);
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_065c08dc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02eea86c(plVar6,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c08dc:
    uVar13 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_065c09b8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,1);
LAB_065c09b8:
    iVar4 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
    if (iVar4 < 0x1e) {
LAB_065c10bc:
      uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
      thunk_FUN_02f239f0(System_Collections_Generic_ICollection<Exception>_TypeInfo);
      uVar13 = thunk_FUN_02ef1808();
      FUN_0647183c(uVar13,0,uVar7,0);
      uVar7 = thunk_FUN_02f239f0(ES3Types_ES3Type_bool_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar13,uVar7);
    }
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_065c0a98;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,1);
LAB_065c0a98:
    iVar4 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
    if (0x1f < iVar4) goto LAB_065c10bc;
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto FUN_065c0b64;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,0);
FUN_065c0b64:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar6 = *(long **)(unaff_x20 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_065c0c5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,0);
LAB_065c0c5c:
    plVar15 = (long *)(*(code *)*puVar5)(plVar6,uVar13,puVar5[1]);
    if (plVar15 != (long *)0x0) {
      lVar10 = *(long *)System_Collections_Generic_HashSet<UIToolkitSubtitleElements>_TypeInfo;
      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar15,lVar10);
      }
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
          goto LAB_065c0d2c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,6);
LAB_065c0d2c:
    (*(code *)*puVar5)(plVar6);
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar13 = 2;
  } while( true );
code_r0x065c0be0:
  param_1 = &System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo;
  goto code_r0x065c0be4;
code_r0x065c07c0:
  plVar6 = *(long **)(unaff_x20 + 0x18);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar10 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_065c0874;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02eea86c(plVar6,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
LAB_065c0874:
  uVar13 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
  plVar6 = *(long **)(unaff_x20 + 0x18);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar10 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x28) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_065c0948;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,1);
LAB_065c0948:
  iVar4 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
  if (0x1b < iVar4) {
    plVar6 = *(long **)(unaff_x20 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_065c0a28;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,1);
LAB_065c0a28:
    iVar4 = (*(code *)*puVar5)(plVar6,1,puVar5[1]);
    if (iVar4 < 0x1e) {
      plVar6 = *(long **)(unaff_x20 + 0x18);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_065c0b04;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x28,0);
LAB_065c0b04:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      unaff_x24 = *(long **)(unaff_x20 + 0x20);
      if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = *unaff_x24;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_065c0bc4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(unaff_x24,*unaff_x27,0);
LAB_065c0bc4:
      unaff_x23 = (long *)(*(code *)*puVar5)(unaff_x24,uVar13,puVar5[1]);
      param_3 = *unaff_x27;
      if (unaff_x23 != (long *)0x0) goto code_r0x065c0be0;
      goto LAB_065c0c14;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  thunk_FUN_02f239f0(System_Collections_Generic_ICollection<Exception>_TypeInfo);
  uVar13 = thunk_FUN_02ef1808();
  FUN_0647183c(uVar13,0,uVar7,0);
  uVar7 = thunk_FUN_02f239f0(ES3Types_ES3Type_bool_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar13,uVar7);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_065c0e84:
    if (*(long *)(piVar12 + -2) == *(long *)System_Collections_Generic_HashSet<Text>_TypeInfo) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto UnityEngine_Vector2Int__get_magnitude;
    }
  }
LAB_065c0e9c:
  puVar5 = (undefined8 *)
           FUN_02eea86c(plVar6,*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo,0);
UnityEngine_Vector2Int__get_magnitude:
  uVar13 = (*(code *)*puVar5)(plVar6,0xffffffff,puVar5[1]);
  (**(code **)(*in_stack_00000008 + 0x1a8))
            (in_stack_00000008,uVar13,*(undefined8 *)(*in_stack_00000008 + 0x1b0));
  plVar6 = *(long **)(unaff_x20 + 0x20);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar10 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
        goto LAB_065c0f34;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x27,8);
LAB_065c0f34:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6);
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
  (**(code **)(*in_stack_00000008 + 0x1c8))
            (in_stack_00000008,plVar6,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
  plVar6 = *(long **)(unaff_x20 + 0x20);
  uVar13 = (**(code **)(*in_stack_00000008 + 0x1b8))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
  lVar10 = (**(code **)(*in_stack_00000008 + 0x178))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x180));
  lVar8 = (**(code **)(*in_stack_00000008 + 0x198))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1a0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar14 = *unaff_x27;
  uVar7 = *(undefined8 *)puVar2;
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_02ef170c(lVar10,uVar7);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar10,uVar7);
    }
    uVar7 = *(undefined8 *)puVar2;
  }
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = thunk_FUN_02ef170c(lVar8,uVar7);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar8,uVar7);
    }
  }
  lVar8 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar14) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
        goto LAB_065c107c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,lVar14,0x13);
LAB_065c107c:
  (*(code *)*puVar5)(plVar6,uVar13,lVar9,lVar10,puVar5[1]);
  return in_stack_00000008;
}


