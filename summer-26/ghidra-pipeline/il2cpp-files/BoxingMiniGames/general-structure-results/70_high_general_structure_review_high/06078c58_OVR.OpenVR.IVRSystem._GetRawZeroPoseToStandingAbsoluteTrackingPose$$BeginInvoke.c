/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 06078c58
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


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke
               (undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float unaff_s8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float unaff_s12;
  undefined8 uStack0000000000000000;
  float in_stack_00000010;
  float in_stack_00000020;
  
  uStack0000000000000000 = param_1;
  lVar3 = FUN_071bd0d0(param_2,0);
  if (lVar3 != 0) {
    fVar4 = (float)uStack0000000000000000;
    fVar1 = (float)unaff_d10 - (float)unaff_d11 * fVar4;
    fVar2 = (float)((ulong)unaff_d10 >> 0x20) - (float)((ulong)unaff_d11 >> 0x20) * fVar4;
    fVar5 = unaff_s9 - unaff_s12 * fVar4;
    iVar6 = -(uint)(fVar1 < 0.0);
    iVar7 = -(uint)(fVar2 < 0.0);
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
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
                 unaff_s8 * fVar4,lVar3,0);
    if (unaff_x20 != 0) {
      thunk_FUN_07251350();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


