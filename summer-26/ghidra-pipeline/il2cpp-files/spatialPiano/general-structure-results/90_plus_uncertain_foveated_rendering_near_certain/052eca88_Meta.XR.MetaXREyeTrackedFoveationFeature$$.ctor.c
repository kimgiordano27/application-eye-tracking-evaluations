/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 052eca88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 116
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(float param_1,float param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 uVar3;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
  float unaff_s10;
  undefined8 unaff_d11;
  float unaff_s14;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
  do {
    if (param_2 <= param_1) {
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
      param_2 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
    }
    else {
      uStack000000000000005c =
           CONCAT44(-(float)((ulong)unaff_d11 >> 0x20) / param_2,-(float)unaff_d11 / param_2);
      param_3 = -unaff_s10;
      param_2 = param_3 / param_2;
    }
    in_stack_00000050 = unaff_d8;
    uStack0000000000000058 = unaff_s9;
    fStack0000000000000064 = param_2;
    uVar1 = FUN_06165c24(unaff_s14,unaff_x25,&stack0x00000050,&stack0x00000070,0);
    if (((uVar1 & 1) != 0) && (fVar4 = (float)FUN_06170650(&stack0x00000070,0), fVar4 < unaff_s14))
    {
      unaff_s14 = (float)FUN_06170650(&stack0x00000070,0);
      uVar5 = FUN_06170620(&stack0x00000070,0);
      fVar4 = param_2;
      fVar8 = param_3;
      uVar6 = FUN_06170638(&stack0x00000070,0);
      uVar7 = FUN_06170650(&stack0x00000070,0);
      *unaff_x20 = uVar5;
      unaff_x20[1] = param_2;
      unaff_x20[2] = param_3;
      unaff_x20[3] = uVar6;
      unaff_x20[4] = fVar4;
      unaff_x20[5] = fVar8;
      in_stack_00000028._4_4_ = 1;
      unaff_x20[6] = uVar7;
    }
    do {
      unaff_x29 = unaff_x29 + 1;
      if (unaff_w24 == (uint)unaff_x29) {
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_06165478(*(long *)(unaff_x19 + 0x30),0,0);
          return in_stack_00000028._4_4_ & 1;
        }
LAB_052ecbf8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 == 0) goto LAB_052ecbf8;
      if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
      unaff_x25 = *(long *)(lVar2 + unaff_x29 * 8 + 0x20);
      FUN_06172430(unaff_s14,*(long *)(unaff_x19 + 0x30),0);
      uVar5 = *(undefined4 *)unaff_x21;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
      param_3 = *(float *)(unaff_x21 + 1);
      if (*(char *)(unaff_x28 + 0x2c3) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2c3) = 1;
      }
      if ((unaff_x25 == 0) || (lVar2 = FUN_060ed7ac(unaff_x25,0), lVar2 == 0)) goto LAB_052ecbf8;
      FUN_060ffbe4(lVar2,0);
      lVar2 = FUN_060ed7ac(unaff_x25,0);
      if (lVar2 == 0) goto LAB_052ecbf8;
      FUN_060fdda4(lVar2,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar1 = FUN_0616c1a4(uVar5,uVar3,unaff_x25,&stack0x000000a0,&stack0x0000006c,0);
      unaff_s10 = in_stack_000000a8;
      unaff_d11 = in_stack_000000a0;
    } while ((uVar1 & 1) == 0);
    unaff_d8 = *unaff_x21;
    unaff_s9 = *(undefined4 *)(unaff_x21 + 1);
    if (*(char *)(unaff_x23 + 0x2bf) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x23 + 0x2bf) = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar4 = (float)((ulong)unaff_d11 >> 0x20);
    param_2 = SQRT(unaff_s10 * unaff_s10 + (float)unaff_d11 * (float)unaff_d11 + fVar4 * fVar4);
    param_1 = in_stack_00000030;
  } while( true );
}


