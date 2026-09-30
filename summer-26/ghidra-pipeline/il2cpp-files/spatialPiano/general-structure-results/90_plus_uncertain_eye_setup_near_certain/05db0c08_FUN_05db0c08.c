/*
FUNCTION_NAME: FUN_05db0c08
ENTRY_POINT: 05db0c08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05db0c08(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar4 = Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__;
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<MeshInfo>__;
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<Material>__;
  if ((DAT_06bc3b4c & 1) == 0) {
    FUN_02f08768(Method_System_Runtime_Remoting_Proxies_RealProxy_ProcessResponse__);
    FUN_02f08768(Method_System_Data_RecordManager__ctor__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<int>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<Material>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<MeshInfo>__);
    FUN_02f08768(Method_System_Data_RecordManager_set_MinimumCapacity__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnHFieldChanged__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnHFieldChanging__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnWFieldChanged__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnWFieldChanging__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnXFieldChanged__);
    FUN_02f08768(Method_System_Runtime_Remoting_Proxies_RealProxy_PrivateInvoke__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnXFieldChanging__);
    DAT_06bc3b4c = 1;
  }
  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_03afc644(lVar7,*(undefined8 *)puVar2);
  local_34 = 0;
  FUN_0612aaa4(&local_34,*(undefined8 *)puVar4,0);
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<int>__;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<int>__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar3 = Method_Unity_AppUI_UI_RectField_OnHFieldChanging__;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_34;
      }
      else {
        System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>__IndexOf
                  (lVar7,local_34,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                  );
      }
      local_38 = 0;
      FUN_0612aaa4(&local_38,*(undefined8 *)puVar3,0);
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar3 = Method_Unity_AppUI_UI_RectField_OnWFieldChanging__;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_38;
        }
        else {
          System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>__IndexOf
                    (lVar7,local_38,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        local_44 = 0;
        FUN_0612aaa4(&local_44,*(undefined8 *)puVar3,0);
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        puVar3 = Method_Unity_AppUI_UI_RectField_OnXFieldChanging__;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_44;
          }
          else {
            System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>__IndexOf
                      (lVar7,local_44,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          local_48 = 0;
          FUN_0612aaa4(&local_48,*(undefined8 *)puVar3,0);
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = Method_Unity_AppUI_UI_RectField_OnWFieldChanged__;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_48;
            }
            else {
              System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>__IndexOf
                        (lVar7,local_48,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            local_4c = 0;
            FUN_0612aaa4(&local_4c,*(undefined8 *)puVar3,0);
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            puVar3 = Method_Unity_AppUI_UI_RectField_OnXFieldChanged__;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_4c;
              }
              else {
                System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>__IndexOf
                          (lVar7,local_4c,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              local_50 = 0;
              FUN_0612aaa4(&local_50,*(undefined8 *)puVar3,0);
              lVar9 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)puVar2;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              puVar6 = Method_Unity_AppUI_UI_RectField_OnHFieldChanged__;
              puVar5 = Method_System_Data_RecordManager_set_MinimumCapacity__;
              puVar4 = Method_System_Data_RecordManager__ctor__;
              puVar3 = Method_System_Runtime_Remoting_Proxies_RealProxy_ProcessResponse__;
              puVar2 = 
              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              ;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = local_50;
                }
                else {
                  System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>__IndexOf
                            (lVar7,local_50,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
                local_60 = 0;
                uStack_b8 = 0;
                local_c0 = 0;
                uStack_a8 = 0;
                uStack_b0 = 0;
                uStack_98 = 0;
                local_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_78 = 0;
                local_80 = 0;
                uStack_68 = 0;
                uStack_70 = 0;
                uStack_c8 = 0;
                local_d0 = 0;
                FUN_06121030(&local_d0,0,0);
                lVar7 = *(long *)puVar2;
                memcpy((void *)(*(long *)(lVar7 + 0xb8) + 8),&local_d0,0x78);
                uVar8 = *(undefined8 *)puVar6;
                *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x80) = 0;
                uVar8 = FUN_02f0880c(uVar8,1);
                uVar10 = *(undefined8 *)puVar5;
                *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90) = uVar8;
                uVar8 = FUN_02f0880c(uVar10,1);
                uVar10 = *(undefined8 *)puVar4;
                *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98) = uVar8;
                uVar8 = thunk_FUN_02f45270(uVar10);
                FUN_048a40fc(uVar8,*(undefined8 *)puVar3);
                *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0) = uVar8;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


