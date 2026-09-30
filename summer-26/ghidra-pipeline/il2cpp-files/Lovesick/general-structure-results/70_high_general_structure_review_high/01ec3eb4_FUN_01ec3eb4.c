/*
FUNCTION_NAME: FUN_01ec3eb4
ENTRY_POINT: 01ec3eb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01ec4b80) */
/* WARNING: Removing unreachable block (ram,0x01ec4de0) */
/* WARNING: Removing unreachable block (ram,0x01ec5378) */
/* WARNING: Removing unreachable block (ram,0x01ec534c) */
/* WARNING: Removing unreachable block (ram,0x01ec5040) */
/* WARNING: Removing unreachable block (ram,0x01ec5358) */

void FUN_01ec3eb4(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_0377ffa2 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee168);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Collider>_Remove__);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    thunk_FUN_00d48444(Method_System_Net_TimerThread_CreateQueue__);
    DAT_0377ffa2 = 1;
  }
  puVar2 = PTR_DAT_033ee168;
  if ((param_2 == 0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
  goto LAB_01ec52c0;
  plVar17 = *(long **)(param_2 + 0x20);
  iVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
  plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_System_Collections_Generic_HashSet<Collider>_Remove__;
  if (plVar8 == (long *)0x0) goto LAB_01ec52c0;
  FUN_01743c34(plVar8,0);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if ((lVar9 == 0) ||
     (FUN_01e92090(lVar9,0), puVar2 = Method_System_Net_TimerThread_CreateQueue__,
     plVar17 == (long *)0x0)) goto LAB_01ec52c0;
  iVar6 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
  puVar4 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      plVar10 = (long *)(**(code **)(*plVar17 + 0x378))
                                  (plVar17,iVar6,*(undefined8 *)(*plVar17 + 0x380));
      if (plVar10 == (long *)0x0) goto LAB_01ec52c0;
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      lVar18 = plVar10[0x1a];
      plVar19 = *(long **)(param_1 + 0x20);
      local_64 = FUN_01eb81c0(plVar10,0);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
      if (plVar19 == (long *)0x0) goto LAB_01ec52c0;
      uVar12 = (**(code **)(*plVar19 + 0x348))(plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x350));
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01fc427c(lVar18,0,0);
        if ((uVar12 & 1) != 0) {
          if ((lVar18 == 0) || (lVar15 = FUN_01fc498c(lVar18,0), lVar15 == 0)) goto LAB_01ec52c0;
          if (*(int *)(lVar15 + 0x10) != 0) {
            plVar19 = *(long **)(param_1 + 0x40);
            if (plVar19 == (long *)0x0) goto LAB_01ec52c0;
            lVar15 = (**(code **)(*plVar19 + 0x308))
                               (plVar19,lVar18,*(undefined8 *)(*plVar19 + 0x310));
            if (lVar15 != 0) goto LAB_01ec40b4;
          }
        }
        plVar19 = *(long **)(param_1 + 0x20);
        local_68 = FUN_01eb81c0(plVar10,0);
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
        if (plVar19 == (long *)0x0) goto LAB_01ec52c0;
        (**(code **)(*plVar19 + 0x288))(plVar19,uVar11,plVar10,*(undefined8 *)(*plVar19 + 0x290));
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01fc427c(lVar18,0,0);
        if ((uVar12 & 1) != 0) {
          if ((lVar18 == 0) || (uVar12 = FUN_01fc498c(lVar18,0), uVar12 == 0)) goto LAB_01ec52c0;
          if (*(int *)(uVar12 + 0x10) != 0) {
            plVar19 = *(long **)(param_1 + 0x40);
            if (plVar19 == (long *)0x0) goto LAB_01ec52c0;
            uVar12 = (**(code **)(*plVar19 + 0x2a8))
                               (plVar19,lVar18,plVar10,*(undefined8 *)(*plVar19 + 0x2b0));
          }
        }
        uVar11 = FUN_01ec6810(uVar12,plVar10);
        plVar10 = *(long **)(param_1 + 0x50);
        if (plVar10 == (long *)0x0) goto LAB_01ec52c0;
        lVar18 = (**(code **)(*plVar10 + 0x308))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x310));
        if (lVar18 == 0) {
          plVar10 = *(long **)(param_1 + 0x50);
          if (plVar10 == (long *)0x0) goto LAB_01ec52c0;
          (**(code **)(*plVar10 + 0x2a8))(plVar10,uVar11,uVar11,*(undefined8 *)(*plVar10 + 0x2b0));
        }
      }
      else {
LAB_01ec40b4:
        (**(code **)(*plVar8 + 0x308))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x310));
      }
      iVar6 = iVar6 + 1;
      iVar7 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    } while (iVar6 < iVar7);
  }
  FUN_01eca4d4(param_1);
  lVar18 = FUN_01ec3320(param_2);
  if ((lVar18 == 0) || (plVar10 = (long *)FUN_01ec15c8(), plVar10 == (long *)0x0))
  goto LAB_01ec52c0;
  lVar18 = *plVar10;
  uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
        puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_01ec42b8;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)
            FUN_00d59724(plVar10,*(long *)
                                  Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__,0
                        );
