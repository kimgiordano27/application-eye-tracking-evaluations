/*
FUNCTION_NAME: FUN_05d838b0
ENTRY_POINT: 05d838b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05d838b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  ulong uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  
  if ((DAT_06bc3a48 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9d90);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_Hands_PinchPointFollow_OnJointsUpdated__
                );
    FUN_02f08768(Method_Oculus_Interaction_PinchPointerVisual_HandlePostprocessed__);
    FUN_02f08768(Method_Oculus_Interaction_PinchPointerVisual_HandleStateChanged__);
    FUN_02f08768(Method_Oculus_Interaction_Samples_PingPongPaddle_HandleCollisionEnter__);
    FUN_02f08768(
                Method_Oculus_Interaction_Samples_PingPongPaddle_HandleLeftHandGrabInteractableStateChanged__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Samples_PingPongPaddle_HandleRightHandGrabInteractableStateChanged__
                );
    DAT_06bc3a48 = 1;
  }
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (DAT_06bb435f == '\0') {
    FUN_02f08768(PTR_DAT_067c9848);
    DAT_06bb435f = '\x01';
  }
  uVar16 = **(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
  uVar17 = (*(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1];
  piVar9 = (int *)FUN_05ddd98c(param_2,0);
  iVar18 = *piVar9;
  lVar10 = FUN_05ddd98c(param_2,0);
  puVar5 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    iVar19 = *(int *)(lVar10 + 4);
    uVar1 = *(undefined4 *)(param_1 + 0xb8);
    uVar2 = *(undefined4 *)(param_1 + 0xbc);
    lVar10 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_067c9d90 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9d90);
    }
    puVar7 = 
    Method_Oculus_Interaction_Samples_PingPongPaddle_HandleLeftHandGrabInteractableStateChanged__;
    puVar6 = Method_Oculus_Interaction_Samples_PingPongPaddle_HandleCollisionEnter__;
    uVar8 = FUN_06134294(0x18,0);
    FUN_05d834d8(&local_104,param_1,uVar1,uVar2,0,uVar8);
    uStack_c8 = uStack_fc;
    local_d0 = local_104;
    uStack_b8 = uStack_ec;
    local_c0 = local_f4;
    uStack_a8 = uStack_dc;
    local_b0 = local_e4;
    local_a0 = local_d4;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,param_1 + 0x178,&local_d0,1,1,1,*(undefined8 *)puVar6,0);
    FUN_05d834d8(&local_138,param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                 *(undefined4 *)(param_1 + 0x228),0);
    uStack_c8 = uStack_130;
    local_d0 = local_138;
    uStack_b8 = uStack_120;
    local_c0 = local_128;
    uStack_a8 = uStack_110;
    local_b0 = local_118;
    local_a0 = local_108;
    FUN_05daf224(0,param_1 + 0x170,&local_d0,1,1,1,*(undefined8 *)puVar7,0);
    FUN_05d834d8(&local_16c,param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                 8,0);
    uStack_c8 = uStack_164;
    local_d0 = local_16c;
    uStack_b8 = uStack_154;
    local_c0 = local_15c;
    uStack_a8 = uStack_144;
    local_b0 = local_14c;
    local_a0 = local_13c;
    FUN_05daf224(0,param_1 + 0x168,&local_d0,0,1,1,
                 *(undefined8 *)Method_Oculus_Interaction_PinchPointerVisual_HandlePostprocessed__,0
                );
    lVar11 = *(long *)(param_1 + 0x170);
    if (lVar11 != 0) {
      if (*(char *)(lVar11 + 0xa8) == '\0') {
        plVar12 = *(long **)(lVar11 + 0x18);
        if (plVar12 == (long *)0x0) goto LAB_05d83e58;
        uVar13 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
        if (*(long *)(param_1 + 0x170) == 0) goto LAB_05d83e58;
        plVar12 = *(long **)(*(long *)(param_1 + 0x170) + 0x18);
        if (plVar12 == (long *)0x0) goto LAB_05d83e58;
        lVar11 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        uVar13 = uVar13 & 0xffffffff | lVar11 << 0x20;
      }
      else {
        FUN_05c9cc94(&local_104,lVar11,0);
        uVar13 = uStack_ec;
      }
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__;
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar10 != 0) {
        thunk_FUN_060bfdac(1.0 / (float)(int)uVar13,1.0 / (float)(int)(uVar13 >> 0x20),lVar10,
                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30),0);
        if ((*(long *)(param_1 + 0x1b8) != 0) &&
           (lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x20), lVar11 != 0)) {
          UnityEngine_TextCore_Text_SpriteAsset__get_height
                    (lVar10,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x34),
                     *(undefined8 *)(lVar11 + 0x20),0);
          if ((*(long *)(param_1 + 0x1b8) != 0) &&
             (lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x20), lVar11 != 0)) {
            UnityEngine_TextCore_Text_SpriteAsset__get_height
                      (lVar10,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x38),
                       *(undefined8 *)(lVar11 + 0x28),0);
            UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
                      (0x42800000,lVar10,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),0);
            UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
                      (0x42800000,lVar10,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc),0)
            ;
            thunk_FUN_060bf9c4(lVar10,0,0);
            puVar14 = (uint *)FUN_05de0fa8(param_2,0);
            if (*puVar14 < 3) {
              FUN_060be514(lVar10,*(undefined8 *)(&PTR_DAT_0646cd18)[*puVar14],0);
            }
            uVar3 = *(undefined8 *)(param_1 + 0x170);
            uVar4 = *(undefined8 *)(param_1 + 0x178);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05dabf08(uVar16,uVar17,(float)iVar18,(float)iVar19,0,0,0,0,param_3,param_4,uVar3,2,0
                         ,uVar4,2,0,5,lVar10,0,0);
            FUN_05dabf08(uVar16,uVar17,(float)iVar18,(float)iVar19,0,0,0,0,param_3,
                         *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x168),2,0,
                         *(undefined8 *)(param_1 + 0x178),0,3,1,lVar10,1,0);
            lVar11 = *(long *)puVar6;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar11 = *(long *)puVar6;
            }
            puVar5 = 
            Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
            ;
            lVar15 = *(long *)(param_1 + 0x168);
            if ((lVar15 != 0) && (param_3 != 0)) {
              uStack_198 = *(undefined8 *)(lVar15 + 0x30);
              local_1a0 = *(undefined8 *)(lVar15 + 0x28);
              uStack_188 = *(undefined8 *)(lVar15 + 0x40);
              uStack_190 = *(undefined8 *)(lVar15 + 0x38);
              local_180 = *(undefined8 *)(lVar15 + 0x48);
              FUN_0611f628(param_3,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x40),&local_1a0,0);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05cab544(param_3,param_4,param_5,2,0,lVar10,2,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05d83e58:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


