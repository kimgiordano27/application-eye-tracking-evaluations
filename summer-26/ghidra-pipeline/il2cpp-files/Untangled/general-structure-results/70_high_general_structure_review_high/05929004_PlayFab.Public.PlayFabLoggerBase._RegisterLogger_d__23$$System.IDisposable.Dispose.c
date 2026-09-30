/*
FUNCTION_NAME: PlayFab.Public.PlayFabLoggerBase.<RegisterLogger>d__23$$System.IDisposable.Dispose
ENTRY_POINT: 05929004
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_14
*/


void PlayFab_Public_PlayFabLoggerBase_<RegisterLogger>d__23__System_IDisposable_Dispose(void)

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
  
  unaff_x19[0xf7] = unaff_x20;
  thunk_FUN_02f411dc();
  lVar5 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_04657ec0(lVar5,4,*unaff_x21);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x2c) = 0xf4;
    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar6 == 0) {
PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor:
      uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,0);
    }
    if (0xf4 < *unaff_x23) {
      unaff_x19[0xf8] = lVar5;
      thunk_FUN_02f411dc(unaff_x19 + 0xf8,lVar5);
      lVar5 = thunk_FUN_02ef1808(*unaff_x22);
      FUN_04657ec0(lVar5,4,*unaff_x21);
      if (lVar5 == 0) goto LAB_05929514;
      *(undefined1 *)(lVar5 + 0x2c) = 0xf5;
      lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
      if (0xf5 < *unaff_x23) {
        unaff_x19[0xf9] = lVar5;
        thunk_FUN_02f411dc(unaff_x19 + 0xf9,lVar5);
        lVar5 = thunk_FUN_02ef1808(*unaff_x22);
        FUN_04657ec0(lVar5,4,*unaff_x21);
        if (lVar5 == 0) goto LAB_05929514;
        *(undefined1 *)(lVar5 + 0x2c) = 0xf6;
        lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar6 == 0)
        goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
        if (0xf6 < *unaff_x23) {
          unaff_x19[0xfa] = lVar5;
          thunk_FUN_02f411dc(unaff_x19 + 0xfa,lVar5);
          lVar5 = thunk_FUN_02ef1808(*unaff_x22);
          FUN_04657ec0(lVar5,4,*unaff_x21);
          if (lVar5 == 0) goto LAB_05929514;
          *(undefined1 *)(lVar5 + 0x2c) = 0xf7;
          lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar6 == 0)
          goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
          if (0xf7 < *unaff_x23) {
            unaff_x19[0xfb] = lVar5;
            thunk_FUN_02f411dc(unaff_x19 + 0xfb,lVar5);
            lVar5 = thunk_FUN_02ef1808(*unaff_x22);
            FUN_04657ec0(lVar5,4,*unaff_x21);
            if (lVar5 == 0) goto LAB_05929514;
            *(undefined1 *)(lVar5 + 0x2c) = 0xf8;
            lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar6 == 0)
            goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
            if (0xf8 < *unaff_x23) {
              unaff_x19[0xfc] = lVar5;
              thunk_FUN_02f411dc(unaff_x19 + 0xfc,lVar5);
              lVar5 = thunk_FUN_02ef1808(*unaff_x22);
              FUN_04657ec0(lVar5,4,*unaff_x21);
              if (lVar5 == 0) goto LAB_05929514;
              *(undefined1 *)(lVar5 + 0x2c) = 0xf9;
              lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar6 == 0)
              goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
              if (0xf9 < *unaff_x23) {
                unaff_x19[0xfd] = lVar5;
                thunk_FUN_02f411dc(unaff_x19 + 0xfd,lVar5);
                lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                FUN_04657ec0(lVar5,4,*unaff_x21);
                if (lVar5 == 0) goto LAB_05929514;
                *(undefined1 *)(lVar5 + 0x2c) = 0xfa;
                lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar6 == 0)
                goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                if (0xfa < *unaff_x23) {
                  unaff_x19[0xfe] = lVar5;
                  thunk_FUN_02f411dc(unaff_x19 + 0xfe,lVar5);
                  lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                  FUN_04657ec0(lVar5,4,*unaff_x21);
                  if (lVar5 == 0) goto LAB_05929514;
                  *(undefined1 *)(lVar5 + 0x2c) = 0xfb;
                  lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar6 == 0)
                  goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                  if (0xfb < *unaff_x23) {
                    unaff_x19[0xff] = lVar5;
                    thunk_FUN_02f411dc(unaff_x19 + 0xff,lVar5);
                    lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                    FUN_04657ec0(lVar5,4,*unaff_x21);
                    if (lVar5 == 0) goto LAB_05929514;
                    *(undefined1 *)(lVar5 + 0x2c) = 0xfc;
                    lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar6 == 0)
                    goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                    if (0xfc < *unaff_x23) {
                      unaff_x19[0x100] = lVar5;
                      thunk_FUN_02f411dc(unaff_x19 + 0x100,lVar5);
                      lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                      FUN_04657ec0(lVar5,4,*unaff_x21);
                      if (lVar5 == 0) goto LAB_05929514;
                      *(undefined1 *)(lVar5 + 0x2c) = 0xfd;
                      lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar6 == 0)
                      goto PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                      if (0xfd < *unaff_x23) {
                        unaff_x19[0x101] = lVar5;
                        thunk_FUN_02f411dc(unaff_x19 + 0x101,lVar5);
                        lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                        FUN_04657ec0(lVar5,4,*unaff_x21);
                        if (lVar5 == 0) goto LAB_05929514;
                        *(undefined1 *)(lVar5 + 0x2c) = 0xfe;
                        lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar6 == 0)
                        goto 
                        PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                        if (0xfe < *unaff_x23) {
                          unaff_x19[0x102] = lVar5;
                          thunk_FUN_02f411dc(unaff_x19 + 0x102,lVar5);
                          lVar5 = thunk_FUN_02ef1808(*unaff_x22);
                          FUN_04657ec0(lVar5,4,*unaff_x21);
                          if (lVar5 == 0) goto LAB_05929514;
                          *(undefined1 *)(lVar5 + 0x2c) = 0xff;
                          lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                          puVar4 = PTR_DAT_06d641b0;
                          puVar3 = PTR_DAT_06d641a8;
                          puVar2 = PTR_DAT_06d640a8;
                          puVar1 = PTR_DAT_06d63500;
                          if (lVar6 == 0)
                          goto 
                          PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor;
                          if (0xff < *unaff_x23) {
                            unaff_x19[0x103] = lVar5;
                            thunk_FUN_02f411dc(unaff_x19 + 0x103,lVar5);
                            **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                            thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar1 + 0xb8));
                            plVar7 = (long *)FUN_02f07f14(*(undefined8 *)puVar3,2);
                            lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                            FUN_046578cc(lVar5,4,*(undefined8 *)puVar4);
                            if ((lVar5 == 0) ||
                               (*(undefined1 *)(lVar5 + 0x2c) = 0, plVar7 == (long *)0x0))
                            goto LAB_05929514;
                            lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
                            if (lVar6 == 0)
                            goto 
                            PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                            ;
                            if ((int)plVar7[3] != 0) {
                              plVar7[4] = lVar5;
                              thunk_FUN_02f411dc(plVar7 + 4,lVar5);
                              lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                              FUN_046578cc(lVar5,4,*(undefined8 *)puVar4);
                              if (lVar5 == 0) goto LAB_05929514;
                              *(undefined1 *)(lVar5 + 0x2c) = 1;
                              lVar6 = thunk_FUN_02ef170c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
                              if (lVar6 == 0)
                              goto 
                              PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest___ctor
                              ;
                              if (1 < *(uint *)(plVar7 + 3)) {
                                plVar7[5] = lVar5;
                                thunk_FUN_02f411dc(plVar7 + 5,lVar5);
                                plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
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
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
LAB_05929514:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


