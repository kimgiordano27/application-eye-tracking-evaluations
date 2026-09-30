/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$add_sceneLoaded
ENTRY_POINT: 06afcee0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void UnityEngine_SceneManagement_SceneManager__add_sceneLoaded
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  
  if (param_4 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x58);
    lVar4 = FUN_06be99dc(param_4,0);
    if (lVar4 != 0) {
      FUN_06bf4868(lVar4,0);
      FUN_066146ac(0);
      puVar3 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__;
      if (lVar9 != 0) {
        FUN_04ad6258(lVar9,*(undefined8 *)
                            Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__);
        puVar1 = PTR_DAT_0727ad58;
        lVar4 = *(long *)(unaff_x19 + 0x70);
        lVar9 = *(long *)(unaff_x19 + 0x58);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ad58);
        FUN_051052b0();
        puVar2 = PTR_DAT_0727ad68;
        if (lVar9 != 0) {
          uVar5 = FUN_04b1f2f0(lVar9,uVar5,*(undefined8 *)PTR_DAT_0727ad68);
          if (lVar4 != 0) {
            FUN_06a5b940(lVar4,uVar5,0);
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              lVar9 = *(long *)(unaff_x19 + 0x60);
              lVar4 = FUN_06be99dc(*(long *)(unaff_x19 + 0x20),0);
              if ((lVar4 != 0) && (FUN_06bf2fbc(lVar4,0), lVar9 != 0)) {
                FUN_04b1ca04(lVar9,*(undefined8 *)
                                    Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                            );
                lVar4 = *(long *)(unaff_x19 + 0x70);
                lVar9 = *(long *)(unaff_x19 + 0x60);
                uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_UnityEngine_XR_ARFoundation_VisualScripting_TrackableManagerListener<ARTrackedObjectManager>__ctor__
                                          );
                FUN_0501fc88();
                if ((lVar9 != 0) &&
                   (uVar5 = FUN_04b1cb08(lVar9,uVar5,
                                         *(undefined8 *)
                                          Method_UnityEngine_XR_ARFoundation_VisualScripting_TrackablesChangedEventUnit<ARAnchorManager,_XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor,_ARAnchorsChangedEventArgs,_ARAnchorManagerListener>__ctor__
                                        ), lVar4 != 0)) {
                  FUN_06a5b940(lVar4,uVar5,0);
                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                     (lVar4 = FUN_06be99dc(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
                    uVar11 = FUN_06bf4e88(lVar4,0);
                    lVar4 = *(long *)(unaff_x19 + 0x68);
                    *(undefined4 *)(unaff_x19 + 0xe0) = uVar11;
                    *(undefined4 *)(unaff_x19 + 0xe4) = param_2;
                    *(undefined4 *)(unaff_x19 + 0xe8) = param_3;
                    FUN_066146ac(0);
                    if (lVar4 != 0) {
                      FUN_04ad6258(lVar4,*(undefined8 *)puVar3);
                      lVar4 = *(long *)(unaff_x19 + 0x68);
                      lVar9 = *(long *)(unaff_x19 + 0x70);
                      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                      FUN_051052b0();
                      if ((lVar4 != 0) &&
                         (uVar5 = FUN_04b1f2f0(lVar4,uVar5,*(undefined8 *)puVar2), lVar9 != 0)) {
                        FUN_06a5b940(lVar9,uVar5,0);
                        puVar3 = PTR_DAT_0727b600;
                        lVar4 = *(long *)(unaff_x19 + 0x70);
                        if (*(int *)(*(long *)PTR_DAT_0727b600 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        if (DAT_076ce050 == '\0') {
                          thunk_FUN_032e1da0(PTR_DAT_0727b600);
                          DAT_076ce050 = '\x01';
                        }
                        lVar9 = *(long *)puVar3;
                        if (*(int *)(lVar9 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar9 = *(long *)puVar3;
                        }
                        plVar10 = (long *)**(undefined8 **)(lVar9 + 0xb8);
                        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b608);
                        FUN_0501d53c();
                        if (plVar10 != (long *)0x0) {
                          lVar9 = *plVar10;
                          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                          if (uVar7 != 0) {
                            piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0727b610) {
                                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                                goto LAB_06afd198;
                              }
                              uVar7 = uVar7 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_032937ac(plVar10,*(long *)PTR_DAT_0727b610,1);
LAB_06afd198:
                          uVar5 = (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
                          if (lVar4 != 0) {
                            FUN_06a5b940(lVar4,uVar5,0);
                            if (*(long *)(unaff_x19 + 0xf0) != 0) {
                              FUN_04b19bd4(*(long *)(unaff_x19 + 0xf0),0,
                                           *(undefined8 *)
                                            Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                                          );
                              lVar4 = *(long *)(unaff_x19 + 0x70);
                              lVar9 = *(long *)(unaff_x19 + 0xf0);
                              uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07284580);
                              FUN_0501b95c();
                              if ((lVar9 != 0) &&
                                 (uVar5 = FUN_04b19e18(lVar9,uVar5,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__
                                                  ), lVar4 != 0)) {
                                FUN_06a5b940(lVar4,uVar5,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


