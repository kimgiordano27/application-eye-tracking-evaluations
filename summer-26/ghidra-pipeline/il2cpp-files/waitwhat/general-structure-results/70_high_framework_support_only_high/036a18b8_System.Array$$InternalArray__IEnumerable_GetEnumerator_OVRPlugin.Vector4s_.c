/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector4s>
ENTRY_POINT: 036a18b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector4s>(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  long unaff_x27;
  
  do {
    *(int *)(unaff_x20 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) {
LAB_036a198c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_042e4a64();
    }
    unaff_x26 = unaff_x26 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_06ace590();
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x138);
          uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)PTR_DAT_070f0f40);
          FUN_04cd3358();
          if (lVar3 != 0) {
            FUN_04cd7a58(lVar3,uVar2,*(undefined8 *)PTR_DAT_070f0f48);
            return;
          }
        }
      }
      goto LAB_036a198c;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar2 = *(undefined8 *)(unaff_x27 + unaff_x26 * 8);
    unaff_x22 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x24);
    FUN_06acee48(unaff_x22,uVar2,0);
    in_w10 = *(int *)(unaff_x20 + 0x1c);
    param_1 = *(long *)(unaff_x20 + 0x10);
  } while( true );
}


