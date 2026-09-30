/*
FUNCTION_NAME: FUN_033ff42c
ENTRY_POINT: 033ff42c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x033ff678) */
/* WARNING: Removing unreachable block (ram,0x033ff6d0) */

undefined8 FUN_033ff42c(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  char local_34 [4];
  
  puVar1 = 
  Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__;
  if ((DAT_0483265f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_get_ModuleVersionId__);
    thunk_FUN_01efb3a4(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceEraseCompleteData>__
                      );
    DAT_0483265f = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  local_34[0] = '\0';
  FUN_035ce230(uVar9,local_34,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar3);
    lVar3 = *(long *)puVar1;
  }
  pcVar7 = *(char **)(lVar3 + 0xb8);
  if (*(long *)(pcVar7 + 8) != 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      lVar3 = *(long *)puVar1;
      pcVar7 = *(char **)(lVar3 + 0xb8);
    }
    if (*pcVar7 != '\0') goto LAB_033ff608;
  }
  uVar4 = FUN_035b0a44(0x1a,0);
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = System_Threading_OSSpecificSynchronizationContext__Post
                    (uVar4,*(undefined8 *)Method_System_Reflection_Module_get_ModuleVersionId__,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_01f51358(puVar5,uVar4);
  uVar4 = System_Threading_OSSpecificSynchronizationContext__Post
                    (*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                     *(undefined8 *)
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceEraseCompleteData>__
                     ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar4;
  thunk_FUN_01f51358();
  bVar2 = FUN_034d1720(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
  lVar3 = *(long *)puVar1;
  pbVar8 = *(byte **)(lVar3 + 0xb8);
  *pbVar8 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      pbVar8 = *(byte **)(*(long *)puVar1 + 0xb8);
    }
    FUN_034d0f5c(*(undefined8 *)(pbVar8 + 8),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      lVar3 = *(long *)puVar1;
    }
    **(undefined1 **)(lVar3 + 0xb8) = 1;
  }
LAB_033ff608:
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar3);
    lVar3 = *(long *)puVar1;
  }
  uVar6 = FUN_03400214(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8));
  if ((uVar6 & 1) == 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = FUN_03400170(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8));
    if ((uVar6 & 1) == 0) {
      uVar9 = thunk_FUN_01efb3a4(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpatialAnchorCreateCompleteData>__
                                );
      lVar3 = thunk_FUN_01efb3a4(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                                );
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar3 = thunk_FUN_01efb3a4(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                                );
      uVar9 = FUN_03406290(uVar9,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0);
      thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
      uVar4 = thunk_FUN_01f117cc();
      FUN_034c6a10(uVar4,uVar9,0);
      uVar9 = thunk_FUN_01efb3a4(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceShareResultData>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar9);
    }
  }
  if (local_34[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  uVar6 = FUN_03400214(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8));
  if ((uVar6 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  }
  uVar9 = thunk_FUN_01efb3a4(
                            Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceSetComponentStatusCompleteData>__
                            );
  puVar1 = 
  Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__;
  thunk_FUN_01efb3a4(
                    Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                    );
  FUN_01bc4c70();
  lVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar9 = FUN_03406290(uVar9,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0);
  thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
  uVar4 = thunk_FUN_01f117cc();
  FUN_03437810(uVar4,uVar9,0);
  uVar9 = thunk_FUN_01efb3a4(
                            Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceShareResultData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar9);
}


