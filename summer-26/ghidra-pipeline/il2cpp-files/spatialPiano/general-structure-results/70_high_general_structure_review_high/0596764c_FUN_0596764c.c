/*
FUNCTION_NAME: FUN_0596764c
ENTRY_POINT: 0596764c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_0596764c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_GetEnumerator__;
  if ((DAT_06bc1902 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cd868);
    FUN_02f08768(PTR_DAT_067cd870);
    FUN_02f08768(PTR_DAT_067cd878);
    FUN_02f08768(
                Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_get_Item__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_highValue__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Capacity__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<AnchorPrefabSpawner_AnchorPrefabGroup>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<Allocator2D_Area>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<Allocator2D_Area>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<Allocator2D_Area>_get_Count__);
    FUN_02f08768(Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Clear__);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    DAT_06bc1902 = 1;
  }
  puVar2 = PTR_DAT_067cd870;
  puVar1 = PTR_DAT_067cd868;
  uVar6 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050e4454(uVar6,0);
  lVar4 = FUN_02f0880c(*(undefined8 *)puVar2,6);
  lVar7 = *(long *)puVar1;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_02f41ef8(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar2 = 
  Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_get_Item__
  ;
  puVar3 = UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  UnityEngine_UIElements_Panel__GetUpdater
            (&local_50,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,**(undefined8 **)(lVar5 + 0xb8)
             ,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_48;
      *(undefined8 *)(lVar4 + 0x20) = local_50;
      *(undefined8 *)(lVar4 + 0x38) = uStack_38;
      *(undefined8 *)(lVar4 + 0x30) = uStack_40;
      lVar7 = *(long *)puVar1;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_02f41ef8(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar2 = Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Add__;
      puVar3 = Method_System_Collections_Generic_List<Allocator2D_Area>_get_Count__;
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      UnityEngine_UIElements_Panel__GetUpdater
                (&local_70,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,
                 **(undefined8 **)(lVar5 + 0xb8),0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x48) = uStack_68;
        *(undefined8 *)(lVar4 + 0x40) = local_70;
        *(undefined8 *)(lVar4 + 0x58) = uStack_58;
        *(undefined8 *)(lVar4 + 0x50) = uStack_60;
        lVar7 = *(long *)puVar1;
        lVar5 = *(long *)(lVar7 + 0x38);
        if (lVar5 == 0) {
          FUN_02f41ef8(lVar7);
          lVar5 = *(long *)(lVar7 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        puVar2 = Method_System_Collections_Generic_List<Allocator2D_Area>_Add__;
        puVar3 = Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_highValue__;
        lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        UnityEngine_UIElements_Panel__GetUpdater
                  (&local_90,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
                   **(undefined8 **)(lVar5 + 0xb8),0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x68) = uStack_88;
          *(undefined8 *)(lVar4 + 0x60) = local_90;
          *(undefined8 *)(lVar4 + 0x78) = uStack_78;
          *(undefined8 *)(lVar4 + 0x70) = uStack_80;
          lVar7 = *(long *)puVar1;
          lVar5 = *(long *)(lVar7 + 0x38);
          if (lVar5 == 0) {
            FUN_02f41ef8(lVar7);
            lVar5 = *(long *)(lVar7 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          puVar2 = Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>__ctor__;
          puVar3 = Method_System_Collections_Generic_List<Allocator2D_Area>__ctor__;
          lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          UnityEngine_UIElements_Panel__GetUpdater
                    (&local_b0,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,
                     **(undefined8 **)(lVar5 + 0xb8),0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x88) = uStack_a8;
            *(undefined8 *)(lVar4 + 0x80) = local_b0;
            *(undefined8 *)(lVar4 + 0x98) = uStack_98;
            *(undefined8 *)(lVar4 + 0x90) = uStack_a0;
            lVar7 = *(long *)puVar1;
            lVar5 = *(long *)(lVar7 + 0x38);
            if (lVar5 == 0) {
              FUN_02f41ef8(lVar7);
              lVar5 = *(long *)(lVar7 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar2 = 
            Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Clear__;
            puVar3 = 
            Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Item__
            ;
            lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c();
            }
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            UnityEngine_UIElements_Panel__GetUpdater
                      (&local_d0,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,
                       **(undefined8 **)(lVar5 + 0xb8),0);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0xa8) = uStack_c8;
              *(undefined8 *)(lVar4 + 0xa0) = local_d0;
              *(undefined8 *)(lVar4 + 0xb8) = uStack_b8;
              *(undefined8 *)(lVar4 + 0xb0) = uStack_c0;
              lVar7 = *(long *)puVar1;
              lVar5 = *(long *)(lVar7 + 0x38);
              if (lVar5 == 0) {
                FUN_02f41ef8(lVar7);
                lVar5 = *(long *)(lVar7 + 0x38);
              }
              lVar5 = *(long *)(lVar5 + 0x10);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02f41e9c();
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              puVar1 = 
              Method_System_Collections_Generic_List<AnchorPrefabSpawner_AnchorPrefabGroup>_GetEnumerator__
              ;
              puVar3 = 
              Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Capacity__
              ;
              lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02f41e9c();
              }
              uStack_e8 = 0;
              local_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              UnityEngine_UIElements_Panel__GetUpdater
                        (&local_f0,*(undefined8 *)puVar3,*(undefined8 *)puVar1,0,
                         **(undefined8 **)(lVar5 + 0xb8),0);
              puVar3 = PTR_DAT_067cd878;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 200) = uStack_e8;
                *(undefined8 *)(lVar4 + 0xc0) = local_f0;
                *(undefined8 *)(lVar4 + 0xd8) = uStack_d8;
                *(undefined8 *)(lVar4 + 0xd0) = uStack_e0;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_0628cda4(uVar6,lVar4,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


