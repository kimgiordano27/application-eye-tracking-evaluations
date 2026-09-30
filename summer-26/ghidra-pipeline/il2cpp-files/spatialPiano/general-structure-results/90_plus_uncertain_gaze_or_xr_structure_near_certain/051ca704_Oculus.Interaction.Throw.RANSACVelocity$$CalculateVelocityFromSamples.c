/*
FUNCTION_NAME: Oculus.Interaction.Throw.RANSACVelocity$$CalculateVelocityFromSamples
ENTRY_POINT: 051ca704
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_4
*/


void Oculus_Interaction_Throw_RANSACVelocity__CalculateVelocityFromSamples(long param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  ulong extraout_x1;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined *puVar9;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 200));
  FUN_02f08768(PTR_DAT_067caae8);
  FUN_02f08768(PTR_DAT_067caaf0);
  FUN_02f08768(System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo);
  FUN_02f08768(System_Func<VolumeComponent,_bool>_TypeInfo);
  FUN_02f08768(System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
  FUN_02f08768(UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TaaDebugMode_var);
  FUN_02f08768(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x52b) = 1;
  auVar15 = FUN_051b97b0();
  if (unaff_x21 == 0) {
LAB_051caae4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(auVar15._0_8_,auVar15._8_8_);
  }
  auVar15 = thunk_FUN_02f1863c();
  uVar10 = auVar15._0_8_;
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (plVar14 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x40), plVar14 == (long *)0x0))
  goto LAB_051caae4;
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_051ca7ec;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02f421d0(plVar14,*(long *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo,0);
LAB_051ca7ec:
  auVar15 = (*(code *)*puVar5)(plVar14,uVar10,puVar5[1]);
  plVar14 = auVar15._0_8_;
  if (unaff_x19 == (long *)0x0) goto LAB_051caae4;
  uVar12 = Oculus_Interaction_PressureSquishable__Start();
  if ((uVar12 & 1) == 0) {
    thunk_FUN_02f6ef30(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    goto LAB_051cabd4;
  }
  auVar15 = (**(code **)(*unaff_x19 + 0x238))();
  if (auVar15._0_4_ == 2) {
    if (plVar14 == (long *)0x0) goto LAB_051caae4;
    if (*(int *)((long)plVar14 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)
                         System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
         )) goto LAB_051caae8;
      if (*(char *)((long)plVar14 + 0xf1) == '\0') {
        lVar11 = thunk_FUN_02f45174();
        if (lVar11 == 0) {
LAB_051cab94:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
      }
      else {
        lVar11 = FUN_051c6ac4(plVar14);
      }
      auVar15._8_8_ = lVar11;
      auVar15._0_8_ = lVar11;
      if (unaff_x20 != 0) {
        FUN_051cac00();
        return;
      }
      goto LAB_051caae4;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar7 = FUN_050656a0(0);
    puVar9 = Unity_Hierarchy_HierarchyPropertyUnmanaged<int>_TypeInfo;
LAB_051cabc4:
    uVar8 = thunk_FUN_02f6ef30(puVar9);
  }
  else {
    iVar4 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar4 == 1) {
      FUN_05163f1c();
      plVar6 = *(long **)(unaff_x20 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      auVar15 = auVar2 << 0x40;
      if (plVar6 == (long *)0x0) goto LAB_051caae4;
      auVar15 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380));
      if ((auVar15._0_4_ != 2) &&
         (auVar15 = (**(code **)(*unaff_x19 + 0x238))(), auVar15._0_4_ == 4)) {
        auVar15 = (**(code **)(*unaff_x19 + 0x248))();
        plVar6 = auVar15._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar15._8_8_;
        auVar15 = auVar3 << 0x40;
        if (plVar6 == (long *)0x0) goto LAB_051caae4;
        uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        auVar15 = FUN_04f6d990(uVar7,*(undefined8 *)
                                      System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                               ,4,0);
        if ((auVar15._0_8_ & 1) != 0) {
          FUN_05163f1c();
          plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          }
          auVar15 = FUN_05163f1c();
        }
      }
      if (plVar14 == (long *)0x0) goto LAB_051caae4;
      if (*(int *)((long)plVar14 + 0x24) == 1) {
        bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) {
          FUN_051cbb74();
          return;
        }
LAB_051caae8:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar14);
      }
      if (*(int *)((long)plVar14 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)System_Func<VolumeComponent,_bool>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<VolumeComponent,_bool>_TypeInfo)) {
          if ((char)plVar14[0x20] == '\0') {
            lVar11 = thunk_FUN_02f45174();
            if (lVar11 == 0) goto LAB_051cab94;
          }
          else {
            FUN_051c8098(plVar14);
          }
          FUN_051cb158();
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
    FUN_02a7da48();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x238))();
    uVar10 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
    uVar10 = thunk_FUN_02f44ec4(uVar10,(long)&stack0x00000008 + 4);
    uVar8 = thunk_FUN_02f6ef30(
                              System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                              );
  }
  FUN_051b937c(uVar8,uVar7,uVar10);
LAB_051cabd4:
  uVar10 = FUN_0515d378();
  uVar7 = thunk_FUN_02f6ef30(
                            System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar10,uVar7);
}


