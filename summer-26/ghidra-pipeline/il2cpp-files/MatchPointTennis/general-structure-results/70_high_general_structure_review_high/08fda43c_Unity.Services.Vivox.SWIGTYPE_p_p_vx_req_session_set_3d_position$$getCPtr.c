/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_session_set_3d_position$$getCPtr
ENTRY_POINT: 08fda43c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_set_3d_position__getCPtr(void)

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
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar9 = PTR_DAT_09fbea00;
  puVar3 = PTR_DAT_09f21ee0;
  puVar2 = PTR_DAT_09f21ed8;
  if ((DAT_0a5333fe & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fbe9c0);
    FUN_04447ba8(PTR_DAT_09fbea00);
    FUN_04447ba8(PTR_DAT_09f758a0);
    FUN_04447ba8(PTR_DAT_09f21ee0);
    FUN_04447ba8(PTR_DAT_09f21ed8);
    FUN_04447ba8(PTR_DAT_09f211b0);
    FUN_04447ba8(PTR_DAT_09f21180);
    FUN_04447ba8(PTR_DAT_09f21178);
    FUN_04447ba8(PTR_DAT_09fbea08);
    FUN_04447ba8(PTR_DAT_09fba940);
    FUN_04447ba8(PTR_DAT_09fbaa10);
    FUN_04447ba8(PTR_DAT_09fba950);
    FUN_04447ba8(PTR_DAT_09fbaa18);
    DAT_0a5333fe = 1;
  }
  lVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_07441bc0(lVar11,*(undefined8 *)puVar3);
  uVar15 = *(undefined8 *)puVar9;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar15 = FUN_07a4ce38(uVar15,0);
  puVar10 = PTR_DAT_09fbea08;
  puVar8 = PTR_DAT_09fbe9c0;
  puVar7 = PTR_DAT_09fbaa18;
  puVar6 = PTR_DAT_09fbaa10;
  puVar5 = PTR_DAT_09fba950;
  puVar4 = PTR_DAT_09f758a0;
  puVar3 = PTR_DAT_09f21180;
  puVar2 = PTR_DAT_09f21178;
  if (lVar11 != 0) {
    FUN_0744298c(lVar11,*(undefined8 *)PTR_DAT_09fba940,uVar15,*(undefined8 *)PTR_DAT_09f758a0);
    uVar15 = FUN_07a4ce38(*(undefined8 *)puVar10,0);
    FUN_0744298c(lVar11,*(undefined8 *)puVar7,uVar15,*(undefined8 *)puVar4);
    uVar15 = FUN_07a4ce38(*(undefined8 *)puVar9,0);
    FUN_0744298c(lVar11,*(undefined8 *)puVar5,uVar15,*(undefined8 *)puVar4);
    uVar15 = FUN_07a4ce38(*(undefined8 *)puVar10,0);
    FUN_0744298c(lVar11,*(undefined8 *)puVar6,uVar15,*(undefined8 *)puVar4);
    **(long **)(*(long *)puVar8 + 0xb8) = lVar11;
    thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar8 + 0xb8),lVar11);
    lVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_05bad610(lVar11,*(undefined8 *)puVar3);
    uVar15 = FUN_07a4ce38(*(undefined8 *)puVar9,0);
    puVar2 = PTR_DAT_09f211b0;
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar14 = *(long *)PTR_DAT_09f211b0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar11,uVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar15 = FUN_07a4ce38(*(undefined8 *)puVar10,0);
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
            thunk_FUN_044bb4b4();
          }
          else {
            FUN_05bade44(lVar11,uVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          plVar12 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *plVar12 = lVar11;
          thunk_FUN_044bb4b4(plVar12,lVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


