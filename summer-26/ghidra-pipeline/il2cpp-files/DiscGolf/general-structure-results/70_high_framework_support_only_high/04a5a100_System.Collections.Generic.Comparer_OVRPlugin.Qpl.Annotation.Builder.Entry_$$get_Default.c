/*
FUNCTION_NAME: System.Collections.Generic.Comparer<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Default
ENTRY_POINT: 04a5a100
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Default(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *plVar7;
  undefined4 in_stack_00000008;
  
  lVar4 = *unaff_x19;
  plVar7 = *(long **)(unaff_x23 + 0x5e0);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar7) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_04a5a158;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02dd004c();
LAB_04a5a158:
  uVar1 = (*(code *)*puVar3)();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000008 = *(undefined4 *)(unaff_x21 + 4);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar7) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto 
        System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02dd004c();
System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer:
  uVar2 = (*(code *)*puVar3)();
  FUN_05506fd8(uVar1,uVar2,0);
  return;
}


