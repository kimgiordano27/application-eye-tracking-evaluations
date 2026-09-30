/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector3f>
ENTRY_POINT: 036a1740
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector3f>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  ulong uVar12;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_070f0f40);
  FUN_03188a78(PTR_DAT_070f0f48);
  FUN_03188a78(PTR_DAT_070f0f20);
  *(undefined1 *)(unaff_x26 + 0x613) = 1;
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x25);
  FUN_051ce330(uVar5,*unaff_x20);
  uVar6 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_042e4268(lVar7,*unaff_x22);
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x24);
  FUN_06acee48(uVar5,*unaff_x21,0);
  puVar3 = PTR_DAT_070f0f30;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_070f0f30;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar4 = PTR_DAT_070f1148;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      }
      else {
        FUN_042e4a64(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      puVar2 = PTR_DAT_070c1958;
      uVar5 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_0593e698(uVar5,0);
      if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(puVar2 + 0x98));
      }
      lVar8 = FUN_05964140(uVar5,0);
      if (lVar8 != 0) {
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar12 = 0;
          uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            uVar6 = *(undefined8 *)(lVar8 + 0x20 + uVar12 * 8);
            uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*unaff_x24);
            FUN_06acee48(uVar5,uVar6,0);
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar3;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_036a198c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            }
            else {
              FUN_042e4a64(lVar7,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_06ace590(*(long *)(unaff_x19 + 0x30),lVar7,0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x138);
            uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)PTR_DAT_070f0f40);
            FUN_04cd3358();
            if (lVar7 != 0) {
              FUN_04cd7a58(lVar7,uVar5,*(undefined8 *)PTR_DAT_070f0f48);
              return;
            }
          }
        }
      }
    }
  }
LAB_036a198c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


