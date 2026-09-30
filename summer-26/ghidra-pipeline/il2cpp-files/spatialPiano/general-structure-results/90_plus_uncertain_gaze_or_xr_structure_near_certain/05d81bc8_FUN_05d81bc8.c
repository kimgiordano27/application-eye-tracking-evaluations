/*
FUNCTION_NAME: FUN_05d81bc8
ENTRY_POINT: 05d81bc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_5;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05d82718) */
/* WARNING: Removing unreachable block (ram,0x05d82628) */
/* WARNING: Removing unreachable block (ram,0x05d82520) */
/* WARNING: Removing unreachable block (ram,0x05d827ac) */

void FUN_05d81bc8(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 extraout_x1;
  char cVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  ulong local_2b0;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  ulong local_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulong local_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  ulong local_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined1 *puStack_1e8;
  long local_1e0;
  undefined1 *local_1d8;
  ulong local_1d0;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e4 [4];
  ulong local_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_ac [4];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  
  if ((DAT_06bc3a47 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9288);
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<UnsafeText>__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                );
    FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
    FUN_02f08768(Method_Unity_AppUI_UI_PickerItem_OnClick__);
    DAT_06bc3a47 = 1;
  }
  local_a8 = 0;
  local_ac[0] = 0;
  local_c0 = 0;
  local_e4[0] = 0;
  puStack_d8 = (undefined1 *)0x0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_f0 = 0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_90 = param_1;
  local_80 = param_2;
  if ((*param_3 == 0) ||
     (lVar15 = FUN_05d4c208(*param_3,*(undefined8 *)
                                      Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__),
     puVar3 = PTR_DAT_067c8f20, local_a8 = lVar15, lVar15 == 0)) {
LAB_05d82e80:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = FUN_05d6d2bc(lVar15,0);
  if (*(char *)(lVar15 + 0x1c8) == '\0') {
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05d82e80;
    uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_060f078c(uVar24,0,0);
  }
  if ((*(long *)(param_1 + 0x1c0) == 0) ||
     (plVar16 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x38), plVar16 == (long *)0x0))
  goto LAB_05d82e80;
  iVar14 = *(int *)(lVar15 + 0x1cc);
  iVar9 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
  puVar4 = Method_Unity_Collections_FixedStringMethods_Append<UnsafeText>__;
  lVar23 = *(long *)(param_1 + 0x1b0);
  if (iVar9 == 1) {
    if (lVar23 == 0) goto LAB_05d82e80;
    puVar21 = (undefined8 *)(lVar23 + 0x20);
  }
  else {
    if (lVar23 == 0) goto LAB_05d82e80;
    puVar21 = (undefined8 *)(lVar23 + 0x30);
  }
  if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_05d82e80;
  uVar24 = *puVar21;
  uVar10 = FUN_05d75648(*(long *)(param_1 + 0x1c0),0);
  if (((uVar7 | uVar10 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_060f078c(uVar24,0,0);
  }
  else {
    uVar10 = 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar23 = FUN_05c89de0(0);
  if (lVar23 == 0) goto LAB_05d82e80;
  uVar17 = FUN_05c89fc0(lVar23,0);
  if ((uVar17 & 1) == 0) {
    cVar5 = *(char *)(param_1 + 0x259);
  }
  else {
    cVar5 = '\0';
  }
  if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_05d82e80;
  uVar17 = FUN_05d765e0(*(long *)(param_1 + 0x1d0),0);
  if ((uVar17 & 1) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(param_1 + 600);
  }
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_05d82e80;
  uVar11 = FUN_05d75f04(*(long *)(param_1 + 0x1c8),0);
  if (*(long *)(param_1 + 0x1d8) == 0) goto LAB_05d82e80;
  uVar12 = FUN_05d76104(*(long *)(param_1 + 0x1d8),0);
  if (((uVar7 | uVar11 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_060a0e3c(0);
  }
  else {
    uVar11 = 0;
  }
  uVar12 = uVar12 ^ 1 | uVar7;
  uVar13 = FUN_05d6d958(lVar15,0);
  uVar17 = FUN_05d6d948(lVar15,0);
  if (((uVar17 & 1) != 0) && ((uVar13 & 1) == 0)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db9350(lVar15,0,0);
  }
  uVar1 = uVar8 & 1;
  if (iVar14 == 2) {
    uVar1 = uVar1 + 1;
  }
  iVar9 = uVar1 + (uVar10 & 1);
  if (cVar5 != '\0') {
    iVar9 = iVar9 + 1;
  }
  cVar22 = *(char *)(param_1 + 0x25b);
  iVar9 = iVar9 + ((uVar12 ^ 0xffffffff) & 1) + (uVar11 & 1) + (uVar13 & 1);
  local_88 = CONCAT44(local_88._4_4_,iVar9);
  if ((cVar22 != '\0') && (iVar9 != 0)) {
    plVar16 = *(long **)(lVar15 + 0x1d8);
    if (plVar16 == (long *)0x0) goto LAB_05d82e80;
    (**(code **)(*plVar16 + 0x298))(plVar16,0,*(undefined8 *)(*plVar16 + 0x2a0));
    cVar22 = *(char *)(param_1 + 0x25b);
  }
  if (cVar22 == '\0') {
    local_a0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_98 = 0;
  }
  else {
    if (*(long *)(lVar15 + 0x1d8) == 0) goto LAB_05d82e80;
    local_a0 = FUN_05d5add8(*(long *)(lVar15 + 0x1d8),0);
    if (*(char *)(param_1 + 0x25b) == '\0') {
      uStack_98 = 0;
    }
    else {
      plVar16 = *(long **)(lVar15 + 0x1d8);
      if (plVar16 == (long *)0x0) goto LAB_05d82e80;
      uStack_98 = (**(code **)(*plVar16 + 0x1c8))(plVar16,param_2,*(undefined8 *)(*plVar16 + 0x1d0))
      ;
    }
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__;
  lVar23 = *(long *)
            Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
  ;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar23);
    lVar23 = *(long *)puVar3;
  }
  uVar28 = *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0xbc);
  if (DAT_06bb87a1 == '\0') {
    FUN_02f08768(PTR_DAT_067c9770);
    DAT_06bb87a1 = '\x01';
  }
  lVar23 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
  uStack_188 = *(undefined8 *)(lVar23 + 0x48);
  local_190 = *(undefined8 *)(lVar23 + 0x40);
  uStack_178 = *(undefined8 *)(lVar23 + 0x58);
  uStack_180 = *(undefined8 *)(lVar23 + 0x50);
  uStack_168 = *(undefined8 *)(lVar23 + 0x68);
  local_170 = *(undefined8 *)(lVar23 + 0x60);
  uStack_158 = *(undefined8 *)(lVar23 + 0x78);
  uStack_160 = *(undefined8 *)(lVar23 + 0x70);
  FUN_060b5ea4(&local_150,&local_190,1,0);
  if (param_2 == 0) goto LAB_05d82e80;
  puStack_1c8 = puStack_148;
  local_1d0 = local_150;
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  local_1b0 = local_130;
  uStack_198 = uStack_118;
  uStack_1a0 = uStack_120;
  FUN_061162d0(param_2,uVar28,&local_1d0,0);
  lVar23 = local_80;
  if ((uVar8 & 1) != 0) {
    uVar24 = FUN_034dac00(0x12,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb48(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_05d83678(param_1,&local_a0);
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(lVar23,uVar24,uVar18,2,0,uVar27,0,0);
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_05c5cb50(local_ac,0);
  }
  lVar23 = local_80;
  if (iVar14 == 2) {
    uVar24 = FUN_034dac00(0x13,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb48(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_05d83678(param_1,&local_a0);
    FUN_05d838b0(param_1,param_3 + 1,lVar23,uVar24,uVar18);
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_05c5cb50(local_ac,0);
  }
  puVar21 = (undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__;
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(param_1 + 0x1c0) == 0) ||
       (plVar16 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x38), plVar16 == (long *)0x0))
    goto LAB_05d82e80;
    iVar14 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    lVar23 = local_80;
    uVar28 = 0x14;
    if (iVar14 != 1) {
      uVar28 = 0x15;
    }
    uVar24 = FUN_034dac00(uVar28,*puVar21);
    FUN_05c5cb48(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_05d83678(param_1,&local_a0);
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83e5c(*(undefined4 *)(local_a8 + 300),*(undefined4 *)(local_a8 + 0x130),
                 *(undefined4 *)(local_a8 + 0x134),*(undefined4 *)(local_a8 + 0x138),param_1,
                 param_3 + 1,lVar23,uVar24,uVar18);
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_05c5cb50(local_ac,0);
  }
  lVar23 = local_80;
  if ((uVar13 & 1) != 0) {
    uVar24 = FUN_034dac00(0x16,*puVar21);
    FUN_05c5cb48(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar18 = uStack_98;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(param_1 + 0x110) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x18);
    }
    uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x60);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db9624(lVar23,uVar26,param_3 + 1,uVar24,uVar18,uVar27,0);
    puVar21 = (undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__;
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_05c5cb50(local_ac,0);
  }
  lVar23 = local_80;
  if ((uVar11 & 1) != 0) {
    uVar24 = FUN_034dac00(0x17,*puVar21);
    FUN_05c5cb48(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_05d83678(param_1,&local_a0);
    FUN_05d83f58(param_1,lVar23,uVar24,uVar18,*(undefined8 *)(param_1 + 0x110),param_3 + 1);
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_05c5cb50(local_ac,0);
  }
  lVar23 = local_80;
  if ((uVar12 & 1) == 0) {
    uVar24 = FUN_034dac00(0x18,*puVar21);
    FUN_05c5cb48(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar27 = *(undefined8 *)(local_a8 + 0xd8);
    uVar18 = FUN_05d83678(param_1,&local_a0);
    FUN_05d841f0(param_1,uVar27,lVar23,uVar24,uVar18);
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_05c5cb50(local_ac,0);
  }
  lVar23 = local_80;
  uVar24 = FUN_034dac00(0x19,*puVar21);
  FUN_05c5cb48(local_ac,lVar23,uVar24,0);
  local_1e0 = 0;
  local_1d8 = local_ac;
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar23 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x78);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bf9c4(lVar23,0,0);
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = FUN_05d6aa74(*(long *)(param_1 + 0x1e0),0);
  if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar10 = FUN_05d765e0(*(long *)(param_1 + 0x1d0),0);
  lVar23 = local_80;
  if (((uVar8 | uVar10) & 1) != 0) {
    uVar24 = FUN_034dac00(0x1a,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_05c5cb48(&local_150,lVar23,uVar24,0);
    local_e4[0] = (undefined1)local_150;
    puStack_148 = local_e4;
    local_150 = 0;
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d84430(param_1,local_80,local_a0,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78),
                 *(undefined1 *)(local_a8 + 399));
    FUN_02a83444(&local_150);
  }
  lVar23 = local_80;
  if (cVar2 != '\0') {
    uVar24 = FUN_034dac00(0x1d,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_05c5cb48(&local_150,lVar23,uVar24,0);
    local_e4[0] = (undefined1)local_150;
    puStack_1e8 = local_e4;
    local_1f0 = 0;
    if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x48);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x78);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar14 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    lVar23 = local_80;
    if (iVar14 < 0) {
      iVar14 = iVar14 + 1;
    }
    uVar10 = uVar8;
    if (iVar14 >> 1 <= (int)uVar8) {
      uVar10 = iVar14 >> 1;
    }
    uVar11 = 0;
    if (-1 < (int)uVar8) {
      uVar11 = uVar10;
    }
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = *(undefined8 *)(local_a8 + 0xd8);
    FUN_05c9ac9c(&local_150,local_a0,0);
    if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = *(uint *)(*(long *)(param_1 + 0x140) + 0x18);
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05d84f84(param_1,uVar24,lVar23);
    FUN_02a83444(&local_1f0);
  }
  if (cVar5 != '\0') {
    if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = FUN_05d76104(*(long *)(param_1 + 0x1d8),0);
    uVar29 = 0x3f800000;
    uVar28 = 0x3f800000;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar16 = *(long **)(*(long *)(param_1 + 0x1d8) + 0x38);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar28 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
      if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar16 = *(long **)(*(long *)(param_1 + 0x1d8) + 0x40);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar29 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    }
    lVar23 = local_80;
    uVar24 = FUN_034dac00(0x1b,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_05c5cb48(&local_150,lVar23,uVar24,0);
    lVar23 = local_80;
    puStack_1e8 = local_e4;
    local_1f0 = 0;
    local_e4[0] = (undefined1)local_150;
    FUN_05c9ac9c(&local_150,local_a0,0);
    FUN_05d855b4(uVar28,uVar29,param_1,&local_a8,lVar23);
    FUN_02a83444(&local_1f0);
    lVar23 = local_80;
    uVar24 = FUN_034dac00(0x1c,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_05c5cb48(&local_150,lVar23,uVar24,0);
    lVar23 = local_80;
    puStack_1e8 = local_e4;
    local_1f0 = 0;
    local_e4[0] = (undefined1)local_150;
    FUN_05c9ac9c(&local_150,local_a0,0);
    local_200 = local_130;
    puStack_218 = puStack_148;
    local_220 = local_150;
    uStack_208 = uStack_138;
    uStack_210 = uStack_140;
    FUN_05d85c0c(uVar28,uVar29,param_1,&local_a8,lVar23,&local_220,uVar8 & 1);
    FUN_02a83444(&local_1f0);
  }
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86378(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78),uVar7 & 1);
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86674(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
  lVar23 = local_a8;
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86768(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78),
               *(undefined8 *)(local_a8 + 0x1a0),*(undefined4 *)(param_1 + 0xb8),
               *(undefined4 *)(param_1 + 0xbc));
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d869b8(param_1,extraout_x1,param_3,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86d14(param_1,lVar23,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86dc4(param_1,lVar23,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
  uVar17 = FUN_05d6d114(lVar23,0);
  if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x256) != '\0')) {
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x78);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = FUN_060be514(lVar19,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  uVar17 = FUN_05d83634(uVar17,lVar23);
  if ((uVar17 & 1) != 0) {
    if (*(char *)(param_1 + 0x255) == '\0') {
      iVar14 = (uint)*(byte *)(param_1 + 0x256) << 1;
    }
    else {
      iVar14 = 0;
    }
    auVar30 = FUN_05d6d448(lVar23,0);
    uVar28 = FUN_05d6d540(lVar23,0);
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
    uVar7 = FUN_05d6d5d0(lVar23,0);
    FUN_05d86e60(param_1,auVar30._0_8_,auVar30._8_8_,uVar28,uVar24,iVar14,uVar7 & 1);
  }
  if (*(char *)(param_1 + 599) != '\0') {
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x78);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060be514(lVar19,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                 ,0);
  }
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
  cVar5 = *(char *)(lVar23 + 399);
  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(uVar24,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar5 != '\0',
               0);
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar19 = FUN_05d5a440(lVar23,0);
  if (lVar19 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_05d43a98(lVar19,*(undefined1 *)(lVar23 + 0x1e0),0);
    uVar7 = uVar7 & 1;
  }
  lVar20 = *(long *)puVar3;
  lVar25 = *(long *)(param_1 + 0xf8);
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar20 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_067c97a8;
  if (lVar25 == **(long **)(lVar20 + 0xb8)) {
    iVar14 = (uint)*(byte *)(lVar23 + 0x18c) << 1;
  }
  else {
    iVar14 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&local_150,2,0);
  local_c0 = local_130;
  puStack_d8 = puStack_148;
  local_e0 = local_150;
  uStack_c8 = uStack_138;
  uStack_d0 = uStack_140;
  if (*(long *)(lVar23 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar17 = FUN_05c35d3c(*(long *)(lVar23 + 0x1a0),0);
  if ((uVar17 & 1) != 0) {
    lVar20 = *(long *)(lVar23 + 0x1a0);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puStack_d8 = *(undefined1 **)(lVar20 + 0x48);
    local_e0 = *(ulong *)(lVar20 + 0x40);
    uStack_c8 = *(undefined8 *)(lVar20 + 0x58);
    uStack_d0 = *(undefined8 *)(lVar20 + 0x50);
    local_c0 = *(undefined8 *)(lVar20 + 0x60);
  }
  if (*(char *)(param_1 + 0x25b) == '\0') {
    if (*(char *)(lVar23 + 0x1e0) == '\0') {
      lVar20 = *(long *)(param_1 + 0xf8);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      puStack_148 = *(undefined1 **)(lVar20 + 0x30);
      local_150 = *(ulong *)(lVar20 + 0x28);
      uStack_138 = *(undefined8 *)(lVar20 + 0x40);
      uStack_140 = *(undefined8 *)(lVar20 + 0x38);
      local_130 = *(undefined8 *)(lVar20 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      local_230 = local_130;
      puStack_248 = puStack_148;
      local_250 = local_150;
      uStack_238 = uStack_138;
      uStack_240 = uStack_140;
      local_260 = local_c0;
      puStack_278 = puStack_d8;
      local_280 = local_e0;
      uStack_268 = uStack_c8;
      uStack_270 = uStack_d0;
      uVar17 = FUN_0610d5f4(&local_250,&local_280,0);
      if ((uVar17 & 1) == 0) {
        cVar5 = *(char *)(param_1 + 0x255);
      }
      else {
        cVar5 = '\x01';
      }
    }
    else {
      cVar5 = '\x01';
    }
    lVar20 = local_80;
    uVar24 = local_a0;
    plVar16 = (long *)PTR_DAT_067c8f20;
    cVar5 = cVar5 != '\0';
    *(char *)(param_1 + 0x25a) = cVar5;
    if (*(char *)(param_1 + 0x25b) == '\0') {
      uVar18 = FUN_05d83678(param_1,&local_a0);
      puVar3 = 
      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
      ;
      if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(lVar20,uVar24,uVar18,iVar14,0,uVar27,0,0);
      lVar15 = local_80;
      uVar24 = FUN_05d83678(param_1,&local_a0);
      lVar23 = *(long *)(param_1 + 0xf8);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar18 = *(undefined8 *)(param_1 + 0x270);
      if (*(long *)(lVar23 + 0x18) == 0) {
        bVar6 = false;
      }
      else {
        iVar14 = FUN_060cbf28(*(long *)(lVar23 + 0x18),0);
        bVar6 = iVar14 == 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(lVar15,uVar24,lVar23,2,0,uVar18,bVar6,0);
      goto LAB_05d82e48;
    }
  }
  else {
    cVar5 = *(char *)(param_1 + 0x25a);
    plVar16 = (long *)PTR_DAT_067c8f20;
  }
  lVar20 = local_80;
  uVar24 = local_a0;
  if (cVar5 == '\0') {
    if (*(char *)(param_1 + 0x255) == '\0') {
      plVar16 = *(long **)(lVar15 + 0x1d8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar16 + 0x298))(plVar16,1,*(undefined8 *)(*plVar16 + 0x2a0));
      plVar16 = *(long **)(lVar15 + 0x1d8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uStack_98 = (**(code **)(*plVar16 + 0x1c8))
                            (plVar16,local_80,*(undefined8 *)(*plVar16 + 0x1d0));
    }
    lVar23 = local_80;
    uVar18 = uStack_98;
    uVar24 = local_a0;
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(lVar23,uVar24,uVar18,iVar14,0,uVar27,0,0);
    if (*(long *)(lVar15 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(lVar15 + 0x1d8) + 0x118) = uStack_98;
    FUN_05d83790(param_1,lVar15 + 0x1d8,&local_a0);
  }
  else if (uVar7 == 0) {
    uVar24 = *(undefined8 *)(lVar23 + 0xf0);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar17 = FUN_060f078c(uVar24,0,0);
    local_290 = local_c0;
    local_2b0 = local_e0;
    puStack_2a8 = puStack_d8;
    uStack_2a0 = uStack_d0;
    uStack_298 = uStack_c8;
    if ((uVar17 & 1) != 0) {
      local_130 = 0;
      puStack_148 = (undefined1 *)0x0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      FUN_0610cedc(&local_150,*(undefined8 *)(lVar23 + 0xf0),0);
      local_290 = local_130;
      local_2b0 = local_150;
      puStack_2a8 = puStack_148;
      uStack_2a0 = uStack_140;
      uStack_298 = uStack_138;
    }
    local_110 = local_2b0;
    puStack_108 = puStack_2a8;
    uStack_100 = uStack_2a0;
    uStack_f8 = uStack_298;
    local_f0 = local_290;
    FUN_05c9caa8(&local_2b0,0);
    lVar19 = local_80;
    uVar24 = local_a0;
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
    uVar18 = **(undefined8 **)
               (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(lVar19,lVar23,uVar24,uVar18,iVar14,0,uVar27,0,0);
    if (*(long *)(lVar15 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(lVar15 + 0x1d8) + 0x118) = uVar18;
  }
  else {
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar21 = (undefined8 *)FUN_05d43a80(lVar19,0);
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar27 = *puVar21;
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    FUN_05cab544(lVar20,uVar24,uVar27,0,0,uVar18,0,0);
    lVar15 = *(long *)(lVar15 + 0x1d8);
    puVar21 = (undefined8 *)FUN_05d43a80(lVar19,0);
    uVar24 = *puVar21;
    puVar21 = (undefined8 *)FUN_05d43a88(lVar19,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d61b54(lVar15,uVar24,*puVar21,0);
  }
LAB_05d82e48:
  lVar15 = local_1e0;
  FUN_05c5cb50(local_1d8,0);
  if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0(lVar15);
  }
  return;
}


