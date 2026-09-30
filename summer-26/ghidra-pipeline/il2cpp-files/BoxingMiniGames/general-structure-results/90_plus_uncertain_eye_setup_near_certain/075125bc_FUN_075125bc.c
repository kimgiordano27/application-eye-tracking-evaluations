/*
FUNCTION_NAME: FUN_075125bc
ENTRY_POINT: 075125bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x07512e44) */
/* WARNING: Removing unreachable block (ram,0x07512fa4) */
/* WARNING: Removing unreachable block (ram,0x07512f10) */

void FUN_075125bc(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long local_90;
  long **local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar8 = Method_UnityEngine_Rendering_ObservableList<Volume>_add_ItemAdded__;
  puVar7 = Method_UnityEngine_Rendering_ObservableList<Volume>_Clear__;
  puVar6 = Method_UnityEngine_Rendering_ObservableList<Volume>_Add__;
  puVar5 = Method_UnityEngine_Rendering_ObservableList<Volume>__ctor__;
  puVar4 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
  puVar3 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Get__;
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>__ctor__;
  if ((DAT_07ef4b77 & 1) == 0) {
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_Add__);
    FUN_03642964(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>__ctor__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_add_ItemRemoved__);
    FUN_03642964(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Get__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>__ctor__);
    FUN_03642964(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    FUN_03642964(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>__ctor__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_get_Count__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_get_Item__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_remove_ItemAdded__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_remove_ItemRemoved__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>__ctor__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>__ctor__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__);
    FUN_03642964(PTR_DAT_07a04fa0);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_add_ItemAdded__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<Volume>_Clear__);
    FUN_03642964(PTR_DAT_07a04f98);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Clear__);
    FUN_03642964(PTR_DAT_079f49a8);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_GetEnumerator__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemAdded__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemRemoved__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
    FUN_03642964(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    FUN_03642964(Method_UniRx_ObservableYieldInstruction<Unit>_get_Error__);
    FUN_03642964(Method_UniRx_ObservableYieldInstruction<Unit>_get_HasError__);
    FUN_03642964(Method_UniRx_ObservableYieldInstruction<Unit>_get_HasResult__);
    FUN_03642964(Method_UniRx_ObservableYieldInstruction<Unit>_get_IsCanceled__);
    FUN_03642964(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__);
    FUN_03642964(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
    FUN_03642964(Method_System_Nullable<Pose>_get_Value__);
    DAT_07ef4b77 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_056aea28(uVar9,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x10),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_0551d95c(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),uVar9);
  uVar9 = FUN_03642a4c(*(undefined8 *)puVar6,4);
  puVar19 = (undefined8 *)(param_1 + 0x20);
  *puVar19 = uVar9;
  thunk_FUN_036b7ad0(puVar19,uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_0422a220(uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x28),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_0422a220(uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x30),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                            );
  FUN_07536f38(uVar9,0);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x40),uVar9);
  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                             );
  FUN_04bcf100(lVar10,*(undefined8 *)Method_UniRx_ObservableYieldInstruction<Unit>_get_HasResult__);
  plVar17 = (long *)(param_1 + 0x48);
  *plVar17 = lVar10;
  thunk_FUN_036b7ad0(plVar17,lVar10);
  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_UniRx_ObservableYieldInstruction<Unit>_get_Error__);
  FUN_0459e7d4(lVar10,*(undefined8 *)
                       Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemRemoved__
              );
  plVar21 = (long *)(param_1 + 0x50);
  *plVar21 = lVar10;
  thunk_FUN_036b7ad0(plVar21,lVar10);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a04f98);
  FUN_0422a220(uVar9,*(undefined8 *)PTR_DAT_07a04fa0);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x58),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_UniRx_ObservableYieldInstruction<Unit>_get_HasError__);
  FUN_0459e7d4(uVar9,*(undefined8 *)
                      Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x60),uVar9);
  FUN_05e5ae34(param_1,0);
  puVar2 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_GetEnumerator__;
  *(byte *)(param_1 + 0x9a) = param_3 & 1;
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_075167e0(uVar9,param_1);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x38),uVar9);
  FUN_0751687c(param_1);
  FUN_07516ab4(param_1);
  puVar3 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>__ctor__;
  puVar2 = Method_System_Nullable<Pose>_get_Value__;
  if (*plVar17 != 0) {
    FUN_074ee0ac(*(int *)(*plVar17 + 0x20) == 0,0);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar10 = *(long *)puVar2;
    }
    plVar18 = (long *)(param_1 + 0x90);
    *plVar18 = **(long **)(lVar10 + 0xb8);
    thunk_FUN_036b7ad0(plVar18);
    plVar11 = (long *)FUN_03642a4c(*(undefined8 *)puVar3,1);
    if (plVar11 != (long *)0x0) {
      lVar10 = thunk_FUN_0367fd24(param_1,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar10 == 0) {
LAB_07512fb4:
        uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar9,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_07512f98:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar11[4] = param_1;
      thunk_FUN_036b7ad0(plVar11 + 4,param_1);
      plVar20 = *(long **)(param_1 + 0x20);
      if (plVar20 != (long *)0x0) {
        lVar10 = thunk_FUN_0367fd24(plVar11,*(undefined8 *)(*plVar20 + 0x40));
        puVar2 = Method_UnityEngine_Rendering_ObservableList<Volume>_remove_ItemRemoved__;
        if (lVar10 == 0) goto LAB_07512fb4;
        if ((*(uint *)(plVar20 + 3) & 0xfffffffe) == 0) goto LAB_07512f98;
        plVar20[5] = (long)plVar11;
        thunk_FUN_036b7ad0(plVar20 + 5,plVar11);
        lVar10 = FUN_03cc3d70(param_2,*(undefined8 *)puVar2);
        plVar20 = (long *)*puVar19;
        if (plVar20 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar12 = thunk_FUN_0367fd24(lVar10,*(undefined8 *)(*plVar20 + 0x40)), lVar12 == 0))
          goto LAB_07512fb4;
          if (*(uint *)(plVar20 + 3) < 3) goto LAB_07512f98;
          plVar20[6] = lVar10;
          thunk_FUN_036b7ad0(plVar20 + 6,lVar10);
          lVar12 = FUN_07516c00(param_1);
          if (lVar12 != 0) {
            lVar12 = FUN_045a0b8c(lVar12,*(undefined8 *)
                                          Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemAdded__
                                 );
            plVar20 = (long *)*puVar19;
            if (plVar20 != (long *)0x0) {
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_0367fd24(lVar12,*(undefined8 *)(*plVar20 + 0x40)), lVar13 == 0)
                 ) goto LAB_07512fb4;
              puVar3 = Method_UnityEngine_Rendering_ObservableList<Volume>_get_Count__;
              if ((*(uint *)(plVar20 + 3) & 0xfffffffc) == 0) goto LAB_07512f98;
              plVar20[7] = lVar12;
              thunk_FUN_036b7ad0(plVar20 + 7,lVar12);
              plVar20 = (long *)*puVar19;
              uVar9 = FUN_03ca715c(plVar11,lVar12,*(undefined8 *)puVar3);
              lVar13 = FUN_03cc3d70(uVar9,*(undefined8 *)puVar2);
              if (plVar20 != (long *)0x0) {
                if ((lVar13 != 0) &&
                   (lVar14 = thunk_FUN_0367fd24(lVar13,*(undefined8 *)(*plVar20 + 0x40)),
                   lVar14 == 0)) goto LAB_07512fb4;
                puVar2 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__;
                if ((int)plVar20[3] == 0) goto LAB_07512f98;
                plVar20[4] = lVar13;
                thunk_FUN_036b7ad0(plVar20 + 4,lVar13);
                uVar15 = FUN_03d9b548(lVar10,*(undefined8 *)puVar2);
                if ((uVar15 & 1) != 0) goto LAB_07512f4c;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (0 < (int)uVar1) {
                    lVar13 = 0;
                    do {
                      if (uVar1 <= (uint)lVar13) goto LAB_07512f98;
                      if (*(long *)(lVar10 + 0x20 + lVar13 * 8) == 0) goto LAB_07512f94;
                      FUN_07516ab4();
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      lVar13 = lVar13 + 1;
                    } while ((int)lVar13 < (int)uVar1);
                  }
                  lVar10 = FUN_03caf32c(lVar10,*(undefined8 *)
                                                Method_UnityEngine_Rendering_ObservableList<Volume>_remove_ItemAdded__
                                       );
                  if (lVar10 != 0) {
                    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar10 + 0x80);
                    thunk_FUN_036b7ad0();
                    plVar11 = (long *)FUN_03cacbb4(lVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_Rendering_ObservableList<Volume>_get_Item__
                                                  );
                    if (plVar11 != (long *)0x0) {
                      lVar10 = *plVar11;
                      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) ==
                              *(long *)
                               Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__) {
                            puVar19 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                            goto LAB_07512cb4;
                          }
                          uVar15 = uVar15 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar15 != 0);
                      }
                      puVar19 = (undefined8 *)
                                FUN_0367cd30(plVar11,*(long *)
                                                  Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Add__
                                             ,0);
