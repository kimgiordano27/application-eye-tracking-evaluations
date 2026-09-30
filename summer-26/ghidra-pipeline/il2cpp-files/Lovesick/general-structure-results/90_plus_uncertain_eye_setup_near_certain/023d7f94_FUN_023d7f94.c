/*
FUNCTION_NAME: FUN_023d7f94
ENTRY_POINT: 023d7f94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023d7f94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  puVar1 = StringLiteral_8304;
  puVar2 = StringLiteral_5008;
  if ((DAT_03782124 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8304);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<HandTriggerAreaEvents>_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Matrix4x4>_Add__);
    thunk_FUN_00d48444(System_TimeZoneInfo_TransitionTime_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0a08);
    thunk_FUN_00d48444(StringLiteral_9535);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_JsonConverter<__Il2CppFullySharedGenericType>_ReadJson__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CatchAssistData>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_5008);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                      );
    DAT_03782124 = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  uVar3 = FUN_010cb944(param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  FUN_010c2c5c(param_1,&local_38,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x98) = local_38;
  puVar2 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x5e8))
              (plVar4,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28),
               *(undefined8 *)(*plVar4 + 0x5f0));
    lVar6 = *(long *)(param_1 + 0x70);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar5 != 0) &&
       (FUN_012d1810(lVar5,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<HandTriggerAreaEvents>_Remove__,0),
       puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo, lVar6 != 0)) {
      *(long *)(lVar6 + 0x68) = lVar5;
      lVar6 = *(long *)(param_1 + 0x70);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar5 != 0) &&
         (FUN_011c181c(lVar5,param_1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                       ,0), lVar6 != 0)) {
        *(long *)(lVar6 + 0x70) = lVar5;
        if (*(long *)(param_1 + 0x70) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x48) = *(undefined8 *)(param_1 + 0x78);
          FUN_023d8330(param_1);
          lVar6 = *(long *)(param_1 + 0x78);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if ((lVar5 != 0) &&
             (FUN_012d1810(lVar5,param_1,
                           *(undefined8 *)Method_System_Collections_Generic_List<Matrix4x4>_Add__,0)
             , lVar6 != 0)) {
            *(long *)(lVar6 + 0x68) = lVar5;
            lVar6 = *(long *)(param_1 + 0x78);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if ((lVar5 != 0) &&
               (FUN_011c181c(lVar5,param_1,
                             *(undefined8 *)System_TimeZoneInfo_TransitionTime_TypeInfo,0),
               lVar6 != 0)) {
              *(long *)(lVar6 + 0x70) = lVar5;
              lVar5 = *(long *)(param_1 + 0x78);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(param_1 + 0x70);
                *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_1 + 0x80);
                FUN_023d8330(param_1);
                lVar6 = *(long *)(param_1 + 0x80);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar5 != 0) &&
                   (FUN_012d1810(lVar5,param_1,*(undefined8 *)PTR_DAT_033f0a08,0), lVar6 != 0)) {
                  *(long *)(lVar6 + 0x68) = lVar5;
                  lVar6 = *(long *)(param_1 + 0x80);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if ((lVar5 != 0) &&
                     (FUN_011c181c(lVar5,param_1,*(undefined8 *)StringLiteral_9535,0), lVar6 != 0))
                  {
                    *(long *)(lVar6 + 0x70) = lVar5;
                    lVar5 = *(long *)(param_1 + 0x80);
                    if (lVar5 != 0) {
                      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(param_1 + 0x78);
                      if (*(long *)(param_1 + 0x90) != 0) {
                        if (*(char *)(*(long *)(param_1 + 0x90) + 0x61) == '\0') {
                          uVar3 = 0;
                        }
                        else {
                          uVar3 = *(undefined8 *)(param_1 + 0x88);
                        }
                        *(undefined8 *)(lVar5 + 0x48) = uVar3;
                        FUN_023d8330(param_1);
                        if (*(long *)(param_1 + 0x88) != 0) {
                          lVar5 = FUN_0268fd4c(*(long *)(param_1 + 0x88),0);
                          if ((*(long *)(param_1 + 0x90) != 0) && (lVar5 != 0)) {
                            FUN_0268ace8(lVar5,*(undefined1 *)(*(long *)(param_1 + 0x90) + 0x61),0);
                            lVar6 = *(long *)(param_1 + 0x88);
                            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if ((lVar5 != 0) &&
                               (FUN_012d1810(lVar5,param_1,
                                             *(undefined8 *)
                                              Method_Newtonsoft_Json_JsonConverter<__Il2CppFullySharedGenericType>_ReadJson__
                                             ,0), lVar6 != 0)) {
                              *(long *)(lVar6 + 0x68) = lVar5;
                              lVar6 = *(long *)(param_1 + 0x88);
                              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                              if ((lVar5 != 0) &&
                                 (FUN_011c181c(lVar5,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<CatchAssistData>_get_Count__
                                               ,0), lVar6 != 0)) {
                                *(long *)(lVar6 + 0x70) = lVar5;
                                if (*(long *)(param_1 + 0x88) != 0) {
                                  *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x40) =
                                       *(undefined8 *)(param_1 + 0x80);
                                  FUN_023d8330(param_1);
                                  FUN_023d8434(param_1);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


