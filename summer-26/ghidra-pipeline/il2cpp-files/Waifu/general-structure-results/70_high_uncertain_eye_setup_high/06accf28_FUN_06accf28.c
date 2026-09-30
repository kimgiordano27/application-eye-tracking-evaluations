/*
FUNCTION_NAME: FUN_06accf28
ENTRY_POINT: 06accf28
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06accf28(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_086e22a7 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c85c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08406080,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084082d0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c6a0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cbd20,1);
    DataMemoryBarrier(2,3);
    DAT_086e22a7 = 1;
  }
  uVar4 = FUN_03398a84(DAT_083c85c8);
  FUN_06785b70(uVar4,param_1,DAT_084082d0,0);
  FUN_069d3d68(param_1,(char *)(param_1 + 0x48),uVar4,0);
  if (*(long *)(param_1 + 200) != 0) {
    uVar4 = FUN_03c8a978(*(long *)(param_1 + 200),DAT_08406080);
    *(undefined8 *)(param_1 + 0x138) = uVar4;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + (param_1 + 0x138U >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x138U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(long *)(param_1 + 0x120) == 0) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar5 = (*DAT_086ef190)(param_1);
      if (lVar5 == 0) goto LAB_06acd194;
      uVar4 = FUN_03fa1ab4(lVar5,DAT_0840c6a0);
      FUN_06acd198(param_1,uVar4);
    }
    lVar5 = *(long *)(param_1 + 200);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x130);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar6 = (*DAT_086ef188)(lVar5);
      uVar7 = FUN_03398a84(DAT_083cbd20);
      OVRPlugin__GetLocalTrackingSpaceRecenterCount(uVar7,uVar4,uVar6);
      *(undefined8 *)(param_1 + 0x140) = uVar7;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + (param_1 + 0x140U >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x140U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
      if (DAT_086ef168 == (code *)0x0) {
        DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x06acd190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_086ef168)(param_1,1);
      return;
    }
  }
LAB_06acd194:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


