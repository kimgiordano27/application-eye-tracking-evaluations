/*
FUNCTION_NAME: FUN_020abac8
ENTRY_POINT: 020abac8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_020abac8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = System_ComponentModel_ExtenderProvidedPropertyAttribute_var;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_03780deb & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_8__);
    thunk_FUN_00d48444(StringLiteral_11793);
    thunk_FUN_00d48444(PTR_DAT_033f5cc8);
    thunk_FUN_00d48444(StringLiteral_7550);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__
                      );
    thunk_FUN_00d48444(System_ComponentModel_ExtenderProvidedPropertyAttribute_var);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_2D902EC9D8EA71E1193C1C8315B1553D5154744F651BD366F1E1F437F6594A94
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtq_s16__);
    thunk_FUN_00d48444(StringLiteral_8524);
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_TempoReleased__);
    thunk_FUN_00d48444(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_Get__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f59d8);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<OVRMRAudioFilter>__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_EnhancedTouch_Touch_var);
    thunk_FUN_00d48444(StringLiteral_7140);
    thunk_FUN_00d48444(Method_System_Nullable<Bounds>_get_Value__);
    DAT_03780deb = 1;
  }
  puVar5 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  puVar4 = Method_System_Nullable<Bounds>_get_Value__;
  puVar3 = OVR_OpenVR_NotificationBitmap_t_TypeInfo;
  puVar1 = PTR_DAT_033f59d8;
  local_80 = 0;
  local_78 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uVar10 = FUN_011204c8(param_2,param_3,&local_80,*(undefined8 *)puVar2);
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  if ((uVar10 & 1) == 0) {
                    /* try { // try from 020abd04 to 021abd7b has its CatchHandler @ 020ab798 */
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = *(long *)puVar2;
    lVar12 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    /* catch() { ... } // from try @ 020abcfc with catch @ 020abd64 */
      lVar12 = FUN_00d5941c();
    }
    puVar2 = 
    Field_<PrivateImplementationDetails>_2D902EC9D8EA71E1193C1C8315B1553D5154744F651BD366F1E1F437F6594A94
    ;
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                    /* try { // try from 020abd7c to 021abd93 has its CatchHandler @ 020abdbc */
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    plVar15 = (long *)**(undefined8 **)(lVar12 + 0xb8);
                    /* try { // try from 020abd94 to 021abda7 has its CatchHandler @ 020ab798 */
    uVar9 = FUN_0138744c(&local_70,*(undefined8 *)puVar2);
    puVar8 = StringLiteral_8524;
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtq_s16__;
    puVar6 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
    if (plVar15 != (long *)0x0) {
                    /* try { // try from 020abda8 to 021abdb7 has its CatchHandler @ 020abdbc */
                    /* catch() { ... } // from try @ 020abd7c with catch @ 020abdbc
                       catch() { ... } // from try @ 020abda8 with catch @ 020abdbc */
                    /* try { // try from 020abdc0 to 021abdc3 has its CatchHandler @ 020abf58 */
                    /* try { // try from 020abdc4 to 021abde3 has its CatchHandler @ 020ab798 */
      uVar13 = (**(code **)(*plVar15 + 0x178))(plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x180));
                    /* catch() { ... } // from try @ 020abcf8 with catch @ 020abdc8 */
                    /* catch() { ... } // from try @ 020abcf4 with catch @ 020abdcc */
      local_90 = FUN_00bdd004(&local_70,*(undefined8 *)puVar7);
                    /* try { // try from 020abde4 to 021abdfb has its CatchHandler @ 020abe24 */
      auVar18 = FUN_013aeef8(uVar13,*(undefined8 *)puVar6);
                    /* try { // try from 020abdfc to 021abe0f has its CatchHandler @ 020ab798 */
      FUN_01388444(local_90,auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    /* try { // try from 020abe10 to 021abe1f has its CatchHandler @ 020abe24 */
      if (lVar12 != 0) {
        FUN_013ba4d0(lVar12,param_1,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 020abde4 with catch @ 020abe24
                       catch() { ... } // from try @ 020abe10 with catch @ 020abe24 */
                    /* try { // try from 020abe28 to 021abe2b has its CatchHandler @ 020abf58 */
                    /* try { // try from 020abe2c to 021abe4b has its CatchHandler @ 020ab798 */
        uVar10 = FUN_0138744c(&local_70,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 020abcec with catch @ 020abe30 */
        lVar11 = *(long *)puVar4;
                    /* catch() { ... } // from try @ 020abcd8 with catch @ 020abe34 */
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar11 = *(long *)puVar4;
        }
                    /* try { // try from 020abe4c to 021abe63 has its CatchHandler @ 020abe8c */
        lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x48);
        if (lVar16 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* try { // try from 020abe64 to 021abe77 has its CatchHandler @ 020ab798 */
            thunk_FUN_00d32864(lVar11);
            lVar11 = *(long *)puVar4;
          }
          uVar17 = **(undefined8 **)(lVar11 + 0xb8);
                    /* try { // try from 020abe78 to 021abe87 has its CatchHandler @ 020abe8c */
          lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          if (lVar16 == 0) goto LAB_020abf08;
                    /* catch() { ... } // from try @ 020abe4c with catch @ 020abe8c
                       catch() { ... } // from try @ 020abe78 with catch @ 020abe8c */
                    /* try { // try from 020abe90 to 021abe93 has its CatchHandler @ 020abf58 */
                    /* try { // try from 020abe94 to 021abeb7 has its CatchHandler @ 020ab798 */
                    /* catch() { ... } // from try @ 020ab8b0 with catch @ 020abe98 */
          FUN_016f4a88(lVar16,uVar17,*(undefined8 *)StringLiteral_7140,0);
                    /* catch() { ... } // from try @ 020ab900 with catch @ 020abe9c */
                    /* catch() { ... } // from try @ 020ab8b4 with catch @ 020abea0 */
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = lVar16;
        }
                    /* try { // try from 020abeb8 to 021abecf has its CatchHandler @ 020abf48 */
        lVar11 = FUN_0114be3c(lVar12,uVar13,
                              *(undefined8 *)
                               Method_UnityEngine_GameObject_AddComponent<OVRMRAudioFilter>__);
        if (param_1 != 0) {
                    /* try { // try from 020abed0 to 021abf37 has its CatchHandler @ 020ab798 */
          uVar14 = 0;
          goto LAB_020abee0;
        }
      }
    }
  }
  else {
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = StringLiteral_7550;
    if (lVar11 != 0) {
      FUN_013ba4d0(lVar11,param_1,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = local_78;
      uVar13 = local_80;
      lVar12 = *(long *)puVar4;
      uVar10 = local_78 >> 0x20;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar12 = *(long *)puVar4;
      }
      lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x40);
      if (lVar16 == 0) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar12 = *(long *)puVar4;
        }
        uVar17 = **(undefined8 **)(lVar12 + 0xb8);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar16 == 0) goto LAB_020abf08;
        FUN_016f4a88(lVar16,uVar17,*(undefined8 *)UnityEngine_InputSystem_EnhancedTouch_Touch_var,0)
        ;
                    /* try { // try from 020abcd8 to 021abcdf has its CatchHandler @ 020abe34 */
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = lVar16;
      }
                    /* try { // try from 020abce0 to 021abceb has its CatchHandler @ 020ab798 */
      if (param_1 != 0) {
                    /* try { // try from 020abcec to 021abcf3 has its CatchHandler @ 020abe30 */
        uVar14 = uVar14 & 0xffffffff;
        lVar12 = lVar11;
                    /* try { // try from 020abcf4 to 021abcf7 has its CatchHandler @ 020abdcc */
                    /* try { // try from 020abcf8 to 021abcfb has its CatchHandler @ 020abdc8 */
                    /* try { // try from 020abcfc to 021abd03 has its CatchHandler @ 020abd64 */
LAB_020abee0:
        FUN_020a9b6c(param_1,uVar13,uVar14,uVar10 & 0xffffffff,param_4,lVar16,lVar11);
        return *(undefined8 *)(lVar12 + 0x10);
      }
    }
  }
LAB_020abf08:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


