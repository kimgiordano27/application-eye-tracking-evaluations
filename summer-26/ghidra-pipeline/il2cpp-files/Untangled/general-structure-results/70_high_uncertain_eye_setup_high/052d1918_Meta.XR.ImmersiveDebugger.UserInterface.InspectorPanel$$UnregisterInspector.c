/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$UnregisterInspector
ENTRY_POINT: 052d1918
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__UnregisterInspector
               (long param_1,float param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x21;
  float fVar5;
  undefined4 uVar6;
  float unaff_s11;
  float fVar7;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack000000000000000c;
  
  fVar7 = param_2 * *(float *)(param_1 + 0xf10) * DAT_013f6ba4;
  fStack000000000000000c = fVar7;
  fVar5 = (float)FUN_066d1758(0);
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x2e0);
    FUN_067413b4(*(long *)(unaff_x19 + 0x78),0);
    puVar1 = PTR_DAT_06d3c608;
    if (lVar3 != 0) {
      FUN_0498c728(lVar3,*(undefined8 *)PTR_DAT_06d3c608);
      if (*(long *)(unaff_x19 + 0x2e8) != 0) {
        fVar7 = fVar7 * (1.0 / fVar5);
        fStack0000000000000004 = fStack0000000000000004 * fVar7;
        fVar5 = unaff_s11 * fVar7;
        FUN_0498c728(fStack0000000000000000 * fVar7,*(long *)(unaff_x19 + 0x2e8),
                     *(undefined8 *)puVar1);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x1b0);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar2 = FUN_066cd30c(uVar4,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_052d19f4;
          uVar6 = FUN_066d48c0(*(long *)(unaff_x19 + 0x1b0),0);
          *(undefined4 *)(unaff_x19 + 0x3ac) = uVar6;
          *(float *)(unaff_x19 + 0x3b0) = fStack0000000000000004;
          *(float *)(unaff_x19 + 0x3b4) = fVar5;
        }
        return;
      }
    }
  }
LAB_052d19f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


