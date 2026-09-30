/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.SetDelegate$$BeginInvoke
ENTRY_POINT: 05926308
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void PlayFab_Json_ReflectionUtils_SetDelegate__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  unaff_x19[0x6e] = unaff_x20;
  thunk_FUN_02f411dc(unaff_x19 + 0x6e);
  lVar5 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_04657ec0(lVar5,4,*unaff_x21);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x2c) = 0x6b;
    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar6 == 0) {
PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor:
      uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,0);
    }
    if (0x6b < *unaff_x23) {
      unaff_x19[0x6f] = lVar5;
      thunk_FUN_02f411dc(unaff_x19 + 0x6f,lVar5);
      lVar5 = thunk_FUN_02ef1808(*unaff_x22);
      FUN_04657ec0(lVar5,4,*unaff_x21);
      if (lVar5 == 0) goto LAB_05929514;
      *(undefined1 *)(lVar5 + 0x2c) = 0x6c;
      lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
      if (0x6c < *unaff_x23) {
        unaff_x19[0x70] = lVar5;
        thunk_FUN_02f411dc(unaff_x19 + 0x70,lVar5);
        lVar5 = thunk_FUN_02ef1808(*unaff_x22);
        FUN_04657ec0(lVar5,4,*unaff_x21);
        if (lVar5 == 0) goto LAB_05929514;
        *(undefined1 *)(lVar5 + 0x2c) = 0x6d;
        lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar6 == 0)
        goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
        if (0x6d < *unaff_x23) {
          unaff_x19[0x71] = lVar5;
          thunk_FUN_02f411dc(unaff_x19 + 0x71,lVar5);
          lVar5 = thunk_FUN_02ef1808(*unaff_x22);
          FUN_04657ec0(lVar5,4,*unaff_x21);
          if (lVar5 == 0) goto LAB_05929514;
          *(undefined1 *)(lVar5 + 0x2c) = 0x6e;
          lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar6 == 0)
          goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
          if (0x6e < *unaff_x23) {
            unaff_x19[0x72] = lVar5;
            thunk_FUN_02f411dc(unaff_x19 + 0x72,lVar5);
            lVar5 = thunk_FUN_02ef1808(*unaff_x22);
            FUN_04657ec0(lVar5,4,*unaff_x21);
            if (lVar5 == 0) goto LAB_05929514;
            *(undefined1 *)(lVar5 + 0x2c) = 0x6f;
            lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar6 == 0)
            goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
            if (0x6f < *unaff_x23) {
              unaff_x19[0x73] = lVar5;
              thunk_FUN_02f411dc(unaff_x19 + 0x73,lVar5);
              lVar5 = thunk_FUN_02ef1808(*unaff_x22);
              FUN_04657ec0(lVar5,4,*unaff_x21);
              if (lVar5 == 0) goto LAB_05929514;
              *(undefined1 *)(lVar5 + 0x2c) = 0x70;
              lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar6 == 0)
              goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
              if (0x70 < *unaff_x23) {
                unaff_x19[0x74] = lVar5;
                thunk_FUN_02f411dc(unaff_x19 + 0x74,lVar5);
                lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                FUN_04657ec0(lVar5,4,*unaff_x21);
                if (lVar5 == 0) goto LAB_05929514;
                *(undefined1 *)(lVar5 + 0x2c) = 0x71;
                lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar6 == 0)
                goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                if (0x71 < *unaff_x23) {
                  unaff_x19[0x75] = lVar5;
                  thunk_FUN_02f411dc(unaff_x19 + 0x75,lVar5);
                  lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                  FUN_04657ec0(lVar5,4,*unaff_x21);
                  if (lVar5 == 0) goto LAB_05929514;
                  *(undefined1 *)(lVar5 + 0x2c) = 0x72;
                  lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar6 == 0)
                  goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                  if (0x72 < *unaff_x23) {
                    unaff_x19[0x76] = lVar5;
                    thunk_FUN_02f411dc(unaff_x19 + 0x76,lVar5);
                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                    FUN_04657ec0(lVar5,4,*unaff_x21);
                    if (lVar5 == 0) goto LAB_05929514;
                    *(undefined1 *)(lVar5 + 0x2c) = 0x73;
                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar6 == 0)
                    goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                    if (0x73 < *unaff_x23) {
                      unaff_x19[0x77] = lVar5;
                      thunk_FUN_02f411dc(unaff_x19 + 0x77,lVar5);
                      lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                      FUN_04657ec0(lVar5,4,*unaff_x21);
                      if (lVar5 == 0) goto LAB_05929514;
                      *(undefined1 *)(lVar5 + 0x2c) = 0x74;
                      lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar6 == 0)
                      goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                      if (0x74 < *unaff_x23) {
                        unaff_x19[0x78] = lVar5;
                        thunk_FUN_02f411dc(unaff_x19 + 0x78,lVar5);
                        lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                        FUN_04657ec0(lVar5,4,*unaff_x21);
                        if (lVar5 == 0) goto LAB_05929514;
                        *(undefined1 *)(lVar5 + 0x2c) = 0x75;
                        lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar6 == 0)
                        goto 
                        PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                        if (0x75 < *unaff_x23) {
                          unaff_x19[0x79] = lVar5;
                          thunk_FUN_02f411dc(unaff_x19 + 0x79,lVar5);
                          lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                          FUN_04657ec0(lVar5,4,*unaff_x21);
                          if (lVar5 == 0) goto LAB_05929514;
                          *(undefined1 *)(lVar5 + 0x2c) = 0x76;
                          lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar6 == 0)
                          goto 
                          PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                          if (0x76 < *unaff_x23) {
                            unaff_x19[0x7a] = lVar5;
                            thunk_FUN_02f411dc(unaff_x19 + 0x7a,lVar5);
                            lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                            FUN_04657ec0(lVar5,4,*unaff_x21);
                            if (lVar5 == 0) goto LAB_05929514;
                            *(undefined1 *)(lVar5 + 0x2c) = 0x77;
                            lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar6 == 0)
                            goto 
                            PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                            ;
                            if (0x77 < *unaff_x23) {
                              unaff_x19[0x7b] = lVar5;
                              thunk_FUN_02f411dc(unaff_x19 + 0x7b,lVar5);
                              lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                              FUN_04657ec0(lVar5,4,*unaff_x21);
                              if (lVar5 == 0) goto LAB_05929514;
                              *(undefined1 *)(lVar5 + 0x2c) = 0x78;
                              lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar6 == 0)
                              goto 
                              PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                              ;
                              if (0x78 < *unaff_x23) {
                                unaff_x19[0x7c] = lVar5;
                                thunk_FUN_02f411dc(unaff_x19 + 0x7c,lVar5);
                                lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                FUN_04657ec0(lVar5,4,*unaff_x21);
                                if (lVar5 == 0) goto LAB_05929514;
                                *(undefined1 *)(lVar5 + 0x2c) = 0x79;
                                lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar6 == 0)
                                goto 
                                PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                ;
                                if (0x79 < *unaff_x23) {
                                  unaff_x19[0x7d] = lVar5;
                                  thunk_FUN_02f411dc(unaff_x19 + 0x7d,lVar5);
                                  lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                  FUN_04657ec0(lVar5,4,*unaff_x21);
                                  if (lVar5 == 0) goto LAB_05929514;
                                  *(undefined1 *)(lVar5 + 0x2c) = 0x7a;
                                  lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  if (lVar6 == 0)
                                  goto 
                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                  ;
                                  if (0x7a < *unaff_x23) {
                                    unaff_x19[0x7e] = lVar5;
                                    thunk_FUN_02f411dc(unaff_x19 + 0x7e,lVar5);
                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                    if (lVar5 == 0) goto LAB_05929514;
                                    *(undefined1 *)(lVar5 + 0x2c) = 0x7b;
                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar6 == 0)
                                    goto 
                                    PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                    ;
                                    if (0x7b < *unaff_x23) {
                                      unaff_x19[0x7f] = lVar5;
                                      thunk_FUN_02f411dc(unaff_x19 + 0x7f,lVar5);
                                      lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                      FUN_04657ec0(lVar5,4,*unaff_x21);
                                      if (lVar5 == 0) goto LAB_05929514;
                                      *(undefined1 *)(lVar5 + 0x2c) = 0x7c;
                                      lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40));
                                      if (lVar6 == 0)
                                      goto 
                                      PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                      ;
                                      if (0x7c < *unaff_x23) {
                                        unaff_x19[0x80] = lVar5;
                                        thunk_FUN_02f411dc(unaff_x19 + 0x80,lVar5);
                                        lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                        FUN_04657ec0(lVar5,4,*unaff_x21);
                                        if (lVar5 == 0) goto LAB_05929514;
                                        *(undefined1 *)(lVar5 + 0x2c) = 0x7d;
                                        lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar6 == 0)
                                        goto 
                                        PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                        ;
                                        if (0x7d < *unaff_x23) {
                                          unaff_x19[0x81] = lVar5;
                                          thunk_FUN_02f411dc(unaff_x19 + 0x81,lVar5);
                                          lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                          FUN_04657ec0(lVar5,4,*unaff_x21);
                                          if (lVar5 == 0) goto LAB_05929514;
                                          *(undefined1 *)(lVar5 + 0x2c) = 0x7e;
                                          lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40));
                                          if (lVar6 == 0)
                                          goto 
                                          PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                          ;
                                          if (0x7e < *unaff_x23) {
                                            unaff_x19[0x82] = lVar5;
                                            thunk_FUN_02f411dc(unaff_x19 + 0x82,lVar5);
                                            lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                            FUN_04657ec0(lVar5,4,*unaff_x21);
                                            if (lVar5 == 0) goto LAB_05929514;
                                            *(undefined1 *)(lVar5 + 0x2c) = 0x7f;
                                            lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar6 == 0)
                                            goto 
                                            PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                            ;
                                            if (0x7f < *unaff_x23) {
                                              unaff_x19[0x83] = lVar5;
                                              thunk_FUN_02f411dc(unaff_x19 + 0x83,lVar5);
                                              lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                              FUN_04657ec0(lVar5,4,*unaff_x21);
                                              if (lVar5 == 0) goto LAB_05929514;
                                              *(undefined1 *)(lVar5 + 0x2c) = 0x80;
                                              lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                              ;
                                              if (lVar6 == 0)
                                              goto 
                                              PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                              ;
                                              if (0x80 < *unaff_x23) {
                                                unaff_x19[0x84] = lVar5;
                                                thunk_FUN_02f411dc(unaff_x19 + 0x84,lVar5);
                                                lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                FUN_04657ec0(lVar5,4,*unaff_x21);
                                                if (lVar5 == 0) goto LAB_05929514;
                                                *(undefined1 *)(lVar5 + 0x2c) = 0x81;
                                                lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar6 == 0)
                                                goto 
                                                PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                ;
                                                if (0x81 < *unaff_x23) {
                                                  unaff_x19[0x85] = lVar5;
                                                  thunk_FUN_02f411dc(unaff_x19 + 0x85,lVar5);
                                                  lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                  FUN_04657ec0(lVar5,4,*unaff_x21);
                                                  if (lVar5 == 0) goto LAB_05929514;
                                                  *(undefined1 *)(lVar5 + 0x2c) = 0x82;
                                                  lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0)
                                                  goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x82 < *unaff_x23) {
                                                    unaff_x19[0x86] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x86,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x83;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x83 < *unaff_x23) {
                                                    unaff_x19[0x87] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x87,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x84;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x84 < *unaff_x23) {
                                                    unaff_x19[0x88] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x88,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x85;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x85 < *unaff_x23) {
                                                    unaff_x19[0x89] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x89,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x86;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x86 < *unaff_x23) {
                                                    unaff_x19[0x8a] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x8a,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x87;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x87 < *unaff_x23) {
                                                    unaff_x19[0x8b] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x8b,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x88;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x88 < *unaff_x23) {
                                                    unaff_x19[0x8c] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x8c,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x89;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x89 < *unaff_x23) {
                                                    unaff_x19[0x8d] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x8d,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x8a;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x8a < *unaff_x23) {
                                                    unaff_x19[0x8e] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x8e,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x8b;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x8b < *unaff_x23) {
                                                    unaff_x19[0x8f] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x8f,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x8c;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x8c < *unaff_x23) {
                                                    unaff_x19[0x90] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x90,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x8d;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x8d < *unaff_x23) {
                                                    unaff_x19[0x91] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x91,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x8e;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x8e < *unaff_x23) {
                                                    unaff_x19[0x92] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x92,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x8f;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x8f < *unaff_x23) {
                                                    unaff_x19[0x93] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x93,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x90;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x90 < *unaff_x23) {
                                                    unaff_x19[0x94] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x94,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x91;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x91 < *unaff_x23) {
                                                    unaff_x19[0x95] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x95,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x92;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x92 < *unaff_x23) {
                                                    unaff_x19[0x96] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x96,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x93;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x93 < *unaff_x23) {
                                                    unaff_x19[0x97] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x97,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x94;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x94 < *unaff_x23) {
                                                    unaff_x19[0x98] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x98,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x95;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x95 < *unaff_x23) {
                                                    unaff_x19[0x99] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x99,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x96;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x96 < *unaff_x23) {
                                                    unaff_x19[0x9a] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x9a,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x97;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x97 < *unaff_x23) {
                                                    unaff_x19[0x9b] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x9b,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x98;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x98 < *unaff_x23) {
                                                    unaff_x19[0x9c] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x9c,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x99;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x99 < *unaff_x23) {
                                                    unaff_x19[0x9d] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x9d,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x9a;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x9a < *unaff_x23) {
                                                    unaff_x19[0x9e] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x9e,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x9b;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x9b < *unaff_x23) {
                                                    unaff_x19[0x9f] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x9f,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x9c;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x9c < *unaff_x23) {
                                                    unaff_x19[0xa0] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa0,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x9d;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x9d < *unaff_x23) {
                                                    unaff_x19[0xa1] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa1,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x9e;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x9e < *unaff_x23) {
                                                    unaff_x19[0xa2] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa2,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0x9f;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0x9f < *unaff_x23) {
                                                    unaff_x19[0xa3] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa3,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa0;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa0 < *unaff_x23) {
                                                    unaff_x19[0xa4] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa1 < *unaff_x23) {
                                                    unaff_x19[0xa5] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa5,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa2;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa2 < *unaff_x23) {
                                                    unaff_x19[0xa6] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa6,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa3;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa3 < *unaff_x23) {
                                                    unaff_x19[0xa7] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa7,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa4;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa4 < *unaff_x23) {
                                                    unaff_x19[0xa8] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa8,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa5;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa5 < *unaff_x23) {
                                                    unaff_x19[0xa9] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xa9,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa6;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa6 < *unaff_x23) {
                                                    unaff_x19[0xaa] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xaa,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa7;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa7 < *unaff_x23) {
                                                    unaff_x19[0xab] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xab,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa8;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa8 < *unaff_x23) {
                                                    unaff_x19[0xac] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xac,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xa9;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xa9 < *unaff_x23) {
                                                    unaff_x19[0xad] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xad,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xaa;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xaa < *unaff_x23) {
                                                    unaff_x19[0xae] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xae,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xab;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xab < *unaff_x23) {
                                                    unaff_x19[0xaf] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xaf,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xac;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xac < *unaff_x23) {
                                                    unaff_x19[0xb0] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb0,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xad;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xad < *unaff_x23) {
                                                    unaff_x19[0xb1] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb1,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xae;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xae < *unaff_x23) {
                                                    unaff_x19[0xb2] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb2,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xaf;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xaf < *unaff_x23) {
                                                    unaff_x19[0xb3] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb3,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb0;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb0 < *unaff_x23) {
                                                    unaff_x19[0xb4] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb1 < *unaff_x23) {
                                                    unaff_x19[0xb5] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb5,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb2;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb2 < *unaff_x23) {
                                                    unaff_x19[0xb6] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb6,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb3;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb3 < *unaff_x23) {
                                                    unaff_x19[0xb7] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb7,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb4;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb4 < *unaff_x23) {
                                                    unaff_x19[0xb8] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb8,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb5;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb5 < *unaff_x23) {
                                                    unaff_x19[0xb9] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xb9,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb6;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb6 < *unaff_x23) {
                                                    unaff_x19[0xba] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xba,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb7;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb7 < *unaff_x23) {
                                                    unaff_x19[0xbb] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xbb,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb8;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb8 < *unaff_x23) {
                                                    unaff_x19[0xbc] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xbc,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xb9;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xb9 < *unaff_x23) {
                                                    unaff_x19[0xbd] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xbd,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xba;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xba < *unaff_x23) {
                                                    unaff_x19[0xbe] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xbe,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xbb;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xbb < *unaff_x23) {
                                                    unaff_x19[0xbf] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xbf,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xbc;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xbc < *unaff_x23) {
                                                    unaff_x19[0xc0] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc0,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xbd;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xbd < *unaff_x23) {
                                                    unaff_x19[0xc1] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc1,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xbe;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xbe < *unaff_x23) {
                                                    unaff_x19[0xc2] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc2,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xbf;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xbf < *unaff_x23) {
                                                    unaff_x19[0xc3] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc3,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc0;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc0 < *unaff_x23) {
                                                    unaff_x19[0xc4] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc1 < *unaff_x23) {
                                                    unaff_x19[0xc5] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc5,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc2;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc2 < *unaff_x23) {
                                                    unaff_x19[0xc6] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc6,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc3;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc3 < *unaff_x23) {
                                                    unaff_x19[199] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 199,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc4;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc4 < *unaff_x23) {
                                                    unaff_x19[200] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 200,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc5;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc5 < *unaff_x23) {
                                                    unaff_x19[0xc9] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xc9,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc6;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc6 < *unaff_x23) {
                                                    unaff_x19[0xca] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xca,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 199;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (199 < *unaff_x23) {
                                                    unaff_x19[0xcb] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xcb,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 200;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (200 < *unaff_x23) {
                                                    unaff_x19[0xcc] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xcc,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xc9;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xc9 < *unaff_x23) {
                                                    unaff_x19[0xcd] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xcd,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xca;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xca < *unaff_x23) {
                                                    unaff_x19[0xce] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xce,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xcb;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xcb < *unaff_x23) {
                                                    unaff_x19[0xcf] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xcf,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xcc;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xcc < *unaff_x23) {
                                                    unaff_x19[0xd0] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd0,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xcd;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xcd < *unaff_x23) {
                                                    unaff_x19[0xd1] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd1,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xce;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xce < *unaff_x23) {
                                                    unaff_x19[0xd2] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd2,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xcf;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xcf < *unaff_x23) {
                                                    unaff_x19[0xd3] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd3,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd0;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd0 < *unaff_x23) {
                                                    unaff_x19[0xd4] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd1 < *unaff_x23) {
                                                    unaff_x19[0xd5] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd5,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd2;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd2 < *unaff_x23) {
                                                    unaff_x19[0xd6] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd6,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd3;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd3 < *unaff_x23) {
                                                    unaff_x19[0xd7] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd7,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd4;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd4 < *unaff_x23) {
                                                    unaff_x19[0xd8] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd8,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd5;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd5 < *unaff_x23) {
                                                    unaff_x19[0xd9] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xd9,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd6;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd6 < *unaff_x23) {
                                                    unaff_x19[0xda] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xda,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd7;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd7 < *unaff_x23) {
                                                    unaff_x19[0xdb] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xdb,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd8;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd8 < *unaff_x23) {
                                                    unaff_x19[0xdc] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xdc,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xd9;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xd9 < *unaff_x23) {
                                                    unaff_x19[0xdd] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xdd,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xda;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xda < *unaff_x23) {
                                                    unaff_x19[0xde] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xde,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xdb;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xdb < *unaff_x23) {
                                                    unaff_x19[0xdf] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xdf,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xdc;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xdc < *unaff_x23) {
                                                    unaff_x19[0xe0] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe0,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xdd;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xdd < *unaff_x23) {
                                                    unaff_x19[0xe1] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe1,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xde;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xde < *unaff_x23) {
                                                    unaff_x19[0xe2] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe2,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xdf;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xdf < *unaff_x23) {
                                                    unaff_x19[0xe3] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe3,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe0;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe0 < *unaff_x23) {
                                                    unaff_x19[0xe4] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe1 < *unaff_x23) {
                                                    unaff_x19[0xe5] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe5,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe2;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe2 < *unaff_x23) {
                                                    unaff_x19[0xe6] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe6,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe3;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe3 < *unaff_x23) {
                                                    unaff_x19[0xe7] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe7,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe4;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe4 < *unaff_x23) {
                                                    unaff_x19[0xe8] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe8,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe5;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe5 < *unaff_x23) {
                                                    unaff_x19[0xe9] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xe9,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe6;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe6 < *unaff_x23) {
                                                    unaff_x19[0xea] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xea,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe7;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe7 < *unaff_x23) {
                                                    unaff_x19[0xeb] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xeb,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe8;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe8 < *unaff_x23) {
                                                    unaff_x19[0xec] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xec,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xe9;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xe9 < *unaff_x23) {
                                                    unaff_x19[0xed] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xed,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xea;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xea < *unaff_x23) {
                                                    unaff_x19[0xee] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xee,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xeb;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xeb < *unaff_x23) {
                                                    unaff_x19[0xef] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xef,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xec;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xec < *unaff_x23) {
                                                    unaff_x19[0xf0] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf0,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xed;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xed < *unaff_x23) {
                                                    unaff_x19[0xf1] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf1,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xee;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xee < *unaff_x23) {
                                                    unaff_x19[0xf2] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf2,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xef;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xef < *unaff_x23) {
                                                    unaff_x19[0xf3] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf3,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf0;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf0 < *unaff_x23) {
                                                    unaff_x19[0xf4] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf1 < *unaff_x23) {
                                                    unaff_x19[0xf5] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf5,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf2;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf2 < *unaff_x23) {
                                                    unaff_x19[0xf6] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf6,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf3;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf3 < *unaff_x23) {
                                                    unaff_x19[0xf7] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf7,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf4;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf4 < *unaff_x23) {
                                                    unaff_x19[0xf8] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf8,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf5;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf5 < *unaff_x23) {
                                                    unaff_x19[0xf9] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xf9,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf6;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf6 < *unaff_x23) {
                                                    unaff_x19[0xfa] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xfa,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf7;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf7 < *unaff_x23) {
                                                    unaff_x19[0xfb] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xfb,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf8;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf8 < *unaff_x23) {
                                                    unaff_x19[0xfc] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xfc,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xf9;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xf9 < *unaff_x23) {
                                                    unaff_x19[0xfd] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xfd,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xfa;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xfa < *unaff_x23) {
                                                    unaff_x19[0xfe] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xfe,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xfb;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xfb < *unaff_x23) {
                                                    unaff_x19[0xff] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0xff,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xfc;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xfc < *unaff_x23) {
                                                    unaff_x19[0x100] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x100,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xfd;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xfd < *unaff_x23) {
                                                    unaff_x19[0x101] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x101,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xfe;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xfe < *unaff_x23) {
                                                    unaff_x19[0x102] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x102,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                                                    FUN_04657ec0(lVar5,4,*unaff_x21);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 0xff;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    puVar4 = PTR_DAT_06d641b0;
                                                    puVar3 = PTR_DAT_06d641a8;
                                                    puVar2 = PTR_DAT_06d640a8;
                                                    puVar1 = PTR_DAT_06d63500;
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (0xff < *unaff_x23) {
                                                    unaff_x19[0x103] = lVar5;
                                                    thunk_FUN_02f411dc(unaff_x19 + 0x103,lVar5);
                                                    **(undefined8 **)(*(long *)puVar1 + 0xb8) =
                                                         unaff_x19;
                                                    thunk_FUN_02f411dc(*(undefined8 *)
                                                                        (*(long *)puVar1 + 0xb8));
                                                    plVar7 = (long *)FUN_02f07f14(*(undefined8 *)
                                                                                   puVar3,2);
                                                    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_046578cc(lVar5,4,*(undefined8 *)puVar4);
                                                    if ((lVar5 == 0) ||
                                                       (*(undefined1 *)(lVar5 + 0x2c) = 0,
                                                       plVar7 == (long *)0x0)) goto LAB_05929514;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if ((int)plVar7[3] != 0) {
                                                    plVar7[4] = lVar5;
                                                    thunk_FUN_02f411dc(plVar7 + 4,lVar5);
                                                    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_046578cc(lVar5,4,*(undefined8 *)puVar4);
                                                    if (lVar5 == 0) goto LAB_05929514;
                                                    *(undefined1 *)(lVar5 + 0x2c) = 1;
                                                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar6 == 0)
                                                    goto 
                                                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                                                  ;
                                                  if (1 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[5] = lVar5;
                                                    thunk_FUN_02f411dc(plVar7 + 5,lVar5);
                                                    plVar8 = (long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 8);
                                                    *plVar8 = (long)plVar7;
                                                    thunk_FUN_02f411dc(plVar8,plVar7);
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
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
LAB_05929514:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


