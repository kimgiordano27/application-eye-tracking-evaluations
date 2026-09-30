/*
FUNCTION_NAME: FUN_020000fc
ENTRY_POINT: 020000fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 170
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_020000fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = Method_UnityEngine_Component_GetComponentInParent<Canvas>__;
  if ((DAT_03780867 & 1) == 0) {
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1220);
    thunk_FUN_00d48444(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<Canvas>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_get_Item__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<MB3_MeshCombinerSingle_BoneAndBindpose>_Dispose__
                      );
    DAT_03780867 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar1 = PTR_DAT_033f1220;
  if (lVar3 != 0) {
    FUN_02000418();
    **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_01747a0c(lVar3,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = 
      Field_<PrivateImplementationDetails>_4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2
      ;
      if (lVar3 != 0) {
        FUN_01747a0c(lVar3,0);
        thunk_FUN_00d8e500();
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar3;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = 
        Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__;
        if (lVar3 != 0) {
          FUN_020385e0(lVar3,*(undefined8 *)
                              Method_System_Collections_Generic_HashSet_Enumerator<MB3_MeshCombinerSingle_BoneAndBindpose>_Dispose__
                       ,*(undefined8 *)
                         Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_get_Item__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar3;
          lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,3);
          auVar4 = FUN_017689e8(0);
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined1 (*) [16])(lVar3 + 0x20) = auVar4;
              auVar4 = FUN_017689e8(0);
              if (1 < *(uint *)(lVar3 + 0x18)) {
                *(undefined1 (*) [16])(lVar3 + 0x30) = auVar4;
                auVar4 = FUN_017689e8(0);
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined1 (*) [16])(lVar3 + 0x40) = auVar4;
                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = lVar3;
                  lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,3);
                  auVar4 = FUN_017689e8(0);
                  if (lVar3 == 0) goto LAB_02000414;
                  if (*(int *)(lVar3 + 0x18) != 0) {
                    *(undefined1 (*) [16])(lVar3 + 0x20) = auVar4;
                    auVar4 = FUN_017689e8(0);
                    if (1 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined1 (*) [16])(lVar3 + 0x30) = auVar4;
                      auVar4 = FUN_017689e8(0);
                      if (2 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined1 (*) [16])(lVar3 + 0x40) = auVar4;
                        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = lVar3;
                        lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,3);
                        auVar4 = FUN_017689e8(0);
                        if (lVar3 == 0) goto LAB_02000414;
                        if (*(int *)(lVar3 + 0x18) != 0) {
                          *(undefined1 (*) [16])(lVar3 + 0x20) = auVar4;
                          auVar4 = FUN_017689e8(0);
                          if (1 < *(uint *)(lVar3 + 0x18)) {
                            *(undefined1 (*) [16])(lVar3 + 0x30) = auVar4;
                            auVar4 = FUN_017689e8(0);
                            if (2 < *(uint *)(lVar3 + 0x18)) {
                              *(undefined1 (*) [16])(lVar3 + 0x40) = auVar4;
                              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = lVar3;
                              lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,3);
                              auVar4 = FUN_017689e8(0);
                              if (lVar3 == 0) goto LAB_02000414;
                              if (*(int *)(lVar3 + 0x18) != 0) {
                                *(undefined1 (*) [16])(lVar3 + 0x20) = auVar4;
                                auVar4 = FUN_017689e8(0);
                                if (1 < *(uint *)(lVar3 + 0x18)) {
                                  *(undefined1 (*) [16])(lVar3 + 0x30) = auVar4;
                                  auVar4 = FUN_017689e8(0);
                                  if (2 < *(uint *)(lVar3 + 0x18)) {
                                    *(undefined1 (*) [16])(lVar3 + 0x40) = auVar4;
                                    puVar1 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
                                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = lVar3;
                                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    if (lVar3 != 0) {
                                      FUN_017b46ec(lVar3,0);
                                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = lVar3;
                                      return;
                                    }
                                    goto LAB_02000414;
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
            FUN_00da5194();
          }
        }
      }
    }
  }
LAB_02000414:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


