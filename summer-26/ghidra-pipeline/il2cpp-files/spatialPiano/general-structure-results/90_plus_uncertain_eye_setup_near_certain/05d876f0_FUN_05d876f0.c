/*
FUNCTION_NAME: FUN_05d876f0
ENTRY_POINT: 05d876f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d876f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  
  if ((DAT_06bc3a4b & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(Method_System_IO_Path_InsecureGetFullPath__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
    FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_OnUserChange__);
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_add_onActionTriggered__);
    DAT_06bc3a4b = 1;
  }
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    iVar1 = *(int *)(param_1 + 0xb8);
    iVar2 = *(int *)(param_1 + 0xbc);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if ((*(long *)(param_1 + 0x1c0) != 0) &&
       (plVar8 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x70), plVar8 != (long *)0x0)) {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x30);
      fVar12 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
      if ((*(long *)(param_1 + 0x1c0) != 0) &&
         (plVar8 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x70), plVar8 != (long *)0x0)) {
        fVar13 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
        if ((*(long *)(param_1 + 0x1c0) != 0) &&
           (plVar8 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x68), plVar8 != (long *)0x0)) {
          fVar14 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          puVar4 = Method_System_IO_Path_InsecureGetFullPath__;
          puVar3 = PTR_DAT_067c9e50;
          if ((*(long *)(param_1 + 0x1c0) != 0) &&
             (plVar8 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x60), plVar8 != (long *)0x0)) {
            fVar15 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
            iVar7 = *(int *)(param_1 + 0xbc);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar6 = 
            Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__;
            puVar5 = 
            Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
            ;
            puVar4 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
            fVar16 = 14.0 / (float)iVar7;
            fVar17 = DAT_011b018c;
            if (fVar16 <= DAT_011b018c) {
              fVar17 = fVar16;
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05cb163c(uVar10,*(undefined8 *)puVar4,param_5 & 1,0);
            FUN_05cb163c(uVar10,*(undefined8 *)puVar6,*(undefined1 *)(param_1 + 599),0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if (param_2 != 0) {
              iVar1 = iVar1 >> 1;
              iVar2 = iVar2 >> 1;
              fVar16 = 1.0 / ((float)iVar1 / (float)iVar2);
              FUN_06116150(fVar15,((fVar12 / 1000.0) * (fVar13 / fVar14)) /
                                  (fVar15 - fVar12 / 1000.0),fVar17,fVar16,param_2,
                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c),0);
              plVar8 = *(long **)(param_1 + 0x1c0);
              if (plVar8 != (long *)0x0) {
                iVar7 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
                if (((iVar7 != *(int *)(param_1 + 0x248)) || (fVar17 != *(float *)(param_1 + 0x24c))
                    ) || (fVar16 != *(float *)(param_1 + 0x250))) {
                  *(int *)(param_1 + 0x248) = iVar7;
                  *(float *)(param_1 + 0x24c) = fVar17;
                  *(float *)(param_1 + 0x250) = fVar16;
                  FUN_05d87d04(fVar17,fVar16,param_1);
                }
                puVar3 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                ;
                lVar9 = *(long *)puVar5;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar9 = *(long *)puVar5;
                }
                puVar6 = Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__;
                puVar4 = Method_UnityEngine_InputSystem_PlayerInput_OnUserChange__;
                FUN_06117720(param_2,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x20),
                             *(undefined8 *)(param_1 + 0x240),0);
                FUN_05d834d8(&local_d0,param_1,*(undefined4 *)(param_1 + 0xb8),
                             *(undefined4 *)(param_1 + 0xbc),5,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_05daf224(0,param_1 + 0x118,&local_d0,1,1,1,*(undefined8 *)puVar4,0);
                FUN_05d834d8(&local_104,param_1,iVar1,iVar2,0x30,0);
                uStack_c8 = uStack_fc;
                local_d0 = local_104;
                uStack_b8 = uStack_ec;
                local_c0 = uStack_f4;
                uStack_a8 = uStack_dc;
                local_b0 = local_e4;
                local_a0 = local_d4;
                FUN_05daf224(0,param_1 + 0x128,&local_d0,1,1,1,*(undefined8 *)puVar6,0);
                FUN_05d834d8(&local_138,param_1,iVar1,iVar2,0x30,0);
                uStack_c8 = uStack_130;
                local_d0 = local_138;
                uStack_b8 = uStack_120;
                local_c0 = local_128;
                uStack_a8 = uStack_110;
                local_b0 = local_118;
                local_a0 = local_108;
                FUN_05daf224(0,param_1 + 0x130,&local_d0,1,1,1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_PlayerInput_add_onActionTriggered__,0);
                FUN_05d95b90(param_2,*(undefined8 *)(param_1 + 0x118),0);
                FUN_06116150(0x3f000000,0x3f000000,0x40000000,0x40000000,param_2,
                             *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x8c),0);
                fVar12 = 1.0 / (float)*(int *)(param_1 + 0xbc);
                fVar12 = fVar12 + fVar12;
                FUN_06116150(fVar12,fVar12 + fVar12,0,0,param_2,
                             *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x24),0);
                uVar11 = *(undefined8 *)(param_1 + 0x118);
                if (*(int *)(*(long *)
                              Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                            + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_05cab544(param_2,param_3,uVar11,2,0,uVar10,0,0);
                lVar9 = *(long *)(param_1 + 0x118);
                if (lVar9 != 0) {
                  uStack_158 = *(undefined8 *)(lVar9 + 0x30);
                  local_160 = *(undefined8 *)(lVar9 + 0x28);
                  uStack_148 = *(undefined8 *)(lVar9 + 0x40);
                  uStack_150 = *(undefined8 *)(lVar9 + 0x38);
                  local_140 = *(undefined8 *)(lVar9 + 0x48);
                  FUN_0611f628(param_2,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                               &local_160,0);
                  FUN_05cab544(param_2,param_3,*(undefined8 *)(param_1 + 0x128),2,0,uVar10,1,0);
                  FUN_05cab544(param_2,*(undefined8 *)(param_1 + 0x128),
                               *(undefined8 *)(param_1 + 0x130),2,0,uVar10,2,0);
                  FUN_05cab544(param_2,*(undefined8 *)(param_1 + 0x130),
                               *(undefined8 *)(param_1 + 0x128),2,0,uVar10,3,0);
                  lVar9 = *(long *)(param_1 + 0x128);
                  if (lVar9 != 0) {
                    uStack_188 = *(undefined8 *)(lVar9 + 0x30);
                    local_190 = *(undefined8 *)(lVar9 + 0x28);
                    uStack_178 = *(undefined8 *)(lVar9 + 0x40);
                    uStack_180 = *(undefined8 *)(lVar9 + 0x38);
                    local_170 = *(undefined8 *)(lVar9 + 0x48);
                    FUN_0611f628(param_2,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                                 &local_190,0);
                    FUN_05cab544(param_2,param_3,param_4,2,0,uVar10,4,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


