/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_handle_get
ENTRY_POINT: 0901bfb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_handle_get
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f758a0);
  FUN_04447ba8(PTR_DAT_09f21ee0);
  FUN_04447ba8(PTR_DAT_09f21ed8);
  FUN_04447ba8(PTR_DAT_09fc0138);
  FUN_04447ba8(PTR_DAT_09f211b0);
  FUN_04447ba8(PTR_DAT_09f21180);
  FUN_04447ba8(PTR_DAT_09f21178);
  FUN_04447ba8(PTR_DAT_09fc0028);
  FUN_04447ba8(PTR_DAT_09fba940);
  FUN_04447ba8(PTR_DAT_09fbaa10);
  FUN_04447ba8(PTR_DAT_09fba950);
  FUN_04447ba8(PTR_DAT_09fbaa18);
  *(undefined1 *)(unaff_x20 + 0x629) = 1;
  lVar10 = thunk_FUN_0448520c(*unaff_x22);
  FUN_07441bc0(lVar10,*unaff_x19);
  uVar14 = *unaff_x21;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar14 = FUN_07a4ce38(uVar14,0);
  puVar9 = PTR_DAT_09fc0138;
  puVar8 = PTR_DAT_09fc0028;
  puVar7 = PTR_DAT_09fbaa18;
  puVar6 = PTR_DAT_09fbaa10;
  puVar5 = PTR_DAT_09fba950;
  puVar4 = PTR_DAT_09f758a0;
  puVar3 = PTR_DAT_09f21180;
  puVar2 = PTR_DAT_09f21178;
  if (lVar10 != 0) {
    FUN_0744298c(lVar10,*(undefined8 *)PTR_DAT_09fba940,uVar14,*(undefined8 *)PTR_DAT_09f758a0);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar8,0);
    FUN_0744298c(lVar10,*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar4);
    uVar14 = FUN_07a4ce38(*unaff_x21,0);
    FUN_0744298c(lVar10,*(undefined8 *)puVar5,uVar14,*(undefined8 *)puVar4);
    uVar14 = FUN_07a4ce38(*(undefined8 *)puVar8,0);
    FUN_0744298c(lVar10,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar4);
    **(long **)(*(long *)puVar9 + 0xb8) = lVar10;
    thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar9 + 0xb8),lVar10);
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_05bad610(lVar10,*(undefined8 *)puVar3);
    uVar14 = FUN_07a4ce38(*unaff_x21,0);
    puVar2 = PTR_DAT_09f211b0;
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_09f211b0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar10,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar14 = FUN_07a4ce38(*(undefined8 *)puVar8,0);
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
            thunk_FUN_044bb4b4();
          }
          else {
            FUN_05bade44(lVar10,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          plVar11 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
          *plVar11 = lVar10;
          thunk_FUN_044bb4b4(plVar11,lVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


