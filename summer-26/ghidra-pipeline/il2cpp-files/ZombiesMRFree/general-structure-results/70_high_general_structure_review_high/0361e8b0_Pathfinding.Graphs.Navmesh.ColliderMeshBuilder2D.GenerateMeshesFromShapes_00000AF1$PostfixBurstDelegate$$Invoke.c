/*
FUNCTION_NAME: Pathfinding.Graphs.Navmesh.ColliderMeshBuilder2D.GenerateMeshesFromShapes_00000AF1$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0361e8b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Pathfinding_Graphs_Navmesh_ColliderMeshBuilder2D_GenerateMeshesFromShapes_00000AF1_PostfixBurstDelegate__Invoke
               (undefined1 param_1 [16])

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined4 uStack0000000000000100;
  long lStack0000000000000118;
  ulong uStack0000000000000120;
  long lStack0000000000000128;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  ulong in_stack_00000170;
  long in_stack_00000178;
  ulong in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  
  lStack0000000000000118 = param_1._8_8_;
  uStack0000000000000120 = param_1._0_8_;
  uStack00000000000000e8 = unaff_x23[1];
  uStack00000000000000e0 = *unaff_x23;
  uStack00000000000000f8 = unaff_x23[3];
  uStack00000000000000f0 = unaff_x23[2];
  uStack0000000000000100 = *(undefined4 *)(unaff_x23 + 4);
  uVar3 = *(undefined8 *)(unaff_x25 + 0x44);
  uVar6 = *(undefined8 *)(unaff_x25 + 0x3c);
  *(undefined8 *)(unaff_x22 + 6) = *(undefined8 *)(unaff_x25 + 0x4c);
  *(undefined8 *)(unaff_x22 + 4) = uVar3;
  *(undefined8 *)(unaff_x22 + 2) = uVar6;
  uStack00000000000000b8 = unaff_x23[1];
  uStack00000000000000b0 = *unaff_x23;
  uStack00000000000000c8 = unaff_x23[3];
  uStack00000000000000c0 = unaff_x23[2];
  uStack00000000000000d0 = *(undefined4 *)(unaff_x23 + 4);
  uStack0000000000000148 = *(undefined8 *)(unaff_x25 + 0x14);
  uStack0000000000000140 = *(undefined8 *)(unaff_x25 + 0xc);
  uStack0000000000000150 = *(undefined8 *)(unaff_x25 + 0x1c);
  uVar2 = FUN_0368fdf0(&stack0x00000140,0);
  unaff_x22[1] = uVar2;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  FUN_04754304(&stack0x000000a0,uVar2,*unaff_x22,0,*unaff_x26);
  *(undefined8 *)(unaff_x22 + 10) = in_stack_000000a8;
  *(undefined8 *)(unaff_x22 + 8) = in_stack_000000a0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  FUN_0476176c(&stack0x00000090,unaff_x22[1],*unaff_x22,0,*unaff_x29);
  *(undefined8 *)(unaff_x22 + 0x1a) = in_stack_00000098;
  *(undefined8 *)(unaff_x22 + 0x18) = in_stack_00000090;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  FUN_04749b80(&stack0x00000080,unaff_x22[1],*unaff_x22,0,*unaff_x28);
  *(undefined8 *)(unaff_x22 + 0xe) = in_stack_00000088;
  *(undefined8 *)(unaff_x22 + 0xc) = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_046bbc74(&stack0x00000070,unaff_x22[1],*unaff_x22,0,*unaff_x27);
  *(undefined8 *)(unaff_x22 + 0x22) = in_stack_00000078;
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000070;
  *(undefined8 *)(unaff_x25 + 0x80) = 0;
  *(undefined8 *)(unaff_x25 + 0x78) = 0;
  *(undefined8 *)(unaff_x25 + 0x70) = 0;
  *(undefined8 *)(unaff_x25 + 0x68) = 0;
  thunk_FUN_03048534(&stack0x00000110);
  uVar6 = *(undefined8 *)(unaff_x22 + 8);
  uVar1 = *(ulong *)(unaff_x22 + 10);
  lVar5 = *(long *)PTR_DAT_06f8ddb0;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02feb320(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = FUN_03d0af08(uVar6,uVar1,*(undefined8 *)(lVar4 + 8));
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28);
  if ((int)uVar1 < 0) {
LAB_0361eac8:
    thunk_FUN_03037804(PTR_DAT_06f7a510);
    uVar3 = thunk_FUN_0301080c();
    FUN_05a66294(uVar3,0);
  }
  else {
    if (((int)uVar1 == 0) || (lVar4 != 0)) {
      lVar7 = *(long *)PTR_DAT_06f8dda8;
      uStack0000000000000120 = uVar1 & 0xffffffff;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar1 = *(ulong *)(unaff_x22 + 0x22);
      lVar5 = *(long *)(lVar7 + 0x38);
      lStack0000000000000118 = lVar4;
      if (lVar5 == 0) {
        FUN_02feb320(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lStack0000000000000128 = FUN_03d0ae8c(uVar6,uVar1,*(undefined8 *)(lVar5 + 8));
      uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28);
      if ((int)uVar1 < 0) goto LAB_0361eac8;
      if (((int)uVar1 == 0) || (lStack0000000000000128 != 0)) {
        in_stack_00000180 = uVar1 & 0xffffffff;
        in_stack_00000168 = lStack0000000000000118;
        in_stack_00000170 = uStack0000000000000120;
        in_stack_000001b0 = *(undefined4 *)(unaff_x23 + 4);
        in_stack_00000198 = unaff_x23[1];
        in_stack_00000190 = *unaff_x23;
        in_stack_000001a8 = unaff_x23[3];
        in_stack_000001a0 = unaff_x23[2];
        in_stack_00000178 = lStack0000000000000128;
        FUN_03c7846c(&stack0x00000190,&stack0x00000160,*(undefined8 *)PTR_DAT_06f8dda0);
        FUN_0361eb10();
        return;
      }
    }
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar3 = thunk_FUN_0301080c();
    FUN_05a661f0(uVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar3,uVar6);
}


