/*
FUNCTION_NAME: FUN_02631708
ENTRY_POINT: 02631708
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02631874) */

long FUN_02631708(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char local_24 [4];
  
  if ((DAT_04123ff3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf22f8);
    FUN_01ab69ac(PTR_DAT_03cf26f0);
    FUN_01ab69ac(PTR_DAT_03cf21b0);
    DAT_04123ff3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    local_24[0] = '\0';
    FUN_027e0bd8(param_1,local_24,0);
    if (*(long *)(param_1 + 0x50) == 0) {
      plVar3 = (long *)FUN_0279a688(*(undefined8 *)(param_1 + 0x48),1,0);
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03cf21b0 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cf21b0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar3);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_03cf22f8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = thunk_FUN_01abff90(0);
      FUN_0262f940(param_1,plVar3,uVar4);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else {
        uVar4 = *(undefined8 *)PTR_DAT_03cf26f0;
        lVar5 = thunk_FUN_01a89d6c(lVar2,uVar4);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar2,uVar4);
        }
      }
      FUN_0262d464(param_1,lVar5);
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
    lVar2 = *(long *)(param_1 + 0x50);
  }
  return lVar2;
}


