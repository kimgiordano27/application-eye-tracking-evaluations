/*
FUNCTION_NAME: FUN_033feee4
ENTRY_POINT: 033feee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x033ff130) */
/* WARNING: Removing unreachable block (ram,0x033ff188) */

undefined8 FUN_033feee4(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char local_34 [4];
  
  puVar1 = 
  Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__;
  if ((DAT_04832660 & 1) == 0) {
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
    DAT_04832660 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  local_34[0] = '\0';
  FUN_035ce230(uVar8,local_34,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar3);
    lVar3 = *(long *)puVar1;
  }
  lVar7 = *(long *)(lVar3 + 0xb8);
  if (*(long *)(lVar7 + 0x18) != 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      lVar3 = *(long *)puVar1;
      lVar7 = *(long *)(lVar3 + 0xb8);
    }
    if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_033ff0c0;
  }
  uVar4 = FUN_035b0a44(0x23,0);
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
  puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  *puVar5 = uVar4;
  thunk_FUN_01f51358(puVar5,uVar4);
  uVar4 = System_Threading_OSSpecificSynchronizationContext__Post
                    (*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),
                     *(undefined8 *)
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceEraseCompleteData>__
                     ,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar4;
  thunk_FUN_01f51358();
  bVar2 = FUN_034d1720(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
  lVar3 = *(long *)puVar1;
  lVar7 = *(long *)(lVar3 + 0xb8);
  *(byte *)(lVar7 + 0x10) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    FUN_034d0f5c(*(undefined8 *)(lVar7 + 0x18),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar3);
      lVar3 = *(long *)puVar1;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x10) = 1;
  }
LAB_033ff0c0:
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar3);
    lVar3 = *(long *)puVar1;
  }
  uVar6 = FUN_034002a4(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18));
  if ((uVar6 & 1) == 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = FUN_034000e0(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18));
    if ((uVar6 & 1) == 0) {
      uVar8 = thunk_FUN_01efb3a4(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__
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
      uVar8 = FUN_03406290(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),0);
      thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
      uVar4 = thunk_FUN_01f117cc();
      FUN_034c6a10(uVar4,uVar8,0);
      uVar8 = thunk_FUN_01efb3a4(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar8);
    }
  }
  if (local_34[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar8,0);
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  uVar6 = FUN_034002a4(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18));
  if ((uVar6 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  }
  uVar8 = thunk_FUN_01efb3a4(
                            Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceListSaveResultData>__
                            );
  puVar1 = 
  Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__;
  thunk_FUN_01efb3a4(
                    Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                    );
  FUN_01bc4c70();
  lVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar8 = FUN_03406290(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),0);
  thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
  uVar4 = thunk_FUN_01f117cc();
  FUN_03437810(uVar4,uVar8,0);
  uVar8 = thunk_FUN_01efb3a4(
                            Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar8);
}


