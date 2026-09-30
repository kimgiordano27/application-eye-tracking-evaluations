/*
FUNCTION_NAME: FUN_051cdc80
ENTRY_POINT: 051cdc80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_051cdc80(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char local_80 [4];
  char local_7c;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 051cdc54 with catch @ 051cdc80
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 051cdbf8 with catch @ 051cdc84
                        */
  local_58 = param_4;
  if ((DAT_06bba532 & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_ICollection<PropertyInfo>_TypeInfo);
    FUN_02f08768(System_Func<MemberHolder,_MemberInfo[]>_TypeInfo);
    FUN_02f08768(PTR_DAT_067caae8);
    FUN_02f08768(System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_ICollection<SerializationCallback>_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca180);
    FUN_02f08768(System_Func<VolumeComponent,_bool>_TypeInfo);
    FUN_02f08768(System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo);
    FUN_02f08768(System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo);
    FUN_02f08768(System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
    FUN_02f08768(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
    DAT_06bba532 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_7c = '\0';
  local_80[0] = '\0';
  local_68 = param_3;
  if (plVar5 == (long *)0x0) goto LAB_051ce598;
  iVar3 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
  if (iVar3 == 2) {
    if (param_2 == (long *)0x0) goto LAB_051ce598;
    uVar6 = FUN_05163f1c(param_2,0);
    local_60 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_051ce598;
    iVar3 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
    puVar14 = System_Collections_Generic_ICollection<SerializationCallback>_TypeInfo;
    if (iVar3 == 1) {
      if (param_2 == (long *)0x0) {
LAB_051cde3c:
        if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar7 = FUN_05207a68(param_2,0);
        if (lVar7 == 0) goto LAB_051ce598;
        plVar5 = (long *)FUN_05206ae4(lVar7,0);
        if (plVar5 == (long *)0x0) {
          if (param_2 != (long *)0x0) {
            FUN_051606d4(param_2,0);
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_051ce598;
        }
        bVar1 = *(byte *)(*(long *)puVar14 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar5);
        }
        if (param_2 == (long *)0x0) goto LAB_051ce598;
        lVar8 = FUN_051606d4(param_2,0);
        lVar9 = param_2[0xc];
        lVar7 = param_2[0xb];
        plVar5[8] = lVar8;
        plVar5[0xc] = lVar9;
        FUN_05160398(plVar5,(int)lVar7,0);
        FUN_05160334(plVar5,(int)param_2[9],0);
        FUN_051603fc(plVar5,*(undefined4 *)((long)param_2 + 0x5c),0);
        *(undefined1 *)((long)plVar5 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
        FUN_05163f1c(plVar5,0);
        param_2 = plVar5;
      }
      else {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_ICollection<SerializationCallback>_TypeInfo +
                         0x130);
        if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Collections_Generic_ICollection<SerializationCallback>_TypeInfo))
        goto LAB_051cde3c;
      }
      uVar6 = FUN_051cf4b0(param_1,param_2,&local_68,&local_58,param_5,param_6,param_7,param_8,
                           &local_70,&local_60);
      lVar7 = local_70;
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_051ce598;
      FUN_05163f1c(param_2,0);
      uVar6 = FUN_051cfbdc(param_1,param_2,&local_68,&local_58,param_5,param_6,param_7,param_8,
                           &local_78,&local_60);
      lVar7 = local_78;
    }
    if ((uVar6 & 1) != 0) {
      return lVar7;
    }
  }
  plVar2 = local_58;
  uVar6 = FUN_051d0168(uVar6,local_58);
  plVar5 = local_68;
  puVar14 = PTR_DAT_067caae8;
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_051cd830(param_1,param_2);
    return lVar7;
  }
  if (plVar2 == (long *)0x0) goto LAB_051ce598;
  iVar3 = *(int *)((long)plVar2 + 0x24);
  if (iVar3 < 5) {
    if (iVar3 == 1) {
      local_7c = '\0';
      bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) goto LAB_051ce4cc;
      if (param_8 != 0) {
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_050ed374(plVar5,param_3,0);
        if ((uVar6 & 1) != 0) goto LAB_051ce2b0;
        uVar10 = thunk_FUN_02f1863c(param_8,0);
        if (plVar5 == (long *)0x0) goto LAB_051ce598;
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x2a0));
        if ((uVar6 & 1) != 0) goto LAB_051ce2b0;
      }
      param_8 = FUN_051d0244(param_1,param_2,plVar2,param_5);
      if (local_7c != '\0') {
        return param_8;
      }
