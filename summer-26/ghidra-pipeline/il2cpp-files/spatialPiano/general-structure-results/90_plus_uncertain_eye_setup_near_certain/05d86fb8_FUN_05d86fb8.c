/*
FUNCTION_NAME: FUN_05d86fb8
ENTRY_POINT: 05d86fb8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d86fb8(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4,
                 long param_5,long param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  uVar19 = (undefined4)((ulong)param_3 >> 0x20);
  if ((DAT_06bc3a49 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_OnUserChange__);
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_add_onActionTriggered__);
    DAT_06bc3a49 = 1;
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (*(long *)(param_4 + 0x1b0) != 0) {
    iVar1 = *(int *)(param_4 + 0xb8);
    iVar2 = *(int *)(param_4 + 0xbc);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if ((*(long *)(param_4 + 0x1c0) != 0) &&
       (plVar8 = *(long **)(*(long *)(param_4 + 0x1c0) + 0x40), plVar8 != (long *)0x0)) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x1b0) + 0x20);
      fVar13 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
      if ((*(long *)(param_4 + 0x1c0) != 0) &&
         (plVar8 = *(long **)(*(long *)(param_4 + 0x1c0) + 0x48), plVar8 != (long *)0x0)) {
        fVar14 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
        puVar4 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
        puVar3 = PTR_DAT_067c9e50;
        fVar20 = fVar13;
        if (fVar13 <= fVar14) {
          fVar20 = fVar14;
        }
        if ((*(long *)(param_4 + 0x1c0) != 0) &&
           (plVar8 = *(long **)(*(long *)(param_4 + 0x1c0) + 0x50), plVar8 != (long *)0x0)) {
          fVar14 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05cb163c(lVar11,*(undefined8 *)puVar4,param_8 & 1,0);
          puVar4 = Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__;
          puVar3 = 
          Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
          ;
          if ((*(long *)(param_4 + 0x1c0) != 0) &&
             (plVar8 = *(long **)(*(long *)(param_4 + 0x1c0) + 0x58), plVar8 != (long *)0x0)) {
            uVar7 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
            FUN_05cb163c(lVar11,*(undefined8 *)puVar4,uVar7 & 1,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar6 = Method_UnityEngine_InputSystem_PlayerInput_OnUserChange__;
            puVar5 = Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__;
            puVar4 = 
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
            ;
            if (lVar11 != 0) {
              iVar1 = iVar1 >> 1;
              iVar2 = iVar2 >> 1;
              uVar18 = NEON_fminnm(((float)iVar1 / 1080.0) * fVar14,0x40000000);
              thunk_FUN_060bfdac(fVar13,fVar20,CONCAT44(uVar19,uVar18),0,lVar11,
                                 *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),0);
              FUN_05d834d8(&local_f8,param_4,*(undefined4 *)(param_4 + 0xb8),
                           *(undefined4 *)(param_4 + 0xbc),*(undefined4 *)(param_4 + 0x22c),0);
              uStack_b8 = uStack_f0;
              local_c0 = local_f8;
              uStack_a8 = uStack_e0;
              local_b0 = local_e8;
              uStack_98 = uStack_d0;
              local_90 = local_c8;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05daf224(0,param_4 + 0x118,&local_c0,1,1,1,*(undefined8 *)puVar6,0);
              FUN_05d834d8(&local_12c,param_4,iVar1,iVar2,*(undefined4 *)(param_4 + 0x22c),0);
              uStack_b8 = uStack_124;
              local_c0 = local_12c;
              uStack_a8 = uStack_114;
              local_b0 = local_11c;
              uStack_98 = uStack_104;
              local_a0 = local_10c;
              local_90 = local_fc;
              FUN_05daf224(0,param_4 + 0x120,&local_c0,1,1,1,*(undefined8 *)puVar5,0);
              FUN_05d834d8(&local_160,param_4,iVar1,iVar2,0x30,0);
              uStack_b8 = uStack_158;
              local_c0 = local_160;
              uStack_a8 = uStack_148;
              local_b0 = uStack_150;
              uStack_98 = uStack_138;
              local_a0 = local_140;
              local_90 = local_130;
              FUN_05daf224(0,param_4 + 0x128,&local_c0,1,1,1,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_PlayerInput_SwitchCurrentControlScheme__,
                           0);
              FUN_05d834d8(&local_194,param_4,iVar1,iVar2,0x30,0);
              uStack_b8 = uStack_18c;
              local_c0 = local_194;
              uStack_a8 = uStack_17c;
              local_b0 = uStack_184;
              uStack_98 = uStack_16c;
              local_a0 = local_174;
              local_90 = local_164;
              FUN_05daf224(0,param_4 + 0x130,&local_c0,1,1,1,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_PlayerInput_add_onActionTriggered__,0);
              FUN_05d95b90(param_5,*(undefined8 *)(param_4 + 0x118),0);
              puVar4 = 
              Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
              ;
              if (param_5 != 0) {
                FUN_06116150(0x3f000000,0x3f000000,0x40000000,0x40000000,param_5,
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x8c),0);
                uVar12 = *(undefined8 *)(param_4 + 0x118);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_05cab544(param_5,param_6,uVar12,2,0,lVar11,0,0);
                lVar9 = *(long *)(param_4 + 0x120);
                if ((lVar9 != 0) && (lVar10 = *(long *)(param_4 + 0x238), lVar10 != 0)) {
                  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_05d876ec:
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  uVar15 = *(undefined8 *)(lVar9 + 0x40);
                  uVar12 = *(undefined8 *)(lVar9 + 0x38);
                  uVar17 = *(undefined8 *)(lVar9 + 0x30);
                  uVar16 = *(undefined8 *)(lVar9 + 0x28);
                  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar9 + 0x48);
                  *(undefined8 *)(lVar10 + 0x28) = uVar17;
                  *(undefined8 *)(lVar10 + 0x20) = uVar16;
                  *(undefined8 *)(lVar10 + 0x38) = uVar15;
                  *(undefined8 *)(lVar10 + 0x30) = uVar12;
                  lVar9 = *(long *)(param_4 + 0x128);
                  if ((lVar9 != 0) && (lVar10 = *(long *)(param_4 + 0x238), lVar10 != 0)) {
                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_05d876ec;
                    uVar15 = *(undefined8 *)(lVar9 + 0x40);
                    uVar12 = *(undefined8 *)(lVar9 + 0x38);
                    uVar17 = *(undefined8 *)(lVar9 + 0x30);
                    uVar16 = *(undefined8 *)(lVar9 + 0x28);
                    *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar9 + 0x48);
                    *(undefined8 *)(lVar10 + 0x60) = uVar15;
                    *(undefined8 *)(lVar10 + 0x58) = uVar12;
                    *(undefined8 *)(lVar10 + 0x50) = uVar17;
                    *(undefined8 *)(lVar10 + 0x48) = uVar16;
                    lVar9 = *(long *)(param_4 + 0x118);
                    if (lVar9 != 0) {
                      uStack_1b8 = *(undefined8 *)(lVar9 + 0x30);
                      local_1c0 = *(undefined8 *)(lVar9 + 0x28);
                      uStack_1a8 = *(undefined8 *)(lVar9 + 0x40);
                      uStack_1b0 = *(undefined8 *)(lVar9 + 0x38);
                      local_1a0 = *(undefined8 *)(lVar9 + 0x48);
                      FUN_0611f628(param_5,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10)
                                   ,&local_1c0,0);
                      FUN_05cafe98(param_5,*(undefined8 *)(param_4 + 0x238),
                                   *(undefined8 *)(param_4 + 0x120),0);
                      if (param_6 != 0) {
                        if (*(char *)(param_6 + 0xa8) == '\0') {
                          if (DAT_06bb8a4a == '\0') {
                            FUN_02f08768(PTR_DAT_067c9848);
                            DAT_06bb8a4a = '\x01';
                          }
                          local_d8 = *(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
                          uStack_d4 = *(undefined4 *)
                                       (*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
                        }
                        else {
                          FUN_05c9cc94(&local_f8,param_6,0);
                          FUN_05c9cc94(&local_f8,param_6,0);
                        }
                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        FUN_05caa088(local_d8,uStack_d4,0,0,param_5,param_6,lVar11,1,0);
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        lVar9 = *(long *)(param_4 + 0x120);
                        if (lVar9 != 0) {
                          uStack_1e8 = *(undefined8 *)(lVar9 + 0x30);
                          local_1f0 = *(undefined8 *)(lVar9 + 0x28);
                          uStack_1d8 = *(undefined8 *)(lVar9 + 0x40);
                          uStack_1e0 = *(undefined8 *)(lVar9 + 0x38);
                          local_1d0 = *(undefined8 *)(lVar9 + 0x48);
                          FUN_0611f628(param_5,*(undefined4 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x14),
                                       &local_1f0,0);
                          uVar19 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44);
                          FUN_05c9ac9c(&local_f8,param_6,0);
                          uStack_218 = uStack_f0;
                          local_220 = local_f8;
                          uStack_208 = uStack_e0;
                          uStack_210 = local_e8;
                          FUN_0611f628(param_5,uVar19,&local_220,0);
                          FUN_05cab544(param_5,*(undefined8 *)(param_4 + 0x128),
                                       *(undefined8 *)(param_4 + 0x130),2,0,lVar11,2,0);
                          FUN_05cab544(param_5,*(undefined8 *)(param_4 + 0x130),
                                       *(undefined8 *)(param_4 + 0x128),2,0,lVar11,3,0);
                          lVar9 = *(long *)(param_4 + 0x128);
                          if (lVar9 != 0) {
                            uStack_248 = *(undefined8 *)(lVar9 + 0x30);
                            local_250 = *(undefined8 *)(lVar9 + 0x28);
                            uStack_238 = *(undefined8 *)(lVar9 + 0x40);
                            uStack_240 = *(undefined8 *)(lVar9 + 0x38);
                            local_230 = *(undefined8 *)(lVar9 + 0x48);
                            FUN_0611f628(param_5,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar3 + 0xb8) + 0x44),
                                         &local_250,0);
                            lVar9 = *(long *)(param_4 + 0x118);
                            if (lVar9 != 0) {
                              uStack_278 = *(undefined8 *)(lVar9 + 0x30);
                              local_280 = *(undefined8 *)(lVar9 + 0x28);
                              uStack_268 = *(undefined8 *)(lVar9 + 0x40);
                              uStack_270 = *(undefined8 *)(lVar9 + 0x38);
                              local_260 = *(undefined8 *)(lVar9 + 0x48);
                              FUN_0611f628(param_5,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x10),
                                           &local_280,0);
                              FUN_05cab544(param_5,param_6,param_7,2,0,lVar11,4,0);
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
  FUN_02f089c8();
}


