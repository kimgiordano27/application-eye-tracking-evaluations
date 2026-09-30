/*
FUNCTION_NAME: OVRManager$$set_isSupportedPlatform
ENTRY_POINT: 073c62c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_isSupportedPlatform(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x6d8));
  FUN_03c8f898(PTR_DAT_08eb56e0);
  FUN_03c8f898(PTR_DAT_08e68f00);
  *(undefined1 *)(unaff_x20 + 0x648) = 1;
  if (*(char *)(unaff_x19 + 0x5c) != '\0') {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_085decd4(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e84840);
      FUN_04ddd7e4();
      if (lVar3 != 0) {
        Cysharp_Threading_Tasks_UniTask_IsCanceledSource<Int32Enum>__GetStatus
                  (lVar3,uVar2,*(undefined8 *)PTR_DAT_08eb56d0);
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69e98);
        FUN_07064478();
        if (lVar3 != 0) {
          FUN_04ec1018(lVar3,uVar2,*(undefined8 *)PTR_DAT_08eb56c8);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  return;
}


