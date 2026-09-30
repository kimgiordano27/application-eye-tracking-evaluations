/*
FUNCTION_NAME: UnityEngine.InputSystem.PlayerInput$$ActivateInput
ENTRY_POINT: 05cf4ad4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_PlayerInput__ActivateInput(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  LeanTween__value();
  uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    /* try { // try from 05cf4af4 to 05df4afb has its CatchHandler @ 05cf4b30 */
                    /* try { // try from 05cf4afc to 05df4aff has its CatchHandler @ 05cf4b20 */
                    /* try { // try from 05cf4b00 to 05df4b03 has its CatchHandler @ 05cf4b1c */
                    /* try { // try from 05cf4b04 to 05df4b4b has its CatchHandler @ 05cf4850 */
  FUN_05cf359c(lVar4,*unaff_x24,0,0,1,uVar8);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4a28 with catch @ 05cf4b10
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4a14 with catch @ 05cf4b14
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4a04 with catch @ 05cf4b18
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4b00 with catch @ 05cf4b1c
                        */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)) {
LAB_05cf534c:
    uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,0);
  }
  puVar2 = Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4afc with catch @ 05cf4b20
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4a40 with catch @ 05cf4b24
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4994 with catch @ 05cf4b28
                        */
  if (0x22 < *(uint *)(unaff_x19 + 3)) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf492c with catch @ 05cf4b2c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05cf4af4 with catch @ 05cf4b30
                        */
    unaff_x19[0x26] = lVar4;
    LeanTween__value(unaff_x19 + 0x26,lVar4);
                    /* try { // try from 05cf4b4c to 05df4b4f has its CatchHandler @ 05cf4b5c */
    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    /* catch() { ... } // from try @ 05cf4b4c with catch @ 05cf4b5c */
                    /* try { // try from 05cf4b60 to 05df4b67 has its CatchHandler @ 05cf4b70 */
                    /* try { // try from 05cf4b68 to 05df4b73 has its CatchHandler @ 05cf4850 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05cf4b60 with catch @ 05cf4b70
                        */
    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
    goto LAB_05cf534c;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
    ;
    if (0x23 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x27] = lVar4;
      LeanTween__value(unaff_x19 + 0x27,lVar4);
      uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      lVar4 = thunk_FUN_02dd3144(*unaff_x23);
      FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,1,uVar8);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_05cf534c;
      puVar2 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo;
      if (0x24 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x28] = lVar4;
        LeanTween__value(unaff_x19 + 0x28,lVar4);
        uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
        lVar4 = thunk_FUN_02dd3144(*unaff_x23);
        FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,1,uVar8);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_05cf534c;
        puVar2 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
        if (0x25 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x29] = lVar4;
          LeanTween__value(unaff_x19 + 0x29,lVar4);
          uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
          lVar4 = thunk_FUN_02dd3144(*unaff_x23);
          FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,uVar8);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
          goto LAB_05cf534c;
          puVar2 = Mono_Security_PKCS7_EncryptedData_TypeInfo;
          if (0x26 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x2a] = lVar4;
            LeanTween__value(unaff_x19 + 0x2a,lVar4);
            uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
            lVar4 = thunk_FUN_02dd3144(*unaff_x23);
            FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
            goto LAB_05cf534c;
            puVar2 = Mono_Security_PKCS7_SignedData_TypeInfo;
            if (0x27 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0x2b] = lVar4;
              LeanTween__value(unaff_x19 + 0x2b,lVar4);
              uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
              lVar4 = thunk_FUN_02dd3144(*unaff_x23);
              FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
              goto LAB_05cf534c;
              puVar2 = 
              Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
              if (0x28 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0x2c] = lVar4;
                LeanTween__value(unaff_x19 + 0x2c,lVar4);
                uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0
                   )) goto LAB_05cf534c;
                puVar2 = 
                Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__;
                if (0x29 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0x2d] = lVar4;
                  LeanTween__value(unaff_x19 + 0x2d,lVar4);
                  uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                  FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar5 == 0)) goto LAB_05cf534c;
                  puVar2 = PauseMenuController_<BuildSceneList>d__25_TypeInfo;
                  if (0x2a < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x2e] = lVar4;
                    LeanTween__value(unaff_x19 + 0x2e,lVar4);
                    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar5 == 0)) goto LAB_05cf534c;
                    puVar2 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo;
                    if (0x2b < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x2f] = lVar4;
                      LeanTween__value(unaff_x19 + 0x2f,lVar4);
                      uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                      lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                      FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar5 == 0)) goto LAB_05cf534c;
                      puVar2 = OVRPlugin_OVRP_1_129_0_TypeInfo;
                      if (0x2c < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x30] = lVar4;
                        LeanTween__value(unaff_x19 + 0x30,lVar4);
                        uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                        lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                        FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,1,1,uVar8);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar5 == 0)) goto LAB_05cf534c;
                        puVar2 = 
                        Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                        ;
                        if (0x2d < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x31] = lVar4;
                          LeanTween__value(unaff_x19 + 0x31,lVar4);
                          uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                          lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                          FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar5 == 0)) goto LAB_05cf534c;
                          puVar2 = System_IO_Path_<>c_TypeInfo;
                          if (0x2e < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x32] = lVar4;
                            LeanTween__value(unaff_x19 + 0x32,lVar4);
                            uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                            lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                            FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,uVar8);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar5 == 0)) goto LAB_05cf534c;
                            puVar2 = 
                            Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                            ;
                            if (0x2f < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x33] = lVar4;
                              LeanTween__value(unaff_x19 + 0x33,lVar4);
                              uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                              lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                              FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar5 == 0
                                 )) goto LAB_05cf534c;
                              puVar2 = PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo;
                              if (0x30 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x34] = lVar4;
                                LeanTween__value(unaff_x19 + 0x34,lVar4);
                                uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar5 == 0)) goto LAB_05cf534c;
                                puVar2 = PTR_DAT_06a122e8;
                                if (0x31 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x35] = lVar4;
                                  LeanTween__value(unaff_x19 + 0x35,lVar4);
                                  uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                  FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                                  if ((lVar4 != 0) &&
                                     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar5 == 0)) goto LAB_05cf534c;
                                  puVar2 = 
                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                  ;
                                  if (0x32 < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x36] = lVar4;
                                    LeanTween__value(unaff_x19 + 0x36,lVar4);
                                    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,1,1,uVar8);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                       lVar5 == 0)) goto LAB_05cf534c;
                                    puVar3 = 
                                    Method_System_Collections_Generic_HashSet<Collider>__ctor__;
                                    puVar2 = PTR_DAT_069fc740;
                                    if (0x33 < *(uint *)(unaff_x19 + 3)) {
                                      unaff_x19[0x37] = lVar4;
                                      LeanTween__value(unaff_x19 + 0x37,lVar4);
                                      lVar4 = *(long *)puVar3;
                                      if (*(int *)(lVar4 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                        lVar4 = *(long *)puVar3;
                                      }
                                      uVar7 = **(undefined8 **)(lVar4 + 0xb8);
                                      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                      FUN_05494bbc(uVar8,(int)unaff_x19[3] << 1,uVar7,0);
                                      **(undefined8 **)(*unaff_x22 + 0xb8) = uVar8;
                                      LeanTween__value(*(undefined8 *)(*unaff_x22 + 0xb8),uVar8);
                                      uVar1 = *(uint *)(unaff_x19 + 3);
                                      if (0 < (int)uVar1) {
                                        lVar4 = 0;
                                        do {
                                          if (uVar1 <= (uint)lVar4) goto LAB_05cf5344;
                                          lVar5 = unaff_x19[lVar4 + 4];
                                          if (lVar5 == 0) {
LAB_05cf5348:
                    /* WARNING: Subroutine does not return */
                                            FUN_02d96860();
                                          }
                                          plVar6 = (long *)**(long **)(*unaff_x22 + 0xb8);
                                          if (plVar6 == (long *)0x0) goto LAB_05cf5348;
                                          (**(code **)(*plVar6 + 0x308))
                                                    (plVar6,*(undefined8 *)(lVar5 + 0x20),lVar5,
                                                     *(undefined8 *)(*plVar6 + 0x310));
                                          uVar1 = *(uint *)(unaff_x19 + 3);
                                          lVar4 = lVar4 + 1;
                                        } while ((int)lVar4 < (int)uVar1);
                                      }
                                      return;
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05cf5344:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


