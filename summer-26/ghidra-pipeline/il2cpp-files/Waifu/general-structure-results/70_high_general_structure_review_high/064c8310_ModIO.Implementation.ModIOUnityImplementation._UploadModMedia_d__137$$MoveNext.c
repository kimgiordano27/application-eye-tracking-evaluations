/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<UploadModMedia>d__137$$MoveNext
ENTRY_POINT: 064c8310
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void ModIO_Implementation_ModIOUnityImplementation_<UploadModMedia>d__137__MoveNext(void)

{
  code *pcVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x21;
  
  FUN_07a0f1b4();
  lVar2 = *(long *)(unaff_x19 + 0x88);
  if (lVar2 != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar2 = (*DAT_086ef190)(lVar2);
    if (lVar2 != 0) {
      pcVar1 = *(code **)(unaff_x21 + 0x278);
      if (pcVar1 == (code *)0x0) {
        pcVar1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x21 + 0x278) = pcVar1;
      }
      (*pcVar1)(lVar2,1);
      FUN_064c7b70();
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if (lVar2 != 0) {
        pcVar1 = *(code **)(unaff_x21 + 0x278);
        if (pcVar1 == (code *)0x0) {
          pcVar1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
          *(code **)(unaff_x21 + 0x278) = pcVar1;
        }
        (*pcVar1)(lVar2,1);
        lVar2 = FUN_05300068(DAT_083fcb68);
        if (lVar2 != 0) {
          FUN_06498934(lVar2,*(undefined8 *)(unaff_x19 + 200),1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


