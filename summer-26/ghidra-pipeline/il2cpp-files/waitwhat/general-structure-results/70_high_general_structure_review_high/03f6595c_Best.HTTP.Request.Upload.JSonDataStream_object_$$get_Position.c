/*
FUNCTION_NAME: Best.HTTP.Request.Upload.JSonDataStream<object>$$get_Position
ENTRY_POINT: 03f6595c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4
*/


void Best_HTTP_Request_Upload_JSonDataStream<object>__get_Position(ulong param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar5;
  undefined *puVar3;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2d18);
    *(undefined1 *)(unaff_x23 + 0xb0d) = 1;
  }
  if (unaff_x20 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar3 = PTR_DAT_070f1ff8;
  }
  else {
    if (unaff_x22 != (long *)0x0) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        FUN_031c09d4(lVar4);
      }
      lVar4 = thunk_FUN_031c3cac();
      if (lVar4 == 0) {
        uVar5 = **(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_0593e698(uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_070c2d18 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070c2d18);
        }
        unaff_x22 = (long *)FUN_058aa01c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4(lVar4);
      }
      if (unaff_x22 != (long *)0x0) {
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar4 + 0x40)) {
          puVar1 = (undefined4 *)thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x03f65a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 600))(param_2,*puVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03189058(unaff_x22);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar3 = PTR_DAT_070c7b10;
  }
  uVar2 = thunk_FUN_031edd38(puVar3);
  FUN_05897880(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar5);
}


