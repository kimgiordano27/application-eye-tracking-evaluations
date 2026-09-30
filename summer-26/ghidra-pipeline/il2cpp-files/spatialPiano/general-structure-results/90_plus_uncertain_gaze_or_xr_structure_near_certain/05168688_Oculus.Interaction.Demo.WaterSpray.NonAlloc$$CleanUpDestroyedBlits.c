/*
FUNCTION_NAME: Oculus.Interaction.Demo.WaterSpray.NonAlloc$$CleanUpDestroyedBlits
ENTRY_POINT: 05168688
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 182
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Interaction_Demo_WaterSpray_NonAlloc__CleanUpDestroyedBlits(void)

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
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long lVar12;
  char cStack0000000000000008;
  char cStack0000000000000010;
  char cStack0000000000000018;
  char cStack0000000000000020;
  char cStack0000000000000028;
  
  _cStack0000000000000020 = 0;
  _cStack0000000000000028 = 0;
  _cStack0000000000000010 = 0;
  _cStack0000000000000018 = 0;
  _cStack0000000000000008 = 0;
  FUN_051b97b0();
  _cStack0000000000000028 = 0;
  if ((char)unaff_x20[0xf] != '\0') {
    if (unaff_x19 == 0) goto LAB_05168b08;
    if (((unaff_x20[0xf] & 0xffU) == 0) ||
       (*(int *)(unaff_x19 + 0x34) != (int)((ulong)unaff_x20[0xf] >> 0x20))) {
      FUN_03e1bd20(&stack0x00000028,*(int *)(unaff_x19 + 0x34),
                   *(undefined8 *)
                    System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                  );
      FUN_05199f34();
    }
  }
  _cStack0000000000000020 = 0;
  if ((char)unaff_x20[0x10] != '\0') {
    if (unaff_x19 == 0) goto LAB_05168b08;
    if (((unaff_x20[0x10] & 0xffU) == 0) ||
       (*(int *)(unaff_x19 + 0x3c) != (int)((ulong)unaff_x20[0x10] >> 0x20))) {
      FUN_03e1bd20(&stack0x00000020,*(int *)(unaff_x19 + 0x3c),
                   *(undefined8 *)Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo);
      FUN_05199f98();
    }
  }
  _cStack0000000000000018 = 0;
  if ((char)unaff_x20[0x11] != '\0') {
    if (unaff_x19 == 0) goto LAB_05168b08;
    if (((unaff_x20[0x11] & 0xffU) == 0) ||
       (*(int *)(unaff_x19 + 0x40) != (int)((ulong)unaff_x20[0x11] >> 0x20))) {
      FUN_03e1bd20(&stack0x00000018,*(int *)(unaff_x19 + 0x40),
                   *(undefined8 *)Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo);
      FUN_05199ffc();
    }
  }
  _cStack0000000000000010 = 0;
  if ((char)unaff_x20[0x13] != '\0') {
    if (unaff_x19 == 0) goto LAB_05168b08;
    if (((unaff_x20[0x13] & 0xffU) == 0) ||
       (*(int *)(unaff_x19 + 0x48) != (int)((ulong)unaff_x20[0x13] >> 0x20))) {
      FUN_03e1bd20(&stack0x00000010,*(int *)(unaff_x19 + 0x48),
                   *(undefined8 *)System_Runtime_Serialization_DataNode<double>_TypeInfo);
      FUN_0519a0d8();
    }
  }
  _cStack0000000000000008 = 0;
  if ((char)unaff_x20[0x15] != '\0') {
    if (unaff_x19 == 0) goto LAB_05168b08;
    if (((unaff_x20[0x15] & 0xffU) == 0) ||
       (*(int *)(unaff_x19 + 0x44) != (int)((ulong)unaff_x20[0x15] >> 0x20))) {
      FUN_03e1bd20(&stack0x00000008,*(int *)(unaff_x19 + 0x44),
                   *(undefined8 *)System_Runtime_Serialization_DataNode<short>_TypeInfo);
      FUN_0519a060();
    }
  }
  plVar11 = (long *)unaff_x20[0x16];
  lVar12 = 0;
  if (plVar11 != (long *)0x0) {
    if (unaff_x19 == 0) goto LAB_05168b08;
    uVar4 = FUN_0518a164();
    uVar5 = (**(code **)(*plVar11 + 0x138))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x140));
    lVar12 = 0;
    if ((uVar5 & 1) == 0) {
      lVar12 = FUN_0518a164();
      *(long *)(unaff_x19 + 0x58) = unaff_x20[0x16];
    }
  }
  if ((char)unaff_x20[0x1a] == '\0') {
    uVar4 = 0;
  }
  else {
    if (unaff_x19 == 0) goto LAB_05168b08;
    uVar5 = FUN_04f6dc3c(*(undefined8 *)(unaff_x19 + 0x50),unaff_x20[0x19],0);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
      *(long *)(unaff_x19 + 0x50) = unaff_x20[0x19];
    }
  }
  puVar2 = System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo;
  lVar6 = (**(code **)(*unaff_x20 + 0x1f8))();
  if (lVar6 == 0) {
LAB_0516896c:
    lVar6 = 0;
  }
  else {
    plVar11 = (long *)(**(code **)(*unaff_x20 + 0x1f8))();
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
    FUN_051dffec();
  }
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                              System_Collections_Generic_Dictionary<Binding,_int>_TypeInfo);
  FUN_051d6228();
  if (lVar9 != 0) {
    lVar1 = unaff_x19;
    if (lVar6 != 0) {
      lVar1 = lVar6;
    }
    FUN_051d62ac(lVar9,lVar1);
    if (lVar6 != 0) {
      plVar11 = (long *)(**(code **)(*unaff_x20 + 0x1f8))();
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
    if (cStack0000000000000028 != '\0') {
      if (unaff_x19 == 0) goto LAB_05168b08;
      FUN_05199f34();
    }
    if (cStack0000000000000020 != '\0') {
      if (unaff_x19 == 0) goto LAB_05168b08;
      FUN_05199f98();
    }
    if (cStack0000000000000018 != '\0') {
      if (unaff_x19 == 0) goto LAB_05168b08;
      FUN_05199ffc();
    }
    if (cStack0000000000000010 != '\0') {
      if (unaff_x19 == 0) goto LAB_05168b08;
      FUN_0519a0d8();
    }
    if (cStack0000000000000008 != '\0') {
      if (unaff_x19 == 0) goto LAB_05168b08;
      FUN_0519a060();
    }
    if ((char)unaff_x20[0x1a] != '\0') {
      if (unaff_x19 == 0) goto LAB_05168b08;
      *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
    }
    if (lVar12 != 0) {
      if (unaff_x19 == 0) goto LAB_05168b08;
      *(long *)(unaff_x19 + 0x58) = lVar12;
    }
    return;
  }
LAB_05168b08:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


