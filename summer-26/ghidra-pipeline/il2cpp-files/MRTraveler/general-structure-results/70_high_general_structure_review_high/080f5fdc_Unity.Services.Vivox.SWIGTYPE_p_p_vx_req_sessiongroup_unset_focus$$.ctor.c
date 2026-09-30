/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_sessiongroup_unset_focus$$.ctor
ENTRY_POINT: 080f5fdc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_unset_focus___ctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = *(undefined8 *)(unaff_x21 + 0xe8);
  uStack0000000000000000 = *(undefined8 *)(unaff_x21 + 0xe0);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x358) = in_x9;
    *(undefined8 *)(param_1 + 0x350) = uStack0000000000000008;
    *(undefined8 *)(param_1 + 0x348) = uStack0000000000000000;
    lVar2 = *(long *)(unaff_x21 + 0x188);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x360) = *(undefined8 *)(unaff_x21 + 0x168);
      thunk_FUN_03d233cc(lVar2 + 0x360);
      lVar2 = *(long *)(unaff_x21 + 0x188);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x368) = *(undefined8 *)(unaff_x21 + 0x178);
        thunk_FUN_03d233cc(lVar2 + 0x368);
        puVar1 = PTR_DAT_08f006b0;
        lVar2 = *(long *)(unaff_x21 + 0x188);
        if (lVar2 != 0) {
          *(undefined1 *)(lVar2 + 0x371) = *(undefined1 *)(unaff_x21 + 0x181);
          *(long *)(lVar2 + 0x378) = unaff_x21;
          thunk_FUN_03d233cc(lVar2 + 0x378);
          lVar2 = *(long *)puVar1;
          uVar3 = *(undefined8 *)(unaff_x21 + 0x188);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            lVar2 = thunk_FUN_03cd7500();
          }
          FUN_080f60b0(lVar2,uVar3);
          FUN_080d7f6c(unaff_x19 + 0x18,0);
          Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_archive_query__swigRelease();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


