/*
FUNCTION_NAME: FUN_056e6564
ENTRY_POINT: 056e6564
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined8 FUN_056e6564(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 local_44;
  
  if ((DAT_06bc05cc & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_set_Item__);
    DAT_06bc05cc = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_056e6a78;
  iVar3 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
  if (iVar3 < 10) {
    if (iVar3 < 5) {
      if (iVar3 == 1) {
        lVar14 = *(long *)(param_1 + 0x10);
        lVar12 = *(long *)(param_1 + 0x18);
        lVar9 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        if (lVar12 != lVar9) {
          lVar14 = FUN_056e9dc0();
        }
        uVar5 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        if (lVar14 != 0) {
          uVar5 = FUN_056e7c38(lVar14,uVar5);
          lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                       System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo
                                     );
          FUN_056e7c94(lVar14,uVar5);
          uVar10 = (**(code **)(*param_3 + 0x418))(param_3,*(undefined8 *)(*param_3 + 0x420));
          puVar2 = System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_TypeInfo;
          puVar1 = PTR_DAT_067c9338;
          if ((uVar10 & 1) != 0) {
            do {
              lVar12 = *(long *)(param_1 + 0x20);
              lVar9 = *(long *)(param_1 + 0x28);
              lVar11 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
              if (lVar11 == 0) goto LAB_056e6a78;
              if (*(int *)(lVar11 + 0x10) == 0) {
                lVar11 = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
              }
              else {
                lVar11 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
              }
              if (lVar9 != lVar11) {
                lVar12 = FUN_056e9dc0();
              }
              uVar5 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              if (lVar12 == 0) goto LAB_056e6a78;
              uVar5 = FUN_056e7c38(lVar12,uVar5);
              uVar4 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
              lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
              FUN_056e37c8(lVar12,uVar5,uVar4);
              if ((lVar14 == 0) || (lVar12 == 0)) goto LAB_056e6a78;
              lVar9 = *(long *)(lVar14 + 0x38);
              *(long *)(lVar12 + 0x10) = lVar14;
              if (lVar9 == 0) {
                plVar13 = (long *)(lVar12 + 0x20);
              }
              else {
                plVar13 = (long *)(lVar9 + 0x20);
                *(long *)(lVar12 + 0x20) = *plVar13;
              }
              *plVar13 = lVar12;
              *(long *)(lVar14 + 0x38) = lVar12;
              uVar10 = (**(code **)(*param_3 + 0x428))(param_3,*(undefined8 *)(*param_3 + 0x430));
            } while ((uVar10 & 1) != 0);
            (**(code **)(*param_3 + 0x438))(param_3,*(undefined8 *)(*param_3 + 0x440));
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            FUN_056e5fa4(*(long *)(param_1 + 0x38),lVar14);
            uVar10 = (**(code **)(*param_3 + 0x218))(param_3,*(undefined8 *)(*param_3 + 0x220));
            if ((uVar10 & 1) != 0) {
              return 1;
            }
            *(long *)(param_1 + 0x38) = lVar14;
            return 1;
          }
        }
        goto LAB_056e6a78;
      }
      if (iVar3 == 3) goto LAB_056e6688;
      if (iVar3 != 4) goto LAB_056e6ac4;
      lVar14 = *(long *)(param_1 + 0x38);
      uVar4 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                  System_Collections_Generic_List<VisualTreeAsset_SlotDefinition>_TypeInfo
                                );
      FUN_056e4854(uVar5,uVar4);
    }
    else {
      if (iVar3 == 5) {
        uVar10 = (**(code **)(*param_3 + 0x4c8))(param_3,*(undefined8 *)(*param_3 + 0x4d0));
        if ((uVar10 & 1) != 0) {
          (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
          return 1;
        }
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar5 = thunk_FUN_02f45270();
        uVar4 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<string,_Type>_set_Item__
                                  );
        FUN_050d5404(uVar5,uVar4,0);
        uVar4 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<string,_UriParser>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar5,uVar4);
      }
      if (iVar3 == 7) {
        lVar14 = *(long *)(param_1 + 0x38);
        uVar4 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
        uVar8 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
        uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                    System_Collections_Generic_List<XRDebugLineVisualizer_DebugLine>_TypeInfo
                                  );
        FUN_056e7d3c(uVar5,uVar4,uVar8);
      }
      else {
        if (iVar3 != 8) goto LAB_056e6ac4;
        lVar14 = *(long *)(param_1 + 0x38);
        uVar4 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
        uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                    System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_TypeInfo
                                  );
        FUN_056e4a10(uVar5,uVar4);
      }
    }
  }
  else {
    if (0xe < iVar3) {
      if (iVar3 != 0xf) {
        if (iVar3 == 0x10) {
          return 1;
        }
LAB_056e6ac4:
        FUN_02a7da48(param_3);
        local_44 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
        uVar5 = thunk_FUN_02f6ef30(Unity_Collections_NativeArray<Pose>_TypeInfo);
        uVar5 = thunk_FUN_02f44ec4(uVar5,&local_44);
        uVar4 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__
                                  );
        uVar5 = FUN_056e3660(uVar4,uVar5);
        thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
        uVar4 = thunk_FUN_02f45270();
        FUN_050d5404(uVar4,uVar5,0);
        uVar5 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<string,_UriParser>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar4,uVar5);
      }
      lVar14 = *(long *)(param_1 + 0x38);
      if (lVar14 != 0) {
        if (*(long *)(lVar14 + 0x28) == 0) {
          *(undefined8 *)(lVar14 + 0x28) =
               **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (lVar14 != param_2) {
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar14 + 0x10);
          return 1;
        }
        return 0;
      }
      goto LAB_056e6a78;
    }
    if (iVar3 - 0xdU < 2) {
LAB_056e6688:
      lVar14 = *(long *)(param_1 + 0x38);
      uVar5 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      if (lVar14 != 0) {
        FUN_056e6024(lVar14,uVar5);
        return 1;
      }
      goto LAB_056e6a78;
    }
    if (iVar3 != 10) goto LAB_056e6ac4;
    lVar14 = *(long *)(param_1 + 0x38);
    uVar4 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar8 = (**(code **)(*param_3 + 0x3b8))
                      (param_3,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_get_Item__
                       ,*(undefined8 *)(*param_3 + 0x3c0));
    uVar6 = (**(code **)(*param_3 + 0x3b8))
                      (param_3,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Event,_TextSelectOp>_set_Item__
                       ,*(undefined8 *)(*param_3 + 0x3c0));
    uVar7 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                System_Collections_Generic_List<VisualTreeAsset_UxmlObjectEntry>_TypeInfo
                              );
    FUN_056e7dbc(uVar5,uVar4,uVar8,uVar6,uVar7);
  }
  if (lVar14 != 0) {
    FUN_056e5fa4(lVar14,uVar5);
    return 1;
  }
LAB_056e6a78:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


