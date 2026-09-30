/*
FUNCTION_NAME: FUN_005ff8d0
ENTRY_POINT: 005ff8d0
PROGRAM: TheRagmans-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_005ff8d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_015701f8;
  if ((DAT_01634009 & 1) == 0) {
    thunk_FUN_00556484(PTR_DAT_01569a68);
    thunk_FUN_00556484(PTR_DAT_015704b8);
    thunk_FUN_00556484(PTR_DAT_01569090);
    thunk_FUN_00556484(PTR_DAT_0155fcf0);
    thunk_FUN_00556484(PTR_DAT_015786d0);
    thunk_FUN_00556484(PTR_DAT_0156f3a0);
    thunk_FUN_00556484(PTR_DAT_01557cf8);
    thunk_FUN_00556484(PTR_DAT_01571610);
    thunk_FUN_00556484(PTR_DAT_0156a9d0);
    thunk_FUN_00556484(PTR_DAT_0157aba0);
    thunk_FUN_00556484(PTR_DAT_0157bb70);
    thunk_FUN_00556484(PTR_DAT_01577c68);
    thunk_FUN_00556484(PTR_DAT_0155ff50);
    thunk_FUN_00556484(PTR_DAT_0157d680);
    thunk_FUN_00556484(PTR_DAT_01573060);
    thunk_FUN_00556484(PTR_DAT_0156af00);
    thunk_FUN_00556484(PTR_DAT_01574a58);
    thunk_FUN_00556484(PTR_DAT_015701f8);
    DAT_01634009 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
  if ((lVar3 != 0) && (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_01569a68,0), lVar4 != 0)) {
    System_Array__InternalArray__Insert<ushort>(lVar4,lVar3,0);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
    if ((lVar3 != 0) && (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_015786d0,0), lVar4 != 0))
    {
      System_Array__InternalArray__Insert<Vector2>(lVar4,lVar3,0);
      lVar4 = *(long *)(param_1 + 0x18);
      lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
      if ((lVar3 != 0) &&
         (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_015704b8,0), lVar4 != 0)) {
        System_Array__InternalArray__Insert<WordWrapState>(lVar4,lVar3,0);
        lVar4 = *(long *)(param_1 + 0x18);
        lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
        if ((lVar3 != 0) &&
           (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_0157bb70,0), lVar4 != 0)) {
          System_Array__InternalArray__Insert<BaseStyleMatcher_MatchContext>(lVar4,lVar3,0);
          lVar4 = *(long *)(param_1 + 0x18);
          lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
          if ((lVar3 != 0) &&
             (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_01569090,0), lVar4 != 0)) {
            System_Array__InternalArray__Insert<RenderChain_RenderNodeData>(lVar4,lVar3,0);
            lVar4 = *(long *)(param_1 + 0x18);
            lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
            if ((lVar3 != 0) &&
               (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_0155fcf0,0),
               puVar2 = PTR_DAT_01574a58, lVar4 != 0)) {
              System_Array__InternalArray__Insert<StylePropertyAnimationSystem_ElementPropertyPair>
                        (lVar4,lVar3,0);
              lVar4 = *(long *)(param_1 + 0x18);
              lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar2);
              if ((lVar3 != 0) &&
                 (FUN_0063841c(lVar3,param_1,*(undefined8 *)PTR_DAT_0156f3a0,0), lVar4 != 0)) {
                System_Array__InternalArray__Insert<TextureBlitter_BlitInfo>(lVar4,lVar3,0);
                lVar4 = *(long *)(param_1 + 0x18);
                lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar2);
                if ((lVar3 != 0) &&
                   (FUN_0063841c(lVar3,param_1,*(undefined8 *)PTR_DAT_01557cf8,0), lVar4 != 0)) {
                  System_Array__InternalArray__Insert<TrackedPoseDriverDataDescription_PoseData>
                            (lVar4,lVar3,0);
                  lVar4 = *(long *)(param_1 + 0x18);
                  lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar2);
                  if ((lVar3 != 0) &&
                     (FUN_0063841c(lVar3,param_1,*(undefined8 *)PTR_DAT_01571610,0), lVar4 != 0)) {
                    System_Array__InternalArray__Insert<UIRenderDevice_AllocToUpdate>(lVar4,lVar3,0)
                    ;
                    lVar4 = *(long *)(param_1 + 0x18);
                    lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar2);
                    if ((lVar3 != 0) &&
                       (FUN_0063841c(lVar3,param_1,*(undefined8 *)PTR_DAT_0156a9d0,0), lVar4 != 0))
                    {
                      System_Array__InternalArray__Insert<VisualTreeAsset_SlotDefinition>
                                (lVar4,lVar3,0);
                      lVar4 = *(long *)(param_1 + 0x18);
                      lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
                      if ((lVar3 != 0) &&
                         (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_0157aba0,0), lVar4 != 0)
                         ) {
                        System_Array__InternalArray__Insert<InternalTreeView_TreeViewItemWrapper>
                                  (lVar4,lVar3,0);
                        lVar4 = *(long *)(param_1 + 0x18);
                        lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
                        if ((lVar3 != 0) &&
                           (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_0155ff50,0),
                           lVar4 != 0)) {
                          System_Array__InternalArray__Insert<PointerDeviceState_PointerLocation>
                                    (lVar4,lVar3,0);
                          lVar4 = *(long *)(param_1 + 0x18);
                          lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
                          if ((lVar3 != 0) &&
                             (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_01577c68,0),
                             lVar4 != 0)) {
                            System_Array__InternalArray__Insert<Camera_RenderRequest>(lVar4,lVar3,0)
                            ;
                            lVar4 = *(long *)(param_1 + 0x18);
                            lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
                            if ((lVar3 != 0) &&
                               (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_0156af00,0),
                               lVar4 != 0)) {
                              System_Array__InternalArray__Insert<FlagBanner_Flag>(lVar4,lVar3,0);
                              lVar4 = *(long *)(param_1 + 0x18);
                              lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
                              if ((lVar3 != 0) &&
                                 (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_0157d680,0),
                                 lVar4 != 0)) {
                                System_Array__InternalArray__Insert<Translate>(lVar4,lVar3,0);
                                lVar4 = *(long *)(param_1 + 0x18);
                                lVar3 = thunk_FUN_005690e8(*(undefined8 *)puVar1);
                                if ((lVar3 != 0) &&
                                   (FUN_00638294(lVar3,param_1,*(undefined8 *)PTR_DAT_01573060,0),
                                   lVar4 != 0)) {
                                  System_Array__InternalArray__Insert<VelocityTimePair>
                                            (lVar4,lVar3,0);
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
  FUN_005251b4();
}


