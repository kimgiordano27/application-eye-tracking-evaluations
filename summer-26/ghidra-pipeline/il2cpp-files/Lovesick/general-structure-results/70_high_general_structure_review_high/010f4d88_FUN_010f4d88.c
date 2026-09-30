/*
FUNCTION_NAME: FUN_010f4d88
ENTRY_POINT: 010f4d88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_010f4d88(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  long local_70 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
                    /* try { // try from 010f4d9c to 011f4dab has its CatchHandler @ 010f4edc */
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<FocusingTuneTarget>__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                    /* try { // try from 010f4ddc to 011f4def has its CatchHandler @ 010f4ee8 */
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_00d59478(param_5);
    }
  }
                    /* try { // try from 010f4df0 to 011f4e8f has its CatchHandler @ 010f4b64 */
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_78[0] = 0;
  FUN_021f605c(local_60,param_1,0);
  uVar3 = FUN_021fe5e8(local_60,0);
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
  ;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = **(undefined8 **)(param_5 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01780344(uVar11,0);
    local_60 = UnityEngine_ProBuilder_Poly2Tri_AdvancingFront__ToString
                         (*(long *)(*(long *)puVar1 + 0xb8) + 0x10,uVar11,0);
    uVar3 = FUN_021fe5e8(local_60,0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 010f4e90 to 011f4e93 has its CatchHandler @ 010f4ec8 */
                    /* try { // try from 010f4e94 to 011f4e97 has its CatchHandler @ 010f4ec4 */
      uVar11 = **(undefined8 **)(param_5 + 0x38);
                    /* try { // try from 010f4e98 to 011f4e9b has its CatchHandler @ 010f4ec0 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 010f4e9c to 011f4e9f has its CatchHandler @ 010f4ebc */
        thunk_FUN_00d32864();
      }
                    /* try { // try from 010f4ea0 to 011f4ea7 has its CatchHandler @ 010f4ecc */
                    /* try { // try from 010f4ea8 to 011f4eab has its CatchHandler @ 010f4eb8 */
      plVar4 = (long *)FUN_01780344(uVar11,0);
                    /* try { // try from 010f4eac to 011f4eaf has its CatchHandler @ 010f4eb4 */
      if (plVar4 == (long *)0x0) goto LAB_010f50b4;
                    /* try { // try from 010f4eb0 to 011f4f03 has its CatchHandler @ 010f4b64 */
                    /* catch() { ... } // from try @ 010f4eac with catch @ 010f4eb4 */
                    /* catch() { ... } // from try @ 010f4ea8 with catch @ 010f4eb8 */
      uVar11 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                    /* catch() { ... } // from try @ 010f4e9c with catch @ 010f4ebc */
                    /* catch() { ... } // from try @ 010f4e98 with catch @ 010f4ec0 */
                    /* catch() { ... } // from try @ 010f4e94 with catch @ 010f4ec4 */
                    /* catch() { ... } // from try @ 010f4e90 with catch @ 010f4ec8 */
      FUN_021f605c(local_60,uVar11,0);
    }
  }
                    /* catch() { ... } // from try @ 010f4ea0 with catch @ 010f4ecc */
  if ((param_4 & 1) == 0) {
                    /* catch() { ... } // from try @ 010f4d00 with catch @ 010f4ed0 */
                    /* catch() { ... } // from try @ 010f4cf4 with catch @ 010f4ed4 */
                    /* catch() { ... } // from try @ 010f4cdc with catch @ 010f4ed8 */
    uVar3 = FUN_015ff8a0(param_2,0);
                    /* catch() { ... } // from try @ 010f4d9c with catch @ 010f4edc */
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 010f4d48 with catch @ 010f4ee0 */
      lVar5 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 010f4d38 with catch @ 010f4ee4 */
                    /* catch() { ... } // from try @ 010f4ddc with catch @ 010f4ee8 */
      if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 010f4d78 with catch @ 010f4eec */
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
      if (lVar5 != 0) {
                    /* try { // try from 010f4f04 to 011f4f07 has its CatchHandler @ 010f4f30 */
                    /* try { // try from 010f4f08 to 011f4f3f has its CatchHandler @ 010f4b64 */
        local_50 = local_60;
        uVar3 = FUN_0129eff4(lVar5,local_50,local_70,
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_GetComponentInChildren<FocusingTuneTarget>__
                            );
        if ((uVar3 & 1) == 0) goto LAB_010f4f84;
        if (local_70[0] != 0) {
                    /* catch() { ... } // from try @ 010f4f04 with catch @ 010f4f30 */
          (**(code **)(local_70[0] + 0x18))
                    (*(undefined8 *)(local_70[0] + 0x40),local_50,
                     *(undefined8 *)(local_70[0] + 0x28));
          uVar11 = local_50._0_8_;
                    /* try { // try from 010f4f40 to 011f4f47 has its CatchHandler @ 010f4f5c */
                    /* try { // try from 010f4f48 to 011f4f53 has its CatchHandler @ 010f4b64 */
          lVar5 = *(long *)(*(long *)(param_5 + 0x38) + 8);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    /* try { // try from 010f4f54 to 011f4f5b has its CatchHandler @ 010f4f5c */
            lVar5 = FUN_00d5941c(lVar5);
                    /* catch() { ... } // from try @ 010f4f40 with catch @ 010f4f5c
                       catch() { ... } // from try @ 010f4f54 with catch @ 010f4f5c */
          }
          if (uVar11 != 0) {
            lVar6 = thunk_FUN_00d6225c(uVar11,lVar5);
            if (lVar6 != 0) {
              return lVar6;
            }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010f4f80 to 011f511b has its CatchHandler @ 010f4f80
                       catch() { ... } // from try @ 010f4f80 with catch @ 010f4f80
                       catch() { ... } // from try @ 010f5180 with catch @ 010f4f80
                       catch() { ... } // from try @ 010f5224 with catch @ 010f4f80
                       catch() { ... } // from try @ 010f5254 with catch @ 010f4f80
                       catch() { ... } // from try @ 010f5288 with catch @ 010f4f80 */
            FUN_00da544c(uVar11,lVar5);
          }
          return 0;
        }
      }
