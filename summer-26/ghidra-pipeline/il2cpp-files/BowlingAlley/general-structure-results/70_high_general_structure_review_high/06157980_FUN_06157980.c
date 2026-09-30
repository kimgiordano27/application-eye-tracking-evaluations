/*
FUNCTION_NAME: FUN_06157980
ENTRY_POINT: 06157980
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


void FUN_06157980(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  if ((DAT_076dda94 & 1) == 0) {
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
    DAT_076dda94 = 1;
  }
  puVar6 = 
  System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo;
  puVar5 = PTR_DAT_0727fc08;
  if (param_2 == (long *)0x0) {
LAB_06158238:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  bVar3 = *(byte *)(*(long *)
                     System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
                   + 0x130);
  if (*(byte *)(*param_2 + 0x130) < bVar3) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
       ) {
      plVar13 = (long *)0x0;
    }
  }
  lVar12 = param_2[10];
  lVar1 = param_2[0xb];
  if (plVar13 == (long *)0x0) {
    lVar10 = param_2[0xc];
    lVar2 = param_2[0xd];
    if (*(int *)(*(long *)PTR_DAT_0727fc08 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar11 = FUN_05983958(lVar12,lVar1,lVar10,lVar2,0);
    if ((uVar11 & 1) != 0) {
      FUN_061a44d0(param_2,param_2[0xc],param_2[0xd],0);
      FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<HandJointMap>_TypeInfo,
                   param_2,0);
    }
    lVar12 = *param_2;
    bVar3 = *(byte *)(lVar12 + 0x130);
    bVar4 = *(byte *)(*(long *)System_Func<UniqueIdentifier_Decorator>_TypeInfo + 0x130);
    if ((bVar3 < bVar4) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)System_Func<UniqueIdentifier_Decorator>_TypeInfo)) {
      bVar4 = *(byte *)(*(long *)
                         System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo
                       + 0x130);
      if ((bVar3 < bVar4) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo)
         ) {
        bVar4 = *(byte *)(*(long *)
                           System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo +
                         0x130);
        if ((bVar3 < bVar4) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo)) {
          bVar4 = *(byte *)(*(long *)
                             System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo +
                           0x130);
          if ((bVar4 <= bVar3) &&
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar4 * 8 + -8) ==
              *(long *)System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo)) {
            FUN_0619c66c(param_2,*(undefined8 *)(param_1 + 0x50),0);
          }
        }
        else {
          if (param_2[0xf] == 0) goto LAB_06158238;
          uVar11 = FUN_0624bb14(param_2[0xf],0);
          if ((uVar11 & 1) == 0) {
            FUN_06156984(param_1,param_2,*(undefined8 *)PTR_DAT_07292aa0,param_2[0xf]);
          }
          else {
            FUN_06280f14(param_1,*(undefined8 *)
                                  System_Collections_Generic_List<DecalDrawCallChunk>_TypeInfo,
                         *(undefined8 *)PTR_DAT_07292aa0,param_2,0);
          }
        }
      }
      else {
        plVar13 = (long *)(**(code **)(lVar12 + 0x238))(param_2,*(undefined8 *)(lVar12 + 0x240));
        if (plVar13 == (long *)0x0) goto LAB_06158238;
        iVar8 = FUN_058f278c(plVar13,0);
        puVar6 = System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo;
        puVar5 = System_Func<TransitionRunEvent>_TypeInfo;
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            lVar12 = (**(code **)(*plVar13 + 0x308))
                               (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
            if (lVar12 == 0) goto LAB_06158238;
            *(long *)(lVar12 + 0x28) = (long)param_2;
            thunk_FUN_0333a630((long *)(lVar12 + 0x28),param_2);
            plVar14 = (long *)(**(code **)(*plVar13 + 0x308))
                                        (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
            if (plVar14 == (long *)0x0) {
LAB_06158064:
              plVar14 = (long *)(**(code **)(*plVar13 + 0x308))
                                          (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
              if (plVar14 != (long *)0x0) {
                bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
                if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)
                   ) goto LAB_06158178;
              }
              FUN_06157980(param_1,plVar14);
            }
            else {
              bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5))
              goto LAB_06158064;
              FUN_06157280(param_1,plVar14);
            }
            iVar8 = iVar8 + 1;
            iVar9 = FUN_058f278c(plVar13,0);
          } while (iVar8 < iVar9);
        }
      }
    }
    else {
      plVar13 = (long *)(**(code **)(lVar12 + 0x238))(param_2,*(undefined8 *)(lVar12 + 0x240));
      if (plVar13 == (long *)0x0) goto LAB_06158238;
      iVar8 = FUN_058f278c(plVar13,0);
      puVar6 = System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo;
      puVar5 = System_Func<TransitionRunEvent>_TypeInfo;
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          lVar12 = (**(code **)(*plVar13 + 0x308))(plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
          if (lVar12 == 0) goto LAB_06158238;
          *(long *)(lVar12 + 0x28) = (long)param_2;
          thunk_FUN_0333a630((long *)(lVar12 + 0x28),param_2);
          plVar14 = (long *)(**(code **)(*plVar13 + 0x308))
                                      (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
          if (plVar14 == (long *)0x0) {
LAB_06157f34:
            plVar14 = (long *)(**(code **)(*plVar13 + 0x308))
                                        (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
            if (plVar14 != (long *)0x0) {
              bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6))
              {
LAB_06158178:
                    /* WARNING: Subroutine does not return */
                FUN_032d618c(plVar14);
              }
            }
            FUN_06157980(param_1,plVar14);
          }
          else {
            bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5))
            goto LAB_06157f34;
            FUN_06157280(param_1,plVar14);
          }
          iVar8 = iVar8 + 1;
          iVar9 = FUN_058f278c(plVar13,0);
        } while (iVar8 < iVar9);
      }
    }
  }
  else {
    lVar10 = *(long *)PTR_DAT_0727fc08;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar10 = *(long *)puVar5;
    }
    uVar11 = FUN_059837ac(lVar12,lVar1,**(undefined8 **)(lVar10 + 0xb8),
                          (*(undefined8 **)(lVar10 + 0xb8))[1],0);
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      lVar12 = param_2[10];
      lVar1 = param_2[0xb];
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)puVar5;
      }
      uVar11 = FUN_059837ac(lVar12,lVar1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                            *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar5;
        }
        FUN_061a44d0(param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                     *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
        FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<ICanvasElement>_TypeInfo
                     ,param_2,0);
      }
    }
    lVar10 = *(long *)puVar5;
    lVar12 = param_2[0xc];
    lVar1 = param_2[0xd];
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar10 = *(long *)puVar5;
    }
    uVar11 = FUN_059837ac(lVar12,lVar1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                          *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
    if ((uVar11 & 1) != 0) {
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar12 = *(long *)puVar5;
      }
      FUN_061a4608(param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
      FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<IContextProperty>_TypeInfo
                   ,param_2,0);
    }
    lVar12 = *param_2;
    bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(param_2);
    }
    plVar13 = (long *)(**(code **)(lVar12 + 0x238))(param_2,*(undefined8 *)(lVar12 + 0x240));
    if (plVar13 == (long *)0x0) goto LAB_06158238;
    iVar8 = FUN_058f278c(plVar13,0);
    puVar7 = System_Collections_Generic_List<IBindingRequest>_TypeInfo;
    puVar6 = System_Func<TransitionRunEvent>_TypeInfo;
    if (0 < iVar8) {
      iVar8 = 0;
      do {
        plVar14 = (long *)(**(code **)(*plVar13 + 0x308))
                                    (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
        if (plVar14 == (long *)0x0) goto LAB_06158238;
        bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
        lVar10 = *(long *)puVar5;
        lVar12 = plVar14[0xc];
        lVar1 = plVar14[0xd];
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar10 = *(long *)puVar5;
        }
        uVar11 = FUN_059837ac(lVar12,lVar1,**(undefined8 **)(lVar10 + 0xb8),
                              (*(undefined8 **)(lVar10 + 0xb8))[1],0);
        if ((uVar11 & 1) != 0) {
          lVar10 = *(long *)puVar5;
          lVar12 = plVar14[0xc];
          lVar1 = plVar14[0xd];
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar10 = *(long *)puVar5;
          }
          uVar11 = FUN_059837ac(lVar12,lVar1,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                                *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
          if ((uVar11 & 1) != 0) {
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar12 = *(long *)puVar5;
            }
            FUN_061a4608(plVar14,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
            FUN_06280f9c(param_1,*(undefined8 *)puVar7,plVar14,0);
          }
        }
        plVar14[5] = (long)param_2;
        thunk_FUN_0333a630(plVar14 + 5,param_2);
        FUN_06157280(param_1,plVar14);
        iVar8 = iVar8 + 1;
        iVar9 = FUN_058f278c(plVar13,0);
      } while (iVar8 < iVar9);
    }
  }
  FUN_06152840(param_1,param_2);
  FUN_061528e0(param_1,param_2);
  return;
}