LAB_051ce2b0:
      FUN_051cbb74(param_1,param_8,param_2,plVar2,param_5,local_60);
      return param_8;
    }
    if (iVar3 == 3) {
      bVar1 = *(byte *)(*(long *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo))
      goto LAB_051ce4cc;
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_051ce598;
      iVar3 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
      if ((iVar3 != 2) &&
         (iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
         iVar3 == 4)) {
        plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar5 == (long *)0x0) goto LAB_051ce598;
        uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        uVar6 = FUN_04f6d990(uVar10,*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                             ,4,0);
        if ((uVar6 & 1) != 0) {
          FUN_05163f1c(param_2,0);
          iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          if (iVar3 != 1) {
            lVar7 = FUN_051cceb8(param_1,param_2,local_68,plVar2,param_5,0,0,param_8);
            FUN_05163f1c(param_2,0);
            return lVar7;
          }
          FUN_02a7da48(param_2);
          uVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          local_98 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
          uStack_90 = 0xffffffffffffffff;
          local_88 = uVar4;
          uVar10 = FUN_0510aa48(&local_98,0);
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
      if (param_8 != 0) {
        if (((char)plVar2[0x20] == '\0') &&
           (lVar7 = thunk_FUN_02f45174(param_8,*(undefined8 *)PTR_DAT_067caae8), lVar7 != 0)) {
          uVar10 = FUN_02a7e964(param_8,*(undefined8 *)puVar14);
        }
        else {
          uVar10 = FUN_051c8098(plVar2,param_8);
        }
        lVar7 = FUN_051cb158(param_1,uVar10,param_2,plVar2,param_5,local_60);
        return lVar7;
      }
      lVar7 = FUN_051d046c(param_1,param_2,plVar2,local_80);
      plVar5 = local_58;
      if (local_80[0] == '\0') {
        FUN_051cb158(param_1,lVar7,param_2,plVar2,param_5,local_60);
        puVar14 = System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo;
        lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)
                                          System_Collections_Generic_HashSet<BaseRuntimePanel>_TypeInfo
                                  );
        if (lVar8 == 0) {
          return lVar7;
        }
        lVar7 = FUN_02a81978(0,*(undefined8 *)puVar14,lVar8);
        return lVar7;
      }
      if (local_60 == 0) {
        if ((local_58 == (long *)0x0) || (lVar8 = FUN_051bd9a8(local_58), lVar8 == 0)) {
LAB_051ce598:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar3 = FUN_02a81978(0,*(undefined8 *)System_Func<MemberHolder,_MemberInfo[]>_TypeInfo,lVar8
                            );
        if (iVar3 < 1) {
          lVar8 = FUN_051bfc98(plVar5);
          if (lVar8 == 0) goto LAB_051ce598;
          iVar3 = FUN_02a81978(0,*(undefined8 *)
                                  System_Collections_Generic_ICollection<PropertyInfo>_TypeInfo,
                               lVar8);
          if (iVar3 < 1) {
            uVar6 = FUN_051c8018(plVar2);
            if ((uVar6 & 1) != 0) {
              FUN_051cb158(param_1,lVar7,param_2,plVar2,param_5,0);
              lVar8 = plVar2[0x22];
              if (lVar8 == 0) {
                lVar8 = FUN_051c7f38(plVar2);
              }
              lVar9 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
              if (lVar9 != 0) {
                FUN_02a81aa0(lVar9,lVar7);
                if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                *(long *)(lVar9 + 0x20) = lVar7;
                if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x051ce414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar7 = (**(code **)(lVar8 + 0x18))
                                    (*(undefined8 *)(lVar8 + 0x40),lVar9,
                                     *(undefined8 *)(lVar8 + 0x28));
                  return lVar7;
                }
              }
              goto LAB_051ce598;
            }
            thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
            FUN_02a7d698();
            uVar10 = FUN_050656a0(0);
            FUN_02a7da48(plVar5);
            lVar7 = plVar5[0xc];
            puVar14 = System_Collections_Generic_ICollection<UILineInfo>_TypeInfo;
          }
          else {
            thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
            FUN_02a7d698();
            uVar10 = FUN_050656a0(0);
            FUN_02a7da48(plVar5);
            lVar7 = plVar5[0xc];
            puVar14 = System_Collections_Generic_ICollection<UICharInfo>_TypeInfo;
          }
        }
        else {
          thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
          FUN_02a7d698();
          uVar10 = FUN_050656a0(0);
          FUN_02a7da48(plVar5);
          lVar7 = plVar5[0xc];
          puVar14 = System_Collections_Generic_ICollection<Type>_TypeInfo;
        }
        uVar11 = thunk_FUN_02f6ef30(puVar14);
      }
      else {
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar10 = FUN_050656a0(0);
        plVar5 = local_58;
        FUN_02a7da48(local_58);
        lVar7 = plVar5[0xc];
        uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<Transform>_TypeInfo);
      }
      uVar10 = FUN_051b937c(uVar11,uVar10,lVar7);
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
        lVar7 = FUN_051d069c(param_1,param_2,plVar2,param_5,local_60);
        return lVar7;
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
        lVar7 = Oculus_Interaction_PoseDetection_FingerFeatureProperties__get_FeatureDescriptions
                          (param_1,param_2,plVar2,param_5,local_60);
        return lVar7;
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
  plVar5 = local_68;
  uVar12 = FUN_051cf3f8(uVar11,plVar2);
  uVar10 = FUN_051b9490(uVar10,uVar11,plVar5,uVar12);
LAB_051ce568:
  uVar10 = FUN_0515d378(param_2,uVar10,0);
  uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<string>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar10,uVar11);
}


