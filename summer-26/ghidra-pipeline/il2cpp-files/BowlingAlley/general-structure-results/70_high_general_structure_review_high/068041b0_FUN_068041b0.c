/*
FUNCTION_NAME: FUN_068041b0
ENTRY_POINT: 068041b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_18;frame_or_lifecycle_behavior
*/


undefined8 FUN_068041b0(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_48;
  
  if ((DAT_076e0c4b & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072ab650);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a2270);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                      );
    DAT_076e0c4b = 1;
  }
  local_48 = 0;
  *param_3 = 0;
  thunk_FUN_0333a630(param_3,0);
  if (*(long *)(param_1 + 0x210) == 0) goto LAB_0680479c;
  uVar6 = FUN_03d1a610(*(long *)(param_1 + 0x210),param_2,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                      );
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_06c5195c(param_1 + 0x50,0);
  puVar3 = 
  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
  ;
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
              + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)
                        Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                      );
  }
  iVar5 = FUN_06c52168(uVar12,uVar4,0);
  if (iVar5 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  iVar5 = FUN_06c525ac(param_2,0);
  if (iVar5 == 0) {
    if ((param_2 == 0x2011) || (param_2 == 0xad)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar12 = 0x2d;
LAB_06804374:
      iVar5 = FUN_06c525ac(uVar12,0);
      if (iVar5 != 0) goto LAB_06804384;
    }
    else if (param_2 == 0xa0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar12 = 0x20;
      goto LAB_06804374;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      FUN_03d1b120(*(long *)(param_1 + 0x210),param_2,*(undefined8 *)PTR_DAT_072ab650);
      return 0;
    }
  }
  else {
LAB_06804384:
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar6 = FUN_05188410(*(long *)(param_1 + 0xb8),iVar5,
                           *(undefined8 *)
                            Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                          );
      if ((uVar6 & 1) == 0) {
        local_48 = 0;
        uVar4 = 8;
        if ((*(uint *)(param_1 + 0x114) & 4) != 0) {
          uVar4 = 10;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar6 = FUN_06c52794(iVar5,uVar4,&local_48,0);
        puVar3 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        lVar8 = *(long *)(param_1 + 0xb0);
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
          ;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = local_48;
              thunk_FUN_0333a630(puVar10);
            }
            else {
              FUN_041e2c78(lVar8,local_48,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0xb8) != 0) {
              FUN_0518821c(*(long *)(param_1 + 0xb8),iVar5,local_48,
                           *(undefined8 *)
                            Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                          );
              uVar12 = local_48;
              uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                        );
              FUN_067f6cd4(uVar7,param_2,param_1,uVar12);
              *param_3 = uVar7;
              thunk_FUN_0333a630(param_3,uVar7);
              lVar8 = *(long *)(param_1 + 0xc0);
              if (lVar8 != 0) {
                uVar12 = *param_3;
                lVar9 = *(long *)(lVar8 + 0x10);
                lVar11 = *(long *)
                          Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                ;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar10 = uVar12;
                    thunk_FUN_0333a630(puVar10);
                  }
                  else {
                    FUN_041e2c78(lVar8,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (*(long *)(param_1 + 200) != 0) {
                    FUN_0518821c(*(long *)(param_1 + 200),param_2,*param_3,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                                );
                    puVar2 = PTR_DAT_072a2270;
                    lVar8 = *(long *)(param_1 + 0x1d8);
                    if (lVar8 != 0) {
                      lVar9 = *(long *)(lVar8 + 0x10);
                      lVar11 = *(long *)PTR_DAT_072a2270;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                          *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar5;
                        }
                        else {
                          FUN_04260298(lVar8,iVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar8 = *(long *)(param_1 + 0x1e0);
                        if (lVar8 != 0) {
                          lVar9 = *(long *)(lVar8 + 0x10);
                          lVar11 = *(long *)puVar2;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar9 != 0) {
                            uVar1 = *(uint *)(lVar8 + 0x18);
                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                              *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar5;
                            }
                            else {
                              FUN_04260298(lVar8,iVar5,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar6 = FUN_068308c8(0);
                            if ((uVar6 & 1) != 0) {
                              if (*(int *)(*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                                          + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                              }
                              FUN_06801964(param_1);
                            }
                            lVar8 = *(long *)(param_1 + 0x1c8);
                            if (lVar8 != 0) {
                              lVar9 = *(long *)(lVar8 + 0x10);
                              lVar11 = *(long *)puVar3;
                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar8 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    /* try { // try from 0680474c to 069048cb has its CatchHandler @ 0680474c
                       catch() { ... } // from try @ 0680474c with catch @ 0680474c
                       catch() { ... } // from try @ 06804ab0 with catch @ 0680474c
                       catch() { ... } // from try @ 06804b34 with catch @ 0680474c
                       catch() { ... } // from try @ 06804b98 with catch @ 0680474c
                       catch() { ... } // from try @ 06804bd8 with catch @ 0680474c */
                                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                  puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                  *puVar10 = local_48;
                                  thunk_FUN_0333a630(puVar10);
                                }
                                else {
                                  FUN_041e2c78(lVar8,local_48,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                if (*(int *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                                            + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                FUN_06801f3c(param_1);
                                return 1;
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
      else if (*(long *)(param_1 + 0xb8) != 0) {
        uVar12 = FUN_0518817c(*(long *)(param_1 + 0xb8),iVar5,
                              *(undefined8 *)
                               Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                             );
        uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                  );
        FUN_067f6cd4(uVar7,param_2,param_1,uVar12);
        *param_3 = uVar7;
        thunk_FUN_0333a630(param_3,uVar7);
        lVar8 = *(long *)(param_1 + 0xc0);
        if (lVar8 != 0) {
          uVar12 = *param_3;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar11 = *(long *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
          ;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar12;
              thunk_FUN_0333a630(puVar10);
            }
            else {
              FUN_041e2c78(lVar8,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 200) != 0) {
              FUN_0518821c(*(long *)(param_1 + 200),param_2,*param_3,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                          );
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0680479c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


