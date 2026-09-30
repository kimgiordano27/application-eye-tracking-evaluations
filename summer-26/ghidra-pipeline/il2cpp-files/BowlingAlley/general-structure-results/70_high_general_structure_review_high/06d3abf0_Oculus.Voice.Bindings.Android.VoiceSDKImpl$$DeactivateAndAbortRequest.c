/*
FUNCTION_NAME: Oculus.Voice.Bindings.Android.VoiceSDKImpl$$DeactivateAndAbortRequest
ENTRY_POINT: 06d3abf0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Voice_Bindings_Android_VoiceSDKImpl__DeactivateAndAbortRequest(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined4 uVar13;
  undefined8 in_stack_00000008;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x4b0));
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<MemCopyJob>__);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeArrayDisposeJob>__);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeListDisposeJob>__);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeQueueDisposeJob>__);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeReferenceDisposeJob>__);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<UnsafeDisposeJob>__);
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<UnsafeParallelHashMapDataDisposeJob>__
                    );
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<UnsafeParallelHashMapDisposeJob>__
                    );
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<ARCoreImageDatabase_AddImageJob>__
                    );
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<ARPointCloudManager_PointCloudRaycastCollectResultsJob>__
                    );
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__
                    );
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<MutableRuntimeReferenceImageLibraryExtensions_DeallocateJob>__
                    );
  thunk_FUN_032e1da0(PTR_DAT_072845a8);
  thunk_FUN_032e1da0(System_Reflection_SignatureArrayType_TypeInfo);
  thunk_FUN_032e1da0(PTR_DAT_072846f8);
  thunk_FUN_032e1da0(Method_System_Linq_Enumerable_ToList<Glyph>__);
  thunk_FUN_032e1da0(PTR_DAT_072800b8);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__);
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJobList>__)
  ;
  thunk_FUN_032e1da0(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<OVRScenePlane_GetBoundaryJob>__);
  thunk_FUN_032e1da0(
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<OVRScenePlane_GetBoundaryLengthJob>__
                    );
  thunk_FUN_032e1da0(Method_System_Collections_Hashtable_Remove__);
  *(undefined1 *)(unaff_x22 + 0xa4b) = 1;
  in_stack_00000008 = 0;
  *(undefined4 *)(unaff_x19 + 0x3c8) = 0xffffffff;
  puVar5 = PTR_DAT_072845a8;
  lVar6 = *unaff_x20;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *unaff_x20;
  }
  uVar13 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x28);
  *(undefined4 *)(unaff_x19 + 0x3f0) = 0x41900000;
  *(undefined4 *)(unaff_x19 + 0x3e0) = uVar13;
  puVar2 = PTR_DAT_072834b0;
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar5;
  }
  puVar10 = *(undefined8 **)(lVar6 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x3f4) = *puVar10;
  *(undefined8 *)(unaff_x19 + 0x408) = puVar10[1];
  puVar3 = PTR_DAT_072800b8;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar2;
  }
  *(undefined4 *)(unaff_x19 + 0x448) = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06dade10();
  FUN_06db05b0();
  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_06dade10(lVar6,0);
  if (lVar6 != 0) {
    FUN_06dadae4(lVar6,*(undefined8 *)
                        Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJobList>__
                 ,0);
    plVar1 = (long *)(unaff_x19 + 0x430);
    *(long *)(unaff_x19 + 0x430) = lVar6;
    thunk_FUN_0333a630(plVar1,lVar6);
    if (*(long *)(unaff_x19 + 0x430) != 0) {
      FUN_06db05b0(*(long *)(unaff_x19 + 0x430),
                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38),0);
      in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x378);
      FUN_06db7bd4(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x430),0);
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_06dade10(lVar6,0);
      if (lVar6 != 0) {
        FUN_06dadae4(lVar6,*(undefined8 *)
                            Method_Unity_Jobs_IJobExtensions_EarlyJobInit<OVRScenePlane_GetBoundaryJob>__
                     ,0);
        plVar9 = (long *)(unaff_x19 + 0x410);
        *(long *)(unaff_x19 + 0x410) = lVar6;
        thunk_FUN_0333a630(plVar9,lVar6);
        puVar2 = PTR_DAT_07283ae0;
        if (*(long *)(unaff_x19 + 0x410) != 0) {
          FUN_06db05b0(*(long *)(unaff_x19 + 0x410),
                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
          lVar6 = *(long *)(unaff_x19 + 0x410);
          uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
          FUN_05545524();
          if (lVar6 != 0) {
            FUN_0394cc9c(lVar6,uVar7,0,*(undefined8 *)PTR_DAT_07283ad8);
            puVar2 = PTR_DAT_07281e38;
            if (*plVar9 != 0) {
              *(undefined4 *)(*plVar9 + 0x2b4) = 1;
              lVar6 = *(long *)(unaff_x19 + 0x430);
              uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
              FUN_05545524();
              puVar2 = PTR_DAT_07283ac8;
              if (lVar6 != 0) {
                FUN_0394cc9c(lVar6,uVar7,0,*(undefined8 *)PTR_DAT_07281e00);
                lVar6 = *(long *)(unaff_x19 + 0x430);
                uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                FUN_05545524();
                if (lVar6 != 0) {
                  FUN_0394cc9c(lVar6,uVar7,0,*(undefined8 *)PTR_DAT_07283ac0);
                  puVar2 = PTR_DAT_07283ae0;
                  if (*plVar1 != 0) {
                    FUN_06db4eb8(*plVar1,*plVar9,0);
                    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                    FUN_06dade10(lVar6,0);
                    puVar3 = PTR_DAT_07283ad8;
                    if (lVar6 != 0) {
                      FUN_06dadae4(lVar6,*(undefined8 *)Method_System_Collections_Hashtable_Remove__
                                   ,0);
                      plVar8 = (long *)(unaff_x19 + 0x428);
                      *(long *)(unaff_x19 + 0x428) = lVar6;
                      thunk_FUN_0333a630(plVar8,lVar6);
                      if (*(long *)(unaff_x19 + 0x428) != 0) {
                        FUN_06db4e5c(*(long *)(unaff_x19 + 0x428),1,0);
                        lVar6 = *(long *)(unaff_x19 + 0x428);
                        uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                        FUN_05545524();
                        if (lVar6 != 0) {
                          FUN_0394cc9c(lVar6,uVar7,0,*(undefined8 *)puVar3);
                          if (*plVar8 != 0) {
                            FUN_06db05b0(*plVar8,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar5 + 0xb8) + 0x40),0);
                            if (*plVar8 != 0) {
                              FUN_06daa8b8(*plVar8,2,0);
                              puVar3 = System_Reflection_SignatureArrayType_TypeInfo;
                              puVar2 = PTR_DAT_0727ad50;
                              if (*plVar9 != 0) {
                                FUN_06db4eb8(*plVar9,*(undefined8 *)(unaff_x19 + 0x428),0);
                                FUN_06d3b754();
                                uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                FUN_05020914();
                                lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                FUN_06d3fc58(0,0x4f000000,lVar6,uVar7,0,0);
                                if (lVar6 != 0) {
                                  FUN_06daa0b8(lVar6,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__
                                               ,0);
                                  plVar9 = (long *)(unaff_x19 + 0x418);
                                  *(long *)(unaff_x19 + 0x418) = lVar6;
                                  thunk_FUN_0333a630(plVar9,lVar6);
                                  if (*(long *)(unaff_x19 + 0x418) != 0) {
                                    FUN_06db05b0(*(long *)(unaff_x19 + 0x418),
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)puVar5 + 0xb8) + 0x60),0);
                                    puVar4 = PTR_DAT_072846f8;
                                    if (*plVar9 != 0) {
                                      plVar8 = (long *)FUN_06da6244(*plVar9,0);
                                      uVar7 = FUN_04a04410(1,*(undefined8 *)puVar4);
                                      puVar4 = PTR_DAT_072814d8;
                                      if (plVar8 != (long *)0x0) {
                                        lVar6 = *plVar8;
                                        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                        if (uVar11 != 0) {
                                          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_072814d8
                                               ) {
                                              puVar10 = (undefined8 *)
                                                        (lVar6 + (long)(*piVar12 + 0x15) * 0x10 +
                                                        0x138);
                                              goto LAB_06d3b1e8;
                                            }
                                            uVar11 = uVar11 - 1;
                                            piVar12 = piVar12 + 4;
                                          } while (uVar11 != 0);
                                        }
                                        puVar10 = (undefined8 *)
                                                  FUN_032937ac(plVar8,*(long *)PTR_DAT_072814d8,0x15
                                                              );
LAB_06d3b1e8:
                                        (*(code *)*puVar10)(plVar8,uVar7,puVar10[1]);
                                        in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x378);
                                        FUN_06db7bd4(&stack0x00000008,
                                                     *(undefined8 *)(unaff_x19 + 0x418),0);
                                        uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                        FUN_05020914();
                                        lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                        FUN_06d3fc58(0,0x4f000000,lVar6,uVar7,1,0);
                                        if (lVar6 != 0) {
                                          FUN_06daa0b8(lVar6,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<OVRScenePlane_GetBoundaryLengthJob>__
                                                  ,0);
                                          plVar8 = (long *)(unaff_x19 + 0x420);
                                          *(long *)(unaff_x19 + 0x420) = lVar6;
                                          thunk_FUN_0333a630(plVar8,lVar6);
                                          puVar2 = PTR_DAT_0727ee10;
                                          if ((*(long *)(unaff_x19 + 0x418) != 0) &&
                                             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x418) + 0x3d0
                                                               ), lVar6 != 0)) {
                                            lVar6 = *(long *)(lVar6 + 0x480);
                                            uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                        PTR_DAT_0727ee10);
                                            FUN_0589e07c();
                                            puVar3 = 
                                            Method_Unity_Jobs_IJobExtensions_EarlyJobInit<FloatTweenJob>__
                                            ;
                                            if (lVar6 != 0) {
                                              FUN_04c095ac(lVar6,uVar7,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_Jobs_IJobExtensions_EarlyJobInit<FloatTweenJob>__
                                                  );
                                              if ((*plVar8 != 0) &&
                                                 (lVar6 = *(long *)(*plVar8 + 0x3d0), lVar6 != 0)) {
                                                lVar6 = *(long *)(lVar6 + 0x480);
                                                uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                                                FUN_0589e07c();
                                                if (lVar6 != 0) {
                                                  FUN_04c095ac(lVar6,uVar7,*(undefined8 *)puVar3);
                                                  if (*plVar9 != 0) {
                                                    lVar6 = *(long *)(*plVar9 + 0x3d8);
                                                    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0589e07c();
                                                    if ((lVar6 != 0) &&
                                                       (lVar6 = *(long *)(lVar6 + 0x4a0), lVar6 != 0
                                                       )) {
                                                      FUN_06ca5bd8(lVar6,uVar7,0);
                                                      if (*plVar9 != 0) {
                                                        lVar6 = *(long *)(*plVar9 + 0x3e0);
                                                        uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_0589e07c();
                                                        if ((lVar6 != 0) &&
                                                           (lVar6 = *(long *)(lVar6 + 0x4a0),
                                                           lVar6 != 0)) {
                                                          FUN_06ca5bd8(lVar6,uVar7,0);
                                                          if (*plVar8 != 0) {
                                                            lVar6 = *(long *)(*plVar8 + 0x3d8);
                                                            uVar7 = thunk_FUN_032a56a0(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_0589e07c();
                                                            if ((lVar6 != 0) &&
                                                               (lVar6 = *(long *)(lVar6 + 0x4a0),
                                                               lVar6 != 0)) {
                                                              FUN_06ca5bd8(lVar6,uVar7,0);
                                                              if (*plVar8 != 0) {
                                                                lVar6 = *(long *)(*plVar8 + 0x3e0);
                                                                uVar7 = thunk_FUN_032a56a0(*(
                                                  undefined8 *)puVar2);
                                                  FUN_0589e07c();
                                                  if ((lVar6 != 0) &&
                                                     (lVar6 = *(long *)(lVar6 + 0x4a0), lVar6 != 0))
                                                  {
                                                    FUN_06ca5bd8(lVar6,uVar7,0);
                                                    if (*plVar8 != 0) {
                                                      FUN_06db05b0(*plVar8,*(undefined8 *)
                                                                            (*(long *)(*(long *)
                                                  puVar5 + 0xb8) + 0x68),0);
                                                  if (*plVar8 != 0) {
                                                    plVar9 = (long *)FUN_06da6244(*plVar8,0);
                                                    uVar7 = FUN_04a04410(1,*(undefined8 *)
                                                                            PTR_DAT_072846f8);
                                                    puVar2 = PTR_DAT_07283ae0;
                                                    puVar5 = PTR_DAT_07283ad8;
                                                    if (plVar9 != (long *)0x0) {
                                                      lVar6 = *plVar9;
                                                      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                                      if (uVar11 != 0) {
                                                        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) +
                                                                         8);
                                                        do {
                                                          if (*(long *)(piVar12 + -2) ==
                                                              *(long *)puVar4) {
                                                            puVar10 = (undefined8 *)
                                                                      (lVar6 + (long)(*piVar12 +
                                                                                     0x15) * 0x10 +
                                                                      0x138);
                                                            goto LAB_06d3b4d0;
                                                          }
                                                          uVar11 = uVar11 - 1;
                                                          piVar12 = piVar12 + 4;
                                                        } while (uVar11 != 0);
                                                      }
                                                      puVar10 = (undefined8 *)
                                                                FUN_032937ac(plVar9,*(long *)puVar4,
                                                                             0x15);
LAB_06d3b4d0:
                                                      (*(code *)*puVar10)(plVar9,uVar7,puVar10[1]);
                                                      puVar3 = 
                                                  UnityEngine_Timeline_SignalEmitter_TypeInfo;
                                                  if (*plVar1 != 0) {
                                                    FUN_06db4eb8(*plVar1,*(undefined8 *)
                                                                          (unaff_x19 + 0x420),0);
                                                    FUN_06d3a27c();
                                                    thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                                    FUN_05545524();
                                                    FUN_0394cc9c();
                                                    lVar6 = *(long *)(unaff_x19 + 0x420);
                                                    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05545524();
                                                    if (lVar6 != 0) {
                                                      FUN_0394cc9c(lVar6,uVar7,0,
                                                                   *(undefined8 *)puVar5);
                                                      lVar6 = *(long *)(unaff_x19 + 0x418);
                                                      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_05545524();
                                                      if (lVar6 != 0) {
                                                        FUN_0394cc9c(lVar6,uVar7,0,
                                                                     *(undefined8 *)puVar5);
                                                        *(undefined4 *)(unaff_x19 + 1000) =
                                                             0xbf800000;
                                                        FUN_06d39d90();
                                                        *(undefined4 *)(unaff_x19 + 0x3ec) =
                                                             0xbf800000;
                                                        FUN_06d39fa4();
                                                        if ((*(long *)(unaff_x19 + 0x418) != 0) &&
                                                           (lVar6 = *(long *)(*(long *)(unaff_x19 +
                                                                                       0x418) +
                                                                             0x3d0), lVar6 != 0)) {
                                                          lVar6 = *(long *)(lVar6 + 0x448);
                                                          uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_05545524();
                                                          if (lVar6 != 0) {
                                                            FUN_0394cc9c(lVar6,uVar7,0,
                                                                         *(undefined8 *)puVar5);
                                                            if ((*plVar8 != 0) &&
                                                               (lVar6 = *(long *)(*plVar8 + 0x3d0),
                                                               lVar6 != 0)) {
                                                              lVar6 = *(long *)(lVar6 + 0x448);
                                                              uVar7 = thunk_FUN_032a56a0(*(
                                                  undefined8 *)puVar2);
                                                  FUN_05545524();
                                                  puVar3 = PTR_DAT_07284480;
                                                  puVar2 = PTR_DAT_07284390;
                                                  if (lVar6 != 0) {
                                                    FUN_0394cc9c(lVar6,uVar7,0,*(undefined8 *)puVar5
                                                                );
                                                    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05545524();
                                                    *(undefined8 *)(unaff_x19 + 0x490) = uVar7;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x490,uVar7);
                                                    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05545524();
                                                    *(undefined8 *)(unaff_x19 + 0x498) = uVar7;
                                                    thunk_FUN_0333a630(unaff_x19 + 0x498,uVar7);
                                                    if (DAT_076ce198 == '\0') {
                                                      thunk_FUN_032e1da0(PTR_DAT_07279af0);
                                                      DAT_076ce198 = '\x01';
                                                    }
                                                    FUN_06d399e0(**(undefined4 **)
                                                                   (*(long *)PTR_DAT_07279af0 + 0xb8
                                                                   ),(*(undefined4 **)
                                                                       (*(long *)PTR_DAT_07279af0 +
                                                                       0xb8))[1]);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


