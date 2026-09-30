/*
FUNCTION_NAME: UnityEngine.InputSystem.PlayerInput$$set_actions
ENTRY_POINT: 05cf3bd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_PlayerInput__set_actions(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long in_x9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  uVar11 = *(undefined8 *)(*(long *)(in_x9 + 0xb8) + 0x10);
  uVar10 = **(undefined8 **)(param_1 + 0xb8);
  uVar4 = thunk_FUN_02dd3144();
  FUN_05cf359c(uVar4,uVar10,0,0,0,uVar11);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar5 = uVar4;
  LeanTween__value(puVar5,uVar4);
  uVar4 = thunk_FUN_02dd3144(*unaff_x27);
  FUN_05cf34d8(uVar4,0,*unaff_x28);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  LeanTween__value(puVar5,uVar4);
  uVar4 = thunk_FUN_02dd3144(*unaff_x27);
  FUN_05cf34d8(uVar4,0,*unaff_x26);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  *puVar5 = uVar4;
  LeanTween__value(puVar5,uVar4);
  plVar6 = (long *)FUN_02d966a4(*unaff_x25,0x34);
  uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  lVar7 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_05cf359c(lVar7,*unaff_x24,0,0,0,uVar4);
  if (plVar6 == (long *)0x0) {
LAB_05cf5348:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_05cf534c:
    uVar4 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,0);
  }
  puVar2 = System_Net_Http_Headers_Parser_MD5_TypeInfo;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    LeanTween__value(plVar6 + 4,lVar7);
    uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_05cf534c;
    puVar2 = Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar7;
      LeanTween__value(plVar6 + 5,lVar7);
      uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      lVar7 = thunk_FUN_02dd3144(*unaff_x23);
      FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,1,uVar4);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_05cf534c;
      puVar2 = 
      Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
      ;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        LeanTween__value(plVar6 + 6,lVar7);
        uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
        lVar7 = thunk_FUN_02dd3144(*unaff_x23);
        FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_05cf534c;
        puVar2 = 
        Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
        ;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
          plVar6[7] = lVar7;
          LeanTween__value(plVar6 + 7,lVar7);
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
          lVar7 = thunk_FUN_02dd3144(*unaff_x23);
          FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_05cf534c;
          puVar2 = UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            LeanTween__value(plVar6 + 8,lVar7);
            uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
            lVar7 = thunk_FUN_02dd3144(*unaff_x23);
            FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_05cf534c;
            puVar2 = Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              LeanTween__value(plVar6 + 9,lVar7);
              uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
              lVar7 = thunk_FUN_02dd3144(*unaff_x23);
              FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_05cf534c;
              puVar2 = Mono_Security_PKCS7_ContentInfo_TypeInfo;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                LeanTween__value(plVar6 + 10,lVar7);
                uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_05cf534c;
                puVar2 = 
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                ;
                if ((*(uint *)(plVar6 + 3) & 0xfffffff8) != 0) {
                  plVar6[0xb] = lVar7;
                  LeanTween__value(plVar6 + 0xb,lVar7);
                  uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                  lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                  FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_05cf534c;
                  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar7;
                    LeanTween__value(plVar6 + 0xc,lVar7);
                    uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,1,uVar4);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_05cf534c;
                    puVar2 = System_Net_PathList_PathListComparer_TypeInfo;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar7;
                      LeanTween__value(plVar6 + 0xd,lVar7);
                      uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                      lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                      FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,uVar4);
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_05cf534c;
                      puVar2 = PTR_DAT_069ff558;
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar7;
                        LeanTween__value(plVar6 + 0xe,lVar7);
                        uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                        lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                        FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,0,uVar4);
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_05cf534c;
                        puVar2 = UnityEngine_Physics_ContactEventDelegate_TypeInfo;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar7;
                          LeanTween__value(plVar6 + 0xf,lVar7);
                          uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                          lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                          FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
                          if ((lVar7 != 0) &&
                             (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar8 == 0)) goto LAB_05cf534c;
                          puVar2 = 
                          UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                          ;
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar7;
                            LeanTween__value(plVar6 + 0x10,lVar7);
                            uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                            lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                            FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,uVar4);
                            if ((lVar7 != 0) &&
                               (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_05cf534c;
                            puVar2 = PTR_DAT_06a0db58;
                            if (0xd < *(uint *)(plVar6 + 3)) {
                              plVar6[0x11] = lVar7;
                              LeanTween__value(plVar6 + 0x11,lVar7);
                              uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                              lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                              FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,1,0,uVar4);
                              if ((lVar7 != 0) &&
                                 (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar8 == 0)) goto LAB_05cf534c;
                              puVar2 = System_Net_Http_Headers_Parser_DateTime_TypeInfo;
                              if (0xe < *(uint *)(plVar6 + 3)) {
                                plVar6[0x12] = lVar7;
                                LeanTween__value(plVar6 + 0x12,lVar7);
                                uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
                                if ((lVar7 != 0) &&
                                   (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_05cf534c;
                                puVar2 = 
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                                ;
                                if ((*(uint *)(plVar6 + 3) & 0xfffffff0) != 0) {
                                  plVar6[0x13] = lVar7;
                                  LeanTween__value(plVar6 + 0x13,lVar7);
                                  uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                  lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                  FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,uVar4);
                                  if ((lVar7 != 0) &&
                                     (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                        (*plVar6 + 0x40)),
                                     lVar8 == 0)) goto LAB_05cf534c;
                                  puVar2 = Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
                                  if (0x10 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x14] = lVar7;
                                    LeanTween__value(plVar6 + 0x14,lVar7);
                                    uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,uVar4);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_05cf534c;
                                    puVar2 = Unity_Networking_QoS_UcgQosServer_var;
                                    if (0x11 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x15] = lVar7;
                                      LeanTween__value(plVar6 + 0x15,lVar7);
                                      uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                      lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                      FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,0,uVar4);
                                      if ((lVar7 != 0) &&
                                         (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar8 == 0)) goto LAB_05cf534c;
                                      puVar2 = 
                                      UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo
                                      ;
                                      if (0x12 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x16] = lVar7;
                                        LeanTween__value(plVar6 + 0x16,lVar7);
                                        uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10)
                                        ;
                                        lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                        FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,uVar4);
                                        if ((lVar7 != 0) &&
                                           (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                              (*plVar6 + 0x40)),
                                           lVar8 == 0)) goto LAB_05cf534c;
                                        puVar2 = 
                                        Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                                        ;
                                        if (0x13 < *(uint *)(plVar6 + 3)) {
                                          plVar6[0x17] = lVar7;
                                          LeanTween__value(plVar6 + 0x17,lVar7);
                                          uVar4 = *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                          lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                          FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,1,uVar4);
                                          if ((lVar7 != 0) &&
                                             (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                                (*plVar6 + 0x40)),
                                             lVar8 == 0)) goto LAB_05cf534c;
                                          puVar2 = 
                                          Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
                                          ;
                                          if (0x14 < *(uint *)(plVar6 + 3)) {
                                            plVar6[0x18] = lVar7;
                                            LeanTween__value(plVar6 + 0x18,lVar7);
                                            uVar4 = *(undefined8 *)
                                                     (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                            lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                            FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,uVar4);
                                            if ((lVar7 != 0) &&
                                               (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                                  (*plVar6 + 0x40)),
                                               lVar8 == 0)) goto LAB_05cf534c;
                                            puVar2 = 
                                            Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo
                                            ;
                                            if (0x15 < *(uint *)(plVar6 + 3)) {
                                              plVar6[0x19] = lVar7;
                                              LeanTween__value(plVar6 + 0x19,lVar7);
                                              uVar4 = *(undefined8 *)
                                                       (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                              lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                              FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,uVar4);
                                              if ((lVar7 != 0) &&
                                                 (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                                    (*plVar6 + 0x40)
                                                                            ), lVar8 == 0))
                                              goto LAB_05cf534c;
                                              puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
                                              if (0x16 < *(uint *)(plVar6 + 3)) {
                                                plVar6[0x1a] = lVar7;
                                                LeanTween__value(plVar6 + 0x1a,lVar7);
                                                uVar4 = *(undefined8 *)
                                                         (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,0,uVar4
                                                            );
                                                if ((lVar7 != 0) &&
                                                   (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)
                                                                                      (*plVar6 +
                                                                                      0x40)),
                                                   lVar8 == 0)) goto LAB_05cf534c;
                                                puVar2 = 
                                                UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo
                                                ;
                                                if (0x17 < *(uint *)(plVar6 + 3)) {
                                                  plVar6[0x1b] = lVar7;
                                                  LeanTween__value(plVar6 + 0x1b,lVar7);
                                                  uVar4 = *(undefined8 *)
                                                           (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                  lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                  FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                               uVar4);
                                                  if ((lVar7 != 0) &&
                                                     (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8
                                                                                         *)(*plVar6 
                                                  + 0x40)), lVar8 == 0)) goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1c] = lVar7;
                                                    LeanTween__value(plVar6 + 0x1c,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1d] = lVar7;
                                                    LeanTween__value(plVar6 + 0x1d,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1e] = lVar7;
                                                    LeanTween__value(plVar6 + 0x1e,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                                  ;
                                                  if (0x1b < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1f] = lVar7;
                                                    LeanTween__value(plVar6 + 0x1f,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = OVRPlugin_OVRP_1_43_0_TypeInfo;
                                                  if (0x1c < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x20] = lVar7;
                                                    LeanTween__value(plVar6 + 0x20,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,1,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
                                                  if (0x1d < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x21] = lVar7;
                                                    LeanTween__value(plVar6 + 0x21,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x22] = lVar7;
                                                    LeanTween__value(plVar6 + 0x22,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  System_ParameterizedStrings_LowLevelStack_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar6 + 3) & 0xffffffe0) != 0) {
                                                    plVar6[0x23] = lVar7;
                                                    LeanTween__value(plVar6 + 0x23,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x24] = lVar7;
                                                    LeanTween__value(plVar6 + 0x24,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x25] = lVar7;
                                                    LeanTween__value(plVar6 + 0x25,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x26] = lVar7;
                                                    LeanTween__value(plVar6 + 0x26,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                                                  ;
                                                  if (0x23 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x27] = lVar7;
                                                    LeanTween__value(plVar6 + 0x27,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x28] = lVar7;
                                                    LeanTween__value(plVar6 + 0x28,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x29] = lVar7;
                                                    LeanTween__value(plVar6 + 0x29,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Mono_Security_PKCS7_EncryptedData_TypeInfo;
                                                  if (0x26 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2a] = lVar7;
                                                    LeanTween__value(plVar6 + 0x2a,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = Mono_Security_PKCS7_SignedData_TypeInfo;
                                                  if (0x27 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2b] = lVar7;
                                                    LeanTween__value(plVar6 + 0x2b,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__
                                                  ;
                                                  if (0x28 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2c] = lVar7;
                                                    LeanTween__value(plVar6 + 0x2c,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__
                                                  ;
                                                  if (0x29 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2d] = lVar7;
                                                    LeanTween__value(plVar6 + 0x2d,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<BuildSceneList>d__25_TypeInfo
                                                  ;
                                                  if (0x2a < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2e] = lVar7;
                                                    LeanTween__value(plVar6 + 0x2e,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2f] = lVar7;
                                                    LeanTween__value(plVar6 + 0x2f,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = OVRPlugin_OVRP_1_129_0_TypeInfo;
                                                  if (0x2c < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x30] = lVar7;
                                                    LeanTween__value(plVar6 + 0x30,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,1,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                                                  ;
                                                  if (0x2d < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x31] = lVar7;
                                                    LeanTween__value(plVar6 + 0x31,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = System_IO_Path_<>c_TypeInfo;
                                                  if (0x2e < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x32] = lVar7;
                                                    LeanTween__value(plVar6 + 0x32,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                                                  ;
                                                  if (0x2f < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x33] = lVar7;
                                                    LeanTween__value(plVar6 + 0x33,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo
                                                  ;
                                                  if (0x30 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x34] = lVar7;
                                                    LeanTween__value(plVar6 + 0x34,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = PTR_DAT_06a122e8;
                                                  if (0x31 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x35] = lVar7;
                                                    LeanTween__value(plVar6 + 0x35,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  if (0x32 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x36] = lVar7;
                                                    LeanTween__value(plVar6 + 0x36,lVar7);
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar7 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar7,*(undefined8 *)puVar2,0,1,1,
                                                                 uVar4);
                                                    if ((lVar7 != 0) &&
                                                       (lVar8 = thunk_FUN_02dd3048(lVar7,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_HashSet<Collider>__ctor__
                                                  ;
                                                  puVar2 = PTR_DAT_069fc740;
                                                  if (0x33 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x37] = lVar7;
                                                    LeanTween__value(plVar6 + 0x37,lVar7);
                                                    lVar7 = *(long *)puVar3;
                                                    if (*(int *)(lVar7 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                      lVar7 = *(long *)puVar3;
                                                    }
                                                    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
                                                    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05494bbc(uVar4,(int)plVar6[3] << 1,uVar10,0)
                                                    ;
                                                    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar4;
                                                    LeanTween__value(*(undefined8 *)
                                                                      (*unaff_x22 + 0xb8),uVar4);
                                                    uVar1 = *(uint *)(plVar6 + 3);
                                                    if (0 < (int)uVar1) {
                                                      lVar7 = 0;
                                                      do {
                                                        if (uVar1 <= (uint)lVar7) goto LAB_05cf5344;
                                                        lVar8 = plVar6[lVar7 + 4];
                                                        if ((lVar8 == 0) ||
                                                           (plVar9 = (long *)**(long **)(*unaff_x22
                                                                                        + 0xb8),
                                                           plVar9 == (long *)0x0))
                                                        goto LAB_05cf5348;
                                                        (**(code **)(*plVar9 + 0x308))
                                                                  (plVar9,*(undefined8 *)
                                                                           (lVar8 + 0x20),lVar8,
                                                                   *(undefined8 *)(*plVar9 + 0x310))
                                                        ;
                                                        uVar1 = *(uint *)(plVar6 + 3);
                                                        lVar7 = lVar7 + 1;
                                                      } while ((int)lVar7 < (int)uVar1);
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


