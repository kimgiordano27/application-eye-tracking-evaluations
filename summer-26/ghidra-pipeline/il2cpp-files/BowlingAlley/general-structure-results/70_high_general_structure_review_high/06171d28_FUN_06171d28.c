/*
FUNCTION_NAME: FUN_06171d28
ENTRY_POINT: 06171d28
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06171d28(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  
  if ((DAT_076ddaee & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fc08);
    thunk_FUN_032e1da0(
                      System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo);
    thunk_FUN_032e1da0(System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<DecalDrawCallChunk>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IBindingRequest>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ICanvasElement>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292aa0);
    thunk_FUN_032e1da0(System_Collections_Generic_List<HandJointMap>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IContextProperty>_TypeInfo);
    DAT_076ddaee = 1;
  }
  puVar6 = System_Func<TransitionRunEvent>_TypeInfo;
  puVar5 = PTR_DAT_0727fc08;
  if (param_2 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)
                       System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
                     + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar3) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)
           System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
         ) {
        plVar12 = (long *)0x0;
      }
    }
    lVar10 = param_2[10];
    lVar1 = param_2[0xb];
    if (plVar12 == (long *)0x0) {
      lVar8 = param_2[0xc];
      lVar2 = param_2[0xd];
      if (*(int *)(*(long *)PTR_DAT_0727fc08 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar9 = FUN_05983958(lVar10,lVar1,lVar8,lVar2,0);
      if ((uVar9 & 1) != 0) {
        FUN_061a44d0(param_2,param_2[0xc],param_2[0xd],0);
        uVar9 = FUN_06280f9c(param_1,*(undefined8 *)
                                      System_Collections_Generic_List<HandJointMap>_TypeInfo,param_2
                             ,0);
      }
      lVar10 = *param_2;
      bVar3 = *(byte *)(lVar10 + 0x130);
      bVar4 = *(byte *)(*(long *)System_Func<UniqueIdentifier_Decorator>_TypeInfo + 0x130);
      if ((bVar3 < bVar4) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)System_Func<UniqueIdentifier_Decorator>_TypeInfo)) {
        bVar4 = *(byte *)(*(long *)
                           System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo
                         + 0x130);
        if ((bVar3 < bVar4) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)
             System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo)) {
          bVar4 = *(byte *)(*(long *)
                             System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo +
                           0x130);
          if ((bVar3 < bVar4) ||
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo)) {
            bVar4 = *(byte *)(*(long *)
                               System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo +
                             0x130);
            if ((bVar4 <= bVar3) &&
               (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar4 * 8 + -8) ==
                *(long *)System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo)) {
              uVar9 = FUN_0619c6f4(param_2,*(undefined8 *)(param_1 + 0x48),0);
            }
          }
          else {
            if (param_2[0xf] == 0) goto LAB_061720ec;
            uVar9 = FUN_0624bb14(param_2[0xf],0);
            if ((uVar9 & 1) == 0) {
              uVar9 = FUN_06170e28(param_1,param_2,*(undefined8 *)PTR_DAT_07292aa0,param_2[0xf]);
            }
            else {
              uVar9 = FUN_06280f14(param_1,*(undefined8 *)
                                            System_Collections_Generic_List<DecalDrawCallChunk>_TypeInfo
                                   ,*(undefined8 *)PTR_DAT_07292aa0,param_2,0);
            }
          }
        }
        else {
          plVar12 = (long *)(**(code **)(lVar10 + 0x238))(param_2,*(undefined8 *)(lVar10 + 0x240));
          if (plVar12 == (long *)0x0) goto LAB_061720ec;
          uVar9 = FUN_058f278c(plVar12,0);
          puVar5 = System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo;
          if (0 < (int)uVar9) {
            iVar13 = 0;
            do {
              lVar10 = (**(code **)(*plVar12 + 0x308))
                                 (plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x310));
              if (lVar10 == 0) goto LAB_061720ec;
              *(long *)(lVar10 + 0x28) = (long)param_2;
              thunk_FUN_0333a630((long *)(lVar10 + 0x28),param_2);
              plVar11 = (long *)(**(code **)(*plVar12 + 0x308))
                                          (plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x310));
              if (plVar11 == (long *)0x0) {
LAB_061723e8:
                plVar11 = (long *)(**(code **)(*plVar12 + 0x308))
                                            (plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x310));
                if (plVar11 != (long *)0x0) {
                  bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
                  if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)puVar5)) goto LAB_061724f8;
                }
                FUN_06171d28(param_1,plVar11);
              }
              else {
                bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)
                   ) goto LAB_061723e8;
                FUN_06171630(param_1,plVar11);
              }
              iVar13 = iVar13 + 1;
              uVar9 = FUN_058f278c(plVar12,0);
            } while (iVar13 < (int)uVar9);
          }
        }
      }
      else {
        plVar12 = (long *)(**(code **)(lVar10 + 0x238))(param_2,*(undefined8 *)(lVar10 + 0x240));
        if (plVar12 == (long *)0x0) goto LAB_061720ec;
        uVar9 = FUN_058f278c(plVar12,0);
        puVar5 = System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo;
        if (0 < (int)uVar9) {
          iVar13 = 0;
          do {
            lVar10 = (**(code **)(*plVar12 + 0x308))
                               (plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x310));
                    /* try { // try from 06172264 to 062725eb has its CatchHandler @ 06172264
                       catch() { ... } // from try @ 06172264 with catch @ 06172264
                       catch() { ... } // from try @ 061726d4 with catch @ 06172264
                       catch() { ... } // from try @ 0617298c with catch @ 06172264
                       catch() { ... } // from try @ 06172f3c with catch @ 06172264
                       catch() { ... } // from try @ 06172fa4 with catch @ 06172264
                       catch() { ... } // from try @ 06173090 with catch @ 06172264
                       catch() { ... } // from try @ 06173130 with catch @ 06172264 */
            if (lVar10 == 0) goto LAB_061720ec;
            *(long *)(lVar10 + 0x28) = (long)param_2;
            thunk_FUN_0333a630((long *)(lVar10 + 0x28),param_2);
            plVar11 = (long *)(**(code **)(*plVar12 + 0x308))
                                        (plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x310));
            if (plVar11 == (long *)0x0) {
LAB_061722c0:
              plVar11 = (long *)(**(code **)(*plVar12 + 0x308))
                                          (plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x310));
              if (plVar11 != (long *)0x0) {
                bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5)
                   ) {
LAB_061724f8:
                    /* WARNING: Subroutine does not return */
                  FUN_032d618c(plVar11);
                }
              }
              FUN_06171d28(param_1,plVar11);
            }
            else {
              bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6))
              goto LAB_061722c0;
              FUN_06171630(param_1,plVar11);
            }
            iVar13 = iVar13 + 1;
            uVar9 = FUN_058f278c(plVar12,0);
          } while (iVar13 < (int)uVar9);
        }
      }
