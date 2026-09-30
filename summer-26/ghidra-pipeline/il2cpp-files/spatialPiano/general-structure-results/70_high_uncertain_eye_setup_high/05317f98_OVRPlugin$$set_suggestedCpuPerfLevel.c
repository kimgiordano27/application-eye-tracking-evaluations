/*
FUNCTION_NAME: OVRPlugin$$set_suggestedCpuPerfLevel
ENTRY_POINT: 05317f98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__set_suggestedCpuPerfLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
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
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000098;
  
  thunk_FUN_02f6670c();
  lVar12 = *unaff_x20;
  lVar7 = *(long *)(lVar12 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar7 = *(long *)(lVar12 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c();
  }
  puVar5 = UnityEngine_Rendering_Universal_DecalScreenSpaceRenderPass_TypeInfo;
  puVar4 = UnityEngine_Rendering_Universal_DecalRendererFeature_TypeInfo;
  puVar3 = UnityEngine_Rendering_Universal_DecalProjector_TypeInfo;
  puVar2 = UnityEngine_Rendering_Universal_DecalPreviewPass_TypeInfo;
  puVar1 = System_Predicate<DebugUI_Panel>_TypeInfo;
  if ((long *)**(long **)(lVar7 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*(long *)**(long **)(lVar7 + 0xb8) + 0x198))(&stack0x00000028);
  in_stack_00000070 = in_stack_00000038;
  in_stack_00000068 = in_stack_00000030;
  in_stack_00000060 = in_stack_00000028;
  FUN_037d833c(&stack0x00000008,&stack0x00000060,*(undefined8 *)puVar5);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000008 = 0;
  lVar7 = 0;
  fVar15 = -INFINITY;
  in_stack_00000010 = &stack0x00000040;
  do {
    uVar8 = FUN_04bbfe84(&stack0x00000040,*(undefined8 *)puVar3);
    lVar12 = in_stack_00000008;
    if ((uVar8 & 1) == 0) {
      FUN_04bc0140(in_stack_00000010,*(undefined8 *)puVar2);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0(lVar12);
      }
      return lVar7;
    }
    lVar12 = FUN_04bbfd2c(&stack0x00000040,*(undefined8 *)puVar4);
    plVar13 = *(long **)(unaff_x19 + 0x120);
    if (plVar13 == (long *)0x0) {
      uVar14 = 0x3f800000;
    }
    else {
      lVar10 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_05318120;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar1,4);
LAB_05318120:
      uVar14 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(uVar14);
    }
    FUN_05316e9c(lVar12,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
    fVar6 = in_stack_00000098._4_4_;
    if (fVar15 < in_stack_00000098._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05310ddc(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05310ddc(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar7 = lVar12;
      fVar15 = fVar6;
    }
  } while( true );
}