LAB_07512cb4:
                      local_68 = (long *)(*(code *)*puVar19)(plVar11,puVar19[1]);
                      puVar6 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Remove__;
                      puVar5 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_Clear__;
                      puVar4 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>__ctor__;
                      puVar3 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>__ctor__;
                      puVar2 = PTR_DAT_079f49a8;
                      local_88 = &local_68;
                      local_90 = 0;
                      if (local_68 != (long *)0x0) {
                        do {
                          plVar11 = local_68;
                          lVar10 = *local_68;
                          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
                          if (uVar15 != 0) {
                            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                                puVar19 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                                goto LAB_07512d4c;
                              }
                              uVar15 = uVar15 - 1;
                              piVar16 = piVar16 + 4;
                            } while (uVar15 != 0);
                          }
                          puVar19 = (undefined8 *)FUN_0367cd30(local_68,*(long *)puVar2,0);
LAB_07512d4c:
                          uVar15 = (*(code *)*puVar19)(plVar11,puVar19[1]);
                          plVar11 = local_68;
                          if ((uVar15 & 1) == 0) {
                            plVar11 = *local_88;
                            if (plVar11 == (long *)0x0) goto LAB_07512f00;
                            lVar10 = *plVar11;
                            uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
                            if (uVar15 == 0) goto LAB_07512ed8;
                            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            goto LAB_07512ec0;
                          }
                          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          lVar10 = *local_68;
                          uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
                          if (uVar15 != 0) {
                            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                                puVar19 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                                goto LAB_07512db0;
                              }
                              uVar15 = uVar15 - 1;
                              piVar16 = piVar16 + 4;
                            } while (uVar15 != 0);
                          }
                          puVar19 = (undefined8 *)FUN_0367cd30(local_68,*(long *)puVar5,0);
