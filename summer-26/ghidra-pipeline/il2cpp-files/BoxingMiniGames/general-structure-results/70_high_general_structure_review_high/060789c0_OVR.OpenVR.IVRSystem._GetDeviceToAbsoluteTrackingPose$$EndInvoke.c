/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 060789c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke
               (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  
  if (in_ZR || in_NG != in_OV) {
    param_1 = param_3;
  }
  if (param_1 <= param_2) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_079f4da8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    fVar5 = (float)FUN_0724a1d4(0);
    if ((*(long *)(unaff_x19 + 0x20) == 0) || (lVar3 == 0)) goto LAB_06078cf8;
    fVar13 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x5c) + -1.0;
    param_3 = param_3 * fVar13;
    FUN_07252344(fVar5 * fVar13,param_2 * fVar13,param_3,lVar3,5,0);
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 == 0) goto LAB_06078cf8;
  uVar14 = *(undefined8 *)(lVar3 + 0x60);
  fVar5 = *(float *)(lVar3 + 0x68);
  if (DAT_07ed76b5 == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    DAT_07ed76b5 = '\x01';
  }
  puVar1 = PTR_DAT_079f4dc0;
  fVar13 = DAT_01650978;
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
  fVar6 = (float)uVar14 - (float)uVar8;
  fVar9 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
  fVar5 = fVar5 - *(float *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
  if (DAT_01650978 <= fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    lVar3 = FUN_071bd0d0();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_06078cf8;
    param_3 = *(float *)(lVar2 + 0x68);
    FUN_071d140c(*(undefined4 *)(lVar2 + 0x60),*(undefined4 *)(lVar2 + 100),param_3,lVar3,0);
    if (lVar4 == 0) goto LAB_06078cf8;
    FUN_07252344(lVar4,5,0);
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 == 0) goto LAB_06078cf8;
  uVar14 = *(undefined8 *)(lVar3 + 0x6c);
  fVar5 = *(float *)(lVar3 + 0x74);
  if (DAT_07ed76b5 == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    DAT_07ed76b5 = '\x01';
  }
  uVar8 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  fVar6 = (float)uVar14 - (float)uVar8;
  fVar9 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
  fVar5 = fVar5 - *(float *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
  if (fVar13 <= fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    lVar3 = FUN_071bd0d0();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_06078cf8;
    param_3 = *(float *)(lVar2 + 0x74);
    FUN_071d140c(*(undefined4 *)(lVar2 + 0x6c),*(undefined4 *)(lVar2 + 0x70),param_3,lVar3,0);
    if (lVar4 == 0) goto LAB_06078cf8;
    FUN_07252430(lVar4,5,0);
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 != 0) {
    uVar14 = *(undefined8 *)(lVar3 + 0x78);
    fVar5 = *(float *)(lVar3 + 0x80);
    if (DAT_07ed76c1 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76c1 = '\x01';
    }
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
    fVar6 = (float)uVar14 - (float)uVar8;
    fVar9 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
    fVar5 = fVar5 - *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14);
    fVar5 = fVar5 * fVar5;
    if (fVar5 + fVar6 * fVar6 + fVar9 * fVar9 < fVar13) {
      return;
    }
    lVar3 = FUN_071bd0d0();
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (thunk_FUN_07251274(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
      fVar13 = (float)FUN_071d1f20(lVar3,0);
      if (DAT_07ed76c1 == '\0') {
        FUN_03642964(PTR_DAT_079f4dc0);
        DAT_07ed76c1 = '\x01';
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
        uVar8 = *(undefined8 *)(lVar3 + 0x78);
        fVar15 = *(float *)(lVar3 + 0x80);
        fVar9 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14);
        uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
        fVar6 = (float)FUN_071cc9a0(0);
        lVar2 = *(long *)(unaff_x19 + 0x30);
        lVar3 = FUN_071bd0d0();
        if (lVar3 != 0) {
          fVar7 = (float)uVar14 - (float)uVar8 * fVar6;
          fVar10 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar8 >> 0x20) * fVar6;
          fVar9 = fVar9 - fVar15 * fVar6;
          iVar11 = -(uint)(fVar7 < 0.0);
          iVar12 = -(uint)(fVar10 < 0.0);
          fVar6 = 0.0;
          if (0.0 <= fVar9) {
            fVar6 = fVar9;
          }
          fVar9 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                  CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                           ~(byte)((uint)iVar11 >> 0x10),
                                           CONCAT11((byte)((uint)fVar7 >> 8) &
                                                    ~(byte)((uint)iVar11 >> 8),
                                                    SUB41(fVar7,0) & ~(byte)iVar11)));
          fVar5 = fVar5 * (float)(CONCAT17((byte)((uint)fVar10 >> 0x18) &
                                           ~(byte)((uint)iVar12 >> 0x18),
                                           CONCAT16((byte)((uint)fVar10 >> 0x10) &
                                                    ~(byte)((uint)iVar12 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar10 >> 8) &
                                                             ~(byte)((uint)iVar12 >> 8),
                                                             CONCAT14(SUB41(fVar10,0) &
                                                                      ~(byte)iVar12,fVar9)))) >>
                                 0x20);
          FUN_071d1e28(CONCAT44(fVar5,fVar13 * fVar9),fVar5,param_3 * fVar6,lVar3,0);
          if (lVar2 != 0) {
            thunk_FUN_07251350(lVar2,0);
            return;
          }
        }
      }
    }
  }
LAB_06078cf8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


