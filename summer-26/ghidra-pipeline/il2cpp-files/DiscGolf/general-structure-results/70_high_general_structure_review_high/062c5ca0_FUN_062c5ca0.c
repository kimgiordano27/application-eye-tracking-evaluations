/*
FUNCTION_NAME: FUN_062c5ca0
ENTRY_POINT: 062c5ca0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_062c5ca0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
                    /* try { // try from 062c5ca4 to 063c5dcf has its CatchHandler @ 062c5ca4
                       catch() { ... } // from try @ 062c5ca4 with catch @ 062c5ca4
                       catch() { ... } // from try @ 062c5f40 with catch @ 062c5ca4
                       catch() { ... } // from try @ 062c5f9c with catch @ 062c5ca4
                       catch() { ... } // from try @ 062c5fd8 with catch @ 062c5ca4
                       catch() { ... } // from try @ 062c5ffc with catch @ 062c5ca4 */
  if ((DAT_06dc77db & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069feaa0);
    FUN_02d965b8(Method_LipSyncMicInput_StartMicrophone_Internal__);
    FUN_02d965b8(Method_System_Collections_Specialized_ListDictionary_Add__);
    FUN_02d965b8(PTR_DAT_06a0d9e8);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<RectTransform>__);
    FUN_02d965b8(Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__);
    FUN_02d965b8(Method_LightingExampleManager_HandleOnSceneWillLoad__);
    FUN_02d965b8(Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_2__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_4__);
    FUN_02d965b8(Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_FontAsset>__);
    FUN_02d965b8(Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPath_get_Item__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputValidator>__);
    FUN_02d965b8(Method_System_MonoCustomAttrs_IsDefined__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_CheckKind__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_GetHashCode__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnValidateInput>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_ToString__);
    FUN_02d965b8(Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__);
    FUN_02d965b8(Method_System_IO_MonoLinqHelper_ToArray<string>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SubmitEvent>__);
    FUN_02d965b8(PTR_DAT_06a08cb0);
    DAT_06dc77db = 1;
  }
  FUN_062c3ef0(param_1);
  puVar1 = PTR_DAT_069fb990;
  plVar13 = (long *)param_1[0x12];
  if (plVar13 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_069fb990;
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar7 = FUN_0634eb94(plVar13,0,0);
      *(byte *)(param_1 + 0x1b) = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_062c5e70;
      plVar13 = (long *)param_1[0x12];
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_LipSyncMicInput_StartMicrophone_Internal__);
      FUN_04be213c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x230),0);
      puVar2 = Method_LobbyCreateUI_<Awake>b__22_2__;
      if (plVar13 == (long *)0x0) {
LAB_062c6894:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Method_LobbyCreateUI_<Awake>b__22_2__) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_062c5f38;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)Method_LobbyCreateUI_<Awake>b__22_2__,0)
      ;
LAB_062c5f38:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      plVar13 = (long *)param_1[0x12];
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Specialized_ListDictionary_Add__);
      FUN_04be213c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar13 == (long *)0x0) goto LAB_062c6894;
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_062c5fc8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,2);
LAB_062c5fc8:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      puVar2 = Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__;
      plVar13 = (long *)param_1[0x13];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_062c6034;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar13,*(long *)
                                        Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__
                               ,0);
LAB_062c6034:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar3 = Method_Unity_Properties_PropertyPath_get_Item__;
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPath_get_Item__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x250),0);
        puVar6 = Method_Unity_Properties_PropertyPathPart_ToString__;
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,*(undefined8 *)Method_Unity_Properties_PropertyPathPart_ToString__)
        ;
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_062c60e4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,1);
LAB_062c60e4:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar4 = Method_Unity_Properties_PropertyPathPart_CheckKind__;
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_Unity_Properties_PropertyPathPart_CheckKind__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x260),0);
        puVar5 = Method_Unity_Properties_PropertyPathPart_GetHashCode__;
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,
                     *(undefined8 *)Method_Unity_Properties_PropertyPathPart_GetHashCode__);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_062c6194;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,2);
