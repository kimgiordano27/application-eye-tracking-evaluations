/*
FUNCTION_NAME: FUN_027e434c
ENTRY_POINT: 027e434c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_027e434c(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float local_68;
  float fStack_64;
  
  puVar4 = Method_Unity_XR_CoreUtils_Datums_DatumProperty<ClimbSettings,_ClimbSettingsDatum>__ctor__
  ;
  if ((DAT_0378899b & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(System_Collections_ObjectModel_ReadOnlyCollection<ChangelogEntry>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_Escape__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00000D6F_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<ClimbSettings,_ClimbSettingsDatum>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<OVRSceneAnchor>_Dispose__);
    thunk_FUN_00d48444(Method_System_ValueTuple<Type,_string>_GetHashCode__);
    thunk_FUN_00d48444(StringLiteral_163);
    thunk_FUN_00d48444(PTR_DAT_033f6180);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_s16__);
    thunk_FUN_00d48444(Method_System_Net_WebReadStream_SetLength__);
    thunk_FUN_00d48444(System_Collections_Generic_List<SubtitleData>_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__
                      );
    thunk_FUN_00d48444(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1e08);
    DAT_0378899b = 1;
  }
  puVar3 = System_Collections_ObjectModel_ReadOnlyCollection<ChangelogEntry>_TypeInfo;
  puVar2 = System_Collections_Generic_List<SubtitleData>_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_TypeInfo;
  FUN_011d533c(param_5,param_6,0,*(undefined8 *)puVar3);
  FUN_027e404c(param_3,param_5);
  FUN_027e41c0(param_4,param_5);
  FUN_027e2804(param_1,param_5);
  FUN_027e2918(param_2._0_8_,param_5);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar2;
  }
  FUN_0275089c(param_5,**(undefined8 **)(lVar6 + 0xb8),0);
  lVar6 = **(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  plVar7 = (long *)thunk_FUN_00d32ed4(param_5,*(long *)(lVar6 + 0x80) + 0x240);
  puVar4 = Method_System_Text_RegularExpressions_Regex_Escape__;
  if (*plVar7 != 0) {
    FUN_0275089c(*plVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
    lVar6 = FUN_011d3f64(param_5,*(undefined8 *)puVar4);
    if (lVar6 != 0) {
      FUN_0275089c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
      *(undefined4 *)(param_5 + 700) = 1;
      *(undefined4 *)(param_5 + 0x458) = 0;
                    /* try { // try from 027e459c to 028e45a3 has its CatchHandler @ 027e46a0 */
      lVar6 = FUN_011d3f64(param_5,*(undefined8 *)puVar4);
      puVar3 = Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__;
      if (lVar6 != 0) {
                    /* try { // try from 027e45ac to 028e45b3 has its CatchHandler @ 027e469c */
        *(undefined4 *)(lVar6 + 700) = 0;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar1 = PTR_DAT_033f1e08;
        if (lVar6 != 0) {
                    /* try { // try from 027e45cc to 028e45d7 has its CatchHandler @ 027e4694 */
          FUN_0274e248(lVar6,0);
          FUN_0274de78(lVar6,*(undefined8 *)puVar1,0);
                    /* try { // try from 027e45e4 to 028e45f3 has its CatchHandler @ 027e4698 */
                    /* try { // try from 027e45f4 to 028e4677 has its CatchHandler @ 027e42dc */
          FUN_0275089c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
          lVar8 = FUN_011d3f64(param_5,*(undefined8 *)puVar4);
          if (lVar8 != 0) {
            FUN_02751e94(lVar8,lVar6,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar5 = StringLiteral_163;
            puVar1 = 
            Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__
            ;
            if (lVar6 != 0) {
              FUN_0274e248(lVar6,0);
              FUN_0274de78(lVar6,*(undefined8 *)puVar1,0);
              *(long *)(param_5 + 0x408) = lVar6;
              FUN_0275089c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),0);
              lVar8 = *(long *)(param_5 + 0x408);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                    /* try { // try from 027e4678 to 028e467b has its CatchHandler @ 027e4690 */
                    /* try { // try from 027e467c to 028e46b7 has its CatchHandler @ 027e42dc */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 027e4678 with catch @ 027e4690
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 027e45cc with catch @ 027e4694
                        */
              if ((lVar6 != 0) &&
                 (FUN_012c5834(lVar6,param_5,
                               *(undefined8 *)Method_System_Net_WebReadStream_SetLength__,0),
                 lVar8 != 0)) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 027e45e4 with catch @ 027e4698
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 027e45ac with catch @ 027e469c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 027e459c with catch @ 027e46a0
                        */
                FUN_010bfbd4(lVar8,lVar6,0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<LightingSwapper_LightingGroup>_get_Count__
                            );
                    /* try { // try from 027e46b8 to 028e46bb has its CatchHandler @ 027e46e4 */
                    /* try { // try from 027e46bc to 028e46f3 has its CatchHandler @ 027e42dc */
                lVar6 = FUN_011d3f64(param_5,*(undefined8 *)puVar4);
                if (lVar6 != 0) {
                  FUN_02751e94(lVar6,*(undefined8 *)(param_5 + 0x408),0);
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  puVar1 = Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__;
                  if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 027e46b8 with catch @ 027e46e4 */
                    FUN_0274e248(lVar6,0);
                    /* try { // try from 027e46f4 to 028e46fb has its CatchHandler @ 027e4710 */
                    /* try { // try from 027e46fc to 028e4707 has its CatchHandler @ 027e42dc */
                    FUN_0274de78(lVar6,*(undefined8 *)puVar1,0);
                    *(long *)(param_5 + 0x410) = lVar6;
                    /* try { // try from 027e4708 to 028e470f has its CatchHandler @ 027e4710 */
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    puVar3 = 
                    UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_TypeInfo;
                    if (lVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027e46f4 with catch @ 027e4710
                       catch(type#2 @ 00000000) { ... } // from try @ 027e4708 with catch @ 027e4710
                        */
                      FUN_0274e248(lVar6,0);
                      FUN_0274de78(lVar6,*(undefined8 *)puVar3,0);
                      *(long *)(param_5 + 0x418) = lVar6;
                      if (*(long *)(param_5 + 0x410) != 0) {
                        FUN_0275089c(*(long *)(param_5 + 0x410),
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),0);
                        if (*(long *)(param_5 + 0x418) != 0) {
                          FUN_0275089c(*(long *)(param_5 + 0x418),
                                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30),0);
                          if (*(long *)(param_5 + 0x408) != 0) {
                            FUN_02751e94(*(long *)(param_5 + 0x408),*(undefined8 *)(param_5 + 0x410)
                                         ,0);
                            puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
                            if (*(long *)(param_5 + 0x408) != 0) {
                              FUN_02751e94(*(long *)(param_5 + 0x408),
                                           *(undefined8 *)(param_5 + 0x418),0);
                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              if (lVar6 != 0) {
                                FUN_016f27fc(lVar6,param_5,*(undefined8 *)PTR_DAT_033f6180,0);
                                lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                puVar2 = Method_System_ValueTuple<Type,_string>_GetHashCode__;
                                if (lVar8 != 0) {
                                  FUN_016f27fc(lVar8,param_5,
                                               *(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_s16__
                                               ,0);
                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                  puVar2 = 
                                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_00000D6F_PostfixBurstDelegate_var
                                  ;
                                  if (lVar9 != 0) {
                                    FUN_0125d53c(lVar9,0,lVar6,lVar8,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_List_Enumerator<OVRSceneAnchor>_Dispose__
                                                );
                                    *(long *)(param_5 + 0x420) = lVar9;
                                    uVar10 = FUN_011d3f64(param_5,*(undefined8 *)puVar4);
                                    FUN_0276ae64(uVar10,*(undefined8 *)(param_5 + 0x420),0);
                                    local_68 = (float)param_4;
                                    *(float *)(param_5 + 0x45c) = (float)param_3;
                                    *(float *)(param_5 + 0x460) = local_68;
                                    if (local_68 < (float)param_3) {
                                      *(float *)(param_5 + 0x45c) = local_68;
                                      param_3 = param_4;
                                    }
                                    if (param_2._0_4_ <= local_68) {
                                      local_68 = param_2._0_4_;
                                    }
                                    fVar11 = (float)param_1;
                                    fStack_64 = fVar11;
                                    if (fVar11 <= local_68) {
                                      fStack_64 = local_68;
                                      local_68 = fVar11;
                                    }
                                    if (fVar11 < (float)param_3) {
                                      local_68 = (float)param_3;
                                    }
                                    FUN_011d436c(param_5,&local_68,*(undefined8 *)puVar2);
                                    FUN_027e2b68(param_5);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


