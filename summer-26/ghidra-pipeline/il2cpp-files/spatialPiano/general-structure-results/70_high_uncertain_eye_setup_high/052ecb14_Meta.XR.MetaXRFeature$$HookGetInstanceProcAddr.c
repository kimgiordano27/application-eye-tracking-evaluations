/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$HookGetInstanceProcAddr
ENTRY_POINT: 052ecb14
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


uint Meta_XR_MetaXRFeature__HookGetInstanceProcAddr
               (undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  undefined8 uVar4;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
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
                    /* try { // try from 052ecb24 to 053ecb27 has its CatchHandler @ 052ecb34 */
    if (((param_4 & 1) != 0) && (fVar5 = (float)FUN_06170650(&stack0x00000070,0), fVar5 < unaff_s14)
       ) {
                    /* catch() { ... } // from try @ 052ecb24 with catch @ 052ecb34 */
      unaff_s14 = (float)FUN_06170650(&stack0x00000070,0);
                    /* try { // try from 052ecb38 to 053ecb3f has its CatchHandler @ 052ecb48 */
                    /* try { // try from 052ecb40 to 053ecb4b has its CatchHandler @ 052ec810 */
      uVar6 = FUN_06170620(&stack0x00000070,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052ecb38 with catch @ 052ecb48
                        */
      fVar5 = param_2;
      fVar9 = param_3;
                    /* try { // try from 052ecb4c to 053ecd33 has its CatchHandler @ 052ecb4c
                       catch() { ... } // from try @ 052ecb4c with catch @ 052ecb4c
                       catch() { ... } // from try @ 052ecdcc with catch @ 052ecb4c
                       catch() { ... } // from try @ 052ecf70 with catch @ 052ecb4c
                       catch() { ... } // from try @ 052ecfc4 with catch @ 052ecb4c */
      uVar7 = FUN_06170638(&stack0x00000070,0);
      uVar8 = FUN_06170650(&stack0x00000070,0);
      *unaff_x20 = uVar6;
      unaff_x20[1] = param_2;
      unaff_x20[2] = param_3;
      unaff_x20[3] = uVar7;
      unaff_x20[4] = fVar5;
      unaff_x20[5] = fVar9;
      in_stack_00000028._4_4_ = 1;
      unaff_x20[6] = uVar8;
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
      lVar3 = *(long *)(unaff_x19 + 0x28);
      if (lVar3 == 0) goto LAB_052ecbf8;
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052ecbf8;
      lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
      FUN_06172430(unaff_s14,*(long *)(unaff_x19 + 0x30),0);
      uVar6 = *(undefined4 *)unaff_x21;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
      param_3 = *(float *)(unaff_x21 + 1);
      if (*(char *)(unaff_x28 + 0x2c3) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2c3) = 1;
      }
      if ((lVar3 == 0) || (lVar1 = FUN_060ed7ac(lVar3,0), lVar1 == 0)) goto LAB_052ecbf8;
      FUN_060ffbe4(lVar1,0);
      lVar1 = FUN_060ed7ac(lVar3,0);
      if (lVar1 == 0) goto LAB_052ecbf8;
      FUN_060fdda4(lVar1,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = FUN_0616c1a4(uVar6,uVar4,lVar3,&stack0x000000a0,&stack0x0000006c,0);
      fVar5 = in_stack_000000a8;
      uVar4 = in_stack_000000a0;
    } while ((uVar2 & 1) == 0);
    uVar10 = *unaff_x21;
    uVar6 = *(undefined4 *)(unaff_x21 + 1);
    if (*(char *)(unaff_x23 + 0x2bf) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      *(undefined1 *)(unaff_x23 + 0x2bf) = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar9 = (float)uVar4;
    fVar11 = (float)((ulong)uVar4 >> 0x20);
    param_2 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar11 * fVar11);
    if (param_2 <= in_stack_00000030) {
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      uStack000000000000005c = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
      param_2 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
    }
    else {
      uStack000000000000005c = CONCAT44(-fVar11 / param_2,-fVar9 / param_2);
      param_3 = -fVar5;
      param_2 = param_3 / param_2;
    }
    in_stack_00000050 = uVar10;
    uStack0000000000000058 = uVar6;
    fStack0000000000000064 = param_2;
    param_4 = FUN_06165c24(unaff_s14,lVar3,&stack0x00000050,&stack0x00000070,0);
  } while( true );
}


