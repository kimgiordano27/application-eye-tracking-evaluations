/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu$$LateUpdate
ENTRY_POINT: 036396bc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_15;paired_field_refs_with_structure_only;repeated_pose_getters;ui_or_gameplay_sink_hits_7;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__LateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  float *pfVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  long local_68;
  
                    /* try { // try from 036396c8 to 03739703 has its CatchHandler @ 036398b8 */
  if ((DAT_03ef6afa & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value___03ce0f60
                );
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
                    /* try { // try from 03639704 to 0373970f has its CatchHandler @ 03639898 */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<Quaternion>_HandleTween___03ce24f8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<float3>_HandleTween___03cb6190
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<float3>_set_target___03cb61a0
                );
                    /* try { // try from 0363972c to 03739733 has its CatchHandler @ 03639888 */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<Quaternion>_set_target___03ce2500
                );
    DAT_03ef6afa = 1;
  }
  local_68 = 0;
                    /* try { // try from 03639740 to 0373977f has its CatchHandler @ 03639908 */
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = 0.0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0.0;
  local_c0 = 0;
  if (*(int *)(param_4 + 0xb0) == 0) {
                    /* catch() { ... } // from try @ 0363934c with catch @ 03639890 */
                    /* catch() { ... } // from try @ 03639864 with catch @ 03639894 */
    if (*(long *)(param_4 + 0x100) != 0) {
                    /* catch() { ... } // from try @ 03639704 with catch @ 03639898 */
                    /* catch() { ... } // from try @ 036396a0 with catch @ 0363989c */
                    /* catch() { ... } // from try @ 03639690 with catch @ 036398a0 */
                    /* catch() { ... } // from try @ 03639858 with catch @ 036398a4 */
                    /* catch() { ... } // from try @ 036395a4 with catch @ 036398a8 */
                    /* catch() { ... } // from try @ 036393d8 with catch @ 036398ac */
                    /* catch() { ... } // from try @ 036394f8 with catch @ 036398b0 */
                    /* catch() { ... } // from try @ 036397a8 with catch @ 036398b4 */
                    /* catch() { ... } // from try @ 036396c8 with catch @ 036398b8 */
                    /* catch() { ... } // from try @ 036394e0 with catch @ 036398bc */
                    /* catch() { ... } // from try @ 03639854 with catch @ 036398c0 */
                    /* catch() { ... } // from try @ 036394cc with catch @ 036398c4 */
      Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>__set_Value
                (*(long *)(param_4 + 0x100),0,
                 *(undefined8 *)
                  PTR_Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value___03ce0f60
                );
      return;
    }
    goto LAB_03639be0;
  }
  lVar2 = UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__GetCurrentPreset(param_4);
  local_68 = lVar2;
  uVar3 = UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__TryGetTrackedAnchors
                    (param_4,*(undefined4 *)(param_4 + 0x28),&local_68,&local_6c,&local_78,&local_80
                     ,&local_88);
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 0363948c with catch @ 036398c8 */
                    /* catch() { ... } // from try @ 03639850 with catch @ 036398cc */
    fVar9 = (float)UnityEngine_Time__get_unscaledTime(0);
                    /* catch() { ... } // from try @ 0363984c with catch @ 036398d0 */
    if (lVar2 == 0) goto LAB_03639be0;
                    /* catch() { ... } // from try @ 036393f8 with catch @ 036398d4 */
                    /* catch() { ... } // from try @ 03639384 with catch @ 036398d8 */
                    /* catch() { ... } // from try @ 03639374 with catch @ 036398dc */
    param_2 = *(float *)(lVar2 + 0x68);
                    /* catch() { ... } // from try @ 03639370 with catch @ 036398e0 */
                    /* catch() { ... } // from try @ 03639848 with catch @ 036398e4 */
    if (param_2 < fVar9 - *(float *)(param_4 + 0x108)) {
                    /* catch() { ... } // from try @ 036397cc with catch @ 036398e8
                       catch() { ... } // from try @ 03639860 with catch @ 036398e8 */
                    /* catch() { ... } // from try @ 03639658 with catch @ 036398ec */
      if (*(long *)(param_4 + 0x100) == 0) goto LAB_03639be0;
                    /* catch() { ... } // from try @ 03639644 with catch @ 036398f0 */
                    /* catch() { ... } // from try @ 0363983c with catch @ 036398f4 */
                    /* catch() { ... } // from try @ 03639838 with catch @ 036398f8 */
                    /* catch() { ... } // from try @ 03639834 with catch @ 036398fc */
                    /* catch() { ... } // from try @ 03639830 with catch @ 03639900 */
      Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>__set_Value
                (*(long *)(param_4 + 0x100),0,
                 *(undefined8 *)
                  PTR_Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value___03ce0f60
                );
    }
                    /* catch() { ... } // from try @ 036393b0 with catch @ 03639904 */
    puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
                    /* catch() { ... } // from try @ 03639740 with catch @ 03639908
                       catch() { ... } // from try @ 0363985c with catch @ 03639908 */
                    /* catch() { ... } // from try @ 03639614 with catch @ 0363990c */
    uVar12 = *(undefined8 *)(param_4 + 0xd8);
                    /* catch() { ... } // from try @ 03639350 with catch @ 03639910
                       catch() { ... } // from try @ 03639844 with catch @ 03639910 */
                    /* catch() { ... } // from try @ 03639824 with catch @ 03639914 */
                    /* catch() { ... } // from try @ 03639424 with catch @ 03639918 */
    if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0363966c with catch @ 0363991c
                       catch() { ... } // from try @ 03639840 with catch @ 0363991c */
      thunk_FUN_01cb0d4c();
    }
                    /* catch() { ... } // from try @ 036392f4 with catch @ 03639920
                       catch() { ... } // from try @ 03639828 with catch @ 03639920 */
                    /* catch() { ... } // from try @ 03639300 with catch @ 03639924
                       catch() { ... } // from try @ 0363982c with catch @ 03639924 */
    uVar4 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar12 = *(undefined8 *)(param_4 + 0xe0);
                    /* try { // try from 03639940 to 03739943 has its CatchHandler @ 0363995c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 03639944 to 0373995f has its CatchHandler @ 03638ec8 */
      thunk_FUN_01cb0d4c();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
                    /* catch() { ... } // from try @ 03639940 with catch @ 0363995c */
                    /* try { // try from 03639960 to 03739967 has its CatchHandler @ 03639970 */
    uVar12 = *(undefined8 *)(param_4 + 0xe8);
                    /* try { // try from 03639968 to 03739973 has its CatchHandler @ 03638ec8 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
                    /* catch() { ... } // from try @ 03639960 with catch @ 03639970 */
    uVar4 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  else {
    *(undefined8 *)(param_4 + 0xd8) = local_78;
                    /* try { // try from 036397a8 to 037397c3 has its CatchHandler @ 036398b4 */
    thunk_FUN_01cc8040();
    *(undefined8 *)(param_4 + 0xe0) = local_80;
    thunk_FUN_01cc8040();
    *(undefined8 *)(param_4 + 0xe8) = local_88;
                    /* try { // try from 036397cc to 037397db has its CatchHandler @ 036398e8 */
    thunk_FUN_01cc8040((undefined8 *)(param_4 + 0xe8));
    uVar8 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)(param_4 + 0x108) = uVar8;
  }
                    /* try { // try from 036397dc to 03739823 has its CatchHandler @ 03638ec8 */
  if (*(long *)(param_4 + 0xe8) == 0) goto LAB_03639be0;
  fVar9 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0xe8),0);
  if (*(long *)(param_4 + 0xd8) == 0) goto LAB_03639be0;
  fVar13 = param_2;
  fVar11 = param_3;
  fVar10 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0xd8),0);
  fVar14 = fVar11;
  if (DAT_03ef141d == '\0') {
                    /* try { // try from 03639824 to 03739827 has its CatchHandler @ 03639914 */
                    /* try { // try from 03639828 to 0373982b has its CatchHandler @ 03639920 */
    FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
                    /* try { // try from 0363982c to 0373982f has its CatchHandler @ 03639924 */
                    /* try { // try from 03639830 to 03739833 has its CatchHandler @ 03639900 */
    DAT_03ef141d = '\x01';
  }
                    /* try { // try from 03639834 to 03739837 has its CatchHandler @ 036398fc */
                    /* try { // try from 03639838 to 0373983b has its CatchHandler @ 036398f8 */
  fVar9 = fVar9 - fVar10;
                    /* try { // try from 0363983c to 0373983f has its CatchHandler @ 036398f4 */
  param_2 = param_2 - fVar13;
                    /* try { // try from 03639840 to 03739843 has its CatchHandler @ 0363991c */
                    /* try { // try from 03639844 to 03739847 has its CatchHandler @ 03639910 */
  param_3 = param_3 - fVar11;
                    /* try { // try from 03639848 to 0373984b has its CatchHandler @ 036398e4 */
                    /* try { // try from 0363984c to 0373984f has its CatchHandler @ 036398d0 */
                    /* try { // try from 03639850 to 03739853 has its CatchHandler @ 036398cc */
  if (*(int *)(*(long *)PTR_System_Math_TypeInfo_03cb5ea0 + 0xe4) == 0) {
                    /* try { // try from 03639854 to 03739857 has its CatchHandler @ 036398c0 */
    thunk_FUN_01cb0d4c();
  }
                    /* try { // try from 03639858 to 0373985b has its CatchHandler @ 036398a4 */
                    /* try { // try from 0363985c to 0373985f has its CatchHandler @ 03639908 */
                    /* try { // try from 03639860 to 03739863 has its CatchHandler @ 036398e8 */
                    /* try { // try from 03639864 to 03739867 has its CatchHandler @ 03639894 */
                    /* try { // try from 03639868 to 0373986b has its CatchHandler @ 0363987c */
                    /* try { // try from 0363986c to 0373986f has its CatchHandler @ 03639878 */
                    /* catch() { ... } // from try @ 036395c8 with catch @ 03639870
                       try { // try from 03639870 to 0373993f has its CatchHandler @ 03638ec8 */
                    /* catch() { ... } // from try @ 0363958c with catch @ 03639874 */
  fVar11 = SQRT(param_3 * param_3 + fVar9 * fVar9 + param_2 * param_2);
                    /* catch() { ... } // from try @ 0363986c with catch @ 03639878 */
                    /* catch() { ... } // from try @ 03639868 with catch @ 0363987c */
  fVar13 = DAT_00b46114;
  if (fVar11 <= DAT_00b46114) {
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
      DAT_03ef1415 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0 + 0xb8);
    fVar9 = *pfVar6;
    param_2 = pfVar6[1];
    param_3 = pfVar6[2];
  }
  else {
                    /* catch() { ... } // from try @ 03639534 with catch @ 03639880 */
    fVar9 = fVar9 / fVar11;
                    /* catch() { ... } // from try @ 03639514 with catch @ 03639884 */
    param_2 = param_2 / fVar11;
                    /* catch() { ... } // from try @ 0363972c with catch @ 03639888 */
    param_3 = param_3 / fVar11;
                    /* catch() { ... } // from try @ 03639504 with catch @ 0363988c */
  }
  local_98 = CONCAT44(param_2,fVar9);
  local_90 = param_3;
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_4 + 0x4c) == '\0') {
      bVar5 = true;
    }
    else {
      if (*(long *)(param_4 + 0xd8) == 0) goto LAB_03639be0;
      fVar11 = (float)UnityEngine_Transform__get_forward(*(long *)(param_4 + 0xd8),0);
      fVar10 = fVar13 * param_2;
      fVar13 = *(float *)(param_4 + 0x54);
      bVar5 = fVar13 < fVar14 * param_3 + fVar9 * fVar11 + fVar10;
    }
    if (*(long *)(param_4 + 0x100) == 0) goto LAB_03639be0;
    Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>__set_Value
              (*(long *)(param_4 + 0x100),bVar5,
               *(undefined8 *)
                PTR_Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value___03ce0f60
              );
  }
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_03639be0;
  uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_4 + 0x20),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  Unity_XR_CoreUtils_TransformExtensions__GetWorldPose(&local_dc,*(undefined8 *)(param_4 + 0xe8),0);
  uStack_a8 = uStack_c8;
  local_b0 = local_d0;
  if (local_6c - 1U < 2) {
    if (lVar2 == 0) goto LAB_03639be0;
    fVar11 = (float)UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_FollowPreset__GetReferenceAxisForTrackingAnchor
                              (lVar2,*(undefined8 *)(param_4 + 0xe0),local_6c == 2);
    if ((*(char *)(lVar2 + 0x5c) != '\0') &&
       (fVar10 = *(float *)(lVar2 + 100),
       fVar10 < (-(param_2 * fVar13) - fVar11 * fVar9) - fVar14 * param_3)) {
      uVar8 = UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu__GetReferenceUpDirection
                        (param_4,*(undefined8 *)(param_4 + 0xd8));
      local_c0 = CONCAT44(fVar10,uVar8);
      local_b8 = fVar14;
      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__OrthogonalLookRotation
                (&local_98,&local_c0,&local_b0,0);
    }
  }
  lVar7 = *(long *)(param_4 + 0x58);
  Unity_Mathematics_float3__op_Implicit(local_dc,uStack_d8,local_d4,0);
  if (lVar7 == 0) goto LAB_03639be0;
  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<float3>__set_target
            (lVar7,*(undefined8 *)
                    PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<float3>_set_target___03cb61a0
            );
  if (*(long *)(param_4 + 0x60) == 0) goto LAB_03639be0;
  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<Quaternion>__set_target
            (local_b0 & 0xffffffff,local_b0._4_4_,(undefined4)uStack_a8,uStack_a8._4_4_,
             *(long *)(param_4 + 0x60),
             *(undefined8 *)
              PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<Quaternion>_set_target___03ce2500
            );
  if (*(char *)(param_4 + 0x80) == '\0') {
    if (lVar2 == 0) goto LAB_03639be0;
    if (*(char *)(lVar2 + 0x6c) == '\0') goto LAB_03639b28;
    lVar7 = *(long *)(param_4 + 0x58);
    uVar12 = UnityEngine_Time__get_deltaTime(0);
    if (lVar7 == 0) goto LAB_03639be0;
    UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable__HandleSmartTween
              (uVar12,*(undefined4 *)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x74),lVar7,0);
    lVar7 = *(long *)(param_4 + 0x60);
  }
  else {
LAB_03639b28:
    if ((*(long *)(param_4 + 0x58) == 0) ||
       (UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<float3>__HandleTween
                  (0x3f800000,*(long *)(param_4 + 0x58),
                   *(undefined8 *)
                    PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<float3>_HandleTween___03cb6190
                  ), lVar2 == 0)) goto LAB_03639be0;
    lVar7 = *(long *)(param_4 + 0x60);
    if (*(char *)(lVar2 + 0x6c) == '\0') {
      if (lVar7 == 0) goto LAB_03639be0;
      fVar9 = 1.0;
      goto LAB_03639bb4;
    }
  }
  fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
  if (lVar7 != 0) {
    fVar9 = fVar9 * *(float *)(lVar2 + 0x70);
LAB_03639bb4:
    UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<Quaternion>__HandleTween
              (fVar9,lVar7,
               *(undefined8 *)
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase<Quaternion>_HandleTween___03ce24f8
              );
    return;
  }
LAB_03639be0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


