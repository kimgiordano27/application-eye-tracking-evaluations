/*
FUNCTION_NAME: FUN_036bd4b4
ENTRY_POINT: 036bd4b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


long FUN_036bd4b4(void)

{
  bool bVar1;
  int __fd;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = FUN_036bd414();
  if (uVar2 != 0) {
    while( true ) {
      while (DAT_07ed7310 <= uVar2) {
        FUN_036ba668(DAT_08109540);
        uVar4 = DAT_07ed7310;
        while (uVar4 <= uVar2) {
          uVar4 = DAT_07ed7310 << 1;
          DAT_07ed7310 = DAT_07ed7310 << 1;
        }
        DAT_08109540 = UnityEngine_PostProcessing_BuiltinDebugViewsModel__Reset();
        uVar2 = FUN_036bd414();
        if (uVar2 == 0) {
          return 0;
        }
        if (DAT_08109540 == 0) {
          return 0;
        }
      }
      __fd = open("/proc/self/maps",0);
      if (__fd == -1) break;
      uVar4 = 0;
      do {
        lVar3 = FUN_036bd39c(__fd,DAT_08109540,DAT_07ed7310 - 1);
        if (lVar3 < 1) {
          close(__fd);
          return 0;
        }
        uVar4 = lVar3 + uVar4;
      } while (lVar3 == DAT_07ed7310 - 1);
      close(__fd);
      if (uVar2 < uVar4) {
        (*(code *)PTR_thunk_FUN_036b1860_07ed7048)
                  ("GC Warning: Unexpected asynchronous /proc/self/maps growth (to %ld bytes)\n",
                   uVar4);
      }
      lVar3 = DAT_08109540;
      bVar1 = uVar2 <= uVar4;
      uVar2 = uVar4;
      if ((bVar1) && (uVar4 < DAT_07ed7310)) {
        *(undefined1 *)(DAT_08109540 + uVar4) = 0;
        return lVar3;
      }
    }
  }
  return 0;
}


