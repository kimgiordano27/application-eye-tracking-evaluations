/*
FUNCTION_NAME: FUN_0655bab4
ENTRY_POINT: 0655bab4
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


void FUN_0655bab4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_06d061f0;
  puVar2 = PTR_DAT_06d06088;
  puVar1 = PTR_DAT_06d01eb0;
                    /* try { // try from 0655babc to 0665bad7 has its CatchHandler @ 0655bc94 */
                    /* try { // try from 0655badc to 0665baf7 has its CatchHandler @ 0655bc8c */
  if ((DAT_071ce6aa & 1) == 0) {
    FUN_02f07e70(System_Runtime_Remoting_Activation_ActivationServices_TypeInfo);
    FUN_02f07e70(Gley_TrafficSystem_Internal_ActiveCellsManager_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d061d8);
    FUN_02f07e70(PixelCrushers_DialogueSystem_ActiveConversationRecord_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_Actor_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d061f0);
    FUN_02f07e70(PTR_DAT_06d06088);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PlayFab_ClientModels_AddFriendRequest_TypeInfo);
                    /* try { // try from 0655bb58 to 0665bb83 has its CatchHandler @ 0655bc74 */
    FUN_02f07e70(PlayFab_ClientModels_AddFriendResult_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_AddGenericIDRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_AddGenericIDResult_TypeInfo);
    DAT_071ce6aa = 1;
  }
                    /* try { // try from 0655bb88 to 0665bba7 has its CatchHandler @ 0655bc80 */
  plVar4 = (long *)FUN_02f07f14(*(undefined8 *)puVar2,4);
  uVar7 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
                    /* try { // try from 0655bba8 to 0665bc4b has its CatchHandler @ 0655b890 */
  lVar5 = FUN_056109c0(uVar7,0);
  if (plVar4 == (long *)0x0) {
LAB_0655beb8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0655beac:
    uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar7,0);
  }
  puVar1 = PlayFab_ClientModels_AddGenericIDResult_TypeInfo;
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_02f411dc(plVar4 + 4,lVar5);
    lVar5 = FUN_056109c0(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_0655beac;
    puVar1 = PixelCrushers_DialogueSystem_Actor_TypeInfo;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      thunk_FUN_02f411dc(plVar4 + 5,lVar5);
      lVar5 = FUN_056109c0(*(undefined8 *)puVar1,0);
                    /* try { // try from 0655bc4c to 0665bc53 has its CatchHandler @ 0655bc7c */
                    /* try { // try from 0655bc54 to 0665bc57 has its CatchHandler @ 0655bc90 */
                    /* try { // try from 0655bc58 to 0665bc5b has its CatchHandler @ 0655bc78 */
                    /* try { // try from 0655bc5c to 0665bc5f has its CatchHandler @ 0655bc90 */
                    /* try { // try from 0655bc60 to 0665bc63 has its CatchHandler @ 0655b890 */
                    /* try { // try from 0655bc64 to 0665bc67 has its CatchHandler @ 0655bc70 */
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_0655beac;
      puVar1 = PixelCrushers_DialogueSystem_ActiveConversationRecord_TypeInfo;
                    /* try { // try from 0655bc68 to 0665bcab has its CatchHandler @ 0655b890 */
                    /* catch() { ... } // from try @ 0655bc64 with catch @ 0655bc70 */
      if (2 < *(uint *)(plVar4 + 3)) {
                    /* catch() { ... } // from try @ 0655bb58 with catch @ 0655bc74 */
                    /* catch() { ... } // from try @ 0655bc58 with catch @ 0655bc78 */
                    /* catch() { ... } // from try @ 0655bc4c with catch @ 0655bc7c */
                    /* catch() { ... } // from try @ 0655bb88 with catch @ 0655bc80 */
        plVar4[6] = lVar5;
                    /* catch() { ... } // from try @ 0655ba4c with catch @ 0655bc84 */
                    /* catch() { ... } // from try @ 0655b9f0 with catch @ 0655bc88 */
        thunk_FUN_02f411dc(plVar4 + 6,lVar5);
                    /* catch() { ... } // from try @ 0655badc with catch @ 0655bc8c */
                    /* catch() { ... } // from try @ 0655bc54 with catch @ 0655bc90
                       catch() { ... } // from try @ 0655bc5c with catch @ 0655bc90 */
                    /* catch() { ... } // from try @ 0655babc with catch @ 0655bc94 */
        lVar5 = FUN_056109c0(*(undefined8 *)puVar1,0);
                    /* try { // try from 0655bcac to 0665bcaf has its CatchHandler @ 0655bcbc */
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0655beac;
        puVar1 = PTR_DAT_06d061d8;
                    /* catch() { ... } // from try @ 0655bcac with catch @ 0655bcbc */
        if (3 < *(uint *)(plVar4 + 3)) {
                    /* try { // try from 0655bccc to 0665bd33 has its CatchHandler @ 0655bd48 */
          plVar4[7] = lVar5;
          thunk_FUN_02f411dc(plVar4 + 7,lVar5);
          *(long *)(param_1 + 0x10) = (long)plVar4;
          thunk_FUN_02f411dc((long *)(param_1 + 0x10),plVar4);
          plVar4 = (long *)FUN_02f07f14(*(undefined8 *)puVar2,3);
          lVar5 = FUN_056109c0(*(undefined8 *)puVar1,0);
          if (plVar4 == (long *)0x0) goto LAB_0655beb8;
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_0655beac;
          puVar1 = PlayFab_ClientModels_AddGenericIDRequest_TypeInfo;
          if ((int)plVar4[3] != 0) {
                    /* try { // try from 0655bd34 to 0665bd3f has its CatchHandler @ 0655b890 */
            plVar4[4] = lVar5;
                    /* try { // try from 0655bd40 to 0665bd47 has its CatchHandler @ 0655bd48 */
            thunk_FUN_02f411dc(plVar4 + 4,lVar5);
                    /* catch() { ... } // from try @ 0655bccc with catch @ 0655bd48
                       catch() { ... } // from try @ 0655bd40 with catch @ 0655bd48 */
            lVar5 = FUN_056109c0(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_0655beac;
            puVar1 = System_Runtime_Remoting_Activation_ActivationServices_TypeInfo;
            if (1 < *(uint *)(plVar4 + 3)) {
              plVar4[5] = lVar5;
              thunk_FUN_02f411dc(plVar4 + 5,lVar5);
              lVar5 = FUN_056109c0(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_0655beac;
              puVar1 = PlayFab_ClientModels_AddFriendResult_TypeInfo;
              if (2 < *(uint *)(plVar4 + 3)) {
                plVar4[6] = lVar5;
                thunk_FUN_02f411dc(plVar4 + 6,lVar5);
                *(long *)(param_1 + 0x18) = (long)plVar4;
                thunk_FUN_02f411dc((long *)(param_1 + 0x18),plVar4);
                *(undefined4 *)(param_1 + 0x20) = 2;
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                  lVar5 = *(long *)puVar1;
                }
                lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar6 == 0) {
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar5 = *(long *)puVar1;
                  }
                  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)
                                              Gley_TrafficSystem_Internal_ActiveCellsManager_TypeInfo
                                            );
                  FUN_05171304(lVar6,uVar7,
                               *(undefined8 *)PlayFab_ClientModels_AddFriendRequest_TypeInfo,0);
                  plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar4 = lVar6;
                  thunk_FUN_02f411dc(plVar4,lVar6);
                }
                *(long *)(param_1 + 0x28) = lVar6;
                thunk_FUN_02f411dc((long *)(param_1 + 0x28),lVar6);
                *(undefined1 *)(param_1 + 0x30) = 1;
                *(undefined1 *)(param_1 + 0x32) = 1;
                FUN_05645a04(param_1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


