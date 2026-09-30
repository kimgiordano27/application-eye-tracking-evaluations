/*
FUNCTION_NAME: FUN_044f2bc0
ENTRY_POINT: 044f2bc0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_044f2bc0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 044f2bd0 to 045f2be7 has its CatchHandler @ 044f2c60 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 044f2be8 to 045f2c4f has its CatchHandler @ 044f2af0 */
    FUN_05941350(8);
  }
  if ((*(ushort *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyTo
            (lVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_044f2d30;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
Unity_Collections_NativeArray<OVRTriangleMesh_Triangle>__ToArray:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (param_2 == 0) goto LAB_044f2d30;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      uStack_58 = puVar1[1];
      local_60 = *puVar1;
      uStack_48 = puVar1[3];
      uStack_50 = puVar1[2];
      uVar4 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_60,*(undefined8 *)(param_2 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_044f2d30;
        if (*(uint *)(lVar5 + 0x18) <= uVar7)
        goto Unity_Collections_NativeArray<OVRTriangleMesh_Triangle>__ToArray;
        if (lVar3 == 0) {
LAB_044f2d30:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        puVar1 = (undefined8 *)(lVar5 + lVar8);
        uVar10 = puVar1[1];
        uVar9 = *puVar1;
        uVar12 = puVar1[3];
        uVar11 = puVar1[2];
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_044f2d30;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar2 * 0x20;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + 0x28) = uVar10;
          *(undefined8 *)(lVar5 + 0x20) = uVar9;
          *(undefined8 *)(lVar5 + 0x38) = uVar12;
          *(undefined8 *)(lVar5 + 0x30) = uVar11;
        }
        else {
          local_60 = uVar9;
          uStack_58 = uVar10;
          uStack_50 = uVar11;
          uStack_48 = uVar12;
          FUN_044f240c(lVar3,&local_60,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar3;
}


