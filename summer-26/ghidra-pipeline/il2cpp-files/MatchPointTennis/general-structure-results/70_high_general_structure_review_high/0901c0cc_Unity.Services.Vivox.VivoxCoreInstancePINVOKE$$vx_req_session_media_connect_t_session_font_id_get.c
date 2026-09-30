/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_font_id_get
ENTRY_POINT: 0901c0cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_font_id_get
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  puVar3 = PTR_DAT_09f21180;
  puVar2 = PTR_DAT_09f21178;
  plVar8 = *(long **)(unaff_x20 + 0x138);
  FUN_0744298c();
  FUN_07a4ce38(*unaff_x22,0);
  FUN_0744298c();
  FUN_07a4ce38(*unaff_x21,0);
  FUN_0744298c();
  FUN_07a4ce38(*unaff_x22,0);
  FUN_0744298c();
  **(undefined8 **)(*plVar8 + 0xb8) = unaff_x19;
  thunk_FUN_044bb4b4(*(undefined8 *)(*plVar8 + 0xb8));
  lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05bad610(lVar4,*(undefined8 *)puVar3);
  uVar5 = FUN_07a4ce38(*unaff_x21,0);
  puVar2 = PTR_DAT_09f211b0;
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)PTR_DAT_09f211b0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = FUN_07a4ce38(*unaff_x22,0);
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        plVar8 = (long *)(*(long *)(*plVar8 + 0xb8) + 8);
        *plVar8 = lVar4;
        thunk_FUN_044bb4b4(plVar8,lVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


