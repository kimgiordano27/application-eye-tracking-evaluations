/*
FUNCTION_NAME: UnityEngine.XR.Hands.OpenXR.HandTracking$$OnSubsystemStart
ENTRY_POINT: 0598d71c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_XR_Hands_OpenXR_HandTracking__OnSubsystemStart(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined *puVar34;
  undefined *puVar35;
  uint uVar36;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  long *plVar43;
  undefined4 uVar37;
  undefined8 *puVar44;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar45;
  undefined8 *unaff_x23;
  bool bVar46;
  long lVar47;
  char cVar48;
  undefined8 uVar49;
  undefined1 *unaff_x29;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ulong in_stack_00000050;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_Pico_Platform_Task<RecordInfo>__ctor__);
  FUN_02b3c81c(Method_Pico_Platform_Task<PurchaseList>__ctor__);
  FUN_02b3c81c(Method_Pico_Platform_Task<SendInvitesResult>__ctor__);
  FUN_02b3c81c(Method_System_Array_Resize<OVRPlugin_Quatf>__);
  FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__);
  FUN_02b3c81c(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
  FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__);
  FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
  FUN_02b3c81c(Method_System_Array_IndexOf__);
  FUN_02b3c81c(Method_System_Array_Reverse<int>__);
  FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__);
  FUN_02b3c81c(Method_System_Array_IndexOf__);
  FUN_02b3c81c(Method_System_Array_InternalArray__ICollection_Clear__);
  FUN_02b3c81c(Method_System_Array_Reverse<object>__);
  FUN_02b3c81c(Method_System_Array_InternalArray__RemoveAt__);
  FUN_02b3c81c(Method_System_Array_Sort<string>__);
  *(undefined1 *)(unaff_x21 + 0x8e4) = 1;
  lVar38 = *(long *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x29 + 0xd8) = 0;
  *(undefined8 *)(unaff_x29 + 0xd0) = 0;
  *(undefined8 *)(unaff_x29 + 0xe8) = 0;
  *(undefined8 *)(unaff_x29 + 0xe0) = 0;
  *(undefined8 *)(unaff_x29 + 0x118) = 0;
  *(undefined8 *)(unaff_x29 + 0x110) = 0;
  *(undefined8 *)(unaff_x29 + 0x128) = 0;
  *(undefined8 *)(unaff_x29 + 0x120) = 0;
  *(undefined8 *)(unaff_x29 + 0x108) = 0;
  *(undefined8 *)(unaff_x29 + 0x100) = 0;
  *(undefined8 *)(unaff_x29 + 200) = 0;
  *(undefined8 *)(unaff_x29 + 0xc0) = 0;
  unaff_x23[0x21] = 0;
  unaff_x23[0x20] = 0;
  unaff_x23[0x23] = 0;
  unaff_x23[0x22] = 0;
  unaff_x23[0x25] = 0;
  unaff_x23[0x24] = 0;
  unaff_x23[0x27] = 0;
  unaff_x23[0x26] = 0;
  unaff_x23[0x29] = 0;
  unaff_x23[0x28] = 0;
  unaff_x23[0x2b] = 0;
  unaff_x23[0x2a] = 0;
  unaff_x23[0x2d] = 0;
  unaff_x23[0x2c] = 0;
  unaff_x23[0x2f] = 0;
  unaff_x23[0x2e] = 0;
  in_stack_000001e0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_00000190 = 0;
  in_stack_00000198 = 0;
  in_stack_00000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  auVar54 = ZEXT816(0);
  auVar57 = ZEXT816(0);
  auVar10 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  auVar18 = ZEXT816(0);
  auVar56 = ZEXT816(0);
  auVar23 = ZEXT816(0);
  auVar26 = ZEXT816(0);
  if (lVar38 == 0) goto LAB_0598e37c;
  lVar38 = FUN_0590661c(lVar38,*(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__
                       );
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_0598e37c;
  FUN_0590661c(*(long *)(unaff_x20 + 0x138),
               *(undefined8 *)
                Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_0598e37c;
  lVar39 = FUN_0590661c(*(long *)(unaff_x20 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if (*(long *)(unaff_x20 + 0x138) == 0) goto LAB_0598e37c;
  lVar40 = FUN_0590661c(*(long *)(unaff_x20 + 0x138),
                        *(undefined8 *)
                         Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__);
  puVar34 = Method_Pico_Platform_Task<PurchaseList>__ctor__;
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if (lVar39 == 0) goto LAB_0598e37c;
  if (*(char *)(lVar39 + 0x1e0) != '\0') {
    FUN_059880d8();
  }
  puVar35 = Method_Pico_Platform_Task<RecordInfo>__ctor__;
  if (*(int *)(*(long *)puVar34 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar41 = FUN_0433378c(*(undefined8 *)puVar35);
  auVar28._8_8_ = in_stack_000001b8;
  auVar28._0_8_ = in_stack_000001b0;
  auVar27._8_8_ = in_stack_000001b8;
  auVar27._0_8_ = in_stack_000001b0;
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar25._8_8_ = in_stack_00000198;
  auVar25._0_8_ = in_stack_00000190;
  auVar24._8_8_ = in_stack_00000198;
  auVar24._0_8_ = in_stack_00000190;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar22._8_8_ = in_stack_00000188;
  auVar22._0_8_ = in_stack_00000180;
  auVar21._8_8_ = in_stack_00000188;
  auVar21._0_8_ = in_stack_00000180;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar20._8_8_ = in_stack_00000178;
  auVar20._0_8_ = in_stack_00000170;
  auVar19._8_8_ = in_stack_00000178;
  auVar19._0_8_ = in_stack_00000170;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar16._8_8_ = in_stack_000001a8;
  auVar16._0_8_ = in_stack_000001a0;
  auVar15._8_8_ = in_stack_000001a8;
  auVar15._0_8_ = in_stack_000001a0;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar12._8_8_ = in_stack_000001d8;
  auVar12._0_8_ = in_stack_000001d0;
  auVar11._8_8_ = in_stack_000001d8;
  auVar11._0_8_ = in_stack_000001d0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar9._8_8_ = in_stack_000001c8;
  auVar9._0_8_ = in_stack_000001c0;
  auVar8._8_8_ = in_stack_000001c8;
  auVar8._0_8_ = in_stack_000001c0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar7._8_8_ = in_stack_000001e8;
  auVar7._0_8_ = in_stack_000001e0;
  auVar55._8_8_ = in_stack_000001e8;
  auVar55._0_8_ = in_stack_000001e0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if ((lVar41 == 0) ||
     (auVar54 = auVar55, auVar57 = auVar8, auVar10 = auVar11, auVar14 = auVar15, auVar18 = auVar19,
     auVar56 = auVar21, auVar23 = auVar24, auVar26 = auVar27, *(long *)(lVar41 + 0x28) == 0))
  goto LAB_0598e37c;
  iVar1 = *(int *)(*(long *)(lVar41 + 0x28) + 0x2c);
  if (iVar1 == 0) {
    auVar54 = auVar7;
    auVar57 = auVar9;
    auVar10 = auVar12;
    auVar14 = auVar16;
    auVar18 = auVar20;
    auVar56 = auVar22;
    auVar23 = auVar25;
    auVar26 = auVar28;
    if (lVar38 == 0) goto LAB_0598e37c;
    FUN_05928dd4(lVar38,0);
    FUN_05928ee8(lVar38,0);
    FUN_0591d198();
  }
  FUN_0591e76c();
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if (lVar40 == 0) goto LAB_0598e37c;
  if (((*(char *)(lVar40 + 0x10) == '\0') ||
      (uVar42 = FUN_0595e6d4(unaff_x20 + 0x310,0), (uVar42 & 1) == 0)) ||
     (*(char *)(lVar39 + 0x1e0) == '\0')) {
LAB_0598d9f4:
    bVar46 = false;
  }
  else if ((*(int *)(lVar39 + 0x1cc) == 1) ||
          ((*(int *)(lVar39 + 0x170) == 1 && (*(int *)(lVar39 + 0x174) != 0)))) {
    bVar46 = true;
  }
  else {
    uVar42 = FUN_05928964(lVar39,0);
    if ((uVar42 & 1) == 0) goto LAB_0598d9f4;
    bVar46 = 0.0 < *(float *)(lVar39 + 0x224);
  }
  puVar34 = Method_System_Array_Reverse<int>__;
  if (*(long *)(lVar39 + 0x1b0) == 0) {
    cVar48 = '\0';
  }
  else {
    cVar48 = *(char *)(lVar39 + 0x1e0);
  }
  lVar40 = *(long *)Method_System_Array_Reverse<int>__;
  lVar41 = *(long *)(unaff_x20 + 0x108);
  if (*(int *)(lVar40 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar40 = *(long *)puVar34;
  }
  puVar44 = *(undefined8 **)(lVar40 + 0xb8);
  lVar47 = puVar44[4];
  if (lVar47 == 0) {
    if (*(int *)(lVar40 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar44 = *(undefined8 **)(*(long *)puVar34 + 0xb8);
    }
    uVar49 = *puVar44;
    lVar47 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar47,uVar49,*(undefined8 *)Method_System_Array_IndexOf__,0);
    plVar43 = (long *)(*(long *)(*(long *)puVar34 + 0xb8) + 0x20);
    *plVar43 = lVar47;
    thunk_FUN_02bb0e9c(plVar43,lVar47);
    unaff_x29 = &stack0x000001f0;
  }
  auVar26._8_8_ = in_stack_000001b8;
  auVar26._0_8_ = in_stack_000001b0;
  auVar23._8_8_ = in_stack_00000198;
  auVar23._0_8_ = in_stack_00000190;
  auVar56._8_8_ = in_stack_00000188;
  auVar56._0_8_ = in_stack_00000180;
  auVar18._8_8_ = in_stack_00000178;
  auVar18._0_8_ = in_stack_00000170;
  auVar14._8_8_ = in_stack_000001a8;
  auVar14._0_8_ = in_stack_000001a0;
  auVar10._8_8_ = in_stack_000001d8;
  auVar10._0_8_ = in_stack_000001d0;
  auVar57._8_8_ = in_stack_000001c8;
  auVar57._0_8_ = in_stack_000001c0;
  auVar54._8_8_ = in_stack_000001e8;
  auVar54._0_8_ = in_stack_000001e0;
  if (lVar41 != 0) {
    lVar40 = FUN_037a6b94(lVar41,lVar47,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    auVar26._8_8_ = in_stack_000001b8;
    auVar26._0_8_ = in_stack_000001b0;
    auVar23._8_8_ = in_stack_00000198;
    auVar23._0_8_ = in_stack_00000190;
    auVar56._8_8_ = in_stack_00000188;
    auVar56._0_8_ = in_stack_00000180;
    auVar18._8_8_ = in_stack_00000178;
    auVar18._0_8_ = in_stack_00000170;
    auVar14._8_8_ = in_stack_000001a8;
    auVar14._0_8_ = in_stack_000001a0;
    auVar10._8_8_ = in_stack_000001d8;
    auVar10._0_8_ = in_stack_000001d0;
    auVar57._8_8_ = in_stack_000001c8;
    auVar57._0_8_ = in_stack_000001c0;
    auVar54._8_8_ = in_stack_000001e8;
    auVar54._0_8_ = in_stack_000001e0;
    if (*(long *)(unaff_x20 + 0xe8) == 0) {
      uVar36 = 1;
    }
    else {
      uVar36 = FUN_058fdbcc(*(long *)(unaff_x20 + 0xe8),*(undefined1 *)(lVar39 + 0x1e0),0);
      auVar26._8_8_ = in_stack_000001b8;
      auVar26._0_8_ = in_stack_000001b0;
      auVar23._8_8_ = in_stack_00000198;
      auVar23._0_8_ = in_stack_00000190;
      auVar56._8_8_ = in_stack_00000188;
      auVar56._0_8_ = in_stack_00000180;
      auVar18._8_8_ = in_stack_00000178;
      auVar18._0_8_ = in_stack_00000170;
      auVar14._8_8_ = in_stack_000001a8;
      auVar14._0_8_ = in_stack_000001a0;
      auVar10._8_8_ = in_stack_000001d8;
      auVar10._0_8_ = in_stack_000001d0;
      auVar57._8_8_ = in_stack_000001c8;
      auVar57._0_8_ = in_stack_000001c0;
      auVar54._8_8_ = in_stack_000001e8;
      auVar54._0_8_ = in_stack_000001e0;
      uVar36 = uVar36 ^ 1;
    }
    if (lVar38 != 0) {
      iVar2 = *(int *)(lVar38 + 0x18);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__ +
                  0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar41 = FUN_05914c04(lVar39,0);
      if ((lVar41 == 0) ||
         (uVar42 = thunk_FUN_058fdbcc(lVar41,*(undefined1 *)(lVar39 + 0x1e0),0), (uVar42 & 1) == 0))
      {
        bVar6 = false;
      }
      else {
        uVar51 = *(undefined8 *)(lVar39 + 0x110);
        uVar50 = *(undefined8 *)(lVar39 + 0x108);
        uVar53 = *(undefined8 *)(lVar39 + 0x120);
        uVar52 = *(undefined8 *)(lVar39 + 0x118);
        uVar3 = *(undefined4 *)(lVar39 + 0x128);
        uVar49 = *(undefined8 *)(lVar39 + 0xf8);
        uVar37 = *(undefined4 *)(lVar39 + 0x160);
        uVar4 = *(undefined4 *)(lVar39 + 0x164);
        iVar5 = *(int *)(*(long *)Method_Pico_Platform_Task<SendInvitesResult>__ctor__ + 0xe4);
        *(undefined8 *)(unaff_x29 + 0x108) = *(undefined8 *)(lVar39 + 0x100);
        *(undefined8 *)(unaff_x29 + 0x100) = uVar49;
        *(undefined8 *)(unaff_x29 + 0x118) = uVar51;
        *(undefined8 *)(unaff_x29 + 0x110) = uVar50;
        *(undefined8 *)(unaff_x29 + 0x128) = uVar53;
        *(undefined8 *)(unaff_x29 + 0x120) = uVar52;
        if (iVar5 == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_058fe1f4(&stack0x000002f0,uVar37,uVar4,0);
        in_stack_00000078 = *(undefined8 *)(unaff_x29 + 0x108);
        in_stack_00000070 = *(undefined8 *)(unaff_x29 + 0x100);
        in_stack_00000088 = *(undefined8 *)(unaff_x29 + 0x118);
        in_stack_00000080 = *(undefined8 *)(unaff_x29 + 0x110);
        in_stack_00000098 = *(undefined8 *)(unaff_x29 + 0x128);
        in_stack_00000090 = *(undefined8 *)(unaff_x29 + 0x120);
        in_stack_000000a0 = uVar3;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        unaff_x23[9] = in_stack_00000078;
        unaff_x23[8] = in_stack_00000070;
        unaff_x23[0xb] = in_stack_00000088;
        unaff_x23[10] = in_stack_00000080;
        unaff_x23[0xd] = in_stack_00000098;
        unaff_x23[0xc] = in_stack_00000090;
        in_stack_00000160 = in_stack_000000a0;
        auVar54 = FUN_059891d4();
        FUN_059292fc(lVar38,auVar54._0_8_,auVar54._8_8_,0);
        uVar49 = *(undefined8 *)(lVar39 + 0xf8);
        uVar51 = *(undefined8 *)(lVar39 + 0x110);
        uVar50 = *(undefined8 *)(lVar39 + 0x108);
        uVar53 = *(undefined8 *)(lVar39 + 0x120);
        uVar52 = *(undefined8 *)(lVar39 + 0x118);
        uVar3 = *(undefined4 *)(lVar39 + 0x128);
        *(undefined8 *)(unaff_x29 + 200) = *(undefined8 *)(lVar39 + 0x100);
        *(undefined8 *)(unaff_x29 + 0xc0) = uVar49;
        *(undefined8 *)(unaff_x29 + 0xd8) = uVar51;
        *(undefined8 *)(unaff_x29 + 0xd0) = uVar50;
        *(undefined8 *)(unaff_x29 + 0xe8) = uVar53;
        *(undefined8 *)(unaff_x29 + 0xe0) = uVar52;
        uVar37 = FUN_05981744();
        FUN_058fe238(&stack0x000002b0,uVar37,*(undefined4 *)(lVar39 + 0x160),
                     *(undefined4 *)(lVar39 + 0x164),0);
        uVar49 = *(undefined8 *)(unaff_x29 + 0xc0);
        uVar51 = *(undefined8 *)(unaff_x29 + 0xd8);
        uVar50 = *(undefined8 *)(unaff_x29 + 0xd0);
        uVar53 = *(undefined8 *)(unaff_x29 + 0xe8);
        uVar52 = *(undefined8 *)(unaff_x29 + 0xe0);
        bVar6 = true;
        unaff_x23[1] = *(undefined8 *)(unaff_x29 + 200);
        *unaff_x23 = uVar49;
        unaff_x23[3] = uVar51;
        unaff_x23[2] = uVar50;
        unaff_x23[5] = uVar53;
        unaff_x23[4] = uVar52;
        in_stack_00000120 = uVar3;
        auVar54 = FUN_059891d4();
        FUN_05929330(lVar38,auVar54._0_8_,auVar54._8_8_,0);
      }
      FUN_0592935c(lVar38,0);
      if ((in_stack_00000050 & 0x100000000) != 0) {
        FUN_05928dd4(lVar38,0);
        FUN_05928ed0(lVar38,0);
        FUN_059292c0(lVar38,0);
        FUN_05929390(lVar38,0);
        bVar45 = 0;
        if (lVar40 == 0) {
          bVar45 = *(char *)(lVar39 + 0x1e0) != '\0' & (bVar46 ^ 0xffU);
        }
        if (bVar45 == 0) {
          uVar42 = FUN_05928a78(lVar39,0);
          auVar26._8_8_ = in_stack_000001b8;
          auVar26._0_8_ = in_stack_000001b0;
          auVar23._8_8_ = in_stack_00000198;
          auVar23._0_8_ = in_stack_00000190;
          auVar56._8_8_ = in_stack_00000188;
          auVar56._0_8_ = in_stack_00000180;
          auVar18._8_8_ = in_stack_00000178;
          auVar18._0_8_ = in_stack_00000170;
          auVar14._8_8_ = in_stack_000001a8;
          auVar14._0_8_ = in_stack_000001a0;
          auVar10._8_8_ = in_stack_000001d8;
          auVar10._0_8_ = in_stack_000001d0;
          auVar57._8_8_ = in_stack_000001c8;
          auVar57._0_8_ = in_stack_000001c0;
          auVar54._8_8_ = in_stack_000001e8;
          auVar54._0_8_ = in_stack_000001e0;
          if ((uVar42 & 1) == 0) {
            if ((*(char *)(lVar39 + 0x1e0) == '\0') || (*(int *)(lVar39 + 0xe8) != 0)) {
              FUN_0598913c();
              auVar26._8_8_ = in_stack_000001b8;
              auVar26._0_8_ = in_stack_000001b0;
              auVar23._8_8_ = in_stack_00000198;
              auVar23._0_8_ = in_stack_00000190;
              auVar56._8_8_ = in_stack_00000188;
              auVar56._0_8_ = in_stack_00000180;
              auVar18._8_8_ = in_stack_00000178;
              auVar18._0_8_ = in_stack_00000170;
              auVar14._8_8_ = in_stack_000001a8;
              auVar14._0_8_ = in_stack_000001a0;
              auVar10._8_8_ = in_stack_000001d8;
              auVar10._0_8_ = in_stack_000001d0;
              auVar57._8_8_ = in_stack_000001c8;
              auVar57._0_8_ = in_stack_000001c0;
              auVar54._8_8_ = in_stack_000001e8;
              auVar54._0_8_ = in_stack_000001e0;
              if (unaff_x19 == 0) goto LAB_0598e37c;
              auVar54 = FUN_05881b78();
            }
            else {
              if (unaff_x19 == 0) goto LAB_0598e37c;
              auVar54 = FUN_05881dc0();
            }
            FUN_059290d8(lVar38,auVar54._0_8_,auVar54._8_8_,0);
          }
          else {
            _in_stack_000001e0 = FUN_05928ec8(lVar38,0);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlNode>_Add__ + 0xe4) == 0
               ) {
              thunk_FUN_02b9ad44();
            }
            FUN_0589c418(&stack0x00000070,&stack0x000001e0);
            memcpy(&stack0x000001f0,&stack0x00000070,0x80);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05944690(&stack0x000001f0,0);
            thunk_FUN_02bb0e9c(&stack0x00000240);
            auVar26._8_8_ = in_stack_000001b8;
            auVar26._0_8_ = in_stack_000001b0;
            auVar23._8_8_ = in_stack_00000198;
            auVar23._0_8_ = in_stack_00000190;
            auVar56._8_8_ = in_stack_00000188;
            auVar56._0_8_ = in_stack_00000180;
            auVar18._8_8_ = in_stack_00000178;
            auVar18._0_8_ = in_stack_00000170;
            auVar14._8_8_ = in_stack_000001a8;
            auVar14._0_8_ = in_stack_000001a0;
            auVar10._8_8_ = in_stack_000001d8;
            auVar10._0_8_ = in_stack_000001d0;
            auVar57._8_8_ = in_stack_000001c8;
            auVar57._0_8_ = in_stack_000001c0;
            auVar54 = _in_stack_000001e0;
            if (unaff_x19 == 0) goto LAB_0598e37c;
            auVar54 = FUN_05881ca8();
            FUN_059290d8(lVar38,auVar54._0_8_,auVar54._8_8_,0);
          }
          FUN_05928ec8(lVar38,0);
        }
        else if (bVar6) {
          FUN_059292f4(lVar38,0);
        }
        auVar26._8_8_ = in_stack_000001b8;
        auVar26._0_8_ = in_stack_000001b0;
        auVar23._8_8_ = in_stack_00000198;
        auVar23._0_8_ = in_stack_00000190;
        auVar56._8_8_ = in_stack_00000188;
        auVar56._0_8_ = in_stack_00000180;
        auVar18._8_8_ = in_stack_00000178;
        auVar18._0_8_ = in_stack_00000170;
        auVar14._8_8_ = in_stack_000001a8;
        auVar14._0_8_ = in_stack_000001a0;
        auVar10._8_8_ = in_stack_000001d8;
        auVar10._0_8_ = in_stack_000001d0;
        auVar57._8_8_ = in_stack_000001c8;
        auVar57._0_8_ = in_stack_000001c0;
        auVar54 = _in_stack_000001e0;
        if (*(long *)(unaff_x20 + 0x318) == 0) goto LAB_0598e37c;
        FUN_0594e9c8(*(long *)(unaff_x20 + 0x318),unaff_x19,*(undefined8 *)(unaff_x20 + 0x138),
                     &stack0x000002a0,&stack0x00000290,&stack0x00000280,&stack0x00000270,bVar46);
        if (*(char *)(lVar39 + 0x1e0) != '\0') {
          FUN_05988aa0();
        }
        if (bVar45 != 0) {
          *(undefined8 *)(lVar38 + 0x14) = 0x100000001;
        }
      }
      FUN_0591e76c();
      auVar26._8_8_ = in_stack_000001b8;
      auVar26._0_8_ = in_stack_000001b0;
      auVar23._8_8_ = in_stack_00000198;
      auVar23._0_8_ = in_stack_00000190;
      auVar56._8_8_ = in_stack_00000188;
      auVar56._0_8_ = in_stack_00000180;
      auVar18._8_8_ = in_stack_00000178;
      auVar18._0_8_ = in_stack_00000170;
      auVar14._8_8_ = in_stack_000001a8;
      auVar14._0_8_ = in_stack_000001a0;
      auVar10._8_8_ = in_stack_000001d8;
      auVar10._0_8_ = in_stack_000001d0;
      auVar57._8_8_ = in_stack_000001c8;
      auVar57._0_8_ = in_stack_000001c0;
      if (*(long *)(lVar39 + 0x1b0) != 0) {
        plVar43 = *(long **)(unaff_x20 + 0x1e0);
        auVar54 = _in_stack_000001e0;
        if (plVar43 == (long *)0x0) goto LAB_0598e37c;
        (**(code **)(*plVar43 + 0x1e8))
                  (plVar43,unaff_x19,*(undefined8 *)(unaff_x20 + 0x138),
                   *(undefined8 *)(*plVar43 + 0x1f0));
      }
      auVar30._8_8_ = in_stack_000001d8;
      auVar30._0_8_ = in_stack_000001d0;
      auVar29._8_8_ = in_stack_000001c8;
      auVar29._0_8_ = in_stack_000001c0;
      auVar13._8_8_ = in_stack_000001b8;
      auVar13._0_8_ = in_stack_000001b0;
      if (bVar46 == false) {
        bVar45 = 0;
        if (cVar48 == '\0') {
          bVar45 = lVar40 == 0 & in_stack_00000050._4_1_;
          _in_stack_000001b0 = auVar13;
          _in_stack_000001c0 = auVar29;
          _in_stack_000001d0 = auVar30;
        }
      }
      else {
        auVar54 = FUN_05928ed0(lVar38,0);
        _in_stack_000001d0 = FUN_05929390(lVar38,0);
        if (bVar6) {
          _in_stack_000001c0 = auVar54;
          auVar54 = FUN_059292f4(lVar38,0);
        }
        _in_stack_000001c0 = auVar54;
        _in_stack_000001b0 = FUN_05928ec8(lVar38,0);
        auVar23._8_8_ = in_stack_00000198;
        auVar23._0_8_ = in_stack_00000190;
        auVar56._8_8_ = in_stack_00000188;
        auVar56._0_8_ = in_stack_00000180;
        auVar18._8_8_ = in_stack_00000178;
        auVar18._0_8_ = in_stack_00000170;
        auVar14._8_8_ = in_stack_000001a8;
        auVar14._0_8_ = in_stack_000001a0;
        auVar54 = _in_stack_000001e0;
        auVar57 = _in_stack_000001c0;
        auVar10 = _in_stack_000001d0;
        auVar26 = _in_stack_000001b0;
        if (*(long *)(unaff_x20 + 800) == 0) goto LAB_0598e37c;
        FUN_0594d4e4(*(long *)(unaff_x20 + 800),unaff_x19,*(undefined8 *)(unaff_x20 + 0x138),
                     &stack0x000001b0,&stack0x000001d0,&stack0x000001c0,uVar36 & 1,0);
        *(undefined8 *)(lVar38 + 0x14) = 0x100000001;
        bVar45 = 1;
      }
      uVar42 = FUN_05928fec(lVar38,0);
      auVar31._8_8_ = in_stack_000001a8;
      auVar31._0_8_ = in_stack_000001a0;
      auVar17._8_8_ = in_stack_00000198;
      auVar17._0_8_ = in_stack_00000190;
      if ((uVar42 & 1) == 0) {
        if (*(char *)(lVar39 + 0x1e0) == '\0') {
          bVar45 = 1;
        }
        _in_stack_00000190 = auVar17;
        _in_stack_000001a0 = auVar31;
        if (bVar45 == 0) {
          auVar54 = FUN_05928ed0(lVar38,0);
          auVar55 = FUN_05929390(lVar38,0);
          if (bVar6) {
            _in_stack_000001a0 = auVar54;
            auVar54 = FUN_059292f4(lVar38,0);
          }
          _in_stack_000001a0 = auVar54;
          _in_stack_00000190 = FUN_05928ec8(lVar38,0);
          auVar56._8_8_ = in_stack_00000188;
          auVar56._0_8_ = in_stack_00000180;
          auVar18._8_8_ = in_stack_00000178;
          auVar18._0_8_ = in_stack_00000170;
          auVar54 = _in_stack_000001e0;
          auVar57 = _in_stack_000001c0;
          auVar10 = _in_stack_000001d0;
          auVar14 = _in_stack_000001a0;
          auVar23 = _in_stack_00000190;
          auVar26 = _in_stack_000001b0;
          if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_0598e37c;
          FUN_059bed9c(*(long *)(unaff_x20 + 0x1d8),unaff_x19,*(undefined8 *)(unaff_x20 + 0x138),
                       lVar39,&stack0x00000190,&stack0x000001a0,auVar55._0_8_,auVar55._8_8_);
          *(undefined8 *)(lVar38 + 0x14) = 0x100000001;
        }
      }
      FUN_0591e76c();
      uVar42 = FUN_059285dc(lVar39,0);
      if ((uVar42 & 1) == 0) {
        FUN_059283a4(lVar39,0);
      }
      else {
        cVar48 = *(char *)(lVar39 + 0x238);
        uVar42 = FUN_059283a4(lVar39,0);
        auVar33._8_8_ = in_stack_00000188;
        auVar33._0_8_ = in_stack_00000180;
        auVar32._8_8_ = in_stack_00000178;
        auVar32._0_8_ = in_stack_00000170;
        if ((cVar48 != '\0') &&
           (_in_stack_00000170 = auVar32, _in_stack_00000180 = auVar33, (uVar42 & 1) == 0)) {
          _in_stack_00000180 = FUN_05928fe4(lVar38,0);
          _in_stack_00000170 = FUN_05928ed0(lVar38,0);
          auVar56 = _in_stack_00000180;
          if (bVar6) {
            auVar54 = FUN_059292f4(lVar38,0);
            _in_stack_00000170 = auVar54;
            auVar56 = FUN_05929328(lVar38,0);
          }
          auVar54 = _in_stack_000001e0;
          auVar57 = _in_stack_000001c0;
          auVar10 = _in_stack_000001d0;
          auVar14 = _in_stack_000001a0;
          auVar18 = _in_stack_00000170;
          auVar23 = _in_stack_00000190;
          auVar26 = _in_stack_000001b0;
          if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_0598e37c;
          _in_stack_00000180 = auVar56;
          FUN_05935a60(*(long *)(unaff_x20 + 0x208),unaff_x19,*(undefined8 *)(unaff_x20 + 0x138),
                       &stack0x00000170,&stack0x00000180,0);
        }
      }
      auVar54 = _in_stack_000001e0;
      auVar57 = _in_stack_000001c0;
      auVar10 = _in_stack_000001d0;
      auVar14 = _in_stack_000001a0;
      auVar18 = _in_stack_00000170;
      auVar56 = _in_stack_00000180;
      auVar23 = _in_stack_00000190;
      auVar26 = _in_stack_000001b0;
      if (*(long *)(lVar39 + 0x1a0) != 0) {
        uVar42 = FUN_057ec748(*(long *)(lVar39 + 0x1a0),0);
        if ((iVar2 != 1) && ((uVar42 & 1) != 0)) {
          auVar54 = _in_stack_000001e0;
          auVar57 = _in_stack_000001c0;
          auVar10 = _in_stack_000001d0;
          auVar14 = _in_stack_000001a0;
          auVar18 = _in_stack_00000170;
          auVar56 = _in_stack_00000180;
          auVar23 = _in_stack_00000190;
          auVar26 = _in_stack_000001b0;
          if (*(long *)(lVar39 + 0x1a0) == 0) goto LAB_0598e37c;
          if (*(char *)(*(long *)(lVar39 + 0x1a0) + 0x28) != '\0') {
            lVar40 = *(long *)(unaff_x20 + 0x1f0);
            if (lVar40 == 0) goto LAB_0598e37c;
            *(undefined1 *)(lVar40 + 0xcd) = 1;
            *(undefined4 *)(lVar40 + 200) = 1;
            uVar49 = *(undefined8 *)(unaff_x20 + 0x138);
            auVar54 = FUN_05928fe4(lVar38,0);
            auVar57 = FUN_05928fdc(lVar38,0);
            FUN_059b6528(lVar40,unaff_x19,uVar49,auVar54._0_8_,auVar54._8_8_,auVar57._0_8_,
                         auVar57._8_8_,0);
          }
        }
        if (lVar41 != 0) {
          FUN_05929390(lVar38,0);
          FUN_059292f4(lVar38,0);
        }
        if (*(char *)(lVar39 + 0x1e0) != '\0') {
          uVar42 = FUN_059282c8(lVar39,0);
          if ((uVar42 & 1) != 0) {
            FUN_05928ed0(lVar38,0);
            FUN_0591d19c();
          }
          if (iVar1 == 0) {
            FUN_05928ed0(lVar38,0);
            FUN_05928ee8(lVar38,0);
            FUN_0591d198();
          }
        }
        return;
      }
    }
  }
LAB_0598e37c:
  _in_stack_00000170 = auVar18;
  _in_stack_00000180 = auVar56;
  _in_stack_00000190 = auVar23;
  _in_stack_000001a0 = auVar14;
  _in_stack_000001b0 = auVar26;
  _in_stack_000001c0 = auVar57;
  _in_stack_000001d0 = auVar10;
  _in_stack_000001e0 = auVar54;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