LAB_01ec42b8:
  plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
  puVar4 = StringLiteral_13941;
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar15 = *plVar10;
    lVar18 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar18) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec4328;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar18,0);
LAB_01ec4328:
    uVar12 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if ((uVar12 & 1) == 0) {
      iVar6 = 0xd;
      goto FUN_01ec43f0;
    }
    lVar15 = *plVar10;
    lVar18 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar18) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01ec4388;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar18,1);
LAB_01ec4388:
    plVar19 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 300);
    if ((*(byte *)(*plVar19 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar19);
    }
    uVar12 = FUN_01eca148(param_1,*(undefined8 *)(param_1 + 0x80),plVar19[0x18]);
  } while ((uVar12 & 1) != 0);
  iVar6 = 0xc;
FUN_01ec43f0:
  plVar19 = (long *)StringLiteral_10310;
  plVar10 = (long *)thunk_FUN_00d6225c(plVar10,*(undefined8 *)StringLiteral_10310);
  if (plVar10 != (long *)0x0) {
    lVar18 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *plVar19) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec445c;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar10,*plVar19,0);
LAB_01ec445c:
    (*(code *)*puVar13)(plVar10,puVar13[1]);
  }
  if (iVar6 == 0xd) {
LAB_01ec4480:
    lVar18 = FUN_01ec3388(param_2);
    if ((lVar18 == 0) || (plVar10 = (long *)FUN_01ec15c8(), plVar10 == (long *)0x0))
    goto LAB_01ec52c0;
    lVar18 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec44ec;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar10,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01ec44ec:
    plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar10;
      lVar18 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar18) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec455c;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar18,0);
LAB_01ec455c:
      uVar12 = (*(code *)*puVar13)(plVar10,puVar13[1]);
      if ((uVar12 & 1) == 0) {
        iVar6 = 0x10;
        goto LAB_01ec4624;
      }
      lVar15 = *plVar10;
      lVar18 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar18) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ec45bc;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar18,1);
LAB_01ec45bc:
      plVar19 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar19 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar19);
      }
      uVar12 = FUN_01eca148(param_1,*(undefined8 *)(param_1 + 0x88),plVar19[0x10]);
    } while ((uVar12 & 1) != 0);
    iVar6 = 0xc;
LAB_01ec4624:
    plVar19 = (long *)StringLiteral_10310;
    plVar10 = (long *)thunk_FUN_00d6225c(plVar10,*(undefined8 *)StringLiteral_10310);
    if (plVar10 != (long *)0x0) {
      lVar18 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar19) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec4690;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar10,*plVar19,0);
LAB_01ec4690:
      (*(code *)*puVar13)(plVar10,puVar13[1]);
    }
    if (iVar6 != 0x10) {
      if (iVar6 == 0xc) goto LAB_01ec4958;
      if (iVar6 != 0) {
        return;
      }
    }
    lVar18 = FUN_01ec33f0(param_2);
    if ((lVar18 == 0) || (plVar10 = (long *)FUN_01ec15c8(), plVar10 == (long *)0x0))
    goto LAB_01ec52c0;
    lVar18 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec4720;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar10,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01ec4720:
    plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar10;
      lVar18 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar18) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec4790;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar18,0);
LAB_01ec4790:
      uVar12 = (*(code *)*puVar13)(plVar10,puVar13[1]);
      if ((uVar12 & 1) == 0) {
        iVar6 = 0x13;
        goto LAB_01ec4868;
      }
      lVar15 = *plVar10;
      lVar18 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar18) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ec47f0;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar18,1);
