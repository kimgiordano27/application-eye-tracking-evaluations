/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$get_userPresent
ENTRY_POINT: 052eca90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MetaXRFeature__get_userPresent(undefined1 param_1 [16],float param_2)

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
  float fVar9;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
  float unaff_s10;
  undefined8 unaff_d11;
  float unaff_s14;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined8 uStack000000000000005c;
  float fStack0000000000000064;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  
code_r0x052eca90:
  uStack000000000000005c =
       CONCAT44(-(float)((ulong)unaff_d11 >> 0x20) / param_2,-(float)unaff_d11 / param_2);
  fVar8 = -unaff_s10;
  param_2 = fVar8 / param_2;
  do {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052eca24 with catch @ 052ecaf4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052ecae4 with catch @ 052ecaf8
                        */
    uStack0000000000000050 = unaff_d8;
    uStack0000000000000058 = unaff_s9;
    fStack0000000000000064 = param_2;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052eca18 with catch @ 052ecafc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052ecae0 with catch @ 052ecb00
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052ec9dc with catch @ 052ecb04
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052ec978 with catch @ 052ecb08
                        */
    uVar1 = FUN_06165c24(unaff_s14,unaff_x25,&stack0x00000050,&stack0x00000070,0);
    if (((uVar1 & 1) != 0) && (fVar4 = (float)FUN_06170650(&stack0x00000070,0), fVar4 < unaff_s14))
    {
      unaff_s14 = (float)FUN_06170650(&stack0x00000070,0);
      uVar5 = FUN_06170620(&stack0x00000070,0);
      fVar4 = param_2;
      fVar9 = fVar8;
      uVar6 = FUN_06170638(&stack0x00000070,0);
      uVar7 = FUN_06170650(&stack0x00000070,0);
      *unaff_x20 = uVar5;
      unaff_x20[1] = param_2;
      unaff_x20[2] = fVar8;
      unaff_x20[3] = uVar6;
      unaff_x20[4] = fVar4;
      unaff_x20[5] = fVar9;
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
      fVar8 = *(float *)(unaff_x21 + 1);
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
    if (in_stack_00000030 < param_2) goto code_r0x052eca90;
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    param_2 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
  } while( true );
}


