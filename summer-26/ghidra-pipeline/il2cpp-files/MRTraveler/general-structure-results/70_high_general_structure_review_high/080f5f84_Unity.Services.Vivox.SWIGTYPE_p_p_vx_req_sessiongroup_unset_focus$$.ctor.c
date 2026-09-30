/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_sessiongroup_unset_focus$$.ctor
ENTRY_POINT: 080f5f84
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_sessiongroup_unset_focus___ctor(long param_1)

{
  undefined *puVar1;
  void *unaff_x19;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(unaff_x21 + 0x180);
  memmove((void *)(param_1 + 0x20),unaff_x19,0x2b8);
  thunk_FUN_03d233cc((void *)(param_1 + 0x20),0);
  lVar2 = *(long *)(unaff_x21 + 0x188);
  memcpy(&stack0x00000020,(void *)(unaff_x21 + 0xf8),0x6c);
  if (lVar2 != 0) {
    memcpy((void *)(lVar2 + 0x2dc),&stack0x00000020,0x6c);
    lVar2 = *(long *)(unaff_x21 + 0x188);
    uVar4 = *(undefined8 *)(unaff_x21 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xe0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x358) = *(undefined8 *)(unaff_x21 + 0xf0);
      *(undefined8 *)(lVar2 + 0x350) = uVar4;
      *(undefined8 *)(lVar2 + 0x348) = uVar3;
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
            FUN_080d7f6c((long)unaff_x19 + 0x18,0);
            Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_archive_query__swigRelease();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


