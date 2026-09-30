/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 052ec810
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 148
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate(void)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 uStack00000000000000a0;
  float fStack00000000000000a8;
  
  puVar2 = PTR_DAT_067c90a0;
                    /* try { // try from 052ec810 to 053ec977 has its CatchHandler @ 052ec810
                       catch() { ... } // from try @ 052ec810 with catch @ 052ec810
                       catch() { ... } // from try @ 052eca30 with catch @ 052ec810
                       catch() { ... } // from try @ 052ecae8 with catch @ 052ec810
                       catch() { ... } // from try @ 052ecb40 with catch @ 052ec810 */
  fStack00000000000000a8 = 0.0;
  uStack00000000000000a0 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000094 = 0;
  uStack0000000000000090 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000088 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000080 = 0;
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (*(int *)(unaff_x19 + 0x24) != *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18))) {
    uVar6 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067d3650);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  }
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  *(undefined4 *)(unaff_x20 + 3) = 0;
  unaff_x20[2] = 0;
  if (unaff_s8 <= 0.0) {
    unaff_s8 = 3.4028235e+38;
  }
  uVar4 = FUN_060f1c8c(unaff_x19 + 0x20,0);
  lVar9 = *(long *)puVar2;
  uVar15 = *(undefined4 *)unaff_x21;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar9);
  }
  iVar5 = FUN_0616c520(uVar15,uVar6,uVar4,1,0);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06165478(*(long *)(unaff_x19 + 0x30),1,0);
    puVar3 = PTR_DAT_067c90a8;
    fVar1 = DAT_011b06e4;
    if (iVar5 < 1) {
      uStack000000000000002c = 0;
    }
    else {
      uStack000000000000002c = 0;
      lVar9 = 0;
      do {
        lVar10 = *(long *)(unaff_x19 + 0x28);
        if (lVar10 == 0) goto LAB_052ecbf8;
        if (*(uint *)(lVar10 + 0x18) <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
        lVar10 = *(long *)(lVar10 + lVar9 * 8 + 0x20);
        FUN_06172430(unaff_s8,*(long *)(unaff_x19 + 0x30),0);
        uVar4 = *(undefined4 *)unaff_x21;
        uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
        fVar18 = *(float *)(unaff_x21 + 1);
        if (DAT_06bb42c3 == '\0') {
          FUN_02f08768(puVar3);
          DAT_06bb42c3 = '\x01';
        }
        if ((lVar10 == 0) || (lVar7 = FUN_060ed7ac(lVar10,0), lVar7 == 0)) goto LAB_052ecbf8;
        FUN_060ffbe4(lVar7,0);
        lVar7 = FUN_060ed7ac(lVar10,0);
        if (lVar7 == 0) goto LAB_052ecbf8;
        FUN_060fdda4(lVar7,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar8 = FUN_0616c1a4(uVar4,uVar6,lVar10,&stack0x000000a0,&stack0x0000006c,0);
        fVar11 = fStack00000000000000a8;
        uVar6 = uStack00000000000000a0;
        if ((uVar8 & 1) != 0) {
          uVar16 = *unaff_x21;
          uVar4 = *(undefined4 *)(unaff_x21 + 1);
          if (DAT_06bb42bf == '\0') {
            FUN_02f08768(PTR_DAT_067c8f80);
            DAT_06bb42bf = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar14 = (float)uVar6;
          fVar17 = (float)((ulong)uVar6 >> 0x20);
          fVar13 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar17 * fVar17);
          if (fVar13 <= fVar1) {
            if (DAT_06bb42c1 == '\0') {
              FUN_02f08768(PTR_DAT_067c8f78);
              DAT_06bb42c1 = '\x01';
            }
            uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
            fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
          }
          else {
            uStack000000000000005c = CONCAT44(-fVar17 / fVar13,-fVar14 / fVar13);
            fVar18 = -fVar11;
            fVar13 = fVar18 / fVar13;
          }
          in_stack_00000050 = uVar16;
          uStack0000000000000058 = uVar4;
          fStack0000000000000064 = fVar13;
          uVar8 = FUN_06165c24(unaff_s8,lVar10,&stack0x00000050,&stack0x00000070,0);
          if (((uVar8 & 1) != 0) &&
             (fVar11 = (float)FUN_06170650(&stack0x00000070,0), fVar11 < unaff_s8)) {
            unaff_s8 = (float)FUN_06170650(&stack0x00000070,0);
            uVar4 = FUN_06170620(&stack0x00000070,0);
            fVar11 = fVar13;
            fVar14 = fVar18;
            uVar15 = FUN_06170638(&stack0x00000070,0);
            uVar12 = FUN_06170650(&stack0x00000070,0);
            *(undefined4 *)unaff_x20 = uVar4;
            *(float *)((long)unaff_x20 + 4) = fVar13;
            *(float *)(unaff_x20 + 1) = fVar18;
            *(undefined4 *)((long)unaff_x20 + 0xc) = uVar15;
            *(float *)(unaff_x20 + 2) = fVar11;
            *(float *)((long)unaff_x20 + 0x14) = fVar14;
            uStack000000000000002c = 1;
            *(undefined4 *)(unaff_x20 + 3) = uVar12;
          }
        }
        lVar9 = lVar9 + 1;
      } while (iVar5 != (int)lVar9);
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_06165478(*(long *)(unaff_x19 + 0x30),0,0);
      return uStack000000000000002c;
    }
  }
LAB_052ecbf8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


