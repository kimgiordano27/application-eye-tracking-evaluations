/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 06078c44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke(void)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long in_x9;
  long unaff_x19;
  long lVar4;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  float fVar5;
  int iVar6;
  int iVar7;
  float unaff_s8;
  float fVar8;
  undefined8 uVar9;
  undefined8 unaff_d11;
  float unaff_s12;
  float in_stack_00000010;
  float in_stack_00000020;
  
  fVar8 = *(float *)(in_x9 + 0x14);
  uVar9 = *(undefined8 *)(in_x9 + 0xc);
  FUN_071cc9a0();
  lVar4 = *(long *)(unaff_x19 + 0x30);
  fVar5 = (float)CONCAT13(extraout_var_01,
                          CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  lVar3 = FUN_071bd0d0();
  if (lVar3 != 0) {
    fVar1 = (float)uVar9 - (float)unaff_d11 * fVar5;
    fVar2 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)unaff_d11 >> 0x20) * fVar5;
    fVar8 = fVar8 - unaff_s12 * fVar5;
    iVar6 = -(uint)(fVar1 < 0.0);
    iVar7 = -(uint)(fVar2 < 0.0);
    fVar5 = 0.0;
    if (0.0 <= fVar8) {
      fVar5 = fVar8;
    }
    FUN_071d1e28(SUB41(in_stack_00000020 *
                       (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                                       CONCAT12((byte)((uint)fVar1 >> 0x10) &
                                                ~(byte)((uint)iVar6 >> 0x10),
                                                CONCAT11((byte)((uint)fVar1 >> 8) &
                                                         ~(byte)((uint)iVar6 >> 8),
                                                         SUB41(fVar1,0) & ~(byte)iVar6))),0),
                 in_stack_00000010 *
                 (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                                 CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10)
                                          ,CONCAT11((byte)((uint)fVar2 >> 8) &
                                                    ~(byte)((uint)iVar7 >> 8),
                                                    SUB41(fVar2,0) & ~(byte)iVar7))),
                 unaff_s8 * fVar5,lVar3,0);
    if (lVar4 != 0) {
      thunk_FUN_07251350(lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


