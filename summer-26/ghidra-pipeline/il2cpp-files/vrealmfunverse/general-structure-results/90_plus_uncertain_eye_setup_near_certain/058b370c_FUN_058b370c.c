/*
FUNCTION_NAME: FUN_058b370c
ENTRY_POINT: 058b370c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 186
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_058b370c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar1 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemAdded__;
  puVar2 = Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__;
                    /* try { // try from 058b3724 to 059b3727 has its CatchHandler @ 058b37b8 */
                    /* try { // try from 058b3728 to 059b3793 has its CatchHandler @ 058b2b94 */
  if ((DAT_066d3211 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313928);
    FUN_02b3c81c(Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemRemoved__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    FUN_02b3c81c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__);
    FUN_02b3c81c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
                    /* try { // try from 058b3794 to 059b3797 has its CatchHandler @ 058b3950 */
                    /* try { // try from 058b3798 to 059b379f has its CatchHandler @ 058b37b8 */
    FUN_02b3c81c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                );
                    /* try { // try from 058b37a0 to 059b37a3 has its CatchHandler @ 058b37a4 */
                    /* catch() { ... } // from try @ 058b37a0 with catch @ 058b37a4
                       try { // try from 058b37a4 to 059b396f has its CatchHandler @ 058b2b94 */
                    /* catch() { ... } // from try @ 058b3008 with catch @ 058b37a8 */
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>__ctor__);
                    /* catch() { ... } // from try @ 058b2fb4 with catch @ 058b37ac */
                    /* catch() { ... } // from try @ 058b2fcc with catch @ 058b37b0 */
                    /* catch() { ... } // from try @ 058b36e4 with catch @ 058b37b4 */
    FUN_02b3c81c(
                Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__
                );
                    /* catch() { ... } // from try @ 058b3724 with catch @ 058b37b8
                       catch() { ... } // from try @ 058b3798 with catch @ 058b37b8 */
                    /* catch() { ... } // from try @ 058b2f94 with catch @ 058b37bc */
                    /* catch() { ... } // from try @ 058b2f80 with catch @ 058b37c0 */
    FUN_02b3c81c(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemAdded__);
                    /* catch() { ... } // from try @ 058b2f5c with catch @ 058b37c4 */
                    /* catch() { ... } // from try @ 058b2f44 with catch @ 058b37c8 */
                    /* catch() { ... } // from try @ 058b2f2c with catch @ 058b37cc */
    FUN_02b3c81c(UnityEngine_Timeline_PlayableTrack_var);
                    /* catch() { ... } // from try @ 058b2f14 with catch @ 058b37d0 */
                    /* catch() { ... } // from try @ 058b2efc with catch @ 058b37d4 */
    DAT_066d3211 = 1;
  }
                    /* catch() { ... } // from try @ 058b2ee4 with catch @ 058b37d8 */
                    /* catch() { ... } // from try @ 058b2ecc with catch @ 058b37dc */
                    /* catch() { ... } // from try @ 058b2eb4 with catch @ 058b37e0 */
  *(undefined8 *)(param_1 + 0x58) = param_2;
                    /* catch() { ... } // from try @ 058b2e9c with catch @ 058b37e4 */
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),param_2);
                    /* catch() { ... } // from try @ 058b2e84 with catch @ 058b37e8 */
                    /* catch() { ... } // from try @ 058b2e6c with catch @ 058b37ec */
                    /* catch() { ... } // from try @ 058b2e54 with catch @ 058b37f0 */
  lVar4 = FUN_03197dbc(param_1,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 058b2e3c with catch @ 058b37f4 */
                    /* catch() { ... } // from try @ 058b2e24 with catch @ 058b37f8 */
                    /* catch() { ... } // from try @ 058b2e0c with catch @ 058b37fc */
  plVar7 = (long *)(param_1 + 0x98);
  *plVar7 = lVar4;
                    /* catch() { ... } // from try @ 058b2df4 with catch @ 058b3800 */
                    /* catch() { ... } // from try @ 058b2ddc with catch @ 058b3804 */
  thunk_FUN_02bb0e9c(plVar7,lVar4);
                    /* catch() { ... } // from try @ 058b2dc4 with catch @ 058b3808 */
                    /* catch() { ... } // from try @ 058b2dac with catch @ 058b380c */
                    /* catch() { ... } // from try @ 058b2d94 with catch @ 058b3810 */
  uVar5 = FUN_03172a30(param_1,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 058b2d7c with catch @ 058b3814 */
                    /* catch() { ... } // from try @ 058b2d64 with catch @ 058b3818 */
                    /* catch() { ... } // from try @ 058b2d4c with catch @ 058b381c */
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
                    /* catch() { ... } // from try @ 058b2d34 with catch @ 058b3820 */
                    /* catch() { ... } // from try @ 058b2d1c with catch @ 058b3824 */
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xa0),uVar5);
  puVar1 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_add_ItemRemoved__;
  puVar2 = UnityEngine_Timeline_PlayableTrack_var;
                    /* catch() { ... } // from try @ 058b2d04 with catch @ 058b3828 */
                    /* catch() { ... } // from try @ 058b2cec with catch @ 058b382c */
                    /* catch() { ... } // from try @ 058b2cd4 with catch @ 058b3830 */
                    /* catch() { ... } // from try @ 058b2cbc with catch @ 058b3834 */
  if ((*plVar7 != 0) && (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 058b2ca4 with catch @ 058b3838 */
                    /* catch() { ... } // from try @ 058b2c64 with catch @ 058b383c */
                    /* catch() { ... } // from try @ 058b36c4 with catch @ 058b3848 */
                    /* catch() { ... } // from try @ 058b35dc with catch @ 058b384c */
                    /* catch() { ... } // from try @ 058b3524 with catch @ 058b3850 */
                    /* catch() { ... } // from try @ 058b3540 with catch @ 058b3854 */
                    /* catch() { ... } // from try @ 058b3554 with catch @ 058b3858 */
    (**(code **)(*plVar6 + 0x5e8))
              (plVar6,*(undefined8 *)(*plVar7 + 0x30),*(undefined8 *)(*plVar6 + 0x5f0));
                    /* catch() { ... } // from try @ 058b34a0 with catch @ 058b385c */
                    /* catch() { ... } // from try @ 058b356c with catch @ 058b3860 */
    lVar4 = *(long *)(param_1 + 0x78);
                    /* catch() { ... } // from try @ 058b34b8 with catch @ 058b3864 */
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 058b3580 with catch @ 058b3868 */
                    /* catch() { ... } // from try @ 058b34cc with catch @ 058b386c */
                    /* catch() { ... } // from try @ 058b359c with catch @ 058b3870 */
                    /* catch() { ... } // from try @ 058b34e4 with catch @ 058b3874 */
                    /* catch() { ... } // from try @ 058b35b0 with catch @ 058b3878 */
    FUN_049b830c(uVar5,param_1,*(undefined8 *)puVar1,0);
    puVar3 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__;
    puVar1 = PTR_DAT_06313928;
                    /* catch() { ... } // from try @ 058b34f8 with catch @ 058b387c */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 058b35c8 with catch @ 058b3880 */
                    /* catch() { ... } // from try @ 058b3510 with catch @ 058b3884 */
                    /* catch() { ... } // from try @ 058b33b8 with catch @ 058b3888 */
                    /* catch() { ... } // from try @ 058b3470 with catch @ 058b388c */
                    /* catch() { ... } // from try @ 058b31ac with catch @ 058b3890 */
                    /* catch() { ... } // from try @ 058b3264 with catch @ 058b3894 */
      puVar8 = (undefined8 *)(lVar4 + 0x70);
      *puVar8 = uVar5;
                    /* catch() { ... } // from try @ 058b331c with catch @ 058b3898 */
                    /* catch() { ... } // from try @ 058b33d4 with catch @ 058b389c */
      thunk_FUN_02bb0e9c(puVar8,uVar5);
                    /* catch() { ... } // from try @ 058b348c with catch @ 058b38a0 */
                    /* catch() { ... } // from try @ 058b31c0 with catch @ 058b38a4 */
      lVar4 = *(long *)(param_1 + 0x78);
                    /* catch() { ... } // from try @ 058b3278 with catch @ 058b38a8 */
      uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 058b3330 with catch @ 058b38ac */
                    /* catch() { ... } // from try @ 058b33e8 with catch @ 058b38b0 */
                    /* catch() { ... } // from try @ 058b31d8 with catch @ 058b38b4 */
                    /* catch() { ... } // from try @ 058b3290 with catch @ 058b38b8 */
                    /* catch() { ... } // from try @ 058b3348 with catch @ 058b38bc */
      FUN_03fc115c(uVar5,param_1,*(undefined8 *)puVar3,0);
                    /* catch() { ... } // from try @ 058b3400 with catch @ 058b38c0 */
      if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 058b31f0 with catch @ 058b38c4 */
        puVar8 = (undefined8 *)(lVar4 + 0x78);
        *puVar8 = uVar5;
                    /* catch() { ... } // from try @ 058b32a4 with catch @ 058b38c8 */
                    /* catch() { ... } // from try @ 058b335c with catch @ 058b38cc */
                    /* catch() { ... } // from try @ 058b3414 with catch @ 058b38d0 */
        thunk_FUN_02bb0e9c(puVar8,uVar5);
        puVar3 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__;
                    /* catch() { ... } // from try @ 058b3208 with catch @ 058b38d4 */
                    /* catch() { ... } // from try @ 058b32c0 with catch @ 058b38d8 */
        if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 058b3378 with catch @ 058b38dc */
                    /* catch() { ... } // from try @ 058b3430 with catch @ 058b38e0 */
                    /* catch() { ... } // from try @ 058b321c with catch @ 058b38e4 */
                    /* catch() { ... } // from try @ 058b32d4 with catch @ 058b38e8 */
          *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x50) = *(undefined8 *)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 058b338c with catch @ 058b38ec */
          thunk_FUN_02bb0e9c();
                    /* catch() { ... } // from try @ 058b3444 with catch @ 058b38f0 */
                    /* catch() { ... } // from try @ 058b3234 with catch @ 058b38f4 */
                    /* catch() { ... } // from try @ 058b32ec with catch @ 058b38f8 */
          FUN_058b3b44(param_1,*(undefined8 *)(param_1 + 0x78));
                    /* catch() { ... } // from try @ 058b33a4 with catch @ 058b38fc */
                    /* catch() { ... } // from try @ 058b345c with catch @ 058b3900 */
          lVar4 = *(long *)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 058b324c with catch @ 058b3904 */
          uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 058b3300 with catch @ 058b3908 */
                    /* catch() { ... } // from try @ 058b3038 with catch @ 058b390c */
                    /* catch() { ... } // from try @ 058b30f4 with catch @ 058b3910 */
                    /* catch() { ... } // from try @ 058b3050 with catch @ 058b3914 */
                    /* catch() { ... } // from try @ 058b3108 with catch @ 058b3918 */
          FUN_049b830c(uVar5,param_1,*(undefined8 *)puVar3,0);
          puVar3 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__;
                    /* catch() { ... } // from try @ 058b3068 with catch @ 058b391c */
          if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 058b3120 with catch @ 058b3920 */
                    /* catch() { ... } // from try @ 058b3080 with catch @ 058b3924 */
                    /* catch() { ... } // from try @ 058b3138 with catch @ 058b3928 */
                    /* catch() { ... } // from try @ 058b3098 with catch @ 058b392c */
            puVar8 = (undefined8 *)(lVar4 + 0x70);
            *puVar8 = uVar5;
                    /* catch() { ... } // from try @ 058b3150 with catch @ 058b3930 */
                    /* catch() { ... } // from try @ 058b30ac with catch @ 058b3934 */
            thunk_FUN_02bb0e9c(puVar8,uVar5);
                    /* catch() { ... } // from try @ 058b3164 with catch @ 058b3938 */
                    /* catch() { ... } // from try @ 058b30c4 with catch @ 058b393c */
            lVar4 = *(long *)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 058b317c with catch @ 058b3940 */
            uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 058b30dc with catch @ 058b3944 */
                    /* catch() { ... } // from try @ 058b3194 with catch @ 058b3948 */
                    /* catch() { ... } // from try @ 058b301c with catch @ 058b394c */
                    /* catch() { ... } // from try @ 058b3794 with catch @ 058b3950 */
            FUN_03fc115c(uVar5,param_1,*(undefined8 *)puVar3,0);
            if (lVar4 != 0) {
              puVar8 = (undefined8 *)(lVar4 + 0x78);
              *puVar8 = uVar5;
              thunk_FUN_02bb0e9c(puVar8,uVar5);
                    /* try { // try from 058b3970 to 059b3973 has its CatchHandler @ 058b3980 */
              if (*(long *)(param_1 + 0x80) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48) = *(undefined8 *)(param_1 + 0x78);
                thunk_FUN_02bb0e9c();
                puVar3 = 
                Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__;
                    /* catch() { ... } // from try @ 058b3970 with catch @ 058b3980 */
                if (*(long *)(param_1 + 0x80) != 0) {
                    /* try { // try from 058b3988 to 059b398f has its CatchHandler @ 058b3a10 */
                    /* try { // try from 058b3990 to 059b39a3 has its CatchHandler @ 058b2b94 */
                  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x50) =
                       *(undefined8 *)(param_1 + 0x88);
                  thunk_FUN_02bb0e9c();
                    /* try { // try from 058b39a4 to 059b39bb has its CatchHandler @ 058b3a00 */
                  FUN_058b3b44(param_1,*(undefined8 *)(param_1 + 0x80));
                  lVar4 = *(long *)(param_1 + 0x88);
                  uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    /* try { // try from 058b39bc to 059b39ef has its CatchHandler @ 058b2b94 */
                  FUN_049b830c(uVar5,param_1,*(undefined8 *)puVar3,0);
                  puVar3 = 
                  Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                  ;
                  if (lVar4 != 0) {
                    puVar8 = (undefined8 *)(lVar4 + 0x70);
                    *puVar8 = uVar5;
                    thunk_FUN_02bb0e9c(puVar8,uVar5);
                    lVar4 = *(long *)(param_1 + 0x88);
                    uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                    /* try { // try from 058b39f0 to 059b39ff has its CatchHandler @ 058b3a00 */
                    /* catch() { ... } // from try @ 058b39a4 with catch @ 058b3a00
                       catch() { ... } // from try @ 058b39f0 with catch @ 058b3a00 */
                    FUN_03fc115c(uVar5,param_1,*(undefined8 *)puVar3,0);
                    /* try { // try from 058b3a04 to 059b3a07 has its CatchHandler @ 058b3a10 */
                    if (lVar4 != 0) {
                    /* try { // try from 058b3a08 to 059b3a13 has its CatchHandler @ 058b2b94 */
                      puVar8 = (undefined8 *)(lVar4 + 0x78);
                      *puVar8 = uVar5;
                    /* catch() { ... } // from try @ 058b3988 with catch @ 058b3a10
                       catch() { ... } // from try @ 058b3a04 with catch @ 058b3a10 */
                      thunk_FUN_02bb0e9c(puVar8,uVar5);
                      if (*(long *)(param_1 + 0x88) != 0) {
                        *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x48) =
                             *(undefined8 *)(param_1 + 0x80);
                        thunk_FUN_02bb0e9c();
                        if (*(long *)(param_1 + 0x98) != 0) {
                          if (*(char *)(*(long *)(param_1 + 0x98) + 0x69) == '\0') {
                            uVar5 = 0;
                          }
                          else {
                            uVar5 = *(undefined8 *)(param_1 + 0x90);
                          }
                          if (*(long *)(param_1 + 0x88) != 0) {
                            *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x50) = uVar5;
                            thunk_FUN_02bb0e9c();
                            FUN_058b3b44(param_1,*(undefined8 *)(param_1 + 0x88));
                            if (*(long *)(param_1 + 0x90) != 0) {
                              lVar4 = FUN_05c89410(*(long *)(param_1 + 0x90),0);
                              puVar3 = 
                              Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>__ctor__
                              ;
                              if ((*plVar7 != 0) && (lVar4 != 0)) {
                                FUN_05c8cb28(lVar4,*(undefined1 *)(*plVar7 + 0x69),0);
                                lVar4 = *(long *)(param_1 + 0x90);
                                uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                FUN_049b830c(uVar5,param_1,*(undefined8 *)puVar3,0);
                                puVar2 = 
                                Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__
                                ;
                                if (lVar4 != 0) {
                                  puVar8 = (undefined8 *)(lVar4 + 0x70);
                                  *puVar8 = uVar5;
                                  thunk_FUN_02bb0e9c(puVar8,uVar5);
                                  lVar4 = *(long *)(param_1 + 0x90);
                                  uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                                  FUN_03fc115c(uVar5,param_1,*(undefined8 *)puVar2,0);
                                  if (lVar4 != 0) {
                                    puVar8 = (undefined8 *)(lVar4 + 0x78);
                                    *puVar8 = uVar5;
                                    thunk_FUN_02bb0e9c(puVar8,uVar5);
                                    if (*(long *)(param_1 + 0x90) != 0) {
                                      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x48) =
                                           *(undefined8 *)(param_1 + 0x88);
                                      thunk_FUN_02bb0e9c();
                                      FUN_058b3b44(param_1,*(undefined8 *)(param_1 + 0x90));
                                      FUN_058b3c74(param_1);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


