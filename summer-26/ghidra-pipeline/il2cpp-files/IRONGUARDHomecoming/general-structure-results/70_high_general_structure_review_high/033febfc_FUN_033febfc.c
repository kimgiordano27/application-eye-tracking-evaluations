/*
FUNCTION_NAME: FUN_033febfc
ENTRY_POINT: 033febfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_033febfc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0483265c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SceneCaptureCompleteData>__
                      );
    DAT_0483265c = 1;
  }
  plVar7 = (long *)(param_1 + 0x20);
  if (*plVar7 != 0) goto LAB_033fed90;
  if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_03532f80(0);
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_033feda8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  local_34 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__,
                             &local_34);
  uVar5 = FUN_033fedac(param_1);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_033feda8;
  local_38 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28);
  uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_38);
  uVar3 = FUN_0340f4cc(uVar3,*(undefined8 *)
                              Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SceneCaptureCompleteData>__
                       ,uVar4,uVar5,uVar6,0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_01f51358(plVar7,uVar3);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_033feda8;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x2c);
  if (*(int *)(*(long *)
                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_DisplayRefreshRateChangedData>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    if ((uVar1 & 1) != 0) goto LAB_033fed48;
LAB_033fed38:
    uVar3 = FUN_033ff42c();
  }
  else {
    if ((uVar1 & 1) == 0) goto LAB_033fed38;
LAB_033fed48:
    uVar3 = FUN_033feee4();
  }
  lVar8 = *plVar7;
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
  }
  lVar8 = System_Threading_OSSpecificSynchronizationContext__Post(uVar3,lVar8,0);
  *plVar7 = lVar8;
  thunk_FUN_01f51358(plVar7,lVar8);
LAB_033fed90:
  return *plVar7;
}


