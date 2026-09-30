/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 060067d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__set_position(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long unaff_x21;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_031f20f4(PTR_DAT_075f7208);
  FUN_031f20f4(PTR_DAT_075f7210);
  FUN_031f20f4(PTR_DAT_075f7218);
  FUN_031f20f4(PTR_DAT_075f2fc8);
  FUN_031f20f4(PTR_DAT_075f7220);
  FUN_031f20f4(PTR_DAT_075f7228);
  FUN_031f20f4(PTR_DAT_075f71b0);
  *(undefined1 *)(unaff_x21 + 0x95e) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  fStack000000000000002c = 0.0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  *(undefined1 *)(unaff_x19 + 0x168) = 0;
  puVar1 = PTR_DAT_075f7228;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar11 = *(long *)puVar1;
  lVar6 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0322bef4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0322bef4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0322bef4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0322bef4();
  }
  puVar4 = PTR_DAT_075f7220;
  puVar3 = PTR_DAT_075f7218;
  puVar2 = PTR_DAT_075f7210;
  puVar1 = PTR_DAT_075f2fc8;
  if ((long *)**(long **)(lVar6 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x198))(&stack0x00000008);
  in_stack_00000060 = in_stack_00000018;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  FUN_044556ac(&stack0x00000008,&stack0x00000050,*(undefined8 *)puVar4);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  lVar6 = 0;
  fVar14 = -INFINITY;
  do {
    uVar7 = FUN_05afd188(&stack0x00000030,*(undefined8 *)puVar2);
    if ((uVar7 & 1) == 0) {
      FUN_05afd424(&stack0x00000030,*(undefined8 *)PTR_DAT_075f7208);
      return lVar6;
    }
    lVar11 = FUN_05afd044(&stack0x00000030,*(undefined8 *)puVar3);
    plVar12 = *(long **)(unaff_x19 + 0x120);
    if (plVar12 == (long *)0x0) {
      uVar13 = 0x3f800000;
    }
    else {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_060069cc;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0322c1e8(plVar12,*(long *)puVar1,4);
LAB_060069cc:
      uVar13 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390(uVar13);
    }
    FUN_060056c8(lVar11,(undefined8 *)(unaff_x19 + 0x148),(undefined8 *)(unaff_x19 + 0x150),
                 &stack0x0000002c);
    fVar5 = fStack000000000000002c;
    if (fVar14 < fStack000000000000002c) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05ffd42c(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05ffd42c(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar6 = lVar11;
      fVar14 = fVar5;
    }
  } while( true );
}


