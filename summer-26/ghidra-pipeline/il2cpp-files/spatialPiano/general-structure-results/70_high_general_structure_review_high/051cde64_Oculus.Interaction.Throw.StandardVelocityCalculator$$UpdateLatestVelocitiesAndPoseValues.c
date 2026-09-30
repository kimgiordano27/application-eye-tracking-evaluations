/*
FUNCTION_NAME: Oculus.Interaction.Throw.StandardVelocityCalculator$$UpdateLatestVelocitiesAndPoseValues
ENTRY_POINT: 051cde64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


long Oculus_Interaction_Throw_StandardVelocityCalculator__UpdateLatestVelocitiesAndPoseValues
               (undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  char cStack0000000000000030;
  char cStack0000000000000034;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  
  plVar5 = (long *)FUN_05206ae4(param_1,0);
  if (plVar5 == (long *)0x0) {
    if (unaff_x19 != 0) {
      FUN_051606d4();
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
LAB_051ce598:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  bVar1 = *(byte *)(*unaff_x27 + 0x130);
  if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar5);
  }
  if (unaff_x19 == 0) goto LAB_051ce598;
  lVar6 = FUN_051606d4();
  lVar15 = *(long *)(unaff_x19 + 0x60);
  uVar4 = *(undefined4 *)(unaff_x19 + 0x58);
  plVar5[8] = lVar6;
  plVar5[0xc] = lVar15;
  FUN_05160398(plVar5,uVar4,0);
  FUN_05160334(plVar5,*(undefined4 *)(unaff_x19 + 0x48),0);
  FUN_051603fc(plVar5,*(undefined4 *)(unaff_x19 + 0x5c),0);
  *(undefined1 *)((long)plVar5 + 0x71) = *(undefined1 *)(unaff_x19 + 0x71);
  FUN_05163f1c(plVar5,0);
  uVar7 = FUN_051cf4b0();
  plVar2 = in_stack_00000058;
  if ((uVar7 & 1) != 0) {
    return in_stack_00000040;
  }
  uVar7 = FUN_051d0168(uVar7,in_stack_00000058);
  plVar8 = in_stack_00000048;
  if ((uVar7 & 1) != 0) {
    lVar6 = FUN_051cd830();
    return lVar6;
  }
  if (plVar2 == (long *)0x0) goto LAB_051ce598;
  iVar3 = *(int *)((long)plVar2 + 0x24);
  if (iVar3 < 5) {
    if (iVar3 == 1) {
      cStack0000000000000034 = '\0';
      bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) goto LAB_051ce4cc;
      if (unaff_x22 != 0) {
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050ed374(plVar8);
        if ((uVar7 & 1) != 0) goto LAB_051ce2b0;
        uVar10 = thunk_FUN_02f1863c();
        if (plVar8 == (long *)0x0) goto LAB_051ce598;
        uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x2a0));
        if ((uVar7 & 1) != 0) goto LAB_051ce2b0;
      }
      unaff_x22 = FUN_051d0244();
      if (cStack0000000000000034 != '\0') {
        return unaff_x22;
      }
LAB_051ce2b0:
      FUN_051cbb74();
      return unaff_x22;
    }
    if (iVar3 == 3) {
      bVar1 = *(byte *)(*(long *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo))
      goto LAB_051ce4cc;
      plVar8 = *(long **)(unaff_x21 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_051ce598;
      iVar3 = (**(code **)(*plVar8 + 0x378))(plVar8,*(undefined8 *)(*plVar8 + 0x380));
      if ((iVar3 != 2) &&
         (iVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         iVar3 == 4)) {
        plVar8 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
        if (plVar8 == (long *)0x0) goto LAB_051ce598;
        uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        uVar7 = FUN_04f6d990(uVar10,*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                             ,4,0);
        if ((uVar7 & 1) != 0) {
          FUN_05163f1c(plVar5,0);
          iVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (iVar3 != 1) {
            lVar6 = FUN_051cceb8();
            FUN_05163f1c(plVar5,0);
            return lVar6;
          }
          FUN_02a7da48(plVar5);
          uVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          in_stack_00000018 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
          in_stack_00000020 = 0xffffffffffffffff;
          in_stack_00000028 = uVar4;
          uVar10 = FUN_0510aa48(&stack0x00000018,0);
          uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<Task>_TypeInfo);
          uVar10 = FUN_04f65260(uVar11,uVar10,0);
          goto LAB_051ce568;
        }
      }
    }
  }
  else {
    if (iVar3 == 5) {
      bVar1 = *(byte *)(*(long *)System_Func<VolumeComponent,_bool>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<VolumeComponent,_bool>_TypeInfo)) goto LAB_051ce4cc;
      if (unaff_x22 != 0) {
        if (((char)plVar2[0x20] == '\0') && (lVar6 = thunk_FUN_02f45174(), lVar6 != 0)) {
          FUN_02a7e964();
        }
        else {
          FUN_051c8098(plVar2);
        }
        lVar6 = FUN_051cb158();
        return lVar6;
      }
      lVar6 = FUN_051d046c();
      plVar8 = in_stack_00000058;
      if (cStack0000000000000030 == '\0') {
        FUN_051cb158();
        puVar14 = System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo;
        lVar15 = thunk_FUN_02f45174(lVar6,*(undefined8 *)
                                           System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo
                                   );
        if (lVar15 == 0) {
          return lVar6;
        }
        lVar6 = FUN_02a81978(0,*(undefined8 *)puVar14,lVar15);
        return lVar6;
      }
      if (in_stack_00000050 == 0) {
        if ((in_stack_00000058 == (long *)0x0) ||
           (lVar15 = FUN_051bd9a8(in_stack_00000058), lVar15 == 0)) goto LAB_051ce598;
        iVar3 = FUN_02a81978(0,*(undefined8 *)System_Func<MemberHolder,_MemberInfo[]>_TypeInfo,
                             lVar15);
        if (iVar3 < 1) {
          lVar15 = FUN_051bfc98(plVar8);
          if (lVar15 == 0) goto LAB_051ce598;
          iVar3 = FUN_02a81978(0,*(undefined8 *)
                                  System_Collections_Generic_ICollection<PropertyInfo>_TypeInfo,
                               lVar15);
          if (iVar3 < 1) {
            uVar7 = FUN_051c8018(plVar2);
            if ((uVar7 & 1) != 0) {
              FUN_051cb158();
              lVar15 = plVar2[0x22];
              if (lVar15 == 0) {
                lVar15 = FUN_051c7f38(plVar2);
              }
              lVar9 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
              if (lVar9 != 0) {
                FUN_02a81aa0(lVar9,lVar6);
                if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                *(long *)(lVar9 + 0x20) = lVar6;
                if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x051ce414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar6 = (**(code **)(lVar15 + 0x18))
                                    (*(undefined8 *)(lVar15 + 0x40),lVar9,
                                     *(undefined8 *)(lVar15 + 0x28));
                  return lVar6;
                }
              }
              goto LAB_051ce598;
            }
            thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
            FUN_02a7d698();
            uVar10 = FUN_050656a0(0);
            FUN_02a7da48(plVar8);
            lVar6 = plVar8[0xc];
            puVar14 = System_Collections_Generic_ICollection<UILineInfo>_TypeInfo;
          }
          else {
            thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
            FUN_02a7d698();
            uVar10 = FUN_050656a0(0);
            FUN_02a7da48(plVar8);
            lVar6 = plVar8[0xc];
            puVar14 = System_Collections_Generic_ICollection<UICharInfo>_TypeInfo;
          }
        }
        else {
          thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
          FUN_02a7d698();
          uVar10 = FUN_050656a0(0);
          FUN_02a7da48(plVar8);
          lVar6 = plVar8[0xc];
          puVar14 = System_Collections_Generic_ICollection<Type>_TypeInfo;
        }
        uVar11 = thunk_FUN_02f6ef30(puVar14);
      }
      else {
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar10 = FUN_050656a0(0);
        plVar2 = in_stack_00000058;
        FUN_02a7da48(in_stack_00000058);
        lVar6 = plVar2[0xc];
        uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<Transform>_TypeInfo);
      }
      uVar10 = FUN_051b937c(uVar11,uVar10,lVar6);
      goto LAB_051ce568;
    }
    if (iVar3 == 6) {
      bVar1 = *(byte *)(*(long *)
                         System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo))
      {
        lVar6 = FUN_051d069c();
        return lVar6;
      }
LAB_051ce4cc:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar2);
    }
    if (iVar3 == 7) {
      bVar1 = *(byte *)(*(long *)System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo)) {
        lVar6 = Oculus_Interaction_PoseDetection_FingerFeatureProperties__get_FeatureDescriptions();
        return lVar6;
      }
      goto LAB_051ce4cc;
    }
  }
  uVar10 = FUN_0511a510(0);
  uVar11 = FUN_0511a510(0);
  uVar12 = thunk_FUN_02f6ef30(
                             System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo
                             );
  uVar13 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<SortColumnDescription>_TypeInfo
                             );
  uVar10 = FUN_04f6fc18(uVar12,uVar10,uVar13,uVar11,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
  FUN_02a7d698();
  uVar11 = FUN_050656a0(0);
  plVar8 = in_stack_00000048;
  uVar12 = FUN_051cf3f8(uVar11,plVar2);
  uVar10 = FUN_051b9490(uVar10,uVar11,plVar8,uVar12);
LAB_051ce568:
  uVar10 = FUN_0515d378(plVar5,uVar10,0);
  uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<string>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar10,uVar11);
}


