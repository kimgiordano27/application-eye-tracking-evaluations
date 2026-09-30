/*
FUNCTION_NAME: Oculus.Interaction.Throw.RANSACVelocity$$GetSortedTimePoses
ENTRY_POINT: 051ca790
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void Oculus_Interaction_Throw_RANSACVelocity__GetSortedTimePoses
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  long *plVar6;
  undefined *puVar10;
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  if (unaff_x22 == (long *)0x0) {
LAB_051caae4:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(auVar14._0_8_,auVar14._8_8_);
  }
  lVar11 = *unaff_x22;
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
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_051ca7ec:
  auVar14 = (*(code *)*puVar5)();
  plVar6 = auVar14._0_8_;
  if (unaff_x19 == (long *)0x0) goto LAB_051caae4;
  uVar12 = Oculus_Interaction_PressureSquishable__Start();
  if ((uVar12 & 1) == 0) {
    thunk_FUN_02f6ef30(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    goto LAB_051cabd4;
  }
  auVar14 = (**(code **)(*unaff_x19 + 0x238))();
  if (auVar14._0_4_ == 2) {
    if (plVar6 == (long *)0x0) goto LAB_051caae4;
    if (*(int *)((long)plVar6 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)
                         System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<ImmutableCollectionsUtils_ImmutableCollectionTypeInfo,_bool>_TypeInfo
         )) goto LAB_051caae8;
      if (*(char *)((long)plVar6 + 0xf1) == '\0') {
        lVar11 = thunk_FUN_02f45174();
        if (lVar11 == 0) {
LAB_051cab94:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
      }
      else {
        lVar11 = FUN_051c6ac4(plVar6);
      }
      auVar14._8_8_ = lVar11;
      auVar14._0_8_ = lVar11;
      if (unaff_x20 != 0) {
        FUN_051cac00();
        return;
      }
      goto LAB_051caae4;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar8 = FUN_050656a0(0);
    puVar10 = Unity_Hierarchy_HierarchyPropertyUnmanaged<int>_TypeInfo;
LAB_051cabc4:
    uVar9 = thunk_FUN_02f6ef30(puVar10);
  }
  else {
    iVar4 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar4 == 1) {
      FUN_05163f1c();
      plVar7 = *(long **)(unaff_x20 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      auVar14 = auVar2 << 0x40;
      if (plVar7 == (long *)0x0) goto LAB_051caae4;
      auVar14 = (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined8 *)(*plVar7 + 0x380));
      if ((auVar14._0_4_ != 2) &&
         (auVar14 = (**(code **)(*unaff_x19 + 0x238))(), auVar14._0_4_ == 4)) {
        auVar14 = (**(code **)(*unaff_x19 + 0x248))();
        plVar7 = auVar14._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar14._8_8_;
        auVar14 = auVar3 << 0x40;
        if (plVar7 == (long *)0x0) goto LAB_051caae4;
        uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        auVar14 = FUN_04f6d990(uVar8,*(undefined8 *)
                                      System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                               ,4,0);
        if ((auVar14._0_8_ & 1) != 0) {
          FUN_05163f1c();
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          auVar14 = FUN_05163f1c();
        }
      }
      if (plVar6 == (long *)0x0) goto LAB_051caae4;
      if (*(int *)((long)plVar6 + 0x24) == 1) {
        bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) {
          FUN_051cbb74();
          return;
        }
LAB_051caae8:
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar6);
      }
      if (*(int *)((long)plVar6 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)System_Func<VolumeComponent,_bool>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Func<VolumeComponent,_bool>_TypeInfo)) {
          if ((char)plVar6[0x20] == '\0') {
            lVar11 = thunk_FUN_02f45174();
            if (lVar11 == 0) goto LAB_051cab94;
          }
          else {
            FUN_051c8098(plVar6);
          }
          FUN_051cb158();
          return;
        }
        goto LAB_051caae8;
      }
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar8 = FUN_050656a0(0);
      puVar10 = 
      System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
      ;
      goto LAB_051cabc4;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar8 = FUN_050656a0(0);
    FUN_02a7da48();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x238))();
    uVar9 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
    param_1 = thunk_FUN_02f44ec4(uVar9,(long)&stack0x00000008 + 4);
    uVar9 = thunk_FUN_02f6ef30(
                              System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                              );
  }
  FUN_051b937c(uVar9,uVar8,param_1);
LAB_051cabd4:
  uVar8 = FUN_0515d378();
  uVar9 = thunk_FUN_02f6ef30(
                            System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar8,uVar9);
}


