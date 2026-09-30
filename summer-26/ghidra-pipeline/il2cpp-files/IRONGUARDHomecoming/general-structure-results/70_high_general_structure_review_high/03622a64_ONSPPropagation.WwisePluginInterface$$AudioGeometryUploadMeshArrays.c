/*
FUNCTION_NAME: ONSPPropagation.WwisePluginInterface$$AudioGeometryUploadMeshArrays
ENTRY_POINT: 03622a64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void ONSPPropagation_WwisePluginInterface__AudioGeometryUploadMeshArrays(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  bool in_ZR;
  undefined8 *puVar6;
  undefined1 in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined4 unaff_w21;
  long lVar11;
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  uint unaff_s11;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  uint in_stack_00000048;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint uStack00000000000000b0;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  uint in_stack_000000d8;
  
                    /* try { // try from 03622a70 to 03722ad7 has its CatchHandler @ 03622a70
                       catch() { ... } // from try @ 03622a70 with catch @ 03622a70
                       catch() { ... } // from try @ 03622af0 with catch @ 03622a70
                       catch() { ... } // from try @ 03622b7c with catch @ 03622a70
                       catch() { ... } // from try @ 03622c18 with catch @ 03622a70 */
  *(undefined4 *)(unaff_x20 + 0x48) = unaff_w21;
  *(undefined1 *)(unaff_x20 + 0x38) = in_w8;
  *(bool *)(unaff_x20 + 0x39) = !in_ZR;
  *(undefined4 *)(unaff_x20 + 0x34) = unaff_s15;
  in_stack_000000c0 = FUN_0373bcbc(0);
  uStack00000000000000c4 = unaff_s13;
  in_stack_000000c8 = unaff_s14;
  uStack00000000000000cc = FUN_0373bf6c(0);
  *(ulong *)(unaff_x20 + 0x2c) = CONCAT44(unaff_s11,unaff_s10);
  *(ulong *)(unaff_x20 + 0x24) = CONCAT44(unaff_s9,uStack00000000000000cc);
  *(ulong *)(unaff_x20 + 0x20) = CONCAT44(uStack00000000000000cc,in_stack_000000c8);
  *(ulong *)(unaff_x20 + 0x18) = CONCAT44(uStack00000000000000c4,in_stack_000000c0);
  if ((*(long *)(unaff_x19 + 0x78) == 0) ||
     (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0x18), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 03622ad8 to 03722aef has its CatchHandler @ 03622b4c */
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  in_stack_000000d0 = unaff_s9;
  uStack00000000000000d4 = unaff_s10;
  in_stack_000000d8 = unaff_s11;
  if (uVar8 != 0) {
                    /* try { // try from 03622af0 to 03722b63 has its CatchHandler @ 03622a70 */
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__)
      {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_03622b30;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__
                        ,1);
LAB_03622b30:
  puVar3 = Method_Gameplay_Hands_HandPositionController_<>c_<Update>b__32_0__;
  puVar2 = Method_Oculus_Interaction_HandGrab_HandGrabUseInteractor_<>c_<_ctor>b__58_0__;
  (*(code *)*puVar6)(&stack0x00000030,plVar10,puVar6[1]);
  in_stack_000000a8 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  _uStack00000000000000b0 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
  in_stack_000000a0 = in_stack_00000030;
  while( true ) {
    uVar8 = FUN_02c74e90(&stack0x000000a0,*(undefined8 *)puVar3);
    if ((uVar8 & 1) == 0) {
      FUN_02c74e8c(&stack0x000000a0,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Input_HandPhysicsCapsules_<>c_<_ctor>b__39_0__);
      return;
    }
    uStack0000000000000088 = 0;
    uStack000000000000008c = 0;
    uStack0000000000000090 = 0;
    uStack0000000000000094 = 0;
    in_stack_00000080 = 0;
    in_stack_00000098 = 0;
    uVar5 = uStack00000000000000b0;
    lVar7 = (long)(int)uStack00000000000000b0;
    if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = FUN_029ce2c4(*(long *)(unaff_x19 + 0x78),_uStack00000000000000b0 & 0xffffffff,
                         (long)&stack0x00000078 + 4,*(undefined8 *)puVar2);
    uVar4 = in_stack_00000078._4_4_;
    if ((uVar8 & 1) != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = (long)(int)in_stack_00000078._4_4_;
      if (*(uint *)(unaff_x22 + 0x18) <= in_stack_00000078._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar1 = unaff_x22 + lVar11 * 0x10;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      if ((*(uint *)(lVar1 + 0x2c) & 0x7fffffff) < 0x7f800001) {
        uVar13 = *(undefined4 *)(lVar1 + 0x24);
        uVar14 = *(undefined4 *)(lVar1 + 0x28);
        uVar15 = *(uint *)(lVar1 + 0x2c);
        uVar12 = FUN_0373bf6c(*(undefined4 *)(lVar1 + 0x20),0);
      }
      uStack00000000000000cc = uVar12;
      in_stack_000000d0 = uVar13;
      uStack00000000000000d4 = uVar14;
      in_stack_000000d8 = uVar15;
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(unaff_x23 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar11 = unaff_x23 + lVar11 * 0xc;
      uVar12 = *(undefined4 *)(lVar11 + 0x24);
      uVar13 = *(undefined4 *)(lVar11 + 0x28);
      in_stack_000000c0 = FUN_0373bcbc(*(undefined4 *)(lVar11 + 0x20),0);
      uStack0000000000000088 = uVar13;
      uStack00000000000000c4 = uVar12;
      in_stack_00000080 = CONCAT44(uStack00000000000000c4,in_stack_000000c0);
      uStack0000000000000094 = uStack00000000000000d4;
      in_stack_00000098 = in_stack_000000d8;
      uStack0000000000000090 = in_stack_000000d0;
      uStack000000000000008c = uStack00000000000000cc;
      in_stack_000000c8 = uStack0000000000000088;
    }
    if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x40);
    in_stack_00000030 = in_stack_00000080;
    uStack0000000000000038 = uStack0000000000000088;
    uStack0000000000000044 = uStack0000000000000094;
    in_stack_00000048 = in_stack_00000098;
    uStack000000000000003c = uStack000000000000008c;
    uStack0000000000000040 = uStack0000000000000090;
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar11 = lVar11 + lVar7 * 0x1c;
    *(ulong *)(lVar11 + 0x34) = CONCAT44(in_stack_00000098,uStack0000000000000094);
    *(ulong *)(lVar11 + 0x2c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    *(ulong *)(lVar11 + 0x28) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    *(undefined8 *)(lVar11 + 0x20) = in_stack_00000080;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


