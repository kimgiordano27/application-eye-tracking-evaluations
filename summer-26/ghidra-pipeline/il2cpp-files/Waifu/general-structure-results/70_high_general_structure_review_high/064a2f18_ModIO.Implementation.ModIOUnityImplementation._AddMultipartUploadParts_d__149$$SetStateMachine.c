/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<AddMultipartUploadParts>d__149$$SetStateMachine
ENTRY_POINT: 064a2f18
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


void ModIO_Implementation_ModIOUnityImplementation_<AddMultipartUploadParts>d__149__SetStateMachine
               (void *param_1,void *param_2)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long unaff_x19;
  long lVar5;
  
  memmove(param_1,param_2,0x300);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x358U >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x358U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_064a3044();
  FUN_064a31b4();
  FUN_064a34f8();
  FUN_064a3844();
  lVar5 = *(long *)(unaff_x19 + 0x6a8);
  if (lVar5 != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar5 = (*DAT_086ef190)(lVar5);
    if (lVar5 != 0) {
      bVar2 = *(byte *)((long)param_2 + 0x2f0);
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar5,bVar2 & 1);
      lVar5 = *(long *)(unaff_x19 + 0x670);
      if (lVar5 != 0) {
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar5,0);
        FUN_064a39ec();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


