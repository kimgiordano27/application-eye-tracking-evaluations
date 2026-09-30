/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 06006878
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_useIPDInPositionTracking(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar6 = *(long *)(param_1 + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0322bef4();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
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
    lVar8 = FUN_05afd044(&stack0x00000030,*(undefined8 *)puVar3);
    plVar12 = *(long **)(unaff_x19 + 0x120);
    if (plVar12 == (long *)0x0) {
      uVar13 = 0x3f800000;
    }
    else {
      lVar10 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_060069cc;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar12,*(long *)puVar1,4);
LAB_060069cc:
      uVar13 = (*(code *)*puVar9)(plVar12,puVar9[1]);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390(uVar13);
    }
    FUN_060056c8(lVar8,(undefined8 *)(unaff_x19 + 0x148),(undefined8 *)(unaff_x19 + 0x150),
                 (long)&stack0x00000028 + 4);
    fVar5 = in_stack_00000028._4_4_;
    if (fVar14 < in_stack_00000028._4_4_) {
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
      lVar6 = lVar8;
      fVar14 = fVar5;
    }
  } while( true );
}


