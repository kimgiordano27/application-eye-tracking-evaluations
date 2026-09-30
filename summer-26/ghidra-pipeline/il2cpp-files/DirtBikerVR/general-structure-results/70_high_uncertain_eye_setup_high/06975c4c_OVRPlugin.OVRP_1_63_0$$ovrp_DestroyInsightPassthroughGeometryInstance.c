/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 06975c4c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightPassthroughGeometryInstance
          (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
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
  
  uVar3 = FUN_07d2a554();
  puVar2 = PTR_DAT_08497e38;
  if (0 < (int)uVar3) {
    lVar7 = 0x60;
    if (unaff_s13 < unaff_s12) {
      lVar7 = 0x68;
    }
    lVar7 = *(long *)(unaff_x20 + lVar7);
    uStack0000000000000054 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    uStack0000000000000040 = 0;
    if (lVar7 == 0) {
LAB_06975e50:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar8 = 0;
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    fVar12 = 3.4028235e+38;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      uVar1 = *(undefined4 *)(puVar9 + 5);
      uVar14 = puVar9[1];
      uVar13 = *puVar9;
      uVar17 = puVar9[3];
      uVar15 = puVar9[2];
      uStack0000000000000020 = (undefined4)puVar9[4];
      uStack0000000000000024 = (undefined4)((ulong)puVar9[4] >> 0x20);
      uStack000000000000001c = (undefined4)((ulong)uVar17 >> 0x20);
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_06975e50;
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
      uVar16 = uVar15;
      uVar4 = FUN_07d2fce4();
      fVar11 = (float)uVar16;
      if (lVar6 == 0) goto LAB_06975e50;
      uVar5 = FUN_049d96b4(lVar6,uVar4,*(undefined8 *)puVar2);
      fVar18 = (float)param_3;
      if ((uVar5 & 1) == 0) {
        fVar10 = (float)FUN_07d2fd90();
        if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_06975e50;
        param_3 = (ulong)(uint)(fVar18 - unaff_s9);
        fVar11 = (float)FUN_07cadd74(fVar10 - unaff_s11,fVar11 - unaff_s10,
                                     *(long *)(unaff_x20 + 0x58),0);
        if ((((-(unaff_s12 * 0.5) <= fVar11) && (fVar11 <= unaff_s12 * 0.5)) &&
            ((float)param_3 <= unaff_s8)) &&
           ((-unaff_s8 <= (float)param_3 && (fVar11 = (float)FUN_07d2fdc0(), fVar11 < fVar12)))) {
          fVar12 = (float)FUN_07d2fdc0();
          uStack0000000000000054 = CONCAT44(uVar1,uStack0000000000000024);
          param_3 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
          uStack0000000000000048 = (undefined4)uVar17;
          uStack000000000000004c = uStack000000000000001c;
          uStack0000000000000050 = uStack0000000000000020;
          uStack0000000000000030 = uVar13;
          uStack0000000000000038 = uVar14;
          uStack0000000000000040 = uVar15;
        }
      }
      uVar8 = uVar8 + 1;
      puVar9 = (undefined8 *)((long)puVar9 + 0x2c);
    } while (uVar3 != uVar8);
    if (fVar12 != 3.4028235e+38) {
      unaff_x19[1] = uStack0000000000000038;
      *unaff_x19 = uStack0000000000000030;
      unaff_x19[3] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      unaff_x19[2] = uStack0000000000000040;
      *(undefined8 *)((long)unaff_x19 + 0x24) = uStack0000000000000054;
      *(ulong *)((long)unaff_x19 + 0x1c) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      return 1;
    }
  }
  return 0;
}


