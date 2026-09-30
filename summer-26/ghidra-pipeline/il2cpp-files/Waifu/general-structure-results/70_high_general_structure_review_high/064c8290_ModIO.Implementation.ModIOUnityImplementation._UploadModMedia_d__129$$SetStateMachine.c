/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<UploadModMedia>d__129$$SetStateMachine
ENTRY_POINT: 064c8290
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void ModIO_Implementation_ModIOUnityImplementation_<UploadModMedia>d__129__SetStateMachine
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_086df3f0 & 1) == 0) {
    FUN_0335b6c8(&DAT_083fcb68,1);
    DataMemoryBarrier(2,3);
    DAT_086df3f0 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar2,1);
    uVar1 = FUN_06497b24(0x3f800000,*(undefined8 *)(param_1 + 0x88),0);
    FUN_07a0f1b4(param_1,uVar1,0);
    lVar2 = *(long *)(param_1 + 0x88);
    if (lVar2 != 0) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar2 = (*DAT_086ef190)(lVar2);
      if (lVar2 != 0) {
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar2,1);
        FUN_064c7b70(param_1);
        lVar2 = *(long *)(param_1 + 0x80);
        if (lVar2 != 0) {
          if (DAT_086ef278 == (code *)0x0) {
            DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)")
            ;
          }
          (*DAT_086ef278)(lVar2,1);
          lVar2 = FUN_05300068(DAT_083fcb68);
          if (lVar2 != 0) {
            FUN_06498934(lVar2,*(undefined8 *)(param_1 + 200),1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


