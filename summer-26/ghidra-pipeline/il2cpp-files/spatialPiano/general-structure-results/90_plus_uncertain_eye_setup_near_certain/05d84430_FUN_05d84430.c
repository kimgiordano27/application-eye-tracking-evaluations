/*
FUNCTION_NAME: FUN_05d84430
ENTRY_POINT: 05d84430
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d84430(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  float local_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  
                    /* try { // try from 05d84468 to 05e8446b has its CatchHandler @ 05d844d8 */
                    /* try { // try from 05d8446c to 05e8446f has its CatchHandler @ 05d844d4 */
                    /* try { // try from 05d84470 to 05e84473 has its CatchHandler @ 05d83fe8 */
                    /* try { // try from 05d84474 to 05e8447b has its CatchHandler @ 05d844a0 */
  if ((DAT_06bc3a53 & 1) == 0) {
                    /* try { // try from 05d8447c to 05e8447f has its CatchHandler @ 05d84498 */
                    /* try { // try from 05d84480 to 05e84483 has its CatchHandler @ 05d84494 */
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
                    /* try { // try from 05d84484 to 05e84487 has its CatchHandler @ 05d84490 */
                    /* try { // try from 05d84488 to 05e8448b has its CatchHandler @ 05d8448c */
                    /* catch() { ... } // from try @ 05d84488 with catch @ 05d8448c
                       try { // try from 05d8448c to 05e844f7 has its CatchHandler @ 05d83fe8 */
    FUN_02f08768(Method_UnityEngine_GameObject_AddComponent<SphereGrabSurface>__);
                    /* catch() { ... } // from try @ 05d84484 with catch @ 05d84490 */
                    /* catch() { ... } // from try @ 05d84480 with catch @ 05d84494 */
                    /* catch() { ... } // from try @ 05d8447c with catch @ 05d84498 */
    FUN_02f08768(PTR_DAT_067c9e50);
                    /* catch() { ... } // from try @ 05d8433c with catch @ 05d8449c */
                    /* catch() { ... } // from try @ 05d84474 with catch @ 05d844a0 */
                    /* catch() { ... } // from try @ 05d843f8 with catch @ 05d844a4 */
    FUN_02f08768(PTR_DAT_067c8f20);
                    /* catch() { ... } // from try @ 05d843ac with catch @ 05d844a8 */
                    /* catch() { ... } // from try @ 05d841d4 with catch @ 05d844ac */
                    /* catch() { ... } // from try @ 05d842fc with catch @ 05d844b0 */
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
                    /* catch() { ... } // from try @ 05d8425c with catch @ 05d844b4 */
                    /* catch() { ... } // from try @ 05d8431c with catch @ 05d844b8 */
                    /* catch() { ... } // from try @ 05d8428c with catch @ 05d844bc */
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
                    /* catch() { ... } // from try @ 05d841e4 with catch @ 05d844c0 */
                    /* catch() { ... } // from try @ 05d842dc with catch @ 05d844c4 */
                    /* catch() { ... } // from try @ 05d84230 with catch @ 05d844c8 */
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationMotionXToDeltaPlayable>__
                );
                    /* catch() { ... } // from try @ 05d842ac with catch @ 05d844cc */
                    /* catch() { ... } // from try @ 05d841b4 with catch @ 05d844d0 */
                    /* catch() { ... } // from try @ 05d8446c with catch @ 05d844d4 */
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
                    /* catch() { ... } // from try @ 05d84468 with catch @ 05d844d8 */
                    /* catch() { ... } // from try @ 05d8419c with catch @ 05d844dc */
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
                );
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationPosePlayable>__
                );
                    /* try { // try from 05d844f8 to 05e844fb has its CatchHandler @ 05d84524 */
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationRemoveScalePlayable>__
                );
                    /* try { // try from 05d844fc to 05e84527 has its CatchHandler @ 05d83fe8 */
    DAT_06bc3a53 = 1;
  }
  local_a0 = 0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
                    /* catch() { ... } // from try @ 05d844f8 with catch @ 05d84524 */
  if ((*(long *)(param_1 + 0x1e0) != 0) &&
     (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x70), plVar11 != (long *)0x0)) {
                    /* try { // try from 05d84528 to 05e8452f has its CatchHandler @ 05d84538 */
                    /* try { // try from 05d84530 to 05e8453b has its CatchHandler @ 05d83fe8 */
    iVar7 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
                    /* catch() { ... } // from try @ 05d84528 with catch @ 05d84538 */
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
                    /* try { // try from 05d8453c to 05e84713 has its CatchHandler @ 05d8453c
                       catch() { ... } // from try @ 05d8453c with catch @ 05d8453c
                       catch() { ... } // from try @ 05d84800 with catch @ 05d8453c
                       catch() { ... } // from try @ 05d84828 with catch @ 05d8453c
                       catch() { ... } // from try @ 05d848c0 with catch @ 05d8453c
                       catch() { ... } // from try @ 05d848dc with catch @ 05d8453c
                       catch() { ... } // from try @ 05d84930 with catch @ 05d8453c */
      if (iVar7 != 1) {
        thunk_FUN_02f6ef30(PTR_DAT_067c9678);
        uVar22 = thunk_FUN_02f45270();
        FUN_05056b68(uVar22,0);
        uVar14 = thunk_FUN_02f6ef30(
                                   Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationScriptPlayable>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar22,uVar14);
      }
      iVar7 = 2;
    }
    iVar10 = *(int *)(param_1 + 0xb8) >> iVar7;
    iVar7 = *(int *)(param_1 + 0xbc) >> iVar7;
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    iVar1 = iVar10;
    if (iVar10 <= iVar7) {
      iVar1 = iVar7;
    }
    if (DAT_06bb8c20 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb8c20 = '\x01';
    }
    puVar4 = PTR_DAT_067c8f80;
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    dVar32 = (double)Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize
                               ((double)iVar1,0x4000000000000000,0);
    if (DAT_06bb6c9b == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb6c9b = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = 0x80000000;
    if ((float)(int)((float)dVar32 + -1.0) != INFINITY) {
      uVar9 = (int)((float)dVar32 + -1.0);
    }
    if ((*(long *)(param_1 + 0x1e0) != 0) &&
       (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x78), plVar11 != (long *)0x0)) {
      uVar8 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
      uVar3 = uVar9;
      if ((int)uVar8 <= (int)uVar9) {
        uVar3 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar3 = 1;
      }
      if ((*(long *)(param_1 + 0x1e0) != 0) &&
         (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x58), plVar11 != (long *)0x0)) {
        uVar28 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
        if ((*(long *)(param_1 + 0x1e0) != 0) &&
           (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x40), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
          fVar29 = (float)FUN_060d9e9c(0);
          if ((*(long *)(param_1 + 0x1e0) != 0) &&
             (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x50), plVar11 != (long *)0x0)) {
            fVar30 = (float)(**(code **)(*plVar11 + 0x218))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x220));
            fVar33 = 1.0;
            if (fVar30 <= 1.0) {
              fVar33 = fVar30;
            }
            fVar34 = DAT_011b018c;
            if (0.0 <= fVar30) {
              fVar34 = fVar33 * DAT_011afbb4 + DAT_011b018c;
            }
            if (*(long *)(param_1 + 0x1b0) != 0) {
              lVar21 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x50);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if (lVar21 != 0) {
                fVar33 = fVar29 * 0.5;
                thunk_FUN_060bfdac(fVar34,uVar28,fVar29,lVar21,
                                   *(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                                              + 0xb8) + 0x48),0);
                puVar6 = 
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
                ;
                puVar5 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
                puVar4 = PTR_DAT_067c9e50;
                if ((*(long *)(param_1 + 0x1e0) != 0) &&
                   (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x68), plVar11 != (long *)0x0)
                   ) {
                  uVar9 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220))
                  ;
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02f6670c(*(long *)puVar4);
                  }
                  FUN_05cb163c(lVar21,*(undefined8 *)puVar6,uVar9 & 1,0);
                  FUN_05cb163c(lVar21,*(undefined8 *)puVar5,param_5 & 1,0);
                  FUN_05d834d8(&local_118,param_1,iVar10,iVar7,*(undefined4 *)(param_1 + 0x220),0);
                  puVar4 = 
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  ;
                  uStack_c8 = uStack_110;
                  local_d0 = local_118;
                  uStack_b8 = uStack_100;
                  local_c0 = local_108;
                  uStack_a8 = uStack_f0;
                  local_b0 = local_f8;
                  local_a0 = local_e8;
                  uVar22 = local_108;
                  uVar14 = local_f8;
                  if (0 < (int)uVar3) {
                    uVar20 = 0;
                    lVar25 = 0x20;
                    do {
                      lVar26 = *(long *)(param_1 + 0x140);
                      if ((lVar26 == 0) || (lVar15 = *(long *)(param_1 + 0x150), lVar15 == 0))
                      goto LAB_05d84f48;
                      if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_05d84f4c;
                      uVar23 = *(undefined8 *)(lVar15 + lVar25);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_05d84f4c;
                      FUN_05daf224(0,lVar26 + lVar25,&local_d0,1,1,1,uVar23,0);
                      lVar26 = *(long *)(param_1 + 0x138);
                      if ((lVar26 == 0) || (lVar15 = *(long *)(param_1 + 0x148), lVar15 == 0))
                      goto LAB_05d84f48;
                      if ((*(uint *)(lVar15 + 0x18) <= uVar20) ||
                         (*(uint *)(lVar26 + 0x18) <= uVar20)) goto LAB_05d84f4c;
                      FUN_05daf224(0,lVar26 + lVar25,&local_d0,1,1,1,
                                   *(undefined8 *)(lVar15 + lVar25),0);
                      uVar20 = uVar20 + 1;
                      lVar25 = lVar25 + 8;
                      local_d0 = NEON_smax(CONCAT44((int)((long)local_d0 >> 0x21),(int)local_d0 >> 1
                                                   ),0x100000001,4);
                    } while (uVar3 != uVar20);
                  }
                  lVar25 = *(long *)(param_1 + 0x138);
                  if (lVar25 != 0) {
                    if (*(int *)(lVar25 + 0x18) == 0) {
LAB_05d84f4c:
                    /* WARNING: Subroutine does not return */
                      FUN_02f089d0();
                    }
                    uVar23 = *(undefined8 *)(lVar25 + 0x20);
                    if (*(int *)(*(long *)
                                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                                + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    FUN_05cab544(param_2,param_3,uVar23,2,0,lVar21,0,0);
                    uVar28 = (undefined4)uVar22;
                    lVar25 = *(long *)(param_1 + 0x138);
                    if (lVar25 != 0) {
                      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05d84f4c;
                      if (1 < (int)uVar3) {
                        puVar16 = (undefined8 *)(lVar25 + 0x20);
                        uVar20 = 1;
                        lVar25 = 0x28;
                        do {
                          lVar26 = *(long *)(param_1 + 0x140);
                          if (lVar26 == 0) goto LAB_05d84f48;
                          if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_05d84f4c;
                          uVar23 = *puVar16;
                          uVar24 = *(undefined8 *)(lVar26 + lVar25);
                          if (*(int *)(*(long *)
                                        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                                      + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          FUN_05cab544(param_2,uVar23,uVar24,2,0,lVar21,1,0);
                          lVar26 = *(long *)(param_1 + 0x140);
                          if (lVar26 == 0) goto LAB_05d84f48;
                          if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_05d84f4c;
                          lVar15 = *(long *)(param_1 + 0x138);
                          if (lVar15 == 0) goto LAB_05d84f48;
                          if (*(uint *)(lVar15 + 0x18) <= uVar20) goto LAB_05d84f4c;
                          FUN_05cab544(param_2,*(undefined8 *)(lVar26 + lVar25),
                                       *(undefined8 *)(lVar15 + lVar25),2,0,lVar21,2,0);
                          uVar28 = (undefined4)uVar22;
                          lVar26 = *(long *)(param_1 + 0x138);
                          if (lVar26 == 0) goto LAB_05d84f48;
                          if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_05d84f4c;
                          uVar20 = uVar20 + 1;
                          puVar16 = (undefined8 *)(lVar26 + lVar25);
                          lVar25 = lVar25 + 8;
                        } while (uVar3 != uVar20);
                      }
                      uVar31 = (undefined4)uVar14;
                      uVar3 = uVar3 - 2;
                      if (-1 < (int)uVar3) {
                        uVar20 = (ulong)uVar3 + 1;
                        lVar26 = 0;
                        lVar25 = (ulong)uVar3 + 4;
                        lVar15 = uVar20 << 0x20;
                        do {
                          puVar4 = 
                          Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                          ;
                          if (lVar26 == 0) {
                            lVar17 = *(long *)(param_1 + 0x138);
                            if (lVar17 == 0) goto LAB_05d84f48;
                            if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_05d84f4c;
                            lVar18 = lVar17 + (long)(int)uVar20 * 8;
                          }
                          else {
                            lVar18 = *(long *)(param_1 + 0x140);
                            if (lVar18 == 0) goto LAB_05d84f48;
                            if ((ulong)*(uint *)(lVar18 + 0x18) <= lVar25 - 3U) goto LAB_05d84f4c;
                            lVar17 = *(long *)(param_1 + 0x138);
                            if (lVar17 == 0) goto LAB_05d84f48;
                            lVar18 = lVar18 + (lVar15 >> 0x1d);
                          }
                          uVar27 = lVar25 - 4;
                          if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_05d84f4c;
                          lVar19 = *(long *)(param_1 + 0x140);
                          if (lVar19 == 0) goto LAB_05d84f48;
                          if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_05d84f4c;
                          lVar12 = *(long *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                          ;
                          uVar24 = *(undefined8 *)(lVar18 + 0x20);
                          uVar22 = *(undefined8 *)(lVar17 + lVar25 * 8);
                          uVar23 = *(undefined8 *)(lVar19 + lVar25 * 8);
                          if (*(int *)(lVar12 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                            lVar12 = *(long *)puVar4;
                          }
                          uVar28 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x4c);
                          FUN_05c9ac9c(&local_118,uVar24,0);
                          if (param_2 == 0) goto LAB_05d84f48;
                          uStack_138 = uStack_110;
                          local_140 = local_118;
                          uStack_128 = uStack_100;
                          uStack_130 = local_108;
                          local_120 = local_f8;
                          uVar24 = local_108;
                          FUN_0611f628(param_2,uVar28,&local_140,0);
                          uVar28 = (undefined4)uVar24;
                          if (*(int *)(*(long *)
                                        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                                      + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          FUN_05cab544(param_2,uVar22,uVar23,2,0,lVar21,3,0);
                          uVar31 = (undefined4)uVar14;
                          lVar25 = lVar25 + -1;
                          lVar26 = lVar26 + 1;
                          lVar15 = lVar15 + -0x100000000;
                        } while (0 < (long)uVar27);
                      }
                      puVar5 = 
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                      ;
                      puVar4 = Method_UnityEngine_GameObject_AddComponent<SphereGrabSurface>__;
                      if ((*(long *)(param_1 + 0x1e0) != 0) &&
                         (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x60),
                         plVar11 != (long *)0x0)) {
                        (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
                        fVar29 = (float)FUN_060d9e9c(0);
                        fVar30 = (float)FUN_060d9e9c(uVar28,0);
                        uStack_d8._0_4_ = (float)FUN_060d9e9c(uVar31,0);
                        local_e0 = fVar29;
                        fStack_dc = fVar30;
                        uStack_d8._4_4_ = fVar33;
                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        fVar29 = (float)FUN_05cace3c(&local_e0,0);
                        if (fVar29 <= 0.0) {
                          local_e0 = 1.0;
                          fStack_dc = 1.0;
                          uStack_d8._0_4_ = 1.0;
                          uStack_d8._4_4_ = 1.0;
                        }
                        else {
                          fVar29 = 1.0 / fVar29;
                          local_e0 = local_e0 * fVar29;
                          fStack_dc = fStack_dc * fVar29;
                          uStack_d8._0_4_ = (float)uStack_d8 * fVar29;
                          uStack_d8._4_4_ = uStack_d8._4_4_ * fVar29;
                        }
                        if ((*(long *)(param_1 + 0x1e0) != 0) &&
                           (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x48),
                           plVar11 != (long *)0x0)) {
                          uVar31 = (**(code **)(*plVar11 + 0x218))
                                             (plVar11,*(undefined8 *)(*plVar11 + 0x220));
                          fVar33 = fStack_dc;
                          fVar29 = local_e0;
                          uVar28 = (float)uStack_d8;
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          if (param_4 != 0) {
                            thunk_FUN_060bfdac(uVar31,fVar29,fVar33,uVar28,param_4,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x50),0);
                            lVar21 = *(long *)(param_1 + 0x140);
                            if (lVar21 != 0) {
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_05d84f4c;
                              uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x54);
                              FUN_05c9ac9c(&local_118,*(undefined8 *)(lVar21 + 0x20),0);
                              if (param_2 != 0) {
                                uStack_168 = uStack_110;
                                local_170 = local_118;
                                uStack_158 = uStack_100;
                                uStack_160 = local_108;
                                local_150 = local_f8;
                                FUN_0611f628(param_2,uVar28,&local_170,0);
                                puVar4 = PTR_DAT_067c8f20;
                                if ((*(long *)(param_1 + 0x1e0) != 0) &&
                                   (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x80),
                                   plVar11 != (long *)0x0)) {
                                  uVar22 = (**(code **)(*plVar11 + 0x218))
                                                     (plVar11,*(undefined8 *)(*plVar11 + 0x220));
                                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                    thunk_FUN_02f6670c(*(long *)puVar4);
                                  }
                                  uVar20 = FUN_060f245c(uVar22,0,0);
                                  if ((uVar20 & 1) == 0) {
                                    if ((*(long *)(param_1 + 0x1e0) == 0) ||
                                       (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x80),
                                       plVar11 == (long *)0x0)) goto LAB_05d84f48;
                                    plVar11 = (long *)(**(code **)(*plVar11 + 0x218))
                                                                (plVar11,*(undefined8 *)
                                                                          (*plVar11 + 0x220));
                                  }
                                  else {
                                    plVar11 = (long *)FUN_060cd310(0);
                                  }
                                  if (plVar11 != (long *)0x0) {
                                    iVar7 = (**(code **)(*plVar11 + 0x188))
                                                      (plVar11,*(undefined8 *)(*plVar11 + 400));
                                    iVar10 = (**(code **)(*plVar11 + 0x1a8))
                                                       (plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                                    if ((*(long *)(param_1 + 0x1e0) != 0) &&
                                       (plVar13 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x88),
                                       plVar13 != (long *)0x0)) {
                                      fVar33 = (float)iVar7 / (float)iVar10;
                                      fVar30 = (float)*(int *)(param_1 + 0xb8) /
                                               (float)*(int *)(param_1 + 0xbc);
                                      fVar29 = (float)(**(code **)(*plVar13 + 0x218))
                                                                (plVar13,*(undefined8 *)
                                                                          (*plVar13 + 0x220));
                                      if (fVar33 <= fVar30) {
                                        fVar34 = 0.0;
                                        fVar35 = 1.0;
                                        if (fVar30 <= fVar33) {
                                          fVar30 = 0.0;
                                          fVar33 = 1.0;
                                        }
                                        else {
                                          fVar33 = fVar33 / fVar30;
                                          fVar30 = (1.0 - fVar33) * 0.5;
                                        }
                                      }
                                      else {
                                        fVar35 = fVar30 / fVar33;
                                        fVar33 = 1.0;
                                        fVar30 = 0.0;
                                        fVar34 = (1.0 - fVar35) * 0.5;
                                      }
                                      lVar21 = *(long *)puVar5;
                                      if (*(int *)(lVar21 + 0xe4) == 0) {
                                        thunk_FUN_02f6670c();
                                        lVar21 = *(long *)puVar5;
                                      }
                                      thunk_FUN_060bfdac(fVar35,fVar33,fVar34,fVar30,param_4,
                                                         *(undefined4 *)
                                                          (*(long *)(lVar21 + 0xb8) + 0x5c),0);
                                      UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
                                                (fVar29,param_4,
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)puVar5 + 0xb8) + 0x60),0);
                                      UnityEngine_TextCore_Text_SpriteAsset__get_height
                                                (param_4,*(undefined4 *)
                                                          (*(long *)(*(long *)puVar5 + 0xb8) + 0x58)
                                                 ,plVar11,0);
                                      puVar2 = (undefined8 *)
                                               Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationRemoveScalePlayable>__
                                      ;
                                      puVar5 = 
                                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationPosePlayable>__
                                      ;
                                      puVar16 = (undefined8 *)
                                                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
                                      ;
                                      puVar4 = 
                                      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationMotionXToDeltaPlayable>__
                                      ;
                                      if ((*(long *)(param_1 + 0x1e0) != 0) &&
                                         (plVar11 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x68),
                                         plVar11 != (long *)0x0)) {
                                        uVar20 = (**(code **)(*plVar11 + 0x218))
                                                           (plVar11,*(undefined8 *)
                                                                     (*plVar11 + 0x220));
                                        if ((uVar20 & 1) == 0) {
                                          puVar16 = (undefined8 *)puVar4;
                                          puVar2 = (undefined8 *)puVar5;
                                        }
                                        if (fVar29 <= 0.0) {
                                          puVar2 = puVar16;
                                        }
                                        FUN_060be514(param_4,*puVar2,0);
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
          }
        }
      }
    }
  }
LAB_05d84f48:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


