/*
FUNCTION_NAME: FUN_05b5f048
ENTRY_POINT: 05b5f048
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 215
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x05b5fa90) */
/* WARNING: Removing unreachable block (ram,0x05b5f748) */
/* WARNING: Removing unreachable block (ram,0x05b5fb3c) */
/* WARNING: Removing unreachable block (ram,0x05b5fae4) */

void FUN_05b5f048(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  undefined4 uVar20;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  long local_68;
  
  if ((DAT_06b81c1e & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                );
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__);
    FUN_02d6084c(Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                );
    FUN_02d6084c(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__
                );
    DAT_06b81c1e = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_68 = 0;
  local_98 = 0;
  auVar3 = ZEXT816(0);
  if (((param_3 != 0) && (auVar3 = ZEXT816(0), *(long *)(param_3 + 0x1a0) != 0)) &&
     (auVar3 = ZEXT816(0), *(long *)(param_3 + 0x200) != 0)) {
    uVar2 = *(undefined4 *)(*(long *)(param_3 + 0x1a0) + 0x24);
    iVar7 = FUN_05b14d30(*(long *)(param_3 + 0x200),uVar2,0);
    iVar8 = FUN_06063868(0);
    auVar3._8_8_ = local_80._8_8_;
    auVar3._0_8_ = local_80._0_8_;
    uVar20 = 0x3f800000;
    if (*(int *)(param_3 + 0x228) == 0) {
      uVar20 = *(undefined4 *)(param_3 + 0x214);
    }
    if (*(long *)(param_3 + 0x200) != 0) {
      lVar10 = FUN_05b14cfc(*(long *)(param_3 + 0x200),uVar2,0);
      auVar3._8_8_ = local_80._8_8_;
      auVar3._0_8_ = local_80._0_8_;
      if (param_1 != 0) {
        local_80 = FUN_05a6f908(param_1,lVar10,0);
        puVar6 = 
        Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__;
        puVar5 = 
        Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__;
        puVar4 = 
        Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__;
        if (iVar7 == iVar8) {
          lVar15 = *(long *)(param_1 + 0x58);
          auVar3 = local_80;
          if (lVar15 == 0) goto LAB_05b5fadc;
          param_6 = (undefined8 *)(lVar15 + 0x28);
          puVar13 = (undefined8 *)(lVar15 + 0x30);
        }
        else {
          puVar13 = param_6 + 1;
        }
        local_90 = *param_6;
        uStack_88 = *puVar13;
        uVar11 = FUN_034e36d4(0x2e,*(undefined8 *)
                                    Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
        plVar12 = (long *)FUN_03526ed8(param_1,*(undefined8 *)puVar5,&local_68,uVar11,
                                       *(undefined8 *)puVar6,0x1e4,*(undefined8 *)puVar4);
        uVar11 = *param_7;
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(local_68 + 0x18) = param_7[1];
        *(undefined8 *)(local_68 + 0x10) = uVar11;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar15 = *plVar12;
        uVar11 = *param_7;
        uVar1 = param_7[1];
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__)
            {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05b5f2c0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02d9a5d4(plVar12,*(long *)
                                        Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                               ,0);
LAB_05b5f2c0:
        (*(code *)*puVar13)(plVar12,uVar11,uVar1,0,2,puVar13[1]);
        uVar11 = *param_4;
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(local_68 + 0x28) = param_4[1];
        *(undefined8 *)(local_68 + 0x20) = uVar11;
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
               ) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02d9a5d4(plVar12,*(long *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                               ,0);
UnityEngine_Timeline_TrackAsset__remove_OnClipPlayableCreate:
        (*(code *)*puVar13)(plVar12,param_4,1,puVar13[1]);
        uVar11 = *param_5;
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(local_68 + 0x38) = param_5[1];
        *(undefined8 *)(local_68 + 0x30) = uVar11;
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
               ) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05b5f3c8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02d9a5d4(plVar12,*(long *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                               ,0);
LAB_05b5f3c8:
        (*(code *)*puVar13)(plVar12,param_5,1,puVar13[1]);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined8 *)(local_68 + 0x48) = uStack_88;
        *(undefined8 *)(local_68 + 0x40) = local_90;
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
               ) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05b5f448;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02d9a5d4(plVar12,*(long *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                               ,0);
LAB_05b5f448:
        (*(code *)*puVar13)(plVar12,&local_90,1,puVar13[1]);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(undefined1 (*) [16])(local_68 + 0x50) = local_80;
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
               ) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05b5f4c8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02d9a5d4(plVar12,*(long *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                               ,0);
LAB_05b5f4c8:
        (*(code *)*puVar13)(plVar12,local_80,1,puVar13[1]);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(long *)(local_68 + 0x60) = param_2;
        thunk_FUN_02dd37b4();
        lVar15 = local_68;
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar9 = *(int *)(param_3 + 0x210);
        *(undefined4 *)(local_68 + 0x6c) = uVar20;
        *(int *)(local_68 + 0x68) = iVar9;
        *(undefined4 *)(local_68 + 0x70) = *(undefined4 *)(param_3 + 0x220);
        if (iVar9 == 4) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_05b5e2e4((int *)(param_3 + 0x210));
          *(undefined8 *)(lVar15 + 0x78) = uVar11;
          thunk_FUN_02dd37b4((undefined8 *)(lVar15 + 0x78));
        }
        else {
          *(undefined8 *)(local_68 + 0x78) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(local_68 + 0x78),0);
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar9 = FUN_0604bd34(*(long *)(lVar10 + 0x18),0);
        if (((iVar9 == 8) || (iVar9 == 0x3b)) || (iVar9 == 0x4a)) {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar16 = 1;
        }
        else {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar16 = 0;
        }
        *(undefined1 *)(local_68 + 0x80) = uVar16;
        *(undefined1 *)(local_68 + 0x81) = *(undefined1 *)(param_3 + 399);
        lVar10 = *(long *)
                  Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
        ;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar10);
          lVar10 = *(long *)
                    Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
          ;
        }
        lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar15 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar10);
            lVar10 = *(long *)
                      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
            ;
          }
          uVar11 = **(undefined8 **)(lVar10 + 0xb8);
          lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                       Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                     );
          FUN_04180bc0(lVar15,uVar11,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                       ,0);
          plVar14 = (long *)(*(long *)(*(long *)
                                        Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                      + 0xb8) + 8);
          *plVar14 = lVar15;
          thunk_FUN_02dd37b4(plVar14,lVar15);
        }
        lVar19 = *(long *)
                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
        ;
        lVar10 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)(lVar19 + 0x20)) {
              lVar10 = lVar10 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_05b5f6ac;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        lVar10 = FUN_02d9a5d4(plVar12);
LAB_05b5f6ac:
        lVar10 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar10 + 8),lVar19);
        (**(code **)(lVar10 + 8))(plVar12,lVar15,lVar10);
        if (plVar12 != (long *)0x0) {
          lVar10 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0675f3d0) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05b5f72c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5f72c:
          (*(code *)*puVar13)(plVar12,puVar13[1]);
        }
        if (iVar7 == iVar8) {
          return;
        }
        auVar3 = local_80;
        if (param_2 != 0) {
          lVar10 = FUN_06036b0c(param_2,0);
          auVar3 = local_80;
          if (lVar10 != 0) {
            iVar7 = FUN_06036024(lVar10,0);
            uVar11 = FUN_034e36d4(0x2f,*(undefined8 *)
                                        Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
            plVar12 = (long *)FUN_03526ed8(param_1,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                                           ,&local_98,uVar11,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__
                                           ,0x21f,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                                          );
            uVar1 = local_80._8_8_;
            uVar11 = local_80._0_8_;
            if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined1 (*) [16])(local_98 + 0x10) = local_80;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar10 = *plVar12;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)
                     Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05b5f83c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_02d9a5d4(plVar12,*(long *)
                                            Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                                   ,0);
LAB_05b5f83c:
            (*(code *)*puVar13)(plVar12,uVar11,uVar1,0,2,puVar13[1]);
            uVar11 = *param_7;
            if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(local_98 + 0x28) = param_7[1];
            *(undefined8 *)(local_98 + 0x20) = uVar11;
            lVar10 = *plVar12;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)
                     Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                   ) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_05b5f8c4;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_02d9a5d4(plVar12,*(long *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                                   ,0);
LAB_05b5f8c4:
            (*(code *)*puVar13)(plVar12,param_7,1,puVar13[1]);
            if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(long *)(local_98 + 0x60) = param_2;
            thunk_FUN_02dd37b4((long *)(local_98 + 0x60),param_2);
            if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(int *)(local_98 + 0x68) = iVar7 + -1;
            lVar10 = *(long *)
                      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
            ;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar10);
              lVar10 = *(long *)
                        Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
              ;
            }
            lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
            if (lVar15 == 0) {
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar10);
                lVar10 = *(long *)
                          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                ;
              }
              uVar11 = **(undefined8 **)(lVar10 + 0xb8);
              lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                           Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                         );
              FUN_04180bc0(lVar15,uVar11,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                           ,0);
              plVar14 = (long *)(*(long *)(*(long *)
                                            Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                                          + 0xb8) + 0x10);
              *plVar14 = lVar15;
              thunk_FUN_02dd37b4(plVar14,lVar15);
            }
            lVar19 = *(long *)
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
            ;
            lVar10 = *plVar12;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)(lVar19 + 0x20)) {
                  lVar10 = lVar10 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10
                           + 0x138;
                  goto LAB_05b5f9f8;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            lVar10 = FUN_02d9a5d4(plVar12);
LAB_05b5f9f8:
            lVar10 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar10 + 8),lVar19);
            (**(code **)(lVar10 + 8))(plVar12,lVar15,lVar10);
            if (plVar12 != (long *)0x0) {
              lVar10 = *plVar12;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0675f3d0) {
                    puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_05b5fa78;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)PTR_DAT_0675f3d0,0);
LAB_05b5fa78:
              (*(code *)*puVar13)(plVar12,puVar13[1]);
            }
            lVar10 = *(long *)(param_3 + 0x200);
            uVar20 = FUN_06063868(0);
            auVar3 = local_80;
            if (lVar10 != 0) {
              FUN_05b14d60(lVar10,uVar2,uVar20,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05b5fadc:
  local_80 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


