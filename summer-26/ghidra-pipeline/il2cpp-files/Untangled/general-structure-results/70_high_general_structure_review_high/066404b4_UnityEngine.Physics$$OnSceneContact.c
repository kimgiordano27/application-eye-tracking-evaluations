/*
FUNCTION_NAME: UnityEngine.Physics$$OnSceneContact
ENTRY_POINT: 066404b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_16
*/


void UnityEngine_Physics__OnSceneContact(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x25;
  
  FUN_03fd0468(param_1,*unaff_x22);
                    /* try { // try from 066404c4 to 067404c7 has its CatchHandler @ 06640628 */
  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
  FUN_05645a04(lVar8,0);
  puVar3 = PlayFab_ClientModels_LinkIOSDeviceIDResult_TypeInfo;
  puVar6 = System_Net_Sockets_LingerOption_TypeInfo;
  puVar5 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
  puVar2 = UnityEngine_InputSystem_LightSensor_TypeInfo;
  if (lVar8 != 0) {
                    /* try { // try from 066404dc to 067404e3 has its CatchHandler @ 06640638 */
                    /* try { // try from 066404fc to 067404ff has its CatchHandler @ 06640634 */
    *(undefined8 *)(lVar8 + 0x10) =
         *(undefined8 *)PlayFab_ClientModels_LinkSteamAccountResult_TypeInfo;
    thunk_FUN_02f411dc();
                    /* try { // try from 06640514 to 0674051b has its CatchHandler @ 0664063c */
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar3;
    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
    *(undefined4 *)(lVar8 + 0x18) = 0;
    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                    /* try { // try from 06640534 to 06740537 has its CatchHandler @ 06640644 */
                    /* try { // try from 06640538 to 06740543 has its CatchHandler @ 0664064c */
    FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
    FUN_05645a04(lVar10,0);
    if (lVar10 != 0) {
                    /* try { // try from 06640554 to 06740567 has its CatchHandler @ 06640650 */
      *(undefined8 *)(lVar10 + 0x18) =
           *(undefined8 *)PlayFab_ClientModels_LinkGoogleAccountResult_TypeInfo;
                    /* try { // try from 06640568 to 067405f7 has its CatchHandler @ 06640238 */
      thunk_FUN_02f411dc();
      *(undefined8 *)(lVar10 + 0x10) =
           *(undefined8 *)PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo;
      thunk_FUN_02f411dc();
      puVar3 = UnityEngine_LightmapData_TypeInfo;
      if (lVar9 != 0) {
        lVar12 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)UnityEngine_LightmapData_TypeInfo;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar10;
            thunk_FUN_02f411dc(plVar11,lVar10);
          }
          else {
            FUN_03fd0c9c(lVar9,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar8 + 0x28) = lVar9;
                    /* try { // try from 066405f8 to 067405fb has its CatchHandler @ 06640648 */
                    /* try { // try from 066405fc to 067405ff has its CatchHandler @ 06640640 */
          thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                    /* try { // try from 06640600 to 06740607 has its CatchHandler @ 0664065c */
          *(undefined1 *)(lVar8 + 0x38) = 1;
          puVar4 = UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo;
                    /* try { // try from 06640608 to 0674060b has its CatchHandler @ 06640630 */
          if (param_1 != 0) {
                    /* try { // try from 0664060c to 0674060f has its CatchHandler @ 06640624 */
                    /* try { // try from 06640610 to 06740613 has its CatchHandler @ 06640238 */
                    /* try { // try from 06640614 to 06740617 has its CatchHandler @ 06640620 */
                    /* try { // try from 06640618 to 06740673 has its CatchHandler @ 06640238 */
            lVar9 = *(long *)(param_1 + 0x10);
            lVar10 = *(long *)UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo;
                    /* catch() { ... } // from try @ 06640614 with catch @ 06640620 */
                    /* catch() { ... } // from try @ 0664060c with catch @ 06640624 */
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 066404c4 with catch @ 06640628 */
            if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 066404a0 with catch @ 0664062c */
              uVar1 = *(uint *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 06640608 with catch @ 06640630 */
                    /* catch() { ... } // from try @ 066404fc with catch @ 06640634 */
                    /* catch() { ... } // from try @ 066404dc with catch @ 06640638 */
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    /* catch() { ... } // from try @ 06640514 with catch @ 0664063c */
                    /* catch() { ... } // from try @ 066405fc with catch @ 06640640 */
                    /* catch() { ... } // from try @ 06640534 with catch @ 06640644 */
                *(uint *)(param_1 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 066405f8 with catch @ 06640648 */
                plVar11 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar8;
                    /* catch() { ... } // from try @ 06640538 with catch @ 0664064c */
                    /* catch() { ... } // from try @ 06640554 with catch @ 06640650 */
                thunk_FUN_02f411dc(plVar11,lVar8);
                    /* catch() { ... } // from try @ 06640470 with catch @ 06640654 */
              }
              else {
                    /* catch() { ... } // from try @ 0664040c with catch @ 06640658 */
                    /* catch() { ... } // from try @ 06640600 with catch @ 0664065c */
                FUN_03fd0c9c(param_1,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
                    /* try { // try from 06640674 to 06740677 has its CatchHandler @ 06640684 */
              lVar8 = thunk_FUN_02ef1808(*unaff_x25);
              FUN_05645a04(lVar8,0);
              puVar7 = PlayFab_ClientModels_LinkGoogleAccountRequest_TypeInfo;
                    /* catch() { ... } // from try @ 06640674 with catch @ 06640684 */
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x10) =
                     *(undefined8 *)PlayFab_ClientModels_LinkPSNAccountResult_TypeInfo;
                thunk_FUN_02f411dc();
                *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar7;
                thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                *(undefined4 *)(lVar8 + 0x18) = 0;
                    /* try { // try from 066406c4 to 067406eb has its CatchHandler @ 06640700 */
                lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                FUN_05645a04(lVar10,0);
                if (lVar10 != 0) {
                    /* try { // try from 066406ec to 067406f7 has its CatchHandler @ 06640238 */
                    /* try { // try from 066406f8 to 067406ff has its CatchHandler @ 06640700 */
                  *(undefined8 *)(lVar10 + 0x18) =
                       *(undefined8 *)PlayFab_ClientModels_LinkKongregateAccountRequest_TypeInfo;
                    /* catch() { ... } // from try @ 066406c4 with catch @ 06640700
                       catch() { ... } // from try @ 066406f8 with catch @ 06640700 */
                  thunk_FUN_02f411dc();
                  *(undefined8 *)(lVar10 + 0x10) =
                       *(undefined8 *)
                        PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo;
                  thunk_FUN_02f411dc();
                  if (lVar9 != 0) {
                    lVar12 = *(long *)(lVar9 + 0x10);
                    lVar13 = *(long *)puVar3;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar11 = lVar10;
                        thunk_FUN_02f411dc(plVar11,lVar10);
                      }
                      else {
                        FUN_03fd0c9c(lVar9,lVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar8 + 0x28) = lVar9;
                      thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                      *(undefined1 *)(lVar8 + 0x38) = 1;
                      lVar9 = *(long *)(param_1 + 0x10);
                      lVar10 = *(long *)puVar4;
                      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar1 = *(uint *)(param_1 + 0x18);
                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(param_1 + 0x18) = uVar1 + 1;
                          plVar11 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar11 = lVar8;
                          thunk_FUN_02f411dc(plVar11,lVar8);
                        }
                        else {
                          FUN_03fd0c9c(param_1,lVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                        FUN_05645a04(lVar8,0);
                        puVar7 = PlayFab_ClientModels_LinkFacebookAccountResult_TypeInfo;
                        if (lVar8 != 0) {
                          *(undefined8 *)(lVar8 + 0x10) =
                               *(undefined8 *)PlayFab_ClientModels_LinkPSNAccountRequest_TypeInfo;
                          thunk_FUN_02f411dc();
                          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar7;
                          thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                          *(undefined4 *)(lVar8 + 0x18) = 0;
                          lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                          FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                          FUN_05645a04(lVar10,0);
                          if (lVar10 != 0) {
                            *(undefined8 *)(lVar10 + 0x18) =
                                 *(undefined8 *)
                                  PlayFab_ClientModels_LinkGameCenterAccountRequest_TypeInfo;
                            thunk_FUN_02f411dc();
                            *(undefined8 *)(lVar10 + 0x10) =
                                 *(undefined8 *)
                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                            ;
                            thunk_FUN_02f411dc();
                            if (lVar9 != 0) {
                              lVar12 = *(long *)(lVar9 + 0x10);
                              lVar13 = *(long *)puVar3;
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar1 = *(uint *)(lVar9 + 0x18);
                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                  plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar11 = lVar10;
                                  thunk_FUN_02f411dc(plVar11,lVar10);
                                }
                                else {
                                  FUN_03fd0c9c(lVar9,lVar10,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar8 + 0x28) = lVar9;
                                thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                *(undefined1 *)(lVar8 + 0x38) = 1;
                                lVar9 = *(long *)(param_1 + 0x10);
                                lVar10 = *(long *)puVar4;
                                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                                if (lVar9 != 0) {
                                  uVar1 = *(uint *)(param_1 + 0x18);
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                    plVar11 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar11 = lVar8;
                                    thunk_FUN_02f411dc(plVar11,lVar8);
                                  }
                                  else {
                                    FUN_03fd0c9c(param_1,lVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                  FUN_05645a04(lVar8,0);
                                  puVar7 = PlayFab_ClientModels_LinkIOSDeviceIDRequest_TypeInfo;
                                  if (lVar8 != 0) {
                                    *(undefined8 *)(lVar8 + 0x10) =
                                         *(undefined8 *)
                                          PlayFab_ClientModels_LinkKongregateAccountResult_TypeInfo;
                                    thunk_FUN_02f411dc();
                                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar7;
                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                    FUN_05645a04(lVar10,0);
                                    if (lVar10 != 0) {
                                      *(undefined8 *)(lVar10 + 0x18) =
                                           *(undefined8 *)
                                            PlayFab_ClientModels_LinkFacebookAccountRequest_TypeInfo
                                      ;
                                      thunk_FUN_02f411dc();
                                      *(undefined8 *)(lVar10 + 0x10) =
                                           *(undefined8 *)
                                            PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                      ;
                                      thunk_FUN_02f411dc();
                                      if (lVar9 != 0) {
                                        lVar12 = *(long *)(lVar9 + 0x10);
                                        lVar13 = *(long *)puVar3;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar11 = lVar10;
                                            thunk_FUN_02f411dc(plVar11,lVar10);
                                          }
                                          else {
                                            FUN_03fd0c9c(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar8 + 0x28) = lVar9;
                                          thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                          *(undefined1 *)(lVar8 + 0x38) = 1;
                                          lVar9 = *(long *)(param_1 + 0x10);
                                          lVar10 = *(long *)puVar4;
                                          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(param_1 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                              plVar11 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20
                                                                );
                                              *plVar11 = lVar8;
                                              thunk_FUN_02f411dc(plVar11,lVar8);
                                            }
                                            else {
                                              FUN_03fd0c9c(param_1,lVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                            FUN_05645a04(lVar8,0);
                                            puVar7 = 
                                            PlayFab_ClientModels_LinkAndroidDeviceIDRequest_TypeInfo
                                            ;
                                            if (lVar8 != 0) {
                                              *(undefined8 *)(lVar8 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  PlayFab_ClientModels_LinkCustomIDRequest_TypeInfo;
                                              thunk_FUN_02f411dc();
                                              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar7;
                                              thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                              *(undefined4 *)(lVar8 + 0x18) = 0;
                                              lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                              FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                                              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                              FUN_05645a04(lVar10,0);
                                              if (lVar10 != 0) {
                                                *(undefined8 *)(lVar10 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  PlayFab_ClientModels_LinkOpenIdConnectRequest_TypeInfo
                                                ;
                                                thunk_FUN_02f411dc();
                                                *(undefined8 *)(lVar10 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                ;
                                                thunk_FUN_02f411dc();
                                                if (lVar9 != 0) {
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02f411dc(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  *(undefined1 *)(lVar8 + 0x38) = 1;
                                                  lVar9 = *(long *)(param_1 + 0x10);
                                                  lVar10 = *(long *)puVar4;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02f411dc(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(param_1,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar7 = 
                                                  PlayFab_ClientModels_LinkXboxAccountRequest_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                          PixelCrushers_DialogueSystem_Link_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6
                                                                              );
                                                    FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_05645a04(lVar10,0);
                                                    if (lVar10 != 0) {
                                                      *(undefined8 *)(lVar10 + 0x18) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  PlayFab_ClientModels_LinkTwitchAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar12 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar10;
                                                        thunk_FUN_02f411dc(plVar11,lVar10);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  *(undefined1 *)(lVar8 + 0x38) = 1;
                                                  lVar9 = *(long *)(param_1 + 0x10);
                                                  lVar10 = *(long *)puVar4;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02f411dc(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(param_1,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar7 = 
                                                  PlayFab_ClientModels_LinkAndroidDeviceIDResult_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkCustomIDResult_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar12 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar10;
                                                        thunk_FUN_02f411dc(plVar11,lVar10);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  *(undefined1 *)(lVar8 + 0x38) = 1;
                                                  lVar9 = *(long *)(param_1 + 0x10);
                                                  lVar10 = *(long *)puVar4;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02f411dc(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(param_1,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar7 = 
                                                  PlayFab_ClientModels_LinkNintendoServiceAccountRequest_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkNintendoSwitchDeviceIdRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkTwitchAccountRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar12 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar10;
                                                        thunk_FUN_02f411dc(plVar11,lVar10);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  *(undefined1 *)(lVar8 + 0x38) = 1;
                                                  lVar9 = *(long *)(param_1 + 0x10);
                                                  lVar10 = *(long *)puVar4;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02f411dc(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(param_1,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x25);
                                                  FUN_05645a04(lVar8,0);
                                                  puVar7 = 
                                                  PlayFab_ClientModels_LinkSteamAccountRequest_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkAppleRequest_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                                  FUN_03fd0468(lVar9,*(undefined8 *)puVar5);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05645a04(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_ClientModels_LinkGameCenterAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  PlayFab_ClientModels_LinkGooglePlayGamesServicesAccountResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar9 != 0) {
                                                    lVar12 = *(long *)(lVar9 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar12 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar10;
                                                        thunk_FUN_02f411dc(plVar11,lVar10);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar9;
                                                  thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                                                  *(undefined1 *)(lVar8 + 0x38) = 1;
                                                  lVar9 = *(long *)(param_1 + 0x10);
                                                  lVar10 = *(long *)puVar4;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02f411dc(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(param_1,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = param_1;
                                                  thunk_FUN_02f411dc((long *)(unaff_x19 + 0x28),
                                                                     param_1);
                                                  FUN_0663f8fc();
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


