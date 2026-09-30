/*
FUNCTION_NAME: Unity.Services.Vivox.SWIGTYPE_p_p_vx_req_session_set_3d_position$$swigRelease
ENTRY_POINT: 080f6f3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_session_set_3d_position__swigRelease(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *plVar12;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  ulong uVar13;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08f01560);
  FUN_03c8f898(PTR_DAT_08f01568);
  *(undefined1 *)(unaff_x24 + 0xb42) = 1;
  puVar6 = PTR_DAT_08f01568;
  puVar3 = PTR_DAT_08f01550;
  puVar2 = PTR_DAT_08f01548;
  puVar1 = PTR_DAT_08ef9ce0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar5 = PTR_DAT_08f01560;
  puVar4 = PTR_DAT_08f01558;
  FUN_0808448c();
  uVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07fed7a8(uVar8,*(undefined8 *)puVar6,0);
  *(undefined8 *)(unaff_x21 + 0x38) = uVar8;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0x38),uVar8);
  *(undefined1 *)(unaff_x21 + 0x42) = 0;
  uVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
  FUN_07145224(uVar8,0);
  *(undefined8 *)(unaff_x21 + 0xe8) = uVar8;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0xe8),uVar8);
  *(undefined4 *)(unaff_x21 + 0x10) = unaff_w22;
  lVar9 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
  plVar12 = (long *)(unaff_x21 + 0xf0);
  *plVar12 = lVar9;
  thunk_FUN_03d233cc(plVar12,lVar9);
  uVar13 = 0;
  lVar9 = 0x20;
  while( true ) {
    lVar10 = *plVar12;
    if (lVar10 == 0) goto LAB_080f711c;
    if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
    uVar8 = unaff_x20;
    if (lVar9 != 0x20) {
      uVar8 = unaff_x19;
    }
    *(undefined8 *)(lVar10 + lVar9) = uVar8;
    thunk_FUN_03d233cc();
    lVar10 = *plVar12;
    if (lVar10 == 0) goto LAB_080f711c;
    if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
    lVar11 = *(long *)(lVar10 + lVar9);
    if (lVar11 == 0) {
      *(undefined4 *)(lVar10 + lVar9 + 8) = 0xffffffff;
    }
    else {
      if (lVar11 == 0) goto LAB_080f711c;
      uVar7 = FUN_085b6988(lVar11,*(undefined8 *)puVar5,0);
      lVar11 = *plVar12;
      *(undefined4 *)(lVar10 + lVar9 + 8) = uVar7;
      lVar10 = lVar11;
      if (lVar11 == 0) goto LAB_080f711c;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
    lVar11 = *(long *)(lVar10 + lVar9);
    if (lVar11 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      if (lVar11 == 0) {
LAB_080f711c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = FUN_085b6988(lVar11,*(undefined8 *)puVar4,0);
    }
    lVar10 = lVar10 + lVar9;
    lVar9 = lVar9 + 0x10;
    uVar13 = uVar13 + 1;
    *(undefined4 *)(lVar10 + 0xc) = uVar7;
    if (lVar9 == 0x40) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