LAB_01ec47f0:
      plVar19 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar19 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar19);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x90);
      lVar18 = plVar19[0x10];
      thunk_FUN_00d8e500();
      uVar12 = FUN_01eca148(param_1,uVar11,lVar18,plVar19);
    } while ((uVar12 & 1) != 0);
    iVar6 = 0xc;
LAB_01ec4868:
    plVar19 = (long *)StringLiteral_10310;
    plVar10 = (long *)thunk_FUN_00d6225c(plVar10,*(undefined8 *)StringLiteral_10310);
    if (plVar10 != (long *)0x0) {
      lVar18 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar19) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec48d4;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar10,*plVar19,0);
LAB_01ec48d4:
      (*(code *)*puVar13)(plVar10,puVar13[1]);
    }
    if (iVar6 == 0x13) {
LAB_01ec48f8:
      uVar11 = FUN_01ec3458(param_2);
      FUN_01ec98f4(param_1,uVar11,0);
      FUN_01e92a3c(lVar9,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x30),0);
      FUN_01e92a3c(lVar9,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_1 + 0x30),0);
      *(long *)(param_1 + 0x60) = lVar9;
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
      return;
    }
    if (iVar6 != 0xc) {
      if (iVar6 != 0) {
        return;
      }
      goto LAB_01ec48f8;
    }
  }
  else if (iVar6 != 0xc) {
    if (iVar6 != 0) {
      return;
    }
    goto LAB_01ec4480;
  }
LAB_01ec4958:
  plVar17 = (long *)(**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
  if (plVar17 != (long *)0x0) {
    lVar9 = *plVar17;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec49c8;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar17,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01ec49c8:
    plVar17 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec4a30;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,0);
LAB_01ec4a30:
      uVar12 = (*(code *)*puVar13)(plVar17,puVar13[1]);
      if ((uVar12 & 1) == 0) {
        plVar17 = (long *)thunk_FUN_00d6225c(plVar17,*plVar19);
        if (plVar17 == (long *)0x0) goto LAB_01ec4b74;
        lVar9 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 == 0) goto LAB_01ec4b4c;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01ec4b34;
      }
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ec4a90;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,1);
LAB_01ec4a90:
      plVar10 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((*(byte *)(*plVar10 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar10);
        }
      }
      uVar12 = (**(code **)(*plVar8 + 0x348))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x350));
      if ((uVar12 & 1) == 0) {
        FUN_01ec6914(param_1,plVar10,0);
      }
    } while( true );
  }
  goto LAB_01ec52c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar16 = piVar16 + 4;
    if (uVar12 == 0) break;
LAB_01ec4b34:
    if (*(long *)(piVar16 + -2) == *plVar19) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01ec4b68;
    }
  }
LAB_01ec4b4c:
  puVar13 = (undefined8 *)FUN_00d59724(plVar17,*plVar19,0);
LAB_01ec4b68:
  (*(code *)*puVar13)(plVar17,puVar13[1]);
LAB_01ec4b74:
  lVar9 = FUN_01ec3320(param_2);
  if ((lVar9 != 0) && (plVar17 = (long *)FUN_01ec15c8(), plVar17 != (long *)0x0)) {
    lVar9 = *plVar17;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec4bf0;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar17,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01ec4bf0:
    plVar17 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
    puVar4 = StringLiteral_13941;
    puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec4c60;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,0);
LAB_01ec4c60:
      uVar12 = (*(code *)*puVar13)(plVar17,puVar13[1]);
      if ((uVar12 & 1) == 0) {
        plVar17 = (long *)thunk_FUN_00d6225c(plVar17,*plVar19);
        if (plVar17 == (long *)0x0) goto LAB_01ec4dd4;
        lVar9 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 == 0) goto LAB_01ec4dac;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01ec4d94;
      }
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ec4cc0;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,1);
LAB_01ec4cc0:
      plVar10 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      plVar14 = (long *)plVar10[5];
      if (plVar14 != (long *)0x0) {
        lVar9 = *(long *)puVar2;
        if ((*(byte *)(*plVar14 + 300) < *(byte *)(lVar9 + 300)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) != lVar9))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14,lVar9);
        }
      }
      uVar12 = (**(code **)(*plVar8 + 0x348))(plVar8,plVar14,*(undefined8 *)(*plVar8 + 0x350));
      if ((uVar12 & 1) == 0) {
        if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01ec13d8(*(long *)(param_1 + 0x80),plVar10[0x18]);
      }
    } while( true );
  }
  goto LAB_01ec52c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar16 = piVar16 + 4;
    if (uVar12 == 0) break;
