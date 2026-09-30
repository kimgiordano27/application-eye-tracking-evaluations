/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<AddMultipartUploadParts>d__150$$MoveNext
ENTRY_POINT: 064a2f98
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void ModIO_Implementation_ModIOUnityImplementation_<AddMultipartUploadParts>d__150__MoveNext(void)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  pcVar3 = *(code **)(unaff_x22 + 400);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x22 + 400) = pcVar3;
  }
  lVar2 = (*pcVar3)();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(unaff_x20 + 0x2f0);
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar2,bVar1 & 1);
    lVar2 = *(long *)(unaff_x19 + 0x670);
    if (lVar2 != 0) {
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar2,0);
      FUN_064a39ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


