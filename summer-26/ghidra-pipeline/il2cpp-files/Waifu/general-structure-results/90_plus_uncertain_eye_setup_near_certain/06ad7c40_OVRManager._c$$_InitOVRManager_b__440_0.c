/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__440_0
ENTRY_POINT: 06ad7c40
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRManager_<>c__<InitOVRManager>b__440_0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  
  lVar5 = DAT_0843c3e0;
  if (unaff_x20 != 0) {
    lVar5 = unaff_x20;
  }
  lVar4 = FUN_03398a84(DAT_083cbb78);
  FUN_07a0dda4(lVar4,lVar5,0);
  if (lVar4 != 0) {
    if (DAT_086ef250 == (code *)0x0) {
      DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
    }
    lVar5 = (*DAT_086ef250)(lVar4);
    if (lVar5 != 0) {
      if (DAT_086ef840 == (code *)0x0) {
        DAT_086ef840 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                           );
      }
      (*DAT_086ef840)(lVar5);
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar4,0);
      lVar5 = FUN_03fa1ab4(lVar4,DAT_0840c5c8);
      if ((unaff_x19 != 0) && (uVar6 = FUN_03c8a52c(), lVar5 != 0)) {
        puVar7 = (undefined8 *)(lVar5 + 200);
        *puVar7 = uVar6;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar6 = FUN_03c8a52c();
        FUN_05062970(lVar5,uVar6,DAT_083fb7f8);
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar4,1);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


