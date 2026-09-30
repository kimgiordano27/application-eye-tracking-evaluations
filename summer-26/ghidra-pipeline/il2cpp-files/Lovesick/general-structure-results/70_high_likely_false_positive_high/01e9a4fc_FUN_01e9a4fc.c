/*
FUNCTION_NAME: FUN_01e9a4fc
ENTRY_POINT: 01e9a4fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01e9ac70) */
/* WARNING: Removing unreachable block (ram,0x01e9b1e0) */
/* WARNING: Removing unreachable block (ram,0x01e9a838) */
/* WARNING: Removing unreachable block (ram,0x01e9aeb4) */
/* WARNING: Removing unreachable block (ram,0x01e9b1c4) */

void FUN_01e9a4fc(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 auVar17 [16];
  undefined1 local_64 [4];
  
  if ((DAT_0377fe55 & 1) == 0) {
    thunk_FUN_00d48444(Sirenix_Serialization_IDataReader_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_270);
    thunk_FUN_00d48444(SceneSelect_<ButtonHoldCorourtine>d__26_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Runtime_Serialization_ISerializable_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    thunk_FUN_00d48444(Method_System_Net_TimerThread_CreateQueue__);
    DAT_0377fe55 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x90);
  if ((plVar8 != (long *)0x0) &&
     (plVar8 = (long *)(**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0)),
     puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,
     plVar8 != (long *)0x0)) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e9a65c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar8,*(long *)
                                  Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,0
                         );
LAB_01e9a65c:
    puVar7 = StringLiteral_10310;
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar5 = Method_System_Net_TimerThread_CreateQueue__;
    puVar4 = Method_OVRObjectPool_ListScope<OVRAnchor_TrackableType>__ctor__;
    puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9a6e8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_01e9a6e8:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar7);
        if (plVar8 == (long *)0x0) goto LAB_01e9a82c;
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 == 0) goto LAB_01e9a804;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_01e9a7ec;
      }
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9a748;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,1);
LAB_01e9a748:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      lVar13 = plVar10[9];
      if (lVar13 == 0) {
        lVar13 = **(long **)(*(long *)puVar3 + 0xb8);
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(plVar10,lVar13);
      }
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(0,lVar13);
      }
      local_64[0] = 1;
      FUN_01299e64(*(long *)(param_2 + 0x48),lVar13,local_64,*(undefined8 *)puVar4);
    } while( true );
  }
  goto LAB_01e9b1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e9a7ec:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9a820;
    }
  }
LAB_01e9a804:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar7,0);
LAB_01e9a820:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01e9a82c:
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar8 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x58),0), plVar8 != (long *)0x0)) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e9a8a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01e9a8a0:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar5 = StringLiteral_13941;
    puVar4 = StringLiteral_270;
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9a918;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_01e9a918:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar7);
        if (plVar8 == (long *)0x0) goto LAB_01e9aa4c;
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 == 0) goto LAB_01e9aa24;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_01e9aa0c;
      }
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar3;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9a978;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,1);
LAB_01e9a978:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(*(long *)(param_2 + 0x10),plVar10[0x18],plVar10[0x1c],*(undefined8 *)puVar4);
    } while( true );
  }
  goto LAB_01e9b1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e9aa0c:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9aa40;
    }
  }
LAB_01e9aa24:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar7,0);
LAB_01e9aa40:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01e9aa4c:
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (plVar8 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x48),0), plVar8 != (long *)0x0)) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e9aab4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01e9aab4:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar4 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    puVar3 = SceneSelect_<ButtonHoldCorourtine>d__26_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9ab2c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_01e9ab2c:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar7);
        if (plVar8 == (long *)0x0) goto LAB_01e9ac64;
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 == 0) goto LAB_01e9ac3c;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_01e9ac24;
      }
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9ab8c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,1);
LAB_01e9ab8c:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(param_2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(*(long *)(param_2 + 0x50),plVar10[0x10],plVar10[0x13],*(undefined8 *)puVar3);
    } while( true );
  }
  goto LAB_01e9b1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e9ac24:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9ac58;
    }
  }
LAB_01e9ac3c:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar7,0);
LAB_01e9ac58:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01e9ac64:
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (plVar8 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x60),0), plVar8 != (long *)0x0)) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e9acd8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01e9acd8:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar5 = StringLiteral_270;
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9ad50;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_01e9ad50:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar7);
        if (plVar8 == (long *)0x0) goto LAB_01e9aea8;
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 == 0) goto LAB_01e9ae80;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_01e9ae68;
      }
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9adb0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,1);
LAB_01e9adb0:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar10);
        }
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = *(long *)(param_2 + 0x60);
      uVar11 = FUN_01eca598(plVar10,0);
      uVar12 = FUN_01ecb830(plVar10,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129a054(lVar13,uVar11,uVar12,*(undefined8 *)puVar5);
    } while( true );
  }
  goto LAB_01e9b1b8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e9b0f4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9b128;
    }
  }
LAB_01e9b10c:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar7,0);
LAB_01e9b128:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_01e9ae68:
    if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01e9ae9c;
    }
  }
LAB_01e9ae80:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar7,0);
LAB_01e9ae9c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01e9aea8:
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (plVar8 = (long *)FUN_01ec15c8(*(long *)(param_1 + 0x70),0), plVar8 != (long *)0x0)) {
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01e9af1c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01e9af1c:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar5 = OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo;
    puVar4 = System_Runtime_Serialization_ISerializable_TypeInfo;
    puVar3 = Sirenix_Serialization_IDataReader_TypeInfo;
    puVar2 = System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01e9afa4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_01e9afa4:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar8,*(undefined8 *)puVar7);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 == 0) goto LAB_01e9b10c;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_01e9b0f4;
      }
      lVar14 = *plVar8;
      lVar13 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01e9b004;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,lVar13,1);
LAB_01e9b004:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      lVar14 = plVar10[0xd];
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017b46ec(lVar13,0);
      *(long *)(lVar13 + 0x10) = lVar14;
      auVar17 = NEON_ext(*(undefined1 (*) [16])(plVar10 + 0xb),*(undefined1 (*) [16])(plVar10 + 0xb)
                         ,8,1);
      *(long *)(lVar13 + 0x20) = auVar17._8_8_;
      *(long *)(lVar13 + 0x18) = auVar17._0_8_;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = FUN_01e9238c(param_2);
      if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar15 = FUN_0129aa60(lVar14,*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10),
                            *(undefined8 *)puVar2);
      if ((uVar15 & 1) == 0) {
        lVar14 = FUN_01e9238c(param_2);
        if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a054(lVar14,*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10),lVar13,
                     *(undefined8 *)puVar3);
      }
    } while( true );
  }
LAB_01e9b1b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


