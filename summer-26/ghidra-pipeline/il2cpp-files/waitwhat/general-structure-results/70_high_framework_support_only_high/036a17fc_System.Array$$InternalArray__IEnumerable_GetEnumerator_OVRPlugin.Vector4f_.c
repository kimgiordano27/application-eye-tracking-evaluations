/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector4f>
ENTRY_POINT: 036a17fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector4f>(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  undefined8 *unaff_x24;
  ulong uVar8;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_x21;
  puVar2 = PTR_DAT_070c1958;
  uVar6 = *unaff_x22;
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_0593e698(uVar6,0);
  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(puVar2 + 0x98));
  }
  lVar3 = FUN_05964140(uVar6,0);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar8 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        uVar7 = *(undefined8 *)(lVar3 + 0x20 + uVar8 * 8);
        uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x24);
        FUN_06acee48(uVar6,uVar7,0);
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_036a198c;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        }
        else {
          FUN_042e4a64();
        }
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_06ace590();
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x138);
        uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070f0f40);
        FUN_04cd3358();
        if (lVar3 != 0) {
          FUN_04cd7a58(lVar3,uVar6,*(undefined8 *)PTR_DAT_070f0f48);
          return;
        }
      }
    }
  }
LAB_036a198c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


