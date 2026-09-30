/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_sessiongroup_handle_get
ENTRY_POINT: 0813532c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_sessiongroup_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  FUN_03c8f898();
  *(undefined1 *)(unaff_x19 + 0xdc7) = 1;
  lVar4 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_0718cfa8(lVar4,0);
  puVar2 = PTR_DAT_08eaa1d0;
  puVar1 = PTR_DAT_08ea8bc8;
  if (lVar4 != 0) {
    FUN_07199b48(lVar4,1,0);
    FUN_071997b8(lVar4,1,0);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_071ee8d0(lVar5,0);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
    FUN_071ee820(lVar6,0);
    if ((lVar6 != 0) && (*(undefined1 *)(lVar6 + 0x12) = 0, puVar3 = PTR_DAT_08f03388, lVar5 != 0))
    {
      *(long *)(lVar5 + 0x30) = lVar6;
      thunk_FUN_03d233cc((long *)(lVar5 + 0x30),lVar6);
      *(long *)(lVar4 + 0xe0) = lVar5;
      thunk_FUN_03d233cc((long *)(lVar4 + 0xe0),lVar5);
      **(long **)(*(long *)puVar3 + 0xb8) = lVar4;
      thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar4);
      lVar4 = thunk_FUN_03cf5234(*unaff_x22);
      FUN_0718cfa8(lVar4,0);
      if (lVar4 != 0) {
        FUN_07199b48(lVar4,1,0);
        FUN_071997b8(lVar4,0,0);
        lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_071ee8d0(lVar5,0);
        lVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
        FUN_071ee820(lVar6,0);
        if ((lVar6 != 0) && (*(undefined1 *)(lVar6 + 0x12) = 0, lVar5 != 0)) {
          *(long *)(lVar5 + 0x30) = lVar6;
          thunk_FUN_03d233cc((long *)(lVar5 + 0x30),lVar6);
          *(long *)(lVar4 + 0xe0) = lVar5;
          thunk_FUN_03d233cc((long *)(lVar4 + 0xe0),lVar5);
          plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          *plVar7 = lVar4;
          thunk_FUN_03d233cc(plVar7,lVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


