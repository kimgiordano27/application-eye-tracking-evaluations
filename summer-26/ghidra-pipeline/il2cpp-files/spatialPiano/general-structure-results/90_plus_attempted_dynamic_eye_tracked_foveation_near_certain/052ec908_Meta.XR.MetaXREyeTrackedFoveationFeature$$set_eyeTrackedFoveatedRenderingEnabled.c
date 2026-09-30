/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 052ec908
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 168
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  int unaff_w24;
  undefined8 uVar4;
  long *unaff_x27;
  long unaff_x29;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float unaff_s14;
  undefined4 uVar13;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  fStack0000000000000030 = *(float *)(param_1 + 0x6e4);
  do {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) goto LAB_052ecbf8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
    lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    FUN_06172430(unaff_s14,*(long *)(unaff_x19 + 0x30),0);
    uVar13 = *(undefined4 *)unaff_x21;
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    fVar12 = *(float *)(unaff_x21 + 1);
    if (DAT_06bb42c3 == '\0') {
      FUN_02f08768();
      DAT_06bb42c3 = '\x01';
    }
    if ((lVar3 == 0) || (lVar1 = FUN_060ed7ac(lVar3,0), lVar1 == 0)) goto LAB_052ecbf8;
    FUN_060ffbe4(lVar1,0);
    lVar1 = FUN_060ed7ac(lVar3,0);
    if (lVar1 == 0) goto LAB_052ecbf8;
    FUN_060fdda4(lVar1,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_0616c1a4(uVar13,uVar4,lVar3,&stack0x000000a0,&stack0x0000006c,0);
    fVar5 = in_stack_000000a8;
    uVar4 = in_stack_000000a0;
    if ((uVar2 & 1) != 0) {
      uVar10 = *unaff_x21;
      uVar13 = *(undefined4 *)(unaff_x21 + 1);
      if (DAT_06bb42bf == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42bf = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar9 = (float)uVar4;
      fVar11 = (float)((ulong)uVar4 >> 0x20);
      fVar8 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar11 * fVar11);
      if (fVar8 <= fStack0000000000000030) {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        fVar8 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
      }
      else {
        uStack000000000000005c = CONCAT44(-fVar11 / fVar8,-fVar9 / fVar8);
        fVar12 = -fVar5;
        fVar8 = fVar12 / fVar8;
      }
      in_stack_00000050 = uVar10;
      uStack0000000000000058 = uVar13;
      fStack0000000000000064 = fVar8;
      uVar2 = FUN_06165c24(unaff_s14,lVar3,&stack0x00000050,&stack0x00000070,0);
      if (((uVar2 & 1) != 0) && (fVar5 = (float)FUN_06170650(&stack0x00000070,0), fVar5 < unaff_s14)
         ) {
        unaff_s14 = (float)FUN_06170650(&stack0x00000070,0);
        uVar13 = FUN_06170620(&stack0x00000070,0);
        fVar5 = fVar8;
        fVar9 = fVar12;
        uVar6 = FUN_06170638(&stack0x00000070,0);
        uVar7 = FUN_06170650(&stack0x00000070,0);
        *unaff_x20 = uVar13;
        unaff_x20[1] = fVar8;
        unaff_x20[2] = fVar12;
        unaff_x20[3] = uVar6;
        unaff_x20[4] = fVar5;
        unaff_x20[5] = fVar9;
        in_stack_00000028._4_4_ = 1;
        unaff_x20[6] = uVar7;
      }
    }
    unaff_x29 = unaff_x29 + 1;
  } while (unaff_w24 != (int)unaff_x29);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06165478(*(long *)(unaff_x19 + 0x30),0,0);
    return in_stack_00000028._4_4_ & 1;
  }
LAB_052ecbf8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