LAB_07512db0:
                          lVar10 = (*(code *)*puVar19)(plVar11,puVar19[1]);
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          if (*(long *)(lVar10 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03642c18();
                          }
                          FUN_0459fb44(&local_a8,*(long *)(lVar10 + 0x50),*(undefined8 *)puVar6);
                          local_80 = local_a8;
                          local_a8 = 0;
                          puStack_78 = puStack_a0;
                          local_70 = local_98;
                          puStack_a0 = &local_80;
                          while (uVar15 = FUN_05897b28(&local_80,*(undefined8 *)puVar4),
                                uVar9 = local_70, (uVar15 & 1) != 0) {
                            uVar15 = FUN_07516e2c(param_1,local_70,lVar10);
                            if ((uVar15 & 1) != 0) {
                              FUN_07516ef8(param_1,uVar9);
                            }
                          }
                          FUN_05897b24(&local_80,*(undefined8 *)puVar3);
                        } while (local_68 != (long *)0x0);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_07512f94;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_07512ec0:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar19 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07512ef4;
    }
  }
LAB_07512ed8:
  puVar19 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_079f4598,0);
LAB_07512ef4:
  (*(code *)*puVar19)(plVar11,puVar19[1]);
LAB_07512f00:
  if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00();
  }
  if (*plVar17 != 0) {
    FUN_074ee0ac(*(int *)(*plVar17 + 0x20) == 0,0);
    if (*plVar21 != 0) {
      FUN_074ee0ac(*(int *)(*plVar21 + 0x18) == 0,0);
LAB_07512f4c:
      lVar10 = FUN_03c8d7f8(param_1,*(undefined8 *)
                                     Method_UnityEngine_Rendering_ObservableList<Volume>_add_ItemRemoved__
                           );
      if (lVar10 != 0) {
        *plVar18 = lVar10;
        thunk_FUN_036b7ad0(plVar18,lVar10);
      }
      return;
    }
  }
LAB_07512f94:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


