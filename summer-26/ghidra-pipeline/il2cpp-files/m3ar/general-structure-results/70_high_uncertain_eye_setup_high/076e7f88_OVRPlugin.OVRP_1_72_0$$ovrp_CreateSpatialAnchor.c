/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_CreateSpatialAnchor
ENTRY_POINT: 076e7f88
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_CreateSpatialAnchor
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  float *unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined8 in_stack_000000a8;
  
                    /* catch() { ... } // from try @ 076e77d0 with catch @ 076e7f88 */
                    /* catch() { ... } // from try @ 076e779c with catch @ 076e7f8c */
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
                    /* catch() { ... } // from try @ 076e7a5c with catch @ 076e7f90 */
  uStack0000000000000058 = 0;
                    /* catch() { ... } // from try @ 076e7a8c with catch @ 076e7f94 */
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
                    /* catch() { ... } // from try @ 076e797c with catch @ 076e7f98 */
  if (*(long *)(unaff_x19 + 0x128) != 0) {
                    /* catch() { ... } // from try @ 076e7808 with catch @ 076e7f9c */
    fVar12 = unaff_x21[1];
    in_stack_000000a8._4_4_ = unaff_x21[2];
                    /* catch() { ... } // from try @ 076e7780 with catch @ 076e7fa0 */
                    /* catch() { ... } // from try @ 076e7ac4 with catch @ 076e7fa4 */
    fVar10 = *unaff_x21;
                    /* catch() { ... } // from try @ 076e7c40 with catch @ 076e7fa8 */
                    /* catch() { ... } // from try @ 076e7f50 with catch @ 076e7fac */
    fVar7 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x128),0);
                    /* catch() { ... } // from try @ 076e7f4c with catch @ 076e7fb0 */
                    /* catch() { ... } // from try @ 076e7748 with catch @ 076e7fb4 */
                    /* catch() { ... } // from try @ 076e77b8 with catch @ 076e7fb8 */
                    /* catch() { ... } // from try @ 076e7f48 with catch @ 076e7fbc */
                    /* catch() { ... } // from try @ 076e7f44 with catch @ 076e7fc0 */
                    /* catch() { ... } // from try @ 076e7f40 with catch @ 076e7fc4 */
    if (DAT_09539e16 == '\0') {
                    /* catch() { ... } // from try @ 076e7758 with catch @ 076e7fc8 */
                    /* catch() { ... } // from try @ 076e7a1c with catch @ 076e7fcc */
                    /* catch() { ... } // from try @ 076e7710 with catch @ 076e7fd0 */
      FUN_0403162c(PTR_DAT_08f65568);
                    /* catch() { ... } // from try @ 076e7f38 with catch @ 076e7fd4 */
                    /* catch() { ... } // from try @ 076e7f30 with catch @ 076e7fd8 */
      DAT_09539e16 = '\x01';
    }
                    /* catch() { ... } // from try @ 076e7f2c with catch @ 076e7fdc */
                    /* catch() { ... } // from try @ 076e7f28 with catch @ 076e7fe0 */
                    /* catch() { ... } // from try @ 076e7f24 with catch @ 076e7fe4 */
                    /* catch() { ... } // from try @ 076e761c with catch @ 076e7fe8
                       catch() { ... } // from try @ 076e7668 with catch @ 076e7fe8 */
                    /* catch() { ... } // from try @ 076e7f20 with catch @ 076e7fec */
                    /* catch() { ... } // from try @ 076e75b0 with catch @ 076e7ff0
                       catch() { ... } // from try @ 076e763c with catch @ 076e7ff0 */
    lVar3 = *(long *)(*(long *)PTR_DAT_08f65568 + 0xb8);
                    /* catch() { ... } // from try @ 076e7558 with catch @ 076e7ff4 */
    fVar11 = *(float *)(lVar3 + 0x18);
    fVar14 = *(float *)(lVar3 + 0x1c);
                    /* catch() { ... } // from try @ 076e73e0 with catch @ 076e7ff8 */
    fVar13 = *(float *)(lVar3 + 0x20);
                    /* catch() { ... } // from try @ 076e72cc with catch @ 076e7ffc */
    if (DAT_09539f9f == '\0') {
                    /* catch() { ... } // from try @ 076e726c with catch @ 076e8000 */
                    /* catch() { ... } // from try @ 076e7338 with catch @ 076e8004 */
                    /* catch() { ... } // from try @ 076e732c with catch @ 076e8008 */
      FUN_0403162c(PTR_DAT_08f67c68);
      DAT_09539f9f = '\x01';
    }
    fVar10 = fVar10 - fVar7;
    fVar12 = fVar12 - param_2;
    param_3 = in_stack_000000a8._4_4_ - param_3;
    fVar8 = fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14;
    fVar7 = in_stack_000000a8._4_4_;
    if (**(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) <= fVar8) {
      fVar9 = param_3 * fVar13 + fVar10 * fVar11 + fVar12 * fVar14;
      fVar7 = (fVar11 * fVar9) / fVar8;
      fVar10 = fVar10 - fVar7;
      fVar12 = fVar12 - (fVar14 * fVar9) / fVar8;
      param_3 = param_3 - (fVar13 * fVar9) / fVar8;
    }
    if (DAT_09539e17 == '\0') {
      FUN_0403162c(PTR_DAT_08f65580);
      DAT_09539e17 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    puVar1 = PTR_DAT_08f70528;
    if (*(long *)(unaff_x19 + 0x128) != 0) {
      fVar11 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + param_3 * param_3);
      fVar10 = (float)FUN_08598884(*(long *)(unaff_x19 + 0x128),0);
      fVar12 = fVar7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar13 = (float)FUN_08596ab0();
      plVar6 = *(long **)(unaff_x19 + 0x138);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_08596724(fVar10 + fVar11 * fVar13,unaff_x21[1],fVar7 + fVar11 * fVar12,
                   *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                   *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                   &stack0x00000020,0);
      uStack0000000000000048 = uStack0000000000000028;
      uStack0000000000000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack0000000000000058 = in_stack_00000038;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08fabd18) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_076e81bc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08fabd18,2);
LAB_076e81bc:
        (*(code *)*puVar2)(&stack0x00000000 + 4,plVar6,&stack0x00000040,puVar2[1]);
        *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000._4_8_;
        *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
        *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


