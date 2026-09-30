/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 06078c74
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__EndInvoke
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               float param_5,float param_6,undefined8 param_7)

{
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float unaff_s8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float unaff_s12;
  
  fVar1 = (float)unaff_d10 - (float)unaff_d11 * param_2;
  fVar2 = (float)((ulong)unaff_d10 >> 0x20) - (float)((ulong)unaff_d11 >> 0x20) * param_2;
  fVar3 = unaff_s9 - unaff_s12 * param_2;
  iVar4 = -(uint)(fVar1 < 0.0);
  iVar5 = -(uint)(fVar2 < 0.0);
  if (0.0 <= fVar3) {
    param_4 = fVar3;
  }
  FUN_071d1e28(param_5 * (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                                         CONCAT12((byte)((uint)fVar1 >> 0x10) &
                                                  ~(byte)((uint)iVar4 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar1 >> 8) &
                                                           ~(byte)((uint)iVar4 >> 8),
                                                           SUB41(fVar1,0) & ~(byte)iVar4))),
               param_6 * (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                         CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                                  ~(byte)((uint)iVar5 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar2 >> 8) &
                                                           ~(byte)((uint)iVar5 >> 8),
                                                           SUB41(fVar2,0) & ~(byte)iVar5))),
               unaff_s8 * param_4,param_7,0);
  if (unaff_x20 != 0) {
    thunk_FUN_07251350();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


