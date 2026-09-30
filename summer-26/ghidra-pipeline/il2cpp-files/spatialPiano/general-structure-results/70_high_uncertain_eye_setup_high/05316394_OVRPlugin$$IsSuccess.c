/*
FUNCTION_NAME: OVRPlugin$$IsSuccess
ENTRY_POINT: 05316394
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsSuccess(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  *(undefined4 *)(unaff_x19 + 0x128) = *(undefined4 *)((long)unaff_x21 + 0xc);
  puVar2 = System_Xml_Schema_Datatype_dateTimeTimeZone_TypeInfo;
  if (*unaff_x21 != 0) {
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)System_Xml_Schema_Datatype_byte_TypeInfo);
    FUN_03abf108(lVar5,*(undefined8 *)puVar2);
    puVar4 = UnityEngine_Rendering_DebugShapes_TypeInfo;
    puVar3 = UnityEngine_Rendering_DebugRendererBatcherStats_TypeInfo;
    puVar2 = UnityEngine_Rendering_Universal_DebugRenderSetup_TypeInfo;
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_03bcf624(&stack0x000000c0,*unaff_x21,
                 *(undefined8 *)UnityEngine_Rendering_UI_DebugUIHandlerMessageBox_TypeInfo);
    while (uVar6 = FUN_04b633b8(&stack0x000000c0,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      uVar7 = FUN_05316514();
      if (lVar5 == 0) {
LAB_053164b4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_053164b4;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_03abf904(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_04b633b4(&stack0x000000c0,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0x130) = lVar5;
  }
  return;
}


