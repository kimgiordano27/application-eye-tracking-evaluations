/*
FUNCTION_NAME: OVRPlugin$$get_batteryTemperature
ENTRY_POINT: 05317ed8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_batteryTemperature(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
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
  float fStack000000000000009c;
  
  puVar1 = UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo;
  if ((DAT_06bbb216 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalPreviewPass_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalProjector_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalRendererFeature_TypeInfo);
    FUN_02f08768(System_Predicate<DebugUI_Panel>_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalScreenSpaceRenderPass_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalScreenSpaceSettings_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo);
    DAT_06bbb216 = 1;
  }
  lVar7 = *(long *)puVar1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  puVar1 = UnityEngine_Rendering_Universal_DecalScreenSpaceSettings_TypeInfo;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  fStack000000000000009c = 0.0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar13 = *(long *)puVar1;
  lVar7 = *(long *)(lVar13 + 0x20);
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
  lVar7 = *(long *)(lVar13 + 0x20);
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
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*plVar8 + 0x198))(&stack0x00000028,plVar8,param_1,*(undefined8 *)(*plVar8 + 0x1a0));
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
    uVar9 = FUN_04bbfe84(&stack0x00000040,*(undefined8 *)puVar3);
    lVar13 = in_stack_00000008;
    if ((uVar9 & 1) == 0) {
      FUN_04bc0140(in_stack_00000010,*(undefined8 *)puVar2);
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0(lVar13);
      }
      return lVar7;
    }
    lVar13 = FUN_04bbfd2c(&stack0x00000040,*(undefined8 *)puVar4);
    plVar8 = *(long **)(param_1 + 0x120);
    if (plVar8 == (long *)0x0) {
      uVar14 = 0x3f800000;
    }
    else {
      lVar11 = *plVar8;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_05318120;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,4);
LAB_05318120:
      uVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(uVar14);
    }
    FUN_05316e9c(lVar13,param_1 + 0x148,param_1 + 0x150,&stack0x0000009c);
    fVar6 = fStack000000000000009c;
    if (fVar15 < fStack000000000000009c) {
      if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05310ddc(*(long *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x148),0);
      if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05310ddc(*(long *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x150),0);
      *(undefined1 *)(param_1 + 0x168) = 1;
      lVar7 = lVar13;
      fVar15 = fVar6;
    }
  } while( true );
}


