/*
FUNCTION_NAME: FUN_0516855c
ENTRY_POINT: 0516855c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_0516855c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar2 = System_Collections_Generic_Dictionary<BaseRuntimePanel,_Action>_TypeInfo;
  if ((DAT_06bba1d0 & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_Dictionary<Binding,_int>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataNode<Decimal>_TypeInfo);
    FUN_02f08768(
                System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<object,_OSSpecificSynchronizationContext>_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo);
    FUN_02f08768(System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataNode<Guid>_TypeInfo);
    FUN_02f08768(Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo);
    FUN_02f08768(
                System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    FUN_02f08768(System_Runtime_Serialization_DataNode<short>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataNode<double>_TypeInfo);
    FUN_02f08768(Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataNode<uint>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataNode<ulong>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataNode<XmlQualifiedName>_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_DebugDisplayStats<URPProfileId>_TypeInfo);
    FUN_02f08768(Oculus_Interaction_Input_DataModifier<HandDataAsset>_TypeInfo);
    FUN_02f08768(
                System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_Dictionary<BaseRuntimePanel,_Action>_TypeInfo);
    DAT_06bba1d0 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  FUN_051b97b0(param_2,*(undefined8 *)puVar2,0);
  local_58 = 0;
  if ((char)param_1[0xf] != '\0') {
    if (param_2 == 0) goto LAB_05168b08;
    if (((param_1[0xf] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x34) != (int)((ulong)param_1[0xf] >> 0x20))) {
      FUN_03e1bd20(&local_58,*(int *)(param_2 + 0x34),
                   *(undefined8 *)
                    System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                  );
      FUN_05199f34(param_2,*(undefined4 *)((long)param_1 + 0x7c),0);
    }
  }
  local_60 = 0;
  if ((char)param_1[0x10] != '\0') {
    if (param_2 == 0) goto LAB_05168b08;
    if (((param_1[0x10] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x3c) != (int)((ulong)param_1[0x10] >> 0x20))) {
      FUN_03e1bd20(&local_60,*(int *)(param_2 + 0x3c),
                   *(undefined8 *)Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo);
      FUN_05199f98(param_2,*(undefined4 *)((long)param_1 + 0x84),0);
    }
  }
  local_68 = 0;
  if ((char)param_1[0x11] != '\0') {
    if (param_2 == 0) goto LAB_05168b08;
    if (((param_1[0x11] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x40) != (int)((ulong)param_1[0x11] >> 0x20))) {
      FUN_03e1bd20(&local_68,*(int *)(param_2 + 0x40),
                   *(undefined8 *)Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo);
      FUN_05199ffc(param_2,*(undefined4 *)((long)param_1 + 0x8c),0);
    }
  }
  local_70 = 0;
  if ((char)param_1[0x13] != '\0') {
    if (param_2 == 0) goto LAB_05168b08;
    if (((param_1[0x13] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x48) != (int)((ulong)param_1[0x13] >> 0x20))) {
      FUN_03e1bd20(&local_70,*(int *)(param_2 + 0x48),
                   *(undefined8 *)System_Runtime_Serialization_DataNode<double>_TypeInfo);
      FUN_0519a0d8(param_2,*(undefined4 *)((long)param_1 + 0x9c),0);
    }
  }
  local_78 = 0;
  if ((char)param_1[0x15] != '\0') {
    if (param_2 == 0) goto LAB_05168b08;
    if (((param_1[0x15] & 0xffU) == 0) ||
       (*(int *)(param_2 + 0x44) != (int)((ulong)param_1[0x15] >> 0x20))) {
      FUN_03e1bd20(&local_78,*(int *)(param_2 + 0x44),
                   *(undefined8 *)System_Runtime_Serialization_DataNode<short>_TypeInfo);
      FUN_0519a060(param_2,*(undefined4 *)((long)param_1 + 0xac),0);
    }
  }
  plVar11 = (long *)param_1[0x16];
  lVar12 = 0;
  if (plVar11 != (long *)0x0) {
    if (param_2 == 0) goto LAB_05168b08;
    uVar4 = FUN_0518a164(param_2,0);
    uVar5 = (**(code **)(*plVar11 + 0x138))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x140));
    lVar12 = 0;
    if ((uVar5 & 1) == 0) {
      lVar12 = FUN_0518a164(param_2,0);
      *(long *)(param_2 + 0x58) = param_1[0x16];
    }
  }
  if ((char)param_1[0x1a] == '\0') {
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_05168b08;
    uVar5 = FUN_04f6dc3c(*(undefined8 *)(param_2 + 0x50),param_1[0x19],0);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      *(long *)(param_2 + 0x50) = param_1[0x19];
    }
  }
  puVar2 = System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo;
  lVar6 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (lVar6 == 0) {
LAB_0516896c:
    lVar6 = 0;
  }
  else {
    plVar11 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (plVar11 == (long *)0x0) goto LAB_05168b08;
    lVar9 = *plVar11;
    lVar6 = *(long *)puVar2;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05168934;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar11,lVar6,0);
LAB_05168934:
    iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (iVar3 < 4) goto LAB_0516896c;
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_TypeInfo
                              );
    FUN_051dffec(lVar6,param_2,0);
  }
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_Dictionary<Binding,_int>_TypeInfo);
  FUN_051d6228(lVar9,param_1,0);
  if (lVar9 != 0) {
    lVar1 = param_2;
    if (lVar6 != 0) {
      lVar1 = lVar6;
    }
    FUN_051d62ac(lVar9,lVar1,param_3,param_4,0);
    if (lVar6 != 0) {
      plVar11 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      uVar8 = Oculus_Interaction_PoseDetection_Debug_ActiveStateNodeUIHorizontal__Start(lVar6,0);
      if (plVar11 == (long *)0x0) goto LAB_05168b08;
      lVar9 = *plVar11;
      lVar6 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05168a2c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar11,lVar6,1);
LAB_05168a2c:
      (*(code *)*puVar7)(plVar11,4,uVar8,0,puVar7[1]);
    }
    if ((char)local_58 != '\0') {
      if (param_2 == 0) goto LAB_05168b08;
      FUN_05199f34(param_2,local_58._4_4_,0);
    }
    if ((char)local_60 != '\0') {
      if (param_2 == 0) goto LAB_05168b08;
      FUN_05199f98(param_2,local_60._4_4_,0);
    }
    if ((char)local_68 != '\0') {
      if (param_2 == 0) goto LAB_05168b08;
      FUN_05199ffc(param_2,local_68._4_4_,0);
    }
    if ((char)local_70 != '\0') {
      if (param_2 == 0) goto LAB_05168b08;
      FUN_0519a0d8(param_2,local_70._4_4_,0);
    }
    if ((char)local_78 != '\0') {
      if (param_2 == 0) goto LAB_05168b08;
      FUN_0519a060(param_2,local_78._4_4_,0);
    }
    if ((char)param_1[0x1a] != '\0') {
      if (param_2 == 0) goto LAB_05168b08;
      *(undefined8 *)(param_2 + 0x50) = uVar4;
    }
    if (lVar12 != 0) {
      if (param_2 == 0) goto LAB_05168b08;
      *(long *)(param_2 + 0x58) = lVar12;
    }
    return;
  }
LAB_05168b08:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


