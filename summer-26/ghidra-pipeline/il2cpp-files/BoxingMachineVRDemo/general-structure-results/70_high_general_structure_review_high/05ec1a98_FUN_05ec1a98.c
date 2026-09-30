/*
FUNCTION_NAME: FUN_05ec1a98
ENTRY_POINT: 05ec1a98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


void FUN_05ec1a98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  puVar3 = Method_UnityEngine_XR_OpenXR_Features_Meta_ColocationDiscovery_OnStopAsyncComplete__;
  puVar2 = PTR_DAT_0675e638;
  if ((DAT_06b83bf7 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ColocationDiscovery_OnStopAsyncComplete__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<long,_uint>__);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__);
    FUN_02d6084c(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                );
    FUN_02d6084c(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                );
    FUN_02d6084c(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__);
    FUN_02d6084c(Method_UnityEngine_Color_get_Item__);
    FUN_02d6084c(Method_UnityEngine_Color_set_Item__);
    FUN_02d6084c(Method_UnityEngine_Color32_get_Item__);
    FUN_02d6084c(Method_VRUIP_ColorPickerController_OnColorInputTextChanged__);
    FUN_02d6084c(PTR_DAT_06762058);
    FUN_02d6084c(PTR_DAT_06762060);
    FUN_02d6084c(Method_VRUIP_ColorPickerController_OnSliderValueChanged__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                );
    DAT_06b83bf7 = 1;
  }
  lVar6 = FUN_02d60934(*(undefined8 *)puVar3,0x16);
  local_50 = *(undefined8 *)puVar2;
  uStack_48 = 0;
  thunk_FUN_02dd37b4(&local_50);
  puVar3 = Method_VRUIP_ColorPickerController_OnSliderValueChanged__;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(ulong *)(lVar6 + 0x28) = uStack_48;
      *(undefined8 *)(lVar6 + 0x20) = local_50;
      thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20),0);
      local_60 = *(undefined8 *)puVar3;
      uStack_58 = 0;
      thunk_FUN_02dd37b4(&local_60);
      puVar3 = PTR_DAT_06762060;
      uStack_58 = CONCAT44(uStack_58._4_4_,1);
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x38) = uStack_58;
        *(undefined8 *)(lVar6 + 0x30) = local_60;
        thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x30),0);
        local_70 = *(undefined8 *)puVar3;
        uStack_68 = 0;
        thunk_FUN_02dd37b4(&local_70);
        puVar3 = PTR_DAT_06762058;
        uStack_68 = CONCAT44(uStack_68._4_4_,2);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x48) = uStack_68;
          *(undefined8 *)(lVar6 + 0x40) = local_70;
          thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x40),0);
          local_80 = *(undefined8 *)puVar3;
          uStack_78 = 0;
          thunk_FUN_02dd37b4(&local_80);
          puVar3 = Method_UnityEngine_Color_get_Item__;
          uStack_78 = CONCAT44(uStack_78._4_4_,2);
          if (3 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x58) = uStack_78;
            *(undefined8 *)(lVar6 + 0x50) = local_80;
            thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x50),0);
            local_90 = *(undefined8 *)puVar3;
            uStack_88 = 0;
            thunk_FUN_02dd37b4(&local_90);
            puVar3 = Method_UnityEngine_Color32_get_Item__;
            uStack_88 = CONCAT44(uStack_88._4_4_,1);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x68) = uStack_88;
              *(undefined8 *)(lVar6 + 0x60) = local_90;
              thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x60),0);
              local_a0 = *(undefined8 *)puVar3;
              uStack_98 = 0;
              thunk_FUN_02dd37b4(&local_a0);
              puVar3 = Method_UnityEngine_Color_set_Item__;
              uStack_98 = CONCAT44(uStack_98._4_4_,1);
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x78) = uStack_98;
                *(undefined8 *)(lVar6 + 0x70) = local_a0;
                thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x70),0);
                local_b0 = *(undefined8 *)puVar3;
                uStack_a8 = 0;
                thunk_FUN_02dd37b4(&local_b0);
                puVar3 = 
                Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                ;
                uStack_a8 = CONCAT44(uStack_a8._4_4_,1);
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x88) = uStack_a8;
                  *(undefined8 *)(lVar6 + 0x80) = local_b0;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x80),0);
                  local_c0 = *(undefined8 *)puVar3;
                  uStack_b8 = 0;
                  thunk_FUN_02dd37b4(&local_c0);
                  puVar3 = 
                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                  ;
                  uStack_b8 = CONCAT44(uStack_b8._4_4_,1);
                  if (7 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x98) = uStack_b8;
                    *(undefined8 *)(lVar6 + 0x90) = local_c0;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x90),0);
                    local_d0 = *(undefined8 *)puVar3;
                    uStack_c8 = 0;
                    thunk_FUN_02dd37b4(&local_d0);
                    puVar3 = 
                    Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                    ;
                    uStack_c8 = CONCAT44(uStack_c8._4_4_,1);
                    if (8 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0xa8) = uStack_c8;
                      *(undefined8 *)(lVar6 + 0xa0) = local_d0;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0xa0),0);
                      local_e0 = *(undefined8 *)puVar3;
                      uStack_d8 = 0;
                      thunk_FUN_02dd37b4(&local_e0);
                      puVar3 = Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__;
                      uStack_d8 = CONCAT44(uStack_d8._4_4_,1);
                      if (9 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0xb8) = uStack_d8;
                        *(undefined8 *)(lVar6 + 0xb0) = local_e0;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0xb0),0);
                        local_f0 = *(undefined8 *)puVar3;
                        uStack_e8 = 0;
                        thunk_FUN_02dd37b4(&local_f0);
                        puVar3 = Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__;
                        uStack_e8 = CONCAT44(uStack_e8._4_4_,1);
                        if (10 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 200) = uStack_e8;
                          *(undefined8 *)(lVar6 + 0xc0) = local_f0;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0xc0),0);
                          local_100 = *(undefined8 *)puVar3;
                          uStack_f8 = 0;
                          thunk_FUN_02dd37b4(&local_100);
                          puVar3 = 
                          Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                          ;
                          uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0xd8) = uStack_f8;
                            *(undefined8 *)(lVar6 + 0xd0) = local_100;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0xd0),0);
                            local_110 = *(undefined8 *)puVar3;
                            uStack_108 = 0;
                            thunk_FUN_02dd37b4(&local_110);
                            puVar3 = 
                            Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__
                            ;
                            uStack_108 = CONCAT44(uStack_108._4_4_,1);
                            if (0xc < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0xe8) = uStack_108;
                              *(undefined8 *)(lVar6 + 0xe0) = local_110;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0xe0),0);
                              local_120 = *(undefined8 *)puVar3;
                              uStack_118 = 0;
                              thunk_FUN_02dd37b4(&local_120);
                              puVar3 = 
                              Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                              ;
                              uStack_118 = CONCAT44(uStack_118._4_4_,1);
                              if (0xd < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0xf8) = uStack_118;
                                *(undefined8 *)(lVar6 + 0xf0) = local_120;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0xf0),0);
                                local_130 = *(undefined8 *)puVar3;
                                uStack_128 = 0;
                                thunk_FUN_02dd37b4(&local_130);
                                uStack_128 = CONCAT44(uStack_128._4_4_,3);
                                if (0xe < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + 0x108) = uStack_128;
                                  *(undefined8 *)(lVar6 + 0x100) = local_130;
                                  thunk_FUN_02dd37b4(lVar6 + 0x100,0);
                                  local_140 = *(undefined8 *)puVar3;
                                  uStack_138 = 0;
                                  thunk_FUN_02dd37b4(&local_140);
                                  uStack_138 = CONCAT44(uStack_138._4_4_,4);
                                  if (0xf < *(uint *)(lVar6 + 0x18)) {
                                    *(undefined8 *)(lVar6 + 0x118) = uStack_138;
                                    *(undefined8 *)(lVar6 + 0x110) = local_140;
                                    thunk_FUN_02dd37b4(lVar6 + 0x110,0);
                                    local_150 = *(undefined8 *)puVar3;
                                    uStack_148 = 0;
                                    thunk_FUN_02dd37b4(&local_150);
                                    uStack_148 = CONCAT44(uStack_148._4_4_,5);
                                    if (0x10 < *(uint *)(lVar6 + 0x18)) {
                                      *(undefined8 *)(lVar6 + 0x128) = uStack_148;
                                      *(undefined8 *)(lVar6 + 0x120) = local_150;
                    /* try { // try from 05ec2004 to 05fc20ff has its CatchHandler @ 05ec2004
                       catch() { ... } // from try @ 05ec2004 with catch @ 05ec2004
                       catch() { ... } // from try @ 05ec21c4 with catch @ 05ec2004
                       catch() { ... } // from try @ 05ec2208 with catch @ 05ec2004
                       catch() { ... } // from try @ 05ec2234 with catch @ 05ec2004
                       catch() { ... } // from try @ 05ec226c with catch @ 05ec2004 */
                                      thunk_FUN_02dd37b4(lVar6 + 0x120,0);
                                      local_160 = *(undefined8 *)puVar3;
                                      uStack_158 = 0;
                                      thunk_FUN_02dd37b4(&local_160);
                                      puVar5 = 
                                      Method_VRUIP_ColorPickerController_OnColorInputTextChanged__;
                                      uStack_158 = CONCAT44(uStack_158._4_4_,6);
                                      if (0x11 < *(uint *)(lVar6 + 0x18)) {
                                        *(undefined8 *)(lVar6 + 0x138) = uStack_158;
                                        *(undefined8 *)(lVar6 + 0x130) = local_160;
                                        thunk_FUN_02dd37b4(lVar6 + 0x130,0);
                                        local_170 = *(undefined8 *)puVar5;
                                        uStack_168 = 0;
                                        thunk_FUN_02dd37b4(&local_170);
                                        uStack_168 = CONCAT44(uStack_168._4_4_,3);
                                        if (0x12 < *(uint *)(lVar6 + 0x18)) {
                                          *(undefined8 *)(lVar6 + 0x148) = uStack_168;
                                          *(undefined8 *)(lVar6 + 0x140) = local_170;
                                          thunk_FUN_02dd37b4(lVar6 + 0x140,0);
                                          local_180 = *(undefined8 *)puVar5;
                                          uStack_178 = 0;
                                          thunk_FUN_02dd37b4(&local_180);
                                          uStack_178 = CONCAT44(uStack_178._4_4_,4);
                                          if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                            *(undefined8 *)(lVar6 + 0x158) = uStack_178;
                                            *(undefined8 *)(lVar6 + 0x150) = local_180;
                                            thunk_FUN_02dd37b4(lVar6 + 0x150,0);
                                            local_190 = *(undefined8 *)puVar5;
                                            uStack_188 = 0;
                                            thunk_FUN_02dd37b4(&local_190);
                                            uStack_188 = CONCAT44(uStack_188._4_4_,5);
                                            if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                              *(undefined8 *)(lVar6 + 0x168) = uStack_188;
                                              *(undefined8 *)(lVar6 + 0x160) = local_190;
                                              thunk_FUN_02dd37b4(lVar6 + 0x160,0);
                                              local_1a0 = *(undefined8 *)puVar5;
                                              uStack_198 = 0;
                                              thunk_FUN_02dd37b4(&local_1a0);
                                              puVar4 = 
                                              Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<long,_uint>__
                                              ;
                                              puVar1 = PTR_DAT_0675e238;
                                              uStack_198 = CONCAT44(uStack_198._4_4_,6);
                                              if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                *(undefined8 *)(lVar6 + 0x178) = uStack_198;
                                                *(undefined8 *)(lVar6 + 0x170) = local_1a0;
                                                thunk_FUN_02dd37b4(lVar6 + 0x170,0);
                                                **(long **)(*(long *)puVar4 + 0xb8) = lVar6;
                                                thunk_FUN_02dd37b4(*(undefined8 *)
                                                                    (*(long *)puVar4 + 0xb8),lVar6);
                                                lVar6 = FUN_02d60934(*(undefined8 *)puVar1,3);
                                                if (lVar6 == 0) goto LAB_05ec21f0;
                                                if (*(int *)(lVar6 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x28))
                                                    ;
                                                    if (2 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0x30) =
                                                           *(undefined8 *)puVar5;
                                                      thunk_FUN_02dd37b4();
                                                      plVar7 = (long *)(*(long *)(*(long *)puVar4 +
                                                                                 0xb8) + 8);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar7,lVar6);
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
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_05ec21f0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


