/*
FUNCTION_NAME: FUN_06ad2f8c
ENTRY_POINT: 06ad2f8c
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06ad2f8c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((DAT_086e22d1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c85c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083df6f0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083bee18,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08406080,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c6a0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cbd20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840d9b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cbfa8,1);
    DataMemoryBarrier(2,3);
    DAT_086e22d1 = 1;
  }
  uVar4 = FUN_03398a84(DAT_083c85c8);
  FUN_06785b70(uVar4,param_1,DAT_0840d9b8,0);
  FUN_069d3d68(param_1,param_1 + 9,uVar4,0);
  if (**(long **)(DAT_083cbfa8 + 0xb8) == 0) {
    uVar4 = FUN_03398a84(DAT_083bee18);
    FUN_05a898c8(uVar4,DAT_083df6f0);
    **(undefined8 **)(DAT_083cbfa8 + 0xb8) = uVar4;
    lVar5 = DAT_083cbfa8;
    if (DAT_08908cd0 != 0) {
      uVar6 = *(ulong *)(DAT_083cbfa8 + 0xb8);
      puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*param_1 + 0x368))
              (param_1,**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)(*param_1 + 0x370));
  }
  if (param_1[0x19] != 0) {
    lVar5 = FUN_03c8a978(param_1[0x19],DAT_08406080);
    param_1[0x27] = lVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)(param_1 + 0x27) >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)(param_1 + 0x27) >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (param_1[0x24] == 0) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar5 = (*DAT_086ef190)(param_1);
      if (lVar5 == 0) goto LAB_06ad32cc;
      uVar4 = FUN_03fa1ab4(lVar5,DAT_0840c6a0);
      FUN_06ad32d0(param_1,uVar4);
    }
    lVar5 = param_1[0x19];
    if (lVar5 != 0) {
      lVar7 = param_1[0x26];
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar4 = (*DAT_086ef188)(lVar5);
      lVar5 = FUN_03398a84(DAT_083cbd20);
      OVRPlugin__GetLocalTrackingSpaceRecenterCount(lVar5,lVar7,uVar4);
      param_1[0x28] = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)(param_1 + 0x28) >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)(param_1 + 0x28) >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((char)param_1[9] != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 9) = 1;
      if (DAT_086ef168 == (code *)0x0) {
        DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x06ad32c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_086ef168)(param_1,1);
      return;
    }
  }
LAB_06ad32cc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