LAB_062c6194:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x270),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,*(undefined8 *)puVar6);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_062c6234;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,3);
LAB_062c6234:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,*(undefined8 *)puVar5);
      }
      puVar2 = Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__;
      plVar13 = (long *)param_1[0x14];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_062c62d8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar13,*(long *)
                                        Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__
                               ,0);
LAB_062c62d8:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_MonoCustomAttrs_GetCustomAttributesData__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__)
        ;
        plVar13 = (long *)param_1[0x14];
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_062c6388;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,1);
LAB_062c6388:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<string>__);
      }
      puVar2 = Method_LightingExampleManager_HandleOnSceneWillLoad__;
      plVar13 = (long *)param_1[0x15];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_LightingExampleManager_HandleOnSceneWillLoad__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_062c643c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar13,*(long *)
                                        Method_LightingExampleManager_HandleOnSceneWillLoad__,0);
LAB_062c643c:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<TMP_FontAsset>__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,
                     *(undefined8 *)
                      Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__);
        plVar13 = (long *)param_1[0x15];
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_062c64ec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,1);
LAB_062c64ec:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<TMP_InputValidator>__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,
                     *(undefined8 *)
                      Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__);
      }
      puVar2 = Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__;
      plVar13 = (long *)param_1[0x16];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_062c65a0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar13,*(long *)
                                        Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__
                               ,0);
LAB_062c65a0:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,
                     *(undefined8 *)
                      Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SubmitEvent>__);
        plVar13 = (long *)param_1[0x16];
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_062c6650;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar2,1);
LAB_062c6650:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__);
        FUN_0494d298(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
        if (lVar8 == 0) goto LAB_062c6894;
        FUN_049503d0(lVar8,uVar9,
                     *(undefined8 *)
                      Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnValidateInput>__);
      }
      plVar13 = (long *)param_1[0x17];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)Method_LobbyCreateUI_<Awake>b__22_4__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_062c6704;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar13,*(long *)Method_LobbyCreateUI_<Awake>b__22_4__,0);
LAB_062c6704:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
        FUN_04be4edc(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2f0),0);
        if (plVar13 == (long *)0x0) goto LAB_062c6894;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_TMPro_SetPropertyUtility_SetClass<RectTransform>__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_062c6798;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar13,*(long *)
                                        Method_TMPro_SetPropertyUtility_SetClass<RectTransform>__,0)
        ;
LAB_062c6798:
        uVar9 = (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
        if (param_1[10] == 0) goto LAB_062c6894;
        FUN_061d5624(param_1[10],uVar9,0);
      }
      plVar13 = (long *)param_1[0x12];
      *(undefined1 *)((long)param_1 + 0xd9) = 0;
      if (plVar13 == (long *)0x0) {
LAB_062c682c:
        bVar7 = 1;
      }
      else {
        lVar8 = *plVar13;
        bVar7 = *(byte *)(*(long *)PTR_DAT_06a08cb0 + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_06a08cb0))
        {
          bVar7 = *(byte *)(*(long *)PTR_DAT_06a0d9e8 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_06a0d9e8
             )) goto LAB_062c682c;
          bVar7 = FUN_0634b3c4(plVar13,0);
        }
        else {
          lVar8 = plVar13[7];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar11 = FUN_0634eb94(lVar8,0,0);
          if ((uVar11 & 1) == 0) {
            bVar7 = 0;
          }
          else {
            if (plVar13[7] == 0) goto LAB_062c6894;
            bVar7 = FUN_061e6654(plVar13[7],param_1[0x12],0);
          }
        }
        bVar7 = bVar7 & 1;
      }
      *(byte *)((long)param_1 + 0xda) = bVar7;
      goto LAB_062c5e70;
    }
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
LAB_062c5e70:
  FUN_062c4b28(param_1);
  return;
}


