/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 052ec958
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 159
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  uint in_w8;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float unaff_s12;
  float unaff_s14;
  undefined4 unaff_s15;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  while( true ) {
    if (in_w8 == 0) {
      FUN_02f08768();
      *(undefined1 *)(unaff_x28 + 0x2c3) = 1;
    }
                    /* try { // try from 052ec978 to 053ec99f has its CatchHandler @ 052ecb08 */
    if ((unaff_x25 == 0) || (lVar2 = FUN_060ed7ac(unaff_x25,0), lVar2 == 0)) goto LAB_052ecbf8;
    FUN_060ffbe4(lVar2,0);
    lVar2 = FUN_060ed7ac(unaff_x25,0);
    if (lVar2 == 0) goto LAB_052ecbf8;
    FUN_060fdda4(lVar2,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_0616c1a4(unaff_s15,unaff_x26,unaff_x25,&stack0x000000a0,&stack0x0000006c,0);
    fVar4 = in_stack_000000a8;
    uVar1 = in_stack_000000a0;
    if ((uVar3 & 1) != 0) {
      uVar9 = *unaff_x21;
      uVar10 = *(undefined4 *)(unaff_x21 + 1);
      if (*(char *)(unaff_x23 + 0x2bf) == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        *(undefined1 *)(unaff_x23 + 0x2bf) = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar8 = (float)uVar1;
      fVar11 = (float)((ulong)uVar1 >> 0x20);
      fVar7 = SQRT(fVar4 * fVar4 + fVar8 * fVar8 + fVar11 * fVar11);
      if (fVar7 <= in_stack_00000030) {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        fVar7 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
      }
      else {
        uStack000000000000005c = CONCAT44(-fVar11 / fVar7,-fVar8 / fVar7);
        unaff_s12 = -fVar4;
        fVar7 = unaff_s12 / fVar7;
      }
      in_stack_00000050 = uVar9;
      uStack0000000000000058 = uVar10;
      fStack0000000000000064 = fVar7;
      uVar3 = FUN_06165c24(unaff_s14,unaff_x25,&stack0x00000050,&stack0x00000070,0);
      if (((uVar3 & 1) != 0) && (fVar4 = (float)FUN_06170650(&stack0x00000070,0), fVar4 < unaff_s14)
         ) {
        unaff_s14 = (float)FUN_06170650(&stack0x00000070,0);
        uVar10 = FUN_06170620(&stack0x00000070,0);
        fVar4 = fVar7;
        fVar8 = unaff_s12;
        uVar5 = FUN_06170638(&stack0x00000070,0);
        uVar6 = FUN_06170650(&stack0x00000070,0);
        *unaff_x20 = uVar10;
        unaff_x20[1] = fVar7;
        unaff_x20[2] = unaff_s12;
        unaff_x20[3] = uVar5;
        unaff_x20[4] = fVar4;
        unaff_x20[5] = fVar8;
        in_stack_00000028._4_4_ = 1;
        unaff_x20[6] = uVar6;
      }
    }
    unaff_x29 = unaff_x29 + 1;
    if (unaff_w24 == (uint)unaff_x29) break;
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 == 0) goto LAB_052ecbf8;
    if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
    unaff_x25 = *(long *)(lVar2 + unaff_x29 * 8 + 0x20);
    FUN_06172430(unaff_s14,*(long *)(unaff_x19 + 0x30),0);
    unaff_s15 = *(undefined4 *)unaff_x21;
    unaff_x26 = *(undefined8 *)(unaff_x19 + 0x30);
    in_w8 = (uint)*(byte *)(unaff_x28 + 0x2c3);
    unaff_s12 = *(float *)(unaff_x21 + 1);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06165478(*(long *)(unaff_x19 + 0x30),0,0);
    return in_stack_00000028._4_4_ & 1;
  }
LAB_052ecbf8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


