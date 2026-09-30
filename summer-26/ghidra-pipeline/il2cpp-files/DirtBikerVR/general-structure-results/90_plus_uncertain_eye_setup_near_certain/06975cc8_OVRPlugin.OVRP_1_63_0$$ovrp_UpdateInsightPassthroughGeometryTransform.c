/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 06975cc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar2 = PTR_DAT_08497e38;
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  lVar6 = 0x60;
  if (in_CY && !in_ZR) {
    lVar6 = 0x68;
  }
  lVar6 = *(long *)(unaff_x20 + lVar6);
  uStack0000000000000050 = param_1._4_4_;
  uStack0000000000000048 = param_1._8_4_;
  uStack000000000000004c = param_1._12_4_;
  uStack0000000000000040 = uStack0000000000000030;
  uStack0000000000000054 = uStack0000000000000038;
  if (lVar6 != 0) {
    uVar7 = 0;
    puVar8 = (undefined8 *)(lVar6 + 0x20);
    fVar11 = 3.4028235e+38;
    while( true ) {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      uVar1 = *(undefined4 *)(puVar8 + 5);
      uVar13 = puVar8[1];
      uVar12 = *puVar8;
      uVar16 = puVar8[3];
      uVar14 = puVar8[2];
      uStack0000000000000020 = (undefined4)puVar8[4];
      uStack0000000000000024 = (undefined4)((ulong)puVar8[4] >> 0x20);
      uStack000000000000001c = (undefined4)((ulong)uVar16 >> 0x20);
      if (*(long *)(unaff_x20 + 0x50) == 0) break;
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
      uVar15 = uVar14;
      uVar3 = FUN_07d2fce4();
      fVar10 = (float)uVar15;
      if (lVar5 == 0) break;
      uVar4 = FUN_049d96b4(lVar5,uVar3,*(undefined8 *)puVar2);
      fVar17 = (float)param_3;
      if ((uVar4 & 1) == 0) {
        fVar9 = (float)FUN_07d2fd90();
        if (*(long *)(unaff_x20 + 0x58) == 0) break;
        param_3 = (ulong)(uint)(fVar17 - unaff_s9);
        fVar10 = (float)FUN_07cadd74(fVar9 - unaff_s11,fVar10 - unaff_s10,
                                     *(long *)(unaff_x20 + 0x58),0);
        if ((((-(unaff_s12 * 0.5) <= fVar10) && (fVar10 <= unaff_s12 * 0.5)) &&
            ((float)param_3 <= unaff_s8)) &&
           ((-unaff_s8 <= (float)param_3 && (fVar10 = (float)FUN_07d2fdc0(), fVar10 < fVar11)))) {
          fVar11 = (float)FUN_07d2fdc0();
          uStack0000000000000054 = CONCAT44(uVar1,uStack0000000000000024);
          param_3 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
          uStack0000000000000048 = (undefined4)uVar16;
          uStack000000000000004c = uStack000000000000001c;
          uStack0000000000000050 = uStack0000000000000020;
          uStack0000000000000030 = uVar12;
          uStack0000000000000038 = uVar13;
          uStack0000000000000040 = uVar14;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = (undefined8 *)((long)puVar8 + 0x2c);
      if ((param_4 & 0xffffffff) == uVar7) {
        if (fVar11 != 3.4028235e+38) {
          unaff_x19[1] = uStack0000000000000038;
          *unaff_x19 = uStack0000000000000030;
          unaff_x19[3] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
          unaff_x19[2] = uStack0000000000000040;
          *(undefined8 *)((long)unaff_x19 + 0x24) = uStack0000000000000054;
          *(ulong *)((long)unaff_x19 + 0x1c) =
               CONCAT44(uStack0000000000000050,uStack000000000000004c);
        }
        return fVar11 != 3.4028235e+38;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


