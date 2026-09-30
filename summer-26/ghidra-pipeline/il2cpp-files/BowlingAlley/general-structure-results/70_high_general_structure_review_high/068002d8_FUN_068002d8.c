/*
FUNCTION_NAME: FUN_068002d8
ENTRY_POINT: 068002d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_20;frame_or_lifecycle_behavior
*/


undefined8 FUN_068002d8(long param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_58;
  
  if ((DAT_076e0c4a & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
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
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoHoverUpdate__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoSelectUpdate__
                      );
    DAT_076e0c4a = 1;
  }
  local_58 = 0;
  *param_3 = 0;
  thunk_FUN_0333a630(param_3,0);
  if (*(long *)(param_1 + 0x210) == 0) goto LAB_06800bb8;
  uVar7 = FUN_03d1a610(*(long *)(param_1 + 0x210),param_2,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                      );
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x40);
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
  iVar5 = FUN_06c52168(uVar14,uVar4,0);
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
      uVar14 = 0x2d;
LAB_068004e8:
      iVar5 = FUN_06c525ac(uVar14,0);
      if (iVar5 != 0) goto LAB_068004f8;
    }
    else if (param_2 == 0xa0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = 0x20;
      goto LAB_068004e8;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      FUN_03d1b120(*(long *)(param_1 + 0x210),param_2,*(undefined8 *)PTR_DAT_072ab650);
      return 0;
    }
    goto LAB_06800bb8;
  }
