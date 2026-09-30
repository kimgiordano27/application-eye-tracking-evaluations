/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 06975ba0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_63_0__ovrp_AddInsightPassthroughSurfaceGeometry
          (undefined1 param_1 [16],undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  ulong uVar19;
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
  undefined4 uStack00000000000000a8;
  
  fVar13 = DAT_015c5994;
  uStack00000000000000a8 = param_2;
  if (DAT_015c5994 < unaff_s12) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar2 = FUN_07c9da10(unaff_w21,0);
    if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486c50);
    }
    uVar19 = (ulong)(uint)unaff_s9;
    uVar3 = FUN_07d2b360(unaff_s11,unaff_s10,uVar7,uVar2,1,0);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar2 = FUN_07c9da10(unaff_w21,0);
                    /* try { // try from 06975c1c to 06a75db3 has its CatchHandler @ 06975c1c
                       catch() { ... } // from try @ 06975c1c with catch @ 06975c1c
                       catch() { ... } // from try @ 06975e64 with catch @ 06975c1c
                       catch() { ... } // from try @ 069760d4 with catch @ 06975c1c
                       catch() { ... } // from try @ 069762d0 with catch @ 06975c1c
                       catch() { ... } // from try @ 069765d4 with catch @ 06975c1c
                       catch() { ... } // from try @ 069766b0 with catch @ 06975c1c
                       catch() { ... } // from try @ 069767c4 with catch @ 06975c1c
                       catch() { ... } // from try @ 06976804 with catch @ 06975c1c
                       catch() { ... } // from try @ 06976844 with catch @ 06975c1c
                       catch() { ... } // from try @ 06976888 with catch @ 06975c1c */
    if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486c50);
    }
    uVar19 = (ulong)(uint)unaff_s9;
    uVar3 = FUN_07d2a554(unaff_s11,unaff_s10,uVar19,uStack00000000000000a8,uVar7,uVar2,1,0);
  }
  puVar1 = PTR_DAT_08497e38;
  if (0 < (int)uVar3) {
    lVar8 = 0x60;
    if (fVar13 < unaff_s12) {
      lVar8 = 0x68;
    }
    lVar8 = *(long *)(unaff_x20 + lVar8);
    uStack0000000000000054 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    uStack0000000000000040 = 0;
    if (lVar8 == 0) {
LAB_06975e50:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar9 = 0;
    puVar10 = (undefined8 *)(lVar8 + 0x20);
    fVar13 = 3.4028235e+38;
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      uVar2 = *(undefined4 *)(puVar10 + 5);
      uVar14 = puVar10[1];
      uVar7 = *puVar10;
      uVar17 = puVar10[3];
      uVar15 = puVar10[2];
      uStack0000000000000020 = (undefined4)puVar10[4];
      uStack0000000000000024 = (undefined4)((ulong)puVar10[4] >> 0x20);
      uStack000000000000001c = (undefined4)((ulong)uVar17 >> 0x20);
      if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_06975e50;
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
      uVar16 = uVar15;
      uVar4 = FUN_07d2fce4();
      fVar12 = (float)uVar16;
      if (lVar6 == 0) goto LAB_06975e50;
      uVar5 = FUN_049d96b4(lVar6,uVar4,*(undefined8 *)puVar1);
      fVar18 = (float)uVar19;
      if ((uVar5 & 1) == 0) {
        fVar11 = (float)FUN_07d2fd90();
        if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_06975e50;
        uVar19 = (ulong)(uint)(fVar18 - unaff_s9);
        fVar12 = (float)FUN_07cadd74(fVar11 - unaff_s11,fVar12 - unaff_s10,
                                     *(long *)(unaff_x20 + 0x58),0);
        if ((((-(unaff_s12 * 0.5) <= fVar12) && (fVar12 <= unaff_s12 * 0.5)) &&
            ((float)uVar19 <= unaff_s8)) &&
           ((-unaff_s8 <= (float)uVar19 && (fVar12 = (float)FUN_07d2fdc0(), fVar12 < fVar13)))) {
          fVar13 = (float)FUN_07d2fdc0();
          uStack0000000000000054 = CONCAT44(uVar2,uStack0000000000000024);
          uVar19 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
          uStack0000000000000048 = (undefined4)uVar17;
          uStack000000000000004c = uStack000000000000001c;
          uStack0000000000000050 = uStack0000000000000020;
          uStack0000000000000030 = uVar7;
          uStack0000000000000038 = uVar14;
          uStack0000000000000040 = uVar15;
        }
      }
      uVar9 = uVar9 + 1;
      puVar10 = (undefined8 *)((long)puVar10 + 0x2c);
    } while (uVar3 != uVar9);
    if (fVar13 != 3.4028235e+38) {
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


