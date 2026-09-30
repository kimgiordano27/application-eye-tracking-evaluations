/*
FUNCTION_NAME: FUN_059aee74
ENTRY_POINT: 059aee74
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_059aee74(void)

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
  
  puVar3 = Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_modifiers__;
  if ((DAT_06bc1be7 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cd868);
    FUN_02f08768(PTR_DAT_067cd870);
    FUN_02f08768(PTR_DAT_067cd878);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_modifiers__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__)
    ;
    FUN_02f08768(PTR_DAT_067cd880);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__);
    FUN_02f08768(PTR_DAT_067cd888);
    FUN_02f08768(PTR_DAT_067cd890);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_mousePosition__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_recomputeTopElementUnderMouse__
                );
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    DAT_06bc1be7 = 1;
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
  puVar2 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__;
  puVar3 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  UnityEngine_UIElements_Panel__GetUpdater
            (&local_50,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,**(undefined8 **)(lVar5 + 0xb8)
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
      puVar2 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
      puVar3 = PTR_DAT_067cd880;
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      UnityEngine_UIElements_Panel__GetUpdater
                (&local_70,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
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
        puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
        puVar3 = PTR_DAT_067cd890;
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
          puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
          puVar3 = 
          Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_recomputeTopElementUnderMouse__
          ;
          lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          UnityEngine_UIElements_Panel__GetUpdater
                    (&local_b0,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
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
            puVar2 = Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__;
            puVar3 = Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_mousePosition__;
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
              puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
              puVar3 = PTR_DAT_067cd888;
              lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02f41e9c();
              }
              uStack_e8 = 0;
              local_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              UnityEngine_UIElements_Panel__GetUpdater
                        (&local_f0,*(undefined8 *)puVar1,*(undefined8 *)puVar3,0,
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


