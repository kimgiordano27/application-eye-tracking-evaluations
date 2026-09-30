/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 052ec85c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 170
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4 Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  long *unaff_x27;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  *(undefined4 *)(unaff_x20 + 3) = 0;
  unaff_x20[2] = 0;
  if (unaff_s8 <= 0.0) {
    unaff_s8 = 3.4028235e+38;
  }
  uVar3 = FUN_060f1c8c(unaff_x19 + 0x20,0);
  uVar14 = *(undefined4 *)unaff_x21;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x27);
  }
  iVar4 = FUN_0616c520(uVar14,uVar8,uVar3,1,0);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06165478(*(long *)(unaff_x19 + 0x30),1,0);
    puVar2 = PTR_DAT_067c90a8;
    fVar1 = DAT_011b06e4;
    if (iVar4 < 1) {
      uStack000000000000002c = 0;
    }
    else {
      uStack000000000000002c = 0;
      lVar9 = 0;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x28);
        if (lVar7 == 0) goto LAB_052ecbf8;
        if (*(uint *)(lVar7 + 0x18) <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
        lVar7 = *(long *)(lVar7 + lVar9 * 8 + 0x20);
        FUN_06172430(unaff_s8,*(long *)(unaff_x19 + 0x30),0);
        uVar3 = *(undefined4 *)unaff_x21;
        uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
        fVar17 = *(float *)(unaff_x21 + 1);
        if (DAT_06bb42c3 == '\0') {
          FUN_02f08768(puVar2);
          DAT_06bb42c3 = '\x01';
        }
        if ((lVar7 == 0) || (lVar5 = FUN_060ed7ac(lVar7,0), lVar5 == 0)) goto LAB_052ecbf8;
        FUN_060ffbe4(lVar5,0);
        lVar5 = FUN_060ed7ac(lVar7,0);
        if (lVar5 == 0) goto LAB_052ecbf8;
        FUN_060fdda4(lVar5,0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_0616c1a4(uVar3,uVar8,lVar7,&stack0x000000a0,&stack0x0000006c,0);
        fVar10 = in_stack_000000a8;
        uVar8 = in_stack_000000a0;
        if ((uVar6 & 1) != 0) {
          uVar15 = *unaff_x21;
          uVar3 = *(undefined4 *)(unaff_x21 + 1);
          if (DAT_06bb42bf == '\0') {
            FUN_02f08768(PTR_DAT_067c8f80);
            DAT_06bb42bf = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          fVar13 = (float)uVar8;
          fVar16 = (float)((ulong)uVar8 >> 0x20);
          fVar12 = SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar16 * fVar16);
          if (fVar12 <= fVar1) {
            if (DAT_06bb42c1 == '\0') {
              FUN_02f08768(PTR_DAT_067c8f78);
              DAT_06bb42c1 = '\x01';
            }
            uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
            fVar12 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
          }
          else {
            uStack000000000000005c = CONCAT44(-fVar16 / fVar12,-fVar13 / fVar12);
            fVar17 = -fVar10;
            fVar12 = fVar17 / fVar12;
          }
          in_stack_00000050 = uVar15;
          uStack0000000000000058 = uVar3;
          fStack0000000000000064 = fVar12;
          uVar6 = FUN_06165c24(unaff_s8,lVar7,&stack0x00000050,&stack0x00000070,0);
          if (((uVar6 & 1) != 0) &&
             (fVar10 = (float)FUN_06170650(&stack0x00000070,0), fVar10 < unaff_s8)) {
            unaff_s8 = (float)FUN_06170650(&stack0x00000070,0);
            uVar3 = FUN_06170620(&stack0x00000070,0);
            fVar10 = fVar12;
            fVar13 = fVar17;
            uVar14 = FUN_06170638(&stack0x00000070,0);
            uVar11 = FUN_06170650(&stack0x00000070,0);
            *(undefined4 *)unaff_x20 = uVar3;
            *(float *)((long)unaff_x20 + 4) = fVar12;
            *(float *)(unaff_x20 + 1) = fVar17;
            *(undefined4 *)((long)unaff_x20 + 0xc) = uVar14;
            *(float *)(unaff_x20 + 2) = fVar10;
            *(float *)((long)unaff_x20 + 0x14) = fVar13;
            uStack000000000000002c = 1;
            *(undefined4 *)(unaff_x20 + 3) = uVar11;
          }
        }
        lVar9 = lVar9 + 1;
      } while (iVar4 != (int)lVar9);
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


