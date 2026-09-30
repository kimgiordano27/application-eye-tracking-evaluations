/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0144c9a4
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


void System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  FUN_01d6ade4(param_1,param_3,param_4,0,unaff_x24 & 0xffffffff,0);
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_0144ca60:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {

        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        :
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      iVar3 = *(int *)(unaff_x23 + uVar6 * 0x1c + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_0144ca60;
        iVar5 = 0;
        if (unaff_w20 != 0) {
          iVar5 = iVar3 / unaff_w20;
        }
        uVar4 = iVar3 - iVar5 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar4)
        goto 
        System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
        ;
        lVar1 = unaff_x21 + (ulong)uVar4 * 4;
        *(int *)(unaff_x23 + uVar6 * 0x1c + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar6 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_0106e12c((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_0106e12c();
  return;
}


