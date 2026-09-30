/*
FUNCTION_NAME: FUN_041aebf0
ENTRY_POINT: 041aebf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_041aebf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_04840d4e & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458df40);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458e760);
    thunk_FUN_01efb3a4(PTR_DAT_0458df48);
    thunk_FUN_01efb3a4(PTR_DAT_0458df08);
    thunk_FUN_01efb3a4(PTR_DAT_0458df50);
    thunk_FUN_01efb3a4(PTR_DAT_0458df10);
    thunk_FUN_01efb3a4(PTR_DAT_0458df58);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_System_Delegate_Combine__);
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
    DAT_04840d4e = 1;
  }
  puVar3 = PTR_DAT_0458e818;
  puVar2 = Method_System_Delegate_Combine__;
  puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
  plVar6 = (long *)(param_1 + 0x20);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x440);
    if (lVar5 == 0) goto LAB_041af110;
    lVar5 = *(long *)(lVar5 + 0x418);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                              );
    FUN_02ab2244(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_041af110;
    FUN_041bb40c(lVar5,uVar4,0);
    puVar3 = PTR_DAT_0458e820;
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x440), lVar5 == 0)) goto LAB_041af110;
    lVar5 = *(long *)(lVar5 + 0x410);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02df9810(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_041af110;
    FUN_022c2214(lVar5,uVar4,0,*(undefined8 *)puVar2);
    *plVar6 = 0;
    thunk_FUN_01f51358(plVar6,0);
  }
  puVar3 = PTR_DAT_0458e810;
  plVar6 = (long *)(param_1 + 0x30);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x410);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02df9810(uVar4,param_1,*(undefined8 *)puVar3,0);
    puVar3 = PTR_DAT_0458e7e0;
    puVar1 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
    ;
    if (lVar5 != 0) {
      FUN_022c2214(lVar5,uVar4,0,*(undefined8 *)puVar2);
      lVar5 = *(long *)(param_1 + 0x30);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_034f6024(uVar4,param_1,*(undefined8 *)puVar3,0);
      puVar3 = PTR_DAT_0458e7f0;
      puVar2 = PTR_DAT_0458df10;
      if (lVar5 != 0) {
        FUN_04198ed8(lVar5,uVar4,0);
        lVar5 = *(long *)(param_1 + 0x30);
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8843c(uVar4,param_1,*(undefined8 *)puVar3,0);
        puVar3 = PTR_DAT_0458e7d8;
        puVar2 = PTR_DAT_0458df08;
        if (lVar5 != 0) {
          UnityEngine_Networking_UnityWebRequest__get_error(lVar5,uVar4,0);
          lVar5 = *(long *)(param_1 + 0x30);
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_02b87284(uVar4,param_1,*(undefined8 *)puVar3,0);
          puVar2 = PTR_DAT_0458e7f8;
          if (lVar5 != 0) {
            FUN_04198d84(lVar5,uVar4,0);
            lVar5 = *(long *)(param_1 + 0x30);
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_034f6024(uVar4,param_1,*(undefined8 *)puVar2,0);
            if (lVar5 != 0) {
              FUN_04199180(lVar5,uVar4,0);
              puVar1 = PTR_DAT_0458e7b8;
              if (*plVar6 != 0) {
                lVar5 = *(long *)(*plVar6 + 0x420);
                uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
                FUN_02b87fb8(uVar4,param_1,*(undefined8 *)puVar1,0);
                if (lVar5 != 0) {
                  FUN_041abd04(lVar5,uVar4);
                  puVar1 = PTR_DAT_0458e7c8;
                  if (*plVar6 != 0) {
                    lVar5 = *(long *)(*plVar6 + 0x420);
                    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df40);
                    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                              (uVar4,param_1,*(undefined8 *)puVar1,0);
                    if (lVar5 != 0) {
                      FUN_041abdb4(lVar5,uVar4);
                      puVar1 = PTR_DAT_0458e7d0;
                      if (*plVar6 != 0) {
                        lVar5 = *(long *)(*plVar6 + 0x420);
                        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df58);
                        FUN_02b8a294(uVar4,param_1,*(undefined8 *)puVar1,0);
                        if (lVar5 != 0) {
                          FUN_041ac124(lVar5,uVar4);
                          puVar1 = PTR_DAT_0458e7e8;
                          if (*plVar6 != 0) {
                            lVar5 = *(long *)(*plVar6 + 0x420);
                            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df48);
                            FUN_02b880d8(uVar4,param_1,*(undefined8 *)puVar1,0);
                            if (lVar5 != 0) {
                              FUN_041abf14(lVar5,uVar4);
                              puVar1 = PTR_DAT_0458e7c0;
                              if (*plVar6 != 0) {
                                lVar5 = *(long *)(*plVar6 + 0x420);
                                uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e760);
                                FUN_02aaffc8(uVar4,param_1,*(undefined8 *)puVar1,0);
                                if (lVar5 != 0) {
                                  FUN_041abc1c(lVar5,uVar4);
                                  if (*plVar6 != 0) {
                                    FUN_0422f8ec(*plVar6,0);
                                    if (*plVar6 != 0) {
                                      FUN_0419dc08(*plVar6,0);
                                      *(undefined8 *)(param_1 + 0x30) = 0;
                                      thunk_FUN_01f51358(plVar6,0);
                                      plVar6 = (long *)(param_1 + 0x28);
                                      if (*plVar6 != 0) {
                                        FUN_0422f8ec(*plVar6,0);
                                        *plVar6 = 0;
                                        thunk_FUN_01f51358(plVar6,0);
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


