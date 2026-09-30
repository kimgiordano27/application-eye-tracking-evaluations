/*
FUNCTION_NAME: FUN_051ca6d0
ENTRY_POINT: 051ca6d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_11;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_4
*/


void FUN_051ca6d0(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined4 local_34;
  undefined *puVar9;
  
  puVar9 = UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TaaDebugMode_var;
  if ((DAT_06bba52b & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
    FUN_02f08768(PTR_DAT_067caae8);
    FUN_02f08768(PTR_DAT_067caaf0);
    FUN_02f08768(System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo);
    FUN_02f08768(System_Func<VolumeComponent,_bool>_TypeInfo);
    FUN_02f08768(System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TaaDebugMode_var);
    FUN_02f08768(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    DAT_06bba52b = 1;
  }
  auVar15 = FUN_051b97b0(param_3,*(undefined8 *)puVar9);
  if (param_3 == 0) goto LAB_051caae4;
  auVar15 = thunk_FUN_02f1863c(param_3,0);
  uVar14 = auVar15._0_8_;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar13 = *(long **)(*(long *)(param_1 + 0x20) + 0x40), plVar13 == (long *)0x0))
  goto LAB_051caae4;
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_051ca7ec;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02f421d0(plVar13,*(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo,0);
LAB_051ca7ec:
  auVar15 = (*(code *)*puVar5)(plVar13,uVar14,puVar5[1]);
  plVar13 = auVar15._0_8_;
  if (param_2 == (long *)0x0) goto LAB_051caae4;
  uVar11 = Oculus_Interaction_PressureSquishable__Start(param_2,0);
  if ((uVar11 & 1) == 0) {
    uVar14 = thunk_FUN_02f6ef30(
                               System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                               );
    goto LAB_051cabd4;
  }
  auVar15 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (auVar15._0_4_ == 2) {
    if (plVar13 == (long *)0x0) goto LAB_051caae4;
    if (*(int *)((long)plVar13 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)
                         System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
         )) {
        if (*(char *)((long)plVar13 + 0xf1) == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_067caaf0;
          lVar10 = thunk_FUN_02f45174(param_3,uVar14);
          if (lVar10 == 0) goto LAB_051cab94;
        }
        else {
          lVar10 = FUN_051c6ac4(plVar13,param_3);
        }
        auVar15._8_8_ = lVar10;
        auVar15._0_8_ = lVar10;
        if (param_1 != 0) {
          FUN_051cac00(param_1,lVar10,param_2,plVar13,0,0);
          return;
        }
        goto LAB_051caae4;
      }
      goto LAB_051caae8;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar7 = FUN_050656a0(0);
    puVar9 = Unity_Hierarchy_HierarchyPropertyUnmanaged<int>_TypeInfo;
LAB_051cabc4:
    uVar8 = thunk_FUN_02f6ef30(puVar9);
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar4 == 1) {
      FUN_05163f1c(param_2,0);
      plVar6 = *(long **)(param_1 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      auVar15 = auVar2 << 0x40;
      if (plVar6 == (long *)0x0) goto LAB_051caae4;
      auVar15 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380));
      if ((auVar15._0_4_ == 2) ||
         (auVar15 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
         auVar15._0_4_ != 4)) {
LAB_051ca974:
        uVar7 = 0;
      }
      else {
        auVar15 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        plVar6 = auVar15._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar15._8_8_;
        auVar15 = auVar3 << 0x40;
        if (plVar6 == (long *)0x0) goto LAB_051caae4;
        uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        auVar15 = FUN_04f6d990(uVar7,*(undefined8 *)
                                      System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                               ,4,0);
        if ((auVar15._0_8_ & 1) == 0) goto LAB_051ca974;
        FUN_05163f1c(param_2,0);
        plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        auVar15 = FUN_05163f1c(param_2,0);
      }
      if (plVar13 == (long *)0x0) {
LAB_051caae4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(auVar15._0_8_,auVar15._8_8_);
      }
      if (*(int *)((long)plVar13 + 0x24) == 1) {
        bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) {
          FUN_051cbb74(param_1,param_3,param_2,plVar13,0,uVar7);
          return;
        }
LAB_051caae8:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar13);
      }
      if (*(int *)((long)plVar13 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)System_Func<VolumeComponent,_bool>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<VolumeComponent,_bool>_TypeInfo)) {
          if ((char)plVar13[0x20] == '\0') {
            uVar14 = *(undefined8 *)PTR_DAT_067caae8;
            lVar10 = thunk_FUN_02f45174(param_3,uVar14);
            if (lVar10 == 0) {
LAB_051cab94:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(param_3,uVar14);
            }
          }
          else {
            lVar10 = FUN_051c8098(plVar13,param_3);
          }
          FUN_051cb158(param_1,lVar10,param_2,plVar13,0,uVar7);
          return;
        }
        goto LAB_051caae8;
      }
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar7 = FUN_050656a0(0);
      puVar9 = 
      System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
      ;
      goto LAB_051cabc4;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar7 = FUN_050656a0(0);
    FUN_02a7da48(param_2);
    local_34 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar14 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
    uVar14 = thunk_FUN_02f44ec4(uVar14,&local_34);
    uVar8 = thunk_FUN_02f6ef30(
                              System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                              );
  }
  uVar14 = FUN_051b937c(uVar8,uVar7,uVar14);
LAB_051cabd4:
  uVar14 = FUN_0515d378(param_2,uVar14,0);
  uVar7 = thunk_FUN_02f6ef30(
                            System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar14,uVar7);
}


