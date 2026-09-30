/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$get_Current
ENTRY_POINT: 0144c990
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current
               (long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  uVar2 = *(uint *)(unaff_x22 + 0x20);
  FUN_01d6ade4(*(undefined8 *)(unaff_x22 + 0x18),0,param_1,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (param_1 == 0) {
LAB_0144ca60:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    do {
      if (uVar3 <= uVar7) {

        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        :
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      iVar4 = *(int *)(param_1 + uVar7 * 0x1c + 0x20);
      if (-1 < iVar4) {
        if (unaff_x21 == 0) goto LAB_0144ca60;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5)
        goto 
        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        ;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(param_1 + uVar7 * 0x1c + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_0106e12c((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = param_1;
  thunk_FUN_0106e12c((undefined8 *)(unaff_x22 + 0x18),param_1);
  return;
}


