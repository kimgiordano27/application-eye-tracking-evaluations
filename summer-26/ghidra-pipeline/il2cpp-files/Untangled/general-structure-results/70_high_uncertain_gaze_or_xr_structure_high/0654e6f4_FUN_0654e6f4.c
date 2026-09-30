/*
FUNCTION_NAME: FUN_0654e6f4
ENTRY_POINT: 0654e6f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_possible_biometrics_hits_4
*/


undefined1  [16] FUN_0654e6f4(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_071ce63c & 1) == 0) {
    FUN_02f07e70(OVRFaceExpressions_FaceExpression___TypeInfo);
    FUN_02f07e70(OVRHaptics_OVRHapticsChannel___TypeInfo);
    FUN_02f07e70(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_02f07e70(OVRInput_HapticInfo___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03db0);
    FUN_02f07e70(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_02f07e70(OVROverlay_LayerTexture___TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson___TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_InputControlScheme_DeviceRequirement___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04018);
    FUN_02f07e70(PTR_DAT_06d39440);
    FUN_02f07e70(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3b2f0);
    FUN_02f07e70(PTR_DAT_06d38e18);
                    /* try { // try from 0654e7d4 to 0664e9c3 has its CatchHandler @ 0654e7d4
                       catch() { ... } // from try @ 0654e7d4 with catch @ 0654e7d4
                       catch() { ... } // from try @ 0654e9f0 with catch @ 0654e7d4
                       catch() { ... } // from try @ 0654ea4c with catch @ 0654e7d4
                       catch() { ... } // from try @ 0654ea8c with catch @ 0654e7d4 */
    FUN_02f07e70(UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo);
    DAT_071ce63c = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  lVar7 = *param_3;
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  else {
    uVar8 = *(undefined8 *)PTR_DAT_06d03db0;
    lVar5 = thunk_FUN_02ef170c(lVar7,uVar8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar7,uVar8);
    }
  }
  puVar1 = PTR_DAT_06d38e18;
  lVar7 = *(long *)PTR_DAT_06d38e18;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar7 = *(long *)puVar1;
  }
  if (lVar5 != 0) {
    auVar11 = *(undefined1 (*) [16])(*(long *)(lVar7 + 0xb8) + 8);
    uVar8 = thunk_FUN_02ebbee0(lVar5,0);
    FUN_0654ed50(uVar8,&local_68,&local_70);
    if (param_2 != 0) {
      uVar6 = FUN_0654eeb0(param_2);
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 0654ea98 to 0664ea9f has its CatchHandler @ 0654eaa0 */
        uVar6 = FUN_0654f2dc(param_2);
        if ((uVar6 & 1) == 0) {
          lVar7 = FUN_02f07f14(*(undefined8 *)OVRPlugin_AppPerfFrameStats___TypeInfo,2);
          if (lVar7 != 0) {
            if (1 < *(uint *)(lVar7 + 0x18)) {
              *(undefined4 *)(lVar7 + 0x24) = 1;
              auVar11 = FUN_0654f3a0(param_1,param_2);
              return auVar11;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
        }
        else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0654ea84 with catch @ 0654eaa0
                       catch(type#2 @ 00000000) { ... } // from try @ 0654ea98 with catch @ 0654eaa0
                        */
          lVar7 = FUN_0654f358(param_2);
          if (lVar7 != 0) {
            FUN_04c74a5c(&local_f8,lVar7,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo
                        );
            puVar3 = OVRHaptics_OVRHapticsOutput___TypeInfo;
            puVar2 = UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo;
            uStack_b8 = uStack_f0;
            local_c0 = local_f8;
            uStack_a8 = uStack_e0;
            local_b0 = local_e8;
            local_a0 = local_d8;
LAB_0654eae4:
            do {
              uVar6 = FUN_04e98e80(&local_c0,*(undefined8 *)puVar3);
              uVar4 = uStack_a8;
              uVar8 = local_b0;
              if ((uVar6 & 1) == 0) {
LAB_0654ec10:
                FUN_04e98fa0(&local_c0,*(undefined8 *)OVRHaptics_OVRHapticsChannel___TypeInfo);
                return auVar11;
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar6 = FUN_0656823c(uVar8,0);
            } while ((uVar6 & 1) != 0);
            lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3b2f0);
            FUN_05645a04(lVar7,0);
            *(undefined8 *)(lVar7 + 0x10) = uVar8;
            thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x10),uVar8);
            local_d0 = 0;
            uStack_c8 = 0;
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            auVar10 = FUN_06564d3c(*(long *)(param_1 + 0x10),lVar7,local_68,&uStack_c8,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
            if ((auVar11._0_8_ & 0xff) != 0) {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
                    /* try { // try from 0654ebb8 to 0664efaf has its CatchHandler @ 0654ebb8
                       catch() { ... } // from try @ 0654ebb8 with catch @ 0654ebb8
                       catch() { ... } // from try @ 0654eff8 with catch @ 0654ebb8
                       catch() { ... } // from try @ 0654f2d0 with catch @ 0654ebb8
                       catch() { ... } // from try @ 0654f344 with catch @ 0654ebb8
                       catch() { ... } // from try @ 0654f38c with catch @ 0654ebb8
                       catch() { ... } // from try @ 0654f3a8 with catch @ 0654ebb8
                       catch() { ... } // from try @ 0654f3e8 with catch @ 0654ebb8 */
              auVar10 = FUN_06564d3c(*(long *)(param_1 + 0x10),uVar4,local_70,&local_d0,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if ((auVar11._0_8_ & 0xff) != 0) {
                FUN_0654ef6c(auVar11._0_8_,lVar5,uStack_c8,local_d0);
                goto LAB_0654eae4;
              }
            }
            auVar11._8_8_ = auVar11._8_8_;
            auVar11._0_8_ = auVar11._0_8_ & 0xffffffffffffff00;
            goto LAB_0654ec10;
          }
        }
      }
      else {
        lVar7 = FUN_0654d184(param_2);
        puVar2 = UnityEngine_InputSystem_InputControlScheme_DeviceRequirement___TypeInfo;
        if (lVar7 != 0) {
          if (0 < *(int *)(lVar7 + 0x18)) {
            iVar9 = 0;
            do {
              uVar8 = FUN_03fd09cc(lVar7,iVar9,*(undefined8 *)puVar2);
              auVar10 = FUN_0654d51c(param_1,uVar8,1);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if ((auVar11._0_8_ & 0xff) == 0) {
                return auVar11;
              }
              auVar10 = FUN_0654ef2c(param_1,uVar8,*(undefined8 *)PTR_DAT_06d39440,&local_78);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if ((auVar11._0_8_ & 0xff) == 0) {
                return auVar11;
              }
              auVar10 = FUN_0654ef2c(param_1,uVar8,*(undefined8 *)PTR_DAT_06d04018,&local_80);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if ((auVar11._0_8_ & 0xff) == 0) {
                return auVar11;
              }
              local_90 = 0;
              uStack_88 = 0;
                    /* try { // try from 0654e9c4 to 0664e9cb has its CatchHandler @ 0654ea30 */
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0654ed08;
              auVar10 = FUN_06564d3c(*(long *)(param_1 + 0x10),local_78,local_68,&uStack_88,0);
                    /* try { // try from 0654e9e4 to 0664e9ef has its CatchHandler @ 0654ea2c */
                    /* try { // try from 0654e9f0 to 0664ea47 has its CatchHandler @ 0654e7d4 */
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if ((auVar11._0_8_ & 0xff) == 0) {
                return auVar11;
              }
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0654ed08;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0654e9e4 with catch @ 0654ea2c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0654e9c4 with catch @ 0654ea30
                        */
              auVar10 = FUN_06564d3c(*(long *)(param_1 + 0x10),local_80,local_70,&local_90,0);
                    /* try { // try from 0654ea48 to 0664ea4b has its CatchHandler @ 0654ea74 */
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0654ea4c to 0664ea83 has its CatchHandler @ 0654e7d4 */
                thunk_FUN_02f12b58();
              }
              auVar11 = FUN_0654d7a0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if ((auVar11._0_8_ & 0xff) == 0) {
                return auVar11;
              }
                    /* catch() { ... } // from try @ 0654ea48 with catch @ 0654ea74 */
              FUN_0654ef6c(auVar11._0_8_,lVar5,uStack_88,local_90);
                    /* try { // try from 0654ea84 to 0664ea8b has its CatchHandler @ 0654eaa0 */
              iVar9 = iVar9 + 1;
                    /* try { // try from 0654ea8c to 0664ea97 has its CatchHandler @ 0654e7d4 */
            } while (iVar9 < *(int *)(lVar7 + 0x18));
          }
          return auVar11;
        }
      }
    }
  }
LAB_0654ed08:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