LAB_061724c4:
      FUN_0616d3d0(uVar9,param_2);
      FUN_0616a808(param_1,param_2);
      return;
    }
    lVar8 = *(long *)PTR_DAT_0727fc08;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *(long *)puVar5;
    }
    uVar9 = FUN_059837ac(lVar10,lVar1,**(undefined8 **)(lVar8 + 0xb8),
                         (*(undefined8 **)(lVar8 + 0xb8))[1],0);
    if ((uVar9 & 1) != 0) {
      lVar8 = *(long *)puVar5;
      lVar10 = param_2[10];
      lVar1 = param_2[0xb];
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar8 = *(long *)puVar5;
      }
      uVar9 = FUN_059837ac(lVar10,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
      if ((uVar9 & 1) != 0) {
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar10 = *(long *)puVar5;
        }
        FUN_061a44d0(param_2,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                     *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
        FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<ICanvasElement>_TypeInfo
                     ,param_2,0);
      }
    }
    lVar8 = *(long *)puVar5;
    lVar10 = param_2[0xc];
    lVar1 = param_2[0xd];
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar8 = *(long *)puVar5;
    }
    uVar9 = FUN_059837ac(lVar10,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
    if ((uVar9 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)puVar5;
      }
      FUN_061a4608(param_2,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
      FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<IContextProperty>_TypeInfo
                   ,param_2,0);
    }
    lVar10 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    puVar7 = System_Collections_Generic_List<IBindingRequest>_TypeInfo;
    if (lVar10 != 0) {
      iVar13 = 0;
      do {
        uVar9 = FUN_058f278c(lVar10,0);
        if ((int)uVar9 <= iVar13) goto LAB_061724c4;
        plVar11 = (long *)(**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240))
        ;
        if ((plVar11 == (long *)0x0) ||
           (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar13,*(undefined8 *)(*plVar11 + 0x310)),
           plVar11 == (long *)0x0)) break;
        bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar11);
        }
        lVar8 = *(long *)puVar5;
        lVar10 = plVar11[0xc];
        lVar1 = plVar11[0xd];
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar8 = *(long *)puVar5;
        }
        uVar9 = FUN_059837ac(lVar10,lVar1,**(undefined8 **)(lVar8 + 0xb8),
                             (*(undefined8 **)(lVar8 + 0xb8))[1],0);
        if ((uVar9 & 1) != 0) {
          lVar8 = *(long *)puVar5;
          lVar10 = plVar11[0xc];
          lVar1 = plVar11[0xd];
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar8 = *(long *)puVar5;
          }
          uVar9 = FUN_059837ac(lVar10,lVar1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                               *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
          if ((uVar9 & 1) != 0) {
            lVar10 = *(long *)puVar5;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar10 = *(long *)puVar5;
            }
            FUN_061a4608(plVar11,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
            FUN_06280f9c(param_1,*(undefined8 *)puVar7,plVar11,0);
          }
        }
        plVar11[5] = (long)param_2;
        thunk_FUN_0333a630(plVar11 + 5,param_2);
        FUN_06171630(param_1,plVar11);
        iVar13 = iVar13 + 1;
        lVar10 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
      } while (lVar10 != 0);
    }
  }
LAB_061720ec:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


