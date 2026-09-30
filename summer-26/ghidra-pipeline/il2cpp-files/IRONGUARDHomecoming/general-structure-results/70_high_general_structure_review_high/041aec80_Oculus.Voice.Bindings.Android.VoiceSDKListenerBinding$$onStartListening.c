/*
FUNCTION_NAME: Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding$$onStartListening
ENTRY_POINT: 041aec80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Oculus_Voice_Bindings_Android_VoiceSDKListenerBinding__onStartListening(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x8e8));
  thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_WriteInternal__);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7b8);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7c0);
  thunk_FUN_01efb3a4(PTR_DAT_0458e810);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7c8);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7d0);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7d8);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7e0);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7e8);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7f0);
  thunk_FUN_01efb3a4(PTR_DAT_0458e818);
  thunk_FUN_01efb3a4(PTR_DAT_0458e7f8);
  thunk_FUN_01efb3a4(PTR_DAT_0458e820);
  *(undefined1 *)(unaff_x20 + 0xd4e) = 1;
  puVar2 = Method_System_Delegate_Combine__;
  puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
  plVar5 = (long *)(unaff_x19 + 0x20);
  if (*plVar5 != 0) {
    lVar4 = *(long *)(*plVar5 + 0x440);
    if (lVar4 == 0) goto LAB_041af110;
    lVar4 = *(long *)(lVar4 + 0x418);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                              );
    FUN_02ab2244();
    if (lVar4 == 0) goto LAB_041af110;
    FUN_041bb40c(lVar4,uVar3,0);
    if ((*plVar5 == 0) || (lVar4 = *(long *)(*plVar5 + 0x440), lVar4 == 0)) goto LAB_041af110;
    lVar4 = *(long *)(lVar4 + 0x410);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02df9810();
    if (lVar4 == 0) goto LAB_041af110;
    FUN_022c2214(lVar4,uVar3,0,*(undefined8 *)puVar2);
    *plVar5 = 0;
    thunk_FUN_01f51358(plVar5,0);
  }
  plVar5 = (long *)(unaff_x19 + 0x30);
  if (*plVar5 != 0) {
    lVar4 = *(long *)(*plVar5 + 0x410);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02df9810();
    puVar1 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
    ;
    if (lVar4 != 0) {
      FUN_022c2214(lVar4,uVar3,0,*(undefined8 *)puVar2);
      lVar4 = *(long *)(unaff_x19 + 0x30);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_034f6024();
      puVar2 = PTR_DAT_0458df10;
      if (lVar4 != 0) {
        FUN_04198ed8(lVar4,uVar3,0);
        lVar4 = *(long *)(unaff_x19 + 0x30);
        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8843c();
        puVar2 = PTR_DAT_0458df08;
        if (lVar4 != 0) {
          UnityEngine_Networking_UnityWebRequest__get_error(lVar4,uVar3,0);
          lVar4 = *(long *)(unaff_x19 + 0x30);
          uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_02b87284();
          if (lVar4 != 0) {
            FUN_04198d84(lVar4,uVar3,0);
            lVar4 = *(long *)(unaff_x19 + 0x30);
            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_034f6024();
            if (lVar4 != 0) {
              FUN_04199180(lVar4,uVar3,0);
              if (*plVar5 != 0) {
                lVar4 = *(long *)(*plVar5 + 0x420);
                uVar3 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
                FUN_02b87fb8();
                if (lVar4 != 0) {
                  FUN_041abd04(lVar4,uVar3);
                  if (*plVar5 != 0) {
                    lVar4 = *(long *)(*plVar5 + 0x420);
                    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df40);
                    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                              ();
                    if (lVar4 != 0) {
                      FUN_041abdb4(lVar4,uVar3);
                      if (*plVar5 != 0) {
                        lVar4 = *(long *)(*plVar5 + 0x420);
                        uVar3 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df58);
                        FUN_02b8a294();
                        if (lVar4 != 0) {
                          FUN_041ac124(lVar4,uVar3);
                          if (*plVar5 != 0) {
                            lVar4 = *(long *)(*plVar5 + 0x420);
                            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df48);
                            FUN_02b880d8();
                            if (lVar4 != 0) {
                              FUN_041abf14(lVar4,uVar3);
                              if (*plVar5 != 0) {
                                lVar4 = *(long *)(*plVar5 + 0x420);
                                uVar3 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e760);
                                FUN_02aaffc8();
                                if (lVar4 != 0) {
                                  FUN_041abc1c(lVar4,uVar3);
                                  if (*plVar5 != 0) {
                                    FUN_0422f8ec(*plVar5,0);
                                    if (*plVar5 != 0) {
                                      FUN_0419dc08(*plVar5,0);
                                      *(undefined8 *)(unaff_x19 + 0x30) = 0;
                                      thunk_FUN_01f51358(plVar5,0);
                                      plVar5 = (long *)(unaff_x19 + 0x28);
                                      if (*plVar5 != 0) {
                                        FUN_0422f8ec(*plVar5,0);
                                        *plVar5 = 0;
                                        thunk_FUN_01f51358(plVar5,0);
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
LAB_041af110:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


