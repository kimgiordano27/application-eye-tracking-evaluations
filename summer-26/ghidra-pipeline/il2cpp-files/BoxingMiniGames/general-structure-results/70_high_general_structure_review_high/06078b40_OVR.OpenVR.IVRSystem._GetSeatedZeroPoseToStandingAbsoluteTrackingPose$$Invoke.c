/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 06078b40
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float unaff_s8;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((lVar1 != 0) && (param_1 != 0)) {
    fVar8 = *(float *)(lVar1 + 0x74);
    FUN_071d140c(*(undefined4 *)(lVar1 + 0x6c),*(undefined4 *)(lVar1 + 0x70),fVar8,param_1,0);
    if (unaff_x20 != 0) {
      FUN_07252430();
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if (lVar1 != 0) {
        uVar13 = *(undefined8 *)(lVar1 + 0x78);
        fVar11 = *(float *)(lVar1 + 0x80);
        if (DAT_07ed76c1 == '\0') {
          FUN_03642964(PTR_DAT_079f4dc0);
          DAT_07ed76c1 = '\x01';
        }
        uVar5 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xc);
        fVar3 = (float)uVar13 - (float)uVar5;
        fVar6 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
        fVar11 = fVar11 - *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0x14);
        fVar11 = fVar11 * fVar11;
        if (fVar11 + fVar3 * fVar3 + fVar6 * fVar6 < unaff_s8) {
          return;
        }
        lVar1 = FUN_071bd0d0();
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (thunk_FUN_07251274(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
          fVar3 = (float)FUN_071d1f20(lVar1,0);
          if (DAT_07ed76c1 == '\0') {
            FUN_03642964(PTR_DAT_079f4dc0);
            DAT_07ed76c1 = '\x01';
          }
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if (lVar1 != 0) {
            uVar5 = *(undefined8 *)(lVar1 + 0x78);
            fVar14 = *(float *)(lVar1 + 0x80);
            fVar12 = *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0x14);
            uVar13 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xc);
            fVar6 = (float)FUN_071cc9a0(0);
            lVar2 = *(long *)(unaff_x19 + 0x30);
            lVar1 = FUN_071bd0d0();
            if (lVar1 != 0) {
              fVar4 = (float)uVar13 - (float)uVar5 * fVar6;
              fVar7 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar5 >> 0x20) * fVar6;
              fVar12 = fVar12 - fVar14 * fVar6;
              iVar9 = -(uint)(fVar4 < 0.0);
              iVar10 = -(uint)(fVar7 < 0.0);
              fVar6 = 0.0;
              if (0.0 <= fVar12) {
                fVar6 = fVar12;
              }
              fVar12 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                                       CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                ~(byte)((uint)iVar9 >> 0x10),
                                                CONCAT11((byte)((uint)fVar4 >> 8) &
                                                         ~(byte)((uint)iVar9 >> 8),
                                                         SUB41(fVar4,0) & ~(byte)iVar9)));
              fVar11 = fVar11 * (float)(CONCAT17((byte)((uint)fVar7 >> 0x18) &
                                                 ~(byte)((uint)iVar10 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar7 >> 0x10) &
                                                          ~(byte)((uint)iVar10 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar7 >> 8) &
                                                                   ~(byte)((uint)iVar10 >> 8),
                                                                   CONCAT14(SUB41(fVar7,0) &
                                                                            ~(byte)iVar10,fVar12))))
                                       >> 0x20);
              FUN_071d1e28(CONCAT44(fVar11,fVar3 * fVar12),fVar11,fVar8 * fVar6,lVar1,0);
              if (lVar2 != 0) {
                thunk_FUN_07251350(lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


