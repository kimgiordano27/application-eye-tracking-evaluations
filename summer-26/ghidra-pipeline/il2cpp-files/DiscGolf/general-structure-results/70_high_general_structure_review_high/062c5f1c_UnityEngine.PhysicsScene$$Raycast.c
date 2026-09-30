/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Raycast
ENTRY_POINT: 062c5f1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void UnityEngine_PhysicsScene__Raycast(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  long *unaff_x23;
  
  puVar7 = (undefined8 *)FUN_02dd004c();
                    /* try { // try from 062c5f40 to 063c5f97 has its CatchHandler @ 062c5ca4 */
  (*(code *)*puVar7)();
  plVar12 = *(long **)(unaff_x19 + 0x90);
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Specialized_ListDictionary_Add__);
  FUN_04be213c();
  if (plVar12 == (long *)0x0) goto LAB_062c6894;
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
                    /* try { // try from 062c5f98 to 063c5f9b has its CatchHandler @ 062c5fac */
      if (*(long *)(piVar11 + -2) == *unaff_x23) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5de4 with catch @ 062c5fb8
                        */
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_062c5fc8;
      }
                    /* try { // try from 062c5f9c to 063c5fd3 has its CatchHandler @ 062c5ca4 */
      uVar10 = uVar10 - 1;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5f34 with catch @ 062c5fa0
                        */
      piVar11 = piVar11 + 4;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5e28 with catch @ 062c5fa4
                        */
    } while (uVar10 != 0);
  }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5f04 with catch @ 062c5fa8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5f98 with catch @ 062c5fac
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5e00 with catch @ 062c5fb0
                        */
  puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*unaff_x23,2);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 062c5dd0 with catch @ 062c5fb4
                        */
LAB_062c5fc8:
                    /* try { // try from 062c5fd4 to 063c5fd7 has its CatchHandler @ 062c5ff0 */
  (*(code *)*puVar7)(plVar12,uVar8,puVar7[1]);
  puVar1 = Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__;
                    /* try { // try from 062c5fd8 to 063c5ff3 has its CatchHandler @ 062c5ca4 */
  plVar12 = *(long **)(unaff_x19 + 0x98);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch() { ... } // from try @ 062c5fd4 with catch @ 062c5ff0 */
                    /* try { // try from 062c5ff4 to 063c5ffb has its CatchHandler @ 062c6004 */
    if (uVar10 != 0) {
                    /* try { // try from 062c5ffc to 063c6007 has its CatchHandler @ 062c5ca4 */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 062c5ff4 with catch @ 062c6004
                        */
                    /* try { // try from 062c6008 to 063c626f has its CatchHandler @ 062c6008
                       catch() { ... } // from try @ 062c6008 with catch @ 062c6008
                       catch() { ... } // from try @ 062c628c with catch @ 062c6008
                       catch() { ... } // from try @ 062c6334 with catch @ 062c6008
                       catch() { ... } // from try @ 062c6360 with catch @ 062c6008
                       catch() { ... } // from try @ 062c638c with catch @ 062c6008 */
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062c6034;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   Method_System_Runtime_Remoting_Lifetime_Lease_ProcessSponsorResponse__
                          ,0);
LAB_062c6034:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    puVar2 = Method_Unity_Properties_PropertyPath_get_Item__;
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPath_get_Item__);
    FUN_0494d298();
    puVar5 = Method_Unity_Properties_PropertyPathPart_ToString__;
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,*(undefined8 *)Method_Unity_Properties_PropertyPathPart_ToString__);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_062c60e4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,1);
LAB_062c60e4:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    puVar3 = Method_Unity_Properties_PropertyPathPart_CheckKind__;
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPathPart_CheckKind__);
    FUN_0494d298();
    puVar4 = Method_Unity_Properties_PropertyPathPart_GetHashCode__;
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,*(undefined8 *)Method_Unity_Properties_PropertyPathPart_GetHashCode__);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_062c6194;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,2);
LAB_062c6194:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,*(undefined8 *)puVar5);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_062c6234;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,3);
LAB_062c6234:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,*(undefined8 *)puVar4);
  }
  puVar1 = Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__;
  plVar12 = *(long **)(unaff_x19 + 0xa0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062c62d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__,
                          0);
LAB_062c62d8:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__);
    plVar12 = *(long **)(unaff_x19 + 0xa0);
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_062c6388;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,1);
LAB_062c6388:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<string>__);
  }
  puVar1 = Method_LightingExampleManager_HandleOnSceneWillLoad__;
  plVar12 = *(long **)(unaff_x19 + 0xa8);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_LightingExampleManager_HandleOnSceneWillLoad__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062c643c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)Method_LightingExampleManager_HandleOnSceneWillLoad__,0);
LAB_062c643c:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_TMPro_SetPropertyUtility_SetClass<TMP_FontAsset>__);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,
                 *(undefined8 *)
                  Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SelectionEvent>__);
    plVar12 = *(long **)(unaff_x19 + 0xa8);
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_062c64ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,1);
LAB_062c64ec:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_TMPro_SetPropertyUtility_SetClass<TMP_InputValidator>__);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,
                 *(undefined8 *)
                  Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnChangeEvent>__);
  }
  puVar1 = Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__;
  plVar12 = *(long **)(unaff_x19 + 0xb0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__)
        {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062c65a0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__
                          ,0);
LAB_062c65a0:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,
                 *(undefined8 *)
                  Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SubmitEvent>__);
    plVar12 = *(long **)(unaff_x19 + 0xb0);
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_062c6650;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,1);
LAB_062c6650:
    lVar9 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__)
    ;
    FUN_0494d298();
    if (lVar9 == 0) goto LAB_062c6894;
    FUN_049503d0(lVar9,uVar8,
                 *(undefined8 *)
                  Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_OnValidateInput>__);
  }
  plVar12 = *(long **)(unaff_x19 + 0xb8);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_LobbyCreateUI_<Awake>b__22_4__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062c6704;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)Method_LobbyCreateUI_<Awake>b__22_4__,0);
LAB_062c6704:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feaa0);
    FUN_04be4edc();
    if (plVar12 == (long *)0x0) goto LAB_062c6894;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_TMPro_SetPropertyUtility_SetClass<RectTransform>__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_062c6798;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)Method_TMPro_SetPropertyUtility_SetClass<RectTransform>__
                          ,0);
LAB_062c6798:
    uVar8 = (*(code *)*puVar7)(plVar12,uVar8,puVar7[1]);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_062c6894;
    FUN_061d5624(*(long *)(unaff_x19 + 0x50),uVar8,0);
  }
  plVar12 = *(long **)(unaff_x19 + 0x90);
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  if (plVar12 == (long *)0x0) {
LAB_062c682c:
    bVar6 = 1;
  }
  else {
    lVar9 = *plVar12;
    bVar6 = *(byte *)(*(long *)PTR_DAT_06a08cb0 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_06a08cb0)) {
      bVar6 = *(byte *)(*(long *)PTR_DAT_06a0d9e8 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_06a0d9e8))
      goto LAB_062c682c;
      bVar6 = FUN_0634b3c4(plVar12,0);
    }
    else {
      lVar9 = plVar12[7];
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0634eb94(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        bVar6 = 0;
      }
      else {
        if (plVar12[7] == 0) {
LAB_062c6894:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar6 = FUN_061e6654(plVar12[7],*(undefined8 *)(unaff_x19 + 0x90),0);
      }
    }
    bVar6 = bVar6 & 1;
  }
  *(byte *)(unaff_x19 + 0xda) = bVar6;
  FUN_062c4b28();
  return;
}


