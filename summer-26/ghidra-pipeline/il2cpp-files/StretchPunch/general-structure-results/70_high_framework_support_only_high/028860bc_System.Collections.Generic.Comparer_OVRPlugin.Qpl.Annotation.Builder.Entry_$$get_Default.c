/*
FUNCTION_NAME: System.Collections.Generic.Comparer<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Default
ENTRY_POINT: 028860bc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Default
               (undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  long unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long lVar5;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *unaff_x19;
  (**(code **)(param_2 + 0x10))();
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    plVar4 = *(long **)(unaff_x20 + 0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x28)) {
      unaff_x22 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x19,unaff_x22,unaff_x23);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar1 = *(long *)(lVar5 + 0xc0);
    lVar5 = *(long *)(lVar1 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*(long *)(lVar1 + 0x20) + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    lVar1 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar5) {
          lVar5 = lVar1 + (long)*piVar3 * 0x10 + 0x138;
          goto 
          System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer
          ;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    lVar5 = FUN_01dde8fc(plVar4,lVar5,0);
System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer:
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar4,unaff_x29 + -0x18,unaff_x19)
    ;
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


