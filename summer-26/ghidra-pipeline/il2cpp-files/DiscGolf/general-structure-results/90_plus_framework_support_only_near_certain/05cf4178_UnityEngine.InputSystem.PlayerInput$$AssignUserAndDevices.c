/*
FUNCTION_NAME: UnityEngine.InputSystem.PlayerInput$$AssignUserAndDevices
ENTRY_POINT: 05cf4178
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_PlayerInput__AssignUserAndDevices(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  puVar2 = UnityEngine_Physics_ContactEventDelegate_TypeInfo;
  unaff_x19[0xf] = unaff_x20;
  LeanTween__value();
  uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)) {
LAB_05cf534c:
    uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,0);
  }
  puVar2 = 
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
  ;
  if (0xc < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0x10] = lVar4;
    LeanTween__value(unaff_x19 + 0x10,lVar4);
    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
    goto LAB_05cf534c;
    puVar2 = PTR_DAT_06a0db58;
                    /* try { // try from 05cf424c to 05df4273 has its CatchHandler @ 05cf4804 */
    if (0xd < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x11] = lVar4;
      LeanTween__value(unaff_x19 + 0x11,lVar4);
      uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      lVar4 = thunk_FUN_02dd3144(*unaff_x23);
      FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,1,0,uVar8);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_05cf534c;
      puVar2 = System_Net_Http_Headers_Parser_DateTime_TypeInfo;
                    /* try { // try from 05cf42b0 to 05df42db has its CatchHandler @ 05cf4800 */
      if (0xe < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x12] = lVar4;
        LeanTween__value(unaff_x19 + 0x12,lVar4);
        uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
        lVar4 = thunk_FUN_02dd3144(*unaff_x23);
        FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_05cf534c;
        puVar2 = 
        UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo;
                    /* try { // try from 05cf4320 to 05df4327 has its CatchHandler @ 05cf46d8 */
        if ((*(uint *)(unaff_x19 + 3) & 0xfffffff0) != 0) {
                    /* try { // try from 05cf4334 to 05df4337 has its CatchHandler @ 05cf470c */
                    /* try { // try from 05cf4338 to 05df447b has its CatchHandler @ 05cf4070 */
          unaff_x19[0x13] = lVar4;
          LeanTween__value(unaff_x19 + 0x13,lVar4);
          uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
          lVar4 = thunk_FUN_02dd3144(*unaff_x23);
          FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
          goto LAB_05cf534c;
          puVar2 = Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
          if (0x10 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x14] = lVar4;
            LeanTween__value(unaff_x19 + 0x14,lVar4);
            uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
            lVar4 = thunk_FUN_02dd3144(*unaff_x23);
            FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
            goto LAB_05cf534c;
            puVar2 = Unity_Networking_QoS_UcgQosServer_var;
            if (0x11 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0x15] = lVar4;
              LeanTween__value(unaff_x19 + 0x15,lVar4);
              uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
              lVar4 = thunk_FUN_02dd3144(*unaff_x23);
              FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,uVar8);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
              goto LAB_05cf534c;
              puVar2 = UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
              if (0x12 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 05cf447c to 05df44a3 has its CatchHandler @ 05cf4714 */
                unaff_x19[0x16] = lVar4;
                LeanTween__value(unaff_x19 + 0x16,lVar4);
                uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0
                   )) goto LAB_05cf534c;
                puVar2 = 
                Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo;
                if (0x13 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 05cf44e4 to 05df450f has its CatchHandler @ 05cf4710 */
                  unaff_x19[0x17] = lVar4;
                  LeanTween__value(unaff_x19 + 0x17,lVar4);
                  uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                  FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,1,uVar8);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar5 == 0)) goto LAB_05cf534c;
                  puVar2 = 
                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
                  if (0x14 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x18] = lVar4;
                    LeanTween__value(unaff_x19 + 0x18,lVar4);
                    /* try { // try from 05cf455c to 05df455f has its CatchHandler @ 05cf46c4 */
                    /* try { // try from 05cf4560 to 05df456f has its CatchHandler @ 05cf46f0 */
                    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                    /* try { // try from 05cf4590 to 05df4597 has its CatchHandler @ 05cf46e0 */
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar5 == 0)) goto LAB_05cf534c;
                    puVar2 = Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo;
                    if (0x15 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x19] = lVar4;
                      LeanTween__value(unaff_x19 + 0x19,lVar4);
                    /* try { // try from 05cf45c8 to 05df45cb has its CatchHandler @ 05cf46c8 */
                      uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                      lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                      FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                    /* try { // try from 05cf45f8 to 05df45ff has its CatchHandler @ 05cf4808 */
                    /* try { // try from 05cf4600 to 05df4607 has its CatchHandler @ 05cf4718 */
                    /* try { // try from 05cf4608 to 05df460b has its CatchHandler @ 05cf4708 */
                    /* try { // try from 05cf460c to 05df460f has its CatchHandler @ 05cf4704 */
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar5 == 0)) goto LAB_05cf534c;
                      puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
                    /* try { // try from 05cf4610 to 05df4613 has its CatchHandler @ 05cf46f4 */
                    /* try { // try from 05cf4614 to 05df4617 has its CatchHandler @ 05cf46ec */
                    /* try { // try from 05cf4618 to 05df461b has its CatchHandler @ 05cf46e8 */
                      if (0x16 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 05cf461c to 05df461f has its CatchHandler @ 05cf46e4 */
                    /* try { // try from 05cf4620 to 05df4623 has its CatchHandler @ 05cf46dc */
                    /* try { // try from 05cf4628 to 05df462b has its CatchHandler @ 05cf46f8 */
                    /* try { // try from 05cf462c to 05df462f has its CatchHandler @ 05cf4070 */
                        unaff_x19[0x1a] = lVar4;
                    /* try { // try from 05cf4630 to 05df4633 has its CatchHandler @ 05cf46d4 */
                        LeanTween__value(unaff_x19 + 0x1a,lVar4);
                    /* try { // try from 05cf4634 to 05df4637 has its CatchHandler @ 05cf46d0 */
                    /* try { // try from 05cf4638 to 05df463b has its CatchHandler @ 05cf46cc */
                    /* try { // try from 05cf463c to 05df4733 has its CatchHandler @ 05cf4070 */
                        uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                        lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                        FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,uVar8);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar5 == 0)) goto LAB_05cf534c;
                        puVar2 = UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo;
                        if (0x17 < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x1b] = lVar4;
                          LeanTween__value(unaff_x19 + 0x1b,lVar4);
                          uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                          lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    /* catch() { ... } // from try @ 05cf455c with catch @ 05cf46c4 */
                    /* catch() { ... } // from try @ 05cf45c8 with catch @ 05cf46c8 */
                    /* catch() { ... } // from try @ 05cf4638 with catch @ 05cf46cc */
                          FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                    /* catch() { ... } // from try @ 05cf4634 with catch @ 05cf46d0 */
                    /* catch() { ... } // from try @ 05cf4630 with catch @ 05cf46d4 */
                    /* catch() { ... } // from try @ 05cf4320 with catch @ 05cf46d8 */
                    /* catch() { ... } // from try @ 05cf4620 with catch @ 05cf46dc */
                    /* catch() { ... } // from try @ 05cf4590 with catch @ 05cf46e0 */
                    /* catch() { ... } // from try @ 05cf461c with catch @ 05cf46e4 */
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar5 == 0)) goto LAB_05cf534c;
                          puVar2 = PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo;
                    /* catch() { ... } // from try @ 05cf4618 with catch @ 05cf46e8 */
                    /* catch() { ... } // from try @ 05cf4614 with catch @ 05cf46ec */
                    /* catch() { ... } // from try @ 05cf4560 with catch @ 05cf46f0 */
                          if (0x18 < *(uint *)(unaff_x19 + 3)) {
                    /* catch() { ... } // from try @ 05cf4610 with catch @ 05cf46f4 */
                    /* catch() { ... } // from try @ 05cf4628 with catch @ 05cf46f8 */
                    /* catch() { ... } // from try @ 05cf460c with catch @ 05cf4704 */
                            unaff_x19[0x1c] = lVar4;
                    /* catch() { ... } // from try @ 05cf4608 with catch @ 05cf4708 */
                            LeanTween__value(unaff_x19 + 0x1c,lVar4);
                    /* catch() { ... } // from try @ 05cf4334 with catch @ 05cf470c */
                    /* catch() { ... } // from try @ 05cf44e4 with catch @ 05cf4710 */
                    /* catch() { ... } // from try @ 05cf447c with catch @ 05cf4714 */
                    /* catch() { ... } // from try @ 05cf4600 with catch @ 05cf4718 */
                            uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                            lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    /* try { // try from 05cf4734 to 05df4737 has its CatchHandler @ 05cf47f0 */
                    /* try { // try from 05cf4738 to 05df47f3 has its CatchHandler @ 05cf4070 */
                            FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar5 == 0)) goto LAB_05cf534c;
                            puVar2 = 
                            Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo
                            ;
                            if (0x19 < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x1d] = lVar4;
                              LeanTween__value(unaff_x19 + 0x1d,lVar4);
                              uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
                              lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                              FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar5 == 0
                                 )) goto LAB_05cf534c;
                              puVar2 = 
                              Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo
                              ;
                              if (0x1a < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x1e] = lVar4;
                                LeanTween__value(unaff_x19 + 0x1e,lVar4);
                    /* catch() { ... } // from try @ 05cf4734 with catch @ 05cf47f0 */
                                uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                    /* try { // try from 05cf47f4 to 05df47fb has its CatchHandler @ 05cf484c */
                                lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    /* try { // try from 05cf47fc to 05df4823 has its CatchHandler @ 05cf4070 */
                    /* catch() { ... } // from try @ 05cf42b0 with catch @ 05cf4800 */
                    /* catch() { ... } // from try @ 05cf424c with catch @ 05cf4804 */
                    /* catch() { ... } // from try @ 05cf45f8 with catch @ 05cf4808 */
                                FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,uVar8);
                    /* try { // try from 05cf4824 to 05df4827 has its CatchHandler @ 05cf4838 */
                                if ((lVar4 != 0) &&
                                   (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar5 == 0)) goto LAB_05cf534c;
                                puVar2 = 
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                ;
                                if (0x1b < *(uint *)(unaff_x19 + 3)) {
                    /* catch() { ... } // from try @ 05cf4824 with catch @ 05cf4838 */
                    /* try { // try from 05cf483c to 05df4843 has its CatchHandler @ 05cf484c */
                    /* try { // try from 05cf4844 to 05df484f has its CatchHandler @ 05cf4070 */
                                  unaff_x19[0x1f] = lVar4;
                    /* catch() { ... } // from try @ 05cf47f4 with catch @ 05cf484c
                       catch() { ... } // from try @ 05cf483c with catch @ 05cf484c */
                                  LeanTween__value(unaff_x19 + 0x1f,lVar4);
                    /* try { // try from 05cf4850 to 05df492b has its CatchHandler @ 05cf4850
                       catch() { ... } // from try @ 05cf4850 with catch @ 05cf4850
                       catch() { ... } // from try @ 05cf4a44 with catch @ 05cf4850
                       catch() { ... } // from try @ 05cf4b04 with catch @ 05cf4850
                       catch() { ... } // from try @ 05cf4b68 with catch @ 05cf4850 */
                                  uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                  FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                                  if ((lVar4 != 0) &&
                                     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar5 == 0)) goto LAB_05cf534c;
                                  puVar2 = OVRPlugin_OVRP_1_43_0_TypeInfo;
                                  if (0x1c < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x20] = lVar4;
                                    LeanTween__value(unaff_x19 + 0x20,lVar4);
                                    uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,1,0,uVar8);
                                    if ((lVar4 != 0) &&
                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                       lVar5 == 0)) goto LAB_05cf534c;
                                    puVar2 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
                                    if (0x1d < *(uint *)(unaff_x19 + 3)) {
                                      unaff_x19[0x21] = lVar4;
                                      LeanTween__value(unaff_x19 + 0x21,lVar4);
                    /* try { // try from 05cf492c to 05df4953 has its CatchHandler @ 05cf4b2c */
                                      uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                      lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                      FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                                      if ((lVar4 != 0) &&
                                         (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                         lVar5 == 0)) goto LAB_05cf534c;
                                      puVar2 = Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo
                                      ;
                                      if (0x1e < *(uint *)(unaff_x19 + 3)) {
                                        unaff_x19[0x22] = lVar4;
                                        LeanTween__value(unaff_x19 + 0x22,lVar4);
                    /* try { // try from 05cf4994 to 05df49bf has its CatchHandler @ 05cf4b28 */
                                        uVar8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10)
                                        ;
                                        lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                        FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                                        if ((lVar4 != 0) &&
                                           (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                           lVar5 == 0)) goto LAB_05cf534c;
                                        puVar2 = System_ParameterizedStrings_LowLevelStack_TypeInfo;
                                        if ((*(uint *)(unaff_x19 + 3) & 0xffffffe0) != 0) {
                                          unaff_x19[0x23] = lVar4;
                                          LeanTween__value(unaff_x19 + 0x23,lVar4);
                    /* try { // try from 05cf4a04 to 05df4a0b has its CatchHandler @ 05cf4b18 */
                                          uVar8 = *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                          lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                    /* try { // try from 05cf4a14 to 05df4a1f has its CatchHandler @ 05cf4b14 */
                    /* try { // try from 05cf4a28 to 05df4a33 has its CatchHandler @ 05cf4b10 */
                                          FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,uVar8);
                    /* try { // try from 05cf4a40 to 05df4a43 has its CatchHandler @ 05cf4b24 */
                    /* try { // try from 05cf4a44 to 05df4af3 has its CatchHandler @ 05cf4850 */
                                          if ((lVar4 != 0) &&
                                             (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                             , lVar5 == 0)) goto LAB_05cf534c;
                                          puVar2 = 
                                          UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo
                                          ;
                                          if (0x20 < *(uint *)(unaff_x19 + 3)) {
                                            unaff_x19[0x24] = lVar4;
                                            LeanTween__value(unaff_x19 + 0x24,lVar4);
                                            uVar8 = *(undefined8 *)
                                                     (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                            lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                            FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                                            if ((lVar4 != 0) &&
                                               (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar5 == 0))
                                            goto LAB_05cf534c;
                                            puVar2 = 
                                            UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                            ;
                                            if (0x21 < *(uint *)(unaff_x19 + 3)) {
                                              unaff_x19[0x25] = lVar4;
                                              LeanTween__value(unaff_x19 + 0x25,lVar4);
                                              uVar8 = *(undefined8 *)
                                                       (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                              lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                              FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8);
                                              if ((lVar4 != 0) &&
                                                 (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40)),
                                                 lVar5 == 0)) goto LAB_05cf534c;
                                              puVar2 = 
                                              Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                                              ;
                                              if (0x22 < *(uint *)(unaff_x19 + 3)) {
                                                unaff_x19[0x26] = lVar4;
                                                LeanTween__value(unaff_x19 + 0x26,lVar4);
                                                uVar8 = *(undefined8 *)
                                                         (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,uVar8
                                                            );
                                                if ((lVar4 != 0) &&
                                                   (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40)),
                                                   lVar5 == 0)) goto LAB_05cf534c;
                                                puVar2 = 
                                                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                                                ;
                                                if (0x23 < *(uint *)(unaff_x19 + 3)) {
                                                  unaff_x19[0x27] = lVar4;
                                                  LeanTween__value(unaff_x19 + 0x27,lVar4);
                                                  uVar8 = *(undefined8 *)
                                                           (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                  FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,1,
                                                               uVar8);
                                                  if ((lVar4 != 0) &&
                                                     (lVar5 = thunk_FUN_02dd3048(lVar4,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x28] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x28,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x29] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x29,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Mono_Security_PKCS7_EncryptedData_TypeInfo;
                                                  if (0x26 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2a] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x2a,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = Mono_Security_PKCS7_SignedData_TypeInfo;
                                                  if (0x27 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2b] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x2b,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,0,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__
                                                  ;
                                                  if (0x28 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2c] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x2c,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__
                                                  ;
                                                  if (0x29 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2d] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x2d,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<BuildSceneList>d__25_TypeInfo
                                                  ;
                                                  if (0x2a < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2e] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x2e,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2f] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x2f,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = OVRPlugin_OVRP_1_129_0_TypeInfo;
                                                  if (0x2c < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x30] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x30,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,1,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                                                  ;
                                                  if (0x2d < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x31] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x31,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = System_IO_Path_<>c_TypeInfo;
                                                  if (0x2e < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x32] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x32,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,1,0,0,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                                                  ;
                                                  if (0x2f < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x33] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x33,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo
                                                  ;
                                                  if (0x30 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x34] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x34,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = PTR_DAT_06a122e8;
                                                  if (0x31 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x35] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x35,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x18);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,0,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  if (0x32 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x36] = lVar4;
                                                    LeanTween__value(unaff_x19 + 0x36,lVar4);
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*unaff_x22 + 0xb8) + 0x10);
                                                    lVar4 = thunk_FUN_02dd3144(*unaff_x23);
                                                    FUN_05cf359c(lVar4,*(undefined8 *)puVar2,0,1,1,
                                                                 uVar8);
                                                    if ((lVar4 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar4,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
                                                  goto LAB_05cf534c;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_HashSet<Collider>__ctor__
                                                  ;
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
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05494bbc(uVar8,(int)unaff_x19[3] << 1,uVar7,
                                                                 0);
                                                    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar8;
                                                    LeanTween__value(*(undefined8 *)
                                                                      (*unaff_x22 + 0xb8),uVar8);
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
                                                        plVar6 = (long *)**(long **)(*unaff_x22 +
                                                                                    0xb8);
                                                        if (plVar6 == (long *)0x0)
                                                        goto LAB_05cf5348;
                                                        (**(code **)(*plVar6 + 0x308))
                                                                  (plVar6,*(undefined8 *)
                                                                           (lVar5 + 0x20),lVar5,
                                                                   *(undefined8 *)(*plVar6 + 0x310))
                                                        ;
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