LAB_01ec4d94:
    if (*(long *)(piVar16 + -2) == *plVar19) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01ec4dc8;
    }
  }
LAB_01ec4dac:
  puVar13 = (undefined8 *)FUN_00d59724(plVar17,*plVar19,0);
LAB_01ec4dc8:
  (*(code *)*puVar13)(plVar17,puVar13[1]);
LAB_01ec4dd4:
  lVar9 = FUN_01ec3388(param_2);
  if ((lVar9 != 0) && (plVar17 = (long *)FUN_01ec15c8(), plVar17 != (long *)0x0)) {
    lVar9 = *plVar17;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec4e50;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar17,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01ec4e50:
    plVar17 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec4ec0;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,0);
LAB_01ec4ec0:
      uVar12 = (*(code *)*puVar13)(plVar17,puVar13[1]);
      if ((uVar12 & 1) == 0) {
        plVar17 = (long *)thunk_FUN_00d6225c(plVar17,*plVar19);
        if (plVar17 == (long *)0x0) goto LAB_01ec5034;
        lVar9 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 == 0) goto LAB_01ec500c;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01ec4ff4;
      }
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ec4f20;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,1);
LAB_01ec4f20:
      plVar10 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      plVar14 = (long *)plVar10[5];
      if (plVar14 != (long *)0x0) {
        lVar9 = *(long *)puVar2;
        if ((*(byte *)(*plVar14 + 300) < *(byte *)(lVar9 + 300)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) != lVar9))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14,lVar9);
        }
      }
      uVar12 = (**(code **)(*plVar8 + 0x348))(plVar8,plVar14,*(undefined8 *)(*plVar8 + 0x350));
      if ((uVar12 & 1) == 0) {
        if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01ec13d8(*(long *)(param_1 + 0x88),plVar10[0x10]);
      }
    } while( true );
  }
  goto LAB_01ec52c0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar16 = piVar16 + 4;
    if (uVar12 == 0) break;
LAB_01ec525c:
    if (*(long *)(piVar16 + -2) == *plVar19) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01ec5290;
    }
  }
LAB_01ec5274:
  puVar13 = (undefined8 *)FUN_00d59724(plVar8,*plVar19,0);
LAB_01ec5290:
  (*(code *)*puVar13)(plVar8,puVar13[1]);
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar16 = piVar16 + 4;
    if (uVar12 == 0) break;
LAB_01ec4ff4:
    if (*(long *)(piVar16 + -2) == *plVar19) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01ec5028;
    }
  }
LAB_01ec500c:
  puVar13 = (undefined8 *)FUN_00d59724(plVar17,*plVar19,0);
LAB_01ec5028:
  (*(code *)*puVar13)(plVar17,puVar13[1]);
LAB_01ec5034:
  lVar9 = FUN_01ec33f0(param_2);
  if ((lVar9 != 0) && (plVar17 = (long *)FUN_01ec15c8(), plVar17 != (long *)0x0)) {
    lVar9 = *plVar17;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ec50b0;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar17,*(long *)
                                    Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                           ,0);
LAB_01ec50b0:
    plVar17 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = 
    Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
    ;
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ec5120;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,0);
LAB_01ec5120:
      uVar12 = (*(code *)*puVar13)(plVar17,puVar13[1]);
      if ((uVar12 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_00d6225c(plVar17,*plVar19);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 == 0) goto LAB_01ec5274;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_01ec525c;
      }
      lVar18 = *plVar17;
      lVar9 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ec5180;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar17,lVar9,1);
LAB_01ec5180:
      plVar10 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar3 + 300);
      if ((*(byte *)(*plVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar10);
      }
      plVar14 = (long *)plVar10[5];
      if (plVar14 != (long *)0x0) {
        lVar9 = *(long *)puVar2;
        if ((*(byte *)(*plVar14 + 300) < *(byte *)(lVar9 + 300)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) != lVar9))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14,lVar9);
        }
      }
      uVar12 = (**(code **)(*plVar8 + 0x348))(plVar8,plVar14,*(undefined8 *)(*plVar8 + 0x350));
      if ((uVar12 & 1) == 0) {
        lVar18 = *(long *)(param_1 + 0x90);
        lVar9 = plVar10[0x10];
        thunk_FUN_00d8e500();
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01ec13d8(lVar18,lVar9);
      }
    } while( true );
  }
LAB_01ec52c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