LAB_010f50b4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_010f4f84:
  local_78[0] = FUN_021f3d90(0);
  uVar7 = FUN_021f3d4c(0);
  uVar9 = local_60._8_8_;
  uVar11 = local_60._0_8_;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  FUN_021f605c(local_50,param_2,0);
  uStack_a8 = param_3[1];
  local_b0 = *param_3;
  uStack_98 = param_3[3];
  local_a0 = param_3[2];
  local_80 = param_3[6];
  uStack_88 = param_3[5];
  uStack_90 = param_3[4];
  FUN_021efb44(uVar7,uVar11,uVar9,local_50._0_8_,local_50._8_8_,&local_b0,0);
  uVar11 = FUN_021f3d4c(0);
  lVar5 = FUN_021eff60(uVar11,0);
  lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c(lVar6);
  }
  lVar6 = thunk_FUN_00d6225c(lVar5,lVar6);
  lVar10 = *(long *)(*(long *)(param_5 + 0x38) + 8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
  }
  if (lVar6 != 0) {
    lVar5 = thunk_FUN_00d6225c(lVar6,lVar10);
    if (lVar5 != 0) {
      FUN_021f3de4(local_78,0);
      return lVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(lVar6,lVar10);
  }
  uVar11 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
  plVar4 = (long *)FUN_00da4fb8(uVar11,5);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = thunk_FUN_00d48444(StringLiteral_1704);
  if (lVar6 != 0) {
    lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar6 == 0) {
      uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,0);
    }
  }
  lVar6 = thunk_FUN_00d48444(StringLiteral_1704);
  if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[4] = lVar6;
  uVar11 = **(undefined8 **)(param_5 + 0x38);
  lVar6 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* try { // try from 010f511c to 011f5123 has its CatchHandler @ 010f523c */
    thunk_FUN_00d32864();
  }
  plVar8 = (long *)FUN_01780344(uVar11,0);
                    /* try { // try from 010f512c to 011f5133 has its CatchHandler @ 010f5238 */
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 010f5138 to 011f513f has its CatchHandler @ 010f5234 */
  lVar6 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  if (lVar6 != 0) {
    lVar10 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar10 == 0) {
      uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,0);
    }
  }
                    /* try { // try from 010f5170 to 011f517f has its CatchHandler @ 010f5240 */
  if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[5] = lVar6;
                    /* try { // try from 010f5180 to 011f5217 has its CatchHandler @ 010f4f80 */
  lVar6 = thunk_FUN_00d48444(
                            System_Collections_Generic_IEnumerator<KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>_TypeInfo
                            );
  if (lVar6 != 0) {
    lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar6 == 0) {
      uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,0);
    }
  }
  lVar6 = thunk_FUN_00d48444(
                            System_Collections_Generic_IEnumerator<KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>_TypeInfo
                            );
  if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar4[6] = lVar6;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar8 = (long *)thunk_FUN_00d93c64(lVar5,0);
  if (plVar8 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar5 != 0) {
      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 == 0) {
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
    }
                    /* try { // try from 010f5218 to 011f521b has its CatchHandler @ 010f5230 */
                    /* try { // try from 010f521c to 011f521f has its CatchHandler @ 010f522c */
                    /* try { // try from 010f5220 to 011f5223 has its CatchHandler @ 010f5228 */
    if (*(uint *)(plVar4 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010f5254 to 011f527f has its CatchHandler @ 010f4f80 */
      FUN_00da5194();
    }
                    /* try { // try from 010f5224 to 011f524f has its CatchHandler @ 010f4f80 */
    plVar4[7] = lVar5;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f5220 with catch @ 010f5228
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f521c with catch @ 010f522c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f5218 with catch @ 010f5230
                        */
    lVar5 = thunk_FUN_00d48444(Method_EventTriggerTypes_<>c_<EventTriggerNames>b__6_0__);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f5138 with catch @ 010f5234
                        */
    if (lVar5 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f512c with catch @ 010f5238
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f511c with catch @ 010f523c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f5170 with catch @ 010f5240
                        */
      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) {
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010f5250 to 011f5253 has its CatchHandler @ 010f5278 */
        FUN_00da5038(uVar11,0);
      }
    }
    lVar5 = thunk_FUN_00d48444(Method_EventTriggerTypes_<>c_<EventTriggerNames>b__6_0__);
    if (4 < *(uint *)(plVar4 + 3)) {
      plVar4[8] = lVar5;
                    /* catch() { ... } // from try @ 010f5250 with catch @ 010f5278 */
      uVar11 = FUN_01600844(plVar4,0);
                    /* try { // try from 010f5280 to 011f5287 has its CatchHandler @ 010f529c */
                    /* try { // try from 010f5288 to 011f5293 has its CatchHandler @ 010f4f80 */
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      lVar5 = thunk_FUN_00d62348();
                    /* try { // try from 010f5294 to 011f529b has its CatchHandler @ 010f529c */
      if (lVar5 != 0) {
        uVar9 = thunk_FUN_00d48444(System_Func<InputControlLayout_ControlItem,_string>_TypeInfo);
        FUN_016ec624(lVar5,uVar11,uVar9,0);
        uVar11 = thunk_FUN_00d48444(Method_System_Diagnostics_Process_EnsureState__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar5,uVar11);
      }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 010f5280 with catch @ 010f529c
                       catch(type#2 @ 00000000) { ... } // from try @ 010f5294 with catch @ 010f529c
                        */
      FUN_00da518c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


