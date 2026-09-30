/*
FUNCTION_NAME: FUN_05cf3888
ENTRY_POINT: 05cf3888
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


void FUN_05cf3888(void)

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
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar8 = Method_System_Collections_Generic_HashSet<InternedString>_Add__;
  puVar7 = Method_System_Collections_Generic_HashSet<InternedString>__ctor__;
  puVar6 = Method_System_Collections_Generic_HashSet<int>_get_Count__;
  puVar5 = Method_System_Collections_Generic_HashSet<int>_RemoveWhere__;
  puVar3 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
  puVar4 = Method_System_Collections_Generic_HashSet<GameObject>_Contains__;
  puVar2 = UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo;
  if ((DAT_06dc2de1 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Collider>__ctor__);
    FUN_02d965b8(PTR_DAT_069fc740);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<InternedString>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<int>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<GameObject>_Contains__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<InternedString>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<int>_RemoveWhere__);
    FUN_02d965b8(Mono_Security_PKCS7_ContentInfo_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_EncryptedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignedData_TypeInfo);
    FUN_02d965b8(Mono_Security_PKCS7_SignerInfo_TypeInfo);
    FUN_02d965b8(Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo);
    FUN_02d965b8(Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo);
    FUN_02d965b8(Unity_Networking_QoS_UcgQosServer_var);
    FUN_02d965b8(System_ParameterizedStrings_LowLevelStack_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a122e8);
    FUN_02d965b8(System_Net_Http_Headers_Parser_DateTime_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_Parser_MD5_TypeInfo);
    FUN_02d965b8(System_IO_Path_<>c_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_43_0_TypeInfo);
    FUN_02d965b8(System_Net_PathList_PathListComparer_TypeInfo);
    FUN_02d965b8(PauseMenuController_<BuildSceneList>d__25_TypeInfo);
    FUN_02d965b8(PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff558);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__);
    FUN_02d965b8(PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo);
    FUN_02d965b8(UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02d965b8(UnityEngine_Physics_ContactEventDelegate_TypeInfo);
    FUN_02d965b8(UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo);
    FUN_02d965b8(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db58);
    FUN_02d965b8(Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo);
    FUN_02d965b8(Assets_Scripts_Player_<Simulate>d__107_TypeInfo);
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                );
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
                );
    FUN_02d965b8(Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo);
    FUN_02d965b8(Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo)
    ;
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                );
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                );
    DAT_06dc2de1 = 1;
  }
  uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  uVar15 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05cf359c(uVar9,uVar15,0,0,0,uVar16);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  *puVar10 = uVar9;
  LeanTween__value(puVar10,uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05cf34d8(uVar9,0,*(undefined8 *)puVar6);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  *puVar10 = uVar9;
  LeanTween__value(puVar10,uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05cf34d8(uVar9,0,*(undefined8 *)puVar7);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
  *puVar10 = uVar9;
  LeanTween__value(puVar10,uVar9);
  plVar11 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,0x34);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9);
  if (plVar11 == (long *)0x0) {
LAB_05cf5348:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((lVar12 != 0) &&
     (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
LAB_05cf534c:
    uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,0);
  }
  puVar2 = System_Net_Http_Headers_Parser_MD5_TypeInfo;
  if ((int)plVar11[3] != 0) {
    plVar11[4] = lVar12;
    LeanTween__value(plVar11 + 4,lVar12);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
    goto LAB_05cf534c;
    puVar2 = Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo;
    if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
      plVar11[5] = lVar12;
      LeanTween__value(plVar11 + 5,lVar12);
      uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,1,uVar9);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
      goto LAB_05cf534c;
      puVar2 = 
      Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
      ;
      if (2 < *(uint *)(plVar11 + 3)) {
        plVar11[6] = lVar12;
        LeanTween__value(plVar11 + 6,lVar12);
        uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
        FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
        goto LAB_05cf534c;
        puVar2 = 
        Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
        ;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
          plVar11[7] = lVar12;
          LeanTween__value(plVar11 + 7,lVar12);
          uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
          lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
          FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
          goto LAB_05cf534c;
          puVar2 = UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo;
          if (4 < *(uint *)(plVar11 + 3)) {
            plVar11[8] = lVar12;
            LeanTween__value(plVar11 + 8,lVar12);
            uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
            FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
            goto LAB_05cf534c;
            puVar2 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo;
            if (5 < *(uint *)(plVar11 + 3)) {
              plVar11[9] = lVar12;
              LeanTween__value(plVar11 + 9,lVar12);
              uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
              lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
              FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)
                 ) goto LAB_05cf534c;
              puVar2 = Mono_Security_PKCS7_ContentInfo_TypeInfo;
              if (6 < *(uint *)(plVar11 + 3)) {
                plVar11[10] = lVar12;
                LeanTween__value(plVar11 + 10,lVar12);
                uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
                if ((lVar12 != 0) &&
                   (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar13 == 0)) goto LAB_05cf534c;
                puVar2 = 
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                ;
                if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                  plVar11[0xb] = lVar12;
                  LeanTween__value(plVar11 + 0xb,lVar12);
                  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                  FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
                  if ((lVar12 != 0) &&
                     (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar13 == 0)) goto LAB_05cf534c;
                  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
                  if (8 < *(uint *)(plVar11 + 3)) {
                    plVar11[0xc] = lVar12;
                    LeanTween__value(plVar11 + 0xc,lVar12);
                    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,1,uVar9);
                    if ((lVar12 != 0) &&
                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar13 == 0)) goto LAB_05cf534c;
                    puVar2 = System_Net_PathList_PathListComparer_TypeInfo;
                    if (9 < *(uint *)(plVar11 + 3)) {
                      plVar11[0xd] = lVar12;
                      LeanTween__value(plVar11 + 0xd,lVar12);
                      uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                      FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9);
                      if ((lVar12 != 0) &&
                         (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar13 == 0)) goto LAB_05cf534c;
                      puVar2 = PTR_DAT_069ff558;
                      if (10 < *(uint *)(plVar11 + 3)) {
                        plVar11[0xe] = lVar12;
                        LeanTween__value(plVar11 + 0xe,lVar12);
                        uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                        FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,0,uVar9);
                        if ((lVar12 != 0) &&
                           (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar13 == 0)) goto LAB_05cf534c;
                        puVar2 = UnityEngine_Physics_ContactEventDelegate_TypeInfo;
                        if (0xb < *(uint *)(plVar11 + 3)) {
                          plVar11[0xf] = lVar12;
                          LeanTween__value(plVar11 + 0xf,lVar12);
                          uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                          lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                          FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
                          if ((lVar12 != 0) &&
                             (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar13 == 0)) goto LAB_05cf534c;
                          puVar2 = 
                          UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                          ;
                          if (0xc < *(uint *)(plVar11 + 3)) {
                            plVar11[0x10] = lVar12;
                            LeanTween__value(plVar11 + 0x10,lVar12);
                            uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                            lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                            FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9);
                            if ((lVar12 != 0) &&
                               (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar11 + 0x40))
                               , lVar13 == 0)) goto LAB_05cf534c;
                            puVar2 = PTR_DAT_06a0db58;
                            if (0xd < *(uint *)(plVar11 + 3)) {
                              plVar11[0x11] = lVar12;
                              LeanTween__value(plVar11 + 0x11,lVar12);
                              uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                              lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                              FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,1,0,uVar9);
                              if ((lVar12 != 0) &&
                                 (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                      (*plVar11 + 0x40)),
                                 lVar13 == 0)) goto LAB_05cf534c;
                              puVar2 = System_Net_Http_Headers_Parser_DateTime_TypeInfo;
                              if (0xe < *(uint *)(plVar11 + 3)) {
                                plVar11[0x12] = lVar12;
                                LeanTween__value(plVar11 + 0x12,lVar12);
                                uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                                lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
                                if ((lVar12 != 0) &&
                                   (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                        (*plVar11 + 0x40)),
                                   lVar13 == 0)) goto LAB_05cf534c;
                                puVar2 = 
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                                ;
                                if ((*(uint *)(plVar11 + 3) & 0xfffffff0) != 0) {
                                  plVar11[0x13] = lVar12;
                                  LeanTween__value(plVar11 + 0x13,lVar12);
                                  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                                  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                  FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,uVar9);
                                  if ((lVar12 != 0) &&
                                     (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                          (*plVar11 + 0x40)),
                                     lVar13 == 0)) goto LAB_05cf534c;
                                  puVar2 = Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
                                  if (0x10 < *(uint *)(plVar11 + 3)) {
                                    plVar11[0x14] = lVar12;
                                    LeanTween__value(plVar11 + 0x14,lVar12);
                                    uVar9 = *(undefined8 *)
                                             (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9);
                                    if ((lVar12 != 0) &&
                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                            (*plVar11 + 0x40)),
                                       lVar13 == 0)) goto LAB_05cf534c;
                                    puVar2 = Unity_Networking_QoS_UcgQosServer_var;
                                    if (0x11 < *(uint *)(plVar11 + 3)) {
                                      plVar11[0x15] = lVar12;
                                      LeanTween__value(plVar11 + 0x15,lVar12);
                                      uVar9 = *(undefined8 *)
                                               (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                      FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,0,uVar9);
                                      if ((lVar12 != 0) &&
                                         (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                              (*plVar11 + 0x40)),
                                         lVar13 == 0)) goto LAB_05cf534c;
                                      puVar2 = 
                                      UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo
                                      ;
                                      if (0x12 < *(uint *)(plVar11 + 3)) {
                                        plVar11[0x16] = lVar12;
                                        LeanTween__value(plVar11 + 0x16,lVar12);
                                        uVar9 = *(undefined8 *)
                                                 (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                        FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9);
                                        if ((lVar12 != 0) &&
                                           (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                                (*plVar11 + 0x40)),
                                           lVar13 == 0)) goto LAB_05cf534c;
                                        puVar2 = 
                                        Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                                        ;
                                        if (0x13 < *(uint *)(plVar11 + 3)) {
                                          plVar11[0x17] = lVar12;
                                          LeanTween__value(plVar11 + 0x17,lVar12);
                                          uVar9 = *(undefined8 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                                          lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                          FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,1,uVar9);
                                          if ((lVar12 != 0) &&
                                             (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                                  (*plVar11 + 0x40))
                                             , lVar13 == 0)) goto LAB_05cf534c;
                                          puVar2 = 
                                          Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
                                          ;
                                          if (0x14 < *(uint *)(plVar11 + 3)) {
                                            plVar11[0x18] = lVar12;
                                            LeanTween__value(plVar11 + 0x18,lVar12);
                                            uVar9 = *(undefined8 *)
                                                     (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                            lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                            FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9);
                                            if ((lVar12 != 0) &&
                                               (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                                    (*plVar11 + 0x40
                                                                                    )), lVar13 == 0)
                                               ) goto LAB_05cf534c;
                                            puVar2 = 
                                            Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo
                                            ;
                                            if (0x15 < *(uint *)(plVar11 + 3)) {
                                              plVar11[0x19] = lVar12;
                                              LeanTween__value(plVar11 + 0x19,lVar12);
                                              uVar9 = *(undefined8 *)
                                                       (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                              lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                              FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,uVar9)
                                              ;
                                              if ((lVar12 != 0) &&
                                                 (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)
                                                                                      (*plVar11 +
                                                                                      0x40)),
                                                 lVar13 == 0)) goto LAB_05cf534c;
                                              puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
                                              if (0x16 < *(uint *)(plVar11 + 3)) {
                                                plVar11[0x1a] = lVar12;
                                                LeanTween__value(plVar11 + 0x1a,lVar12);
                                                uVar9 = *(undefined8 *)
                                                         (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                                lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,0,
                                                             uVar9);
                                                if ((lVar12 != 0) &&
                                                   (lVar13 = thunk_FUN_02dd3048(lVar12,*(undefined8
                                                                                         *)(*plVar11
                                                                                           + 0x40)),
                                                   lVar13 == 0)) goto LAB_05cf534c;
                                                puVar2 = 
                                                UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo
                                                ;
                                                if (0x17 < *(uint *)(plVar11 + 3)) {
                                                  plVar11[0x1b] = lVar12;
                                                  LeanTween__value(plVar11 + 0x1b,lVar12);
                                                  uVar9 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar4 + 0xb8) + 0x18
                                                           );
                                                  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                               uVar9);
                                                  if ((lVar12 != 0) &&
                                                     (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x1c] = lVar12;
                                                    LeanTween__value(plVar11 + 0x1c,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x1d] = lVar12;
                                                    LeanTween__value(plVar11 + 0x1d,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x1e] = lVar12;
                                                    LeanTween__value(plVar11 + 0x1e,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                                  ;
                                                  if (0x1b < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x1f] = lVar12;
                                                    LeanTween__value(plVar11 + 0x1f,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = OVRPlugin_OVRP_1_43_0_TypeInfo;
                                                  if (0x1c < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x20] = lVar12;
                                                    LeanTween__value(plVar11 + 0x20,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,1,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
                                                  if (0x1d < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x21] = lVar12;
                                                    LeanTween__value(plVar11 + 0x21,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x22] = lVar12;
                                                    LeanTween__value(plVar11 + 0x22,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  System_ParameterizedStrings_LowLevelStack_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar11 + 3) & 0xffffffe0) != 0) {
                                                    plVar11[0x23] = lVar12;
                                                    LeanTween__value(plVar11 + 0x23,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x24] = lVar12;
                                                    LeanTween__value(plVar11 + 0x24,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x25] = lVar12;
                                                    LeanTween__value(plVar11 + 0x25,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x26] = lVar12;
                                                    LeanTween__value(plVar11 + 0x26,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                                                  ;
                                                  if (0x23 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x27] = lVar12;
                                                    LeanTween__value(plVar11 + 0x27,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x28] = lVar12;
                                                    LeanTween__value(plVar11 + 0x28,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x29] = lVar12;
                                                    LeanTween__value(plVar11 + 0x29,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Mono_Security_PKCS7_EncryptedData_TypeInfo;
                                                  if (0x26 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x2a] = lVar12;
                                                    LeanTween__value(plVar11 + 0x2a,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = Mono_Security_PKCS7_SignedData_TypeInfo;
                                                  if (0x27 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x2b] = lVar12;
                                                    LeanTween__value(plVar11 + 0x2b,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__
                                                  ;
                                                  if (0x28 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x2c] = lVar12;
                                                    LeanTween__value(plVar11 + 0x2c,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__
                                                  ;
                                                  if (0x29 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x2d] = lVar12;
                                                    LeanTween__value(plVar11 + 0x2d,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<BuildSceneList>d__25_TypeInfo
                                                  ;
                                                  if (0x2a < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x2e] = lVar12;
                                                    LeanTween__value(plVar11 + 0x2e,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x2f] = lVar12;
                                                    LeanTween__value(plVar11 + 0x2f,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = OVRPlugin_OVRP_1_129_0_TypeInfo;
                                                  if (0x2c < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x30] = lVar12;
                                                    LeanTween__value(plVar11 + 0x30,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,1,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                                                  ;
                                                  if (0x2d < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x31] = lVar12;
                                                    LeanTween__value(plVar11 + 0x31,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = System_IO_Path_<>c_TypeInfo;
                                                  if (0x2e < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x32] = lVar12;
                                                    LeanTween__value(plVar11 + 0x32,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                                                  ;
                                                  if (0x2f < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x33] = lVar12;
                                                    LeanTween__value(plVar11 + 0x33,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo
                                                  ;
                                                  if (0x30 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x34] = lVar12;
                                                    LeanTween__value(plVar11 + 0x34,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = PTR_DAT_06a122e8;
                                                  if (0x31 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x35] = lVar12;
                                                    LeanTween__value(plVar11 + 0x35,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x18);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  if (0x32 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x36] = lVar12;
                                                    LeanTween__value(plVar11 + 0x36,lVar12);
                                                    uVar9 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x10);
                                                    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05cf359c(lVar12,*(undefined8 *)puVar2,0,1,1,
                                                                 uVar9);
                                                    if ((lVar12 != 0) &&
                                                       (lVar13 = thunk_FUN_02dd3048(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_HashSet<Collider>__ctor__
                                                  ;
                                                  puVar2 = PTR_DAT_069fc740;
                                                  if (0x33 < *(uint *)(plVar11 + 3)) {
                                                    plVar11[0x37] = lVar12;
                                                    LeanTween__value(plVar11 + 0x37,lVar12);
                                                    lVar12 = *(long *)puVar3;
                                                    if (*(int *)(lVar12 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar12 = *(long *)puVar3;
                                                    }
                                                    uVar15 = **(undefined8 **)(lVar12 + 0xb8);
                                                    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05494bbc(uVar9,(int)plVar11[3] << 1,uVar15,0
                                                                );
                                                    **(undefined8 **)(*(long *)puVar4 + 0xb8) =
                                                         uVar9;
                                                    LeanTween__value(*(undefined8 *)
                                                                      (*(long *)puVar4 + 0xb8),uVar9
                                                                    );
                                                    uVar1 = *(uint *)(plVar11 + 3);
                                                    if (0 < (int)uVar1) {
                                                      lVar12 = 0;
                                                      do {
                                                        if (uVar1 <= (uint)lVar12)
                                                        goto LAB_05cf5344;
                                                        lVar13 = plVar11[lVar12 + 4];
                                                        if ((lVar13 == 0) ||
                                                           (plVar14 = (long *)**(long **)(*(long *)
                                                  puVar4 + 0xb8), plVar14 == (long *)0x0))
                                                  goto LAB_05cf5348;
                                                  (**(code **)(*plVar14 + 0x308))
                                                            (plVar14,*(undefined8 *)(lVar13 + 0x20),
                                                             lVar13,*(undefined8 *)
                                                                     (*plVar14 + 0x310));
                                                  uVar1 = *(uint *)(plVar11 + 3);
                                                  lVar12 = lVar12 + 1;
                                                  } while ((int)lVar12 < (int)uVar1);
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