LAB_068004f8:
  if (*(long *)(param_1 + 0xb8) == 0) goto LAB_06800bb8;
  uVar7 = FUN_05188410(*(long *)(param_1 + 0xb8),iVar5,
                       *(undefined8 *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar14 = FUN_0518817c(*(long *)(param_1 + 0xb8),iVar5,
                            *(undefined8 *)
                             Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                           );
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                );
      FUN_067f6cd4(uVar8,param_2,param_1,uVar14);
      *param_3 = uVar8;
      thunk_FUN_0333a630(param_3,uVar8);
      lVar9 = *(long *)(param_1 + 0xc0);
      if (lVar9 != 0) {
        uVar14 = *param_3;
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
        ;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *puVar12 = uVar14;
            thunk_FUN_0333a630(puVar12);
          }
          else {
            FUN_041e2c78(lVar9,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
    goto LAB_06800bb8;
  }
  local_58 = 0;
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 == 0) goto LAB_06800bb8;
  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06800bbc;
  plVar10 = *(long **)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_06800bb8;
  uVar7 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
  if ((uVar7 & 1) == 0) {
    lVar9 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,5);
    if (lVar9 == 0) goto LAB_06800bb8;
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) =
           *(undefined8 *)
            Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoSelectUpdate__
      ;
      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x20));
      uVar14 = FUN_06becffc(param_1,0);
      if (1 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28),uVar14);
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) =
               *(undefined8 *)
                Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoHoverUpdate__
          ;
          thunk_FUN_0333a630();
          lVar11 = *(long *)(param_1 + 0xd8);
          if (lVar11 == 0) goto LAB_06800bb8;
          if (*(uint *)(param_1 + 0xe0) < *(uint *)(lVar11 + 0x18)) {
            lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
            if (lVar11 == 0) goto LAB_06800bb8;
            uVar14 = FUN_06becffc(lVar11,0);
            if (3 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x38) = uVar14;
              thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x38),uVar14);
              if (4 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x40) =
                     *(undefined8 *)
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                ;
                thunk_FUN_0333a630();
                uVar14 = FUN_057ab314(lVar9,0);
                lVar9 = *(long *)(param_1 + 0xd8);
                if (lVar9 == 0) goto LAB_06800bb8;
                if (*(uint *)(param_1 + 0xe0) < *(uint *)(lVar9 + 0x18)) {
                  uVar8 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  FUN_06bb3070(uVar14,uVar8,0);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_06800bbc;
  }
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 == 0) goto LAB_06800bb8;
  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06800bbc;
  plVar10 = *(long **)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
  if (plVar10 == (long *)0x0) goto LAB_06800bb8;
  iVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
  if (iVar6 == 0) {
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_91:
    lVar9 = *(long *)(param_1 + 0xd8);
    if (lVar9 == 0) goto LAB_06800bb8;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06800bbc;
    lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (lVar9 == 0) goto LAB_06800bb8;
    thunk_FUN_06bcf4ec(lVar9,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0);
    lVar9 = *(long *)(param_1 + 0xd8);
    if (lVar9 == 0) goto LAB_06800bb8;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06800bbc;
    uVar14 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06c53c54(uVar14,0);
  }
  else {
    lVar9 = *(long *)(param_1 + 0xd8);
    if (lVar9 == 0) goto LAB_06800bb8;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06800bbc;
    plVar10 = *(long **)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_06800bb8;
    iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (iVar6 == 0) goto Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_91;
  }
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) {
LAB_06800bbc:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x110);
    uVar14 = *(undefined8 *)(param_1 + 0xe8);
    uVar8 = *(undefined8 *)(param_1 + 0xf0);
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    uVar15 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_06c5297c(iVar5,uVar4,0,uVar8,uVar14,uVar1,uVar15,&local_58,0);
    if ((uVar7 & 1) == 0) {
      if (*(char *)(param_1 + 0xe4) == '\0') {
        return 0;
      }
      FUN_06803f98(param_1);
      lVar9 = *(long *)(param_1 + 0xd8);
      if (lVar9 == 0) goto LAB_06800bb8;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0xe0)) goto LAB_06800bbc;
      uVar4 = *(undefined4 *)(param_1 + 0x110);
      uVar14 = *(undefined8 *)(param_1 + 0xe8);
      uVar8 = *(undefined8 *)(param_1 + 0xf0);
      uVar1 = *(undefined4 *)(param_1 + 0x114);
      uVar15 = *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0xe0) * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_06c5297c(iVar5,uVar4,0,uVar8,uVar14,uVar1,uVar15,&local_58,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    if (local_58 != 0) {
      FUN_06c51ecc(local_58,*(undefined4 *)(param_1 + 0xe0),0);
      lVar9 = *(long *)(param_1 + 0xb0);
      if (lVar9 != 0) {
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            plVar10 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar10 = local_58;
            thunk_FUN_0333a630(plVar10);
          }
          else {
            FUN_041e2c78(lVar9,local_58,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0xb8) != 0) {
            FUN_0518821c(*(long *)(param_1 + 0xb8),iVar5,local_58,
                         *(undefined8 *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                        );
            lVar9 = local_58;
            uVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                       );
            FUN_067f6cd4(uVar14,param_2,param_1,lVar9);
            *param_3 = uVar14;
            thunk_FUN_0333a630(param_3,uVar14);
            lVar9 = *(long *)(param_1 + 0xc0);
            if (lVar9 != 0) {
              uVar14 = *param_3;
              lVar11 = *(long *)(lVar9 + 0x10);
              lVar13 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
              ;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar12 = uVar14;
                  thunk_FUN_0333a630(puVar12);
                }
                else {
                  FUN_041e2c78(lVar9,uVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(param_1 + 200) != 0) {
                  FUN_0518821c(*(long *)(param_1 + 200),param_2,*param_3,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                              );
                  puVar3 = PTR_DAT_072a2270;
                  lVar9 = *(long *)(param_1 + 0x1d8);
                  if (lVar9 != 0) {
                    lVar11 = *(long *)(lVar9 + 0x10);
                    lVar13 = *(long *)PTR_DAT_072a2270;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar2 = *(uint *)(lVar9 + 0x18);
                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                        *(int *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = iVar5;
                      }
                      else {
                        FUN_04260298(lVar9,iVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar9 = *(long *)(param_1 + 0x1e0);
                      if (lVar9 != 0) {
                        lVar11 = *(long *)(lVar9 + 0x10);
                        lVar13 = *(long *)puVar3;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar11 != 0) {
                          uVar2 = *(uint *)(lVar9 + 0x18);
                          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                            *(int *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = iVar5;
                          }
                          else {
                            FUN_04260298(lVar9,iVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                          }
                          uVar7 = FUN_068308c8(0);
                          if ((uVar7 & 1) != 0) {
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                                        + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            FUN_06801964(param_1);
                          }
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
LAB_06800bb8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


