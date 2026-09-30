/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$AllowVisibilityMesh
ENTRY_POINT: 051612a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_UnityOpenXR__AllowVisibilityMesh(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x460));
  FUN_02d6084c(PTR_DAT_06782458);
  FUN_02d6084c(PTR_DAT_067824b0);
  FUN_02d6084c(PTR_DAT_0677d928);
  FUN_02d6084c(PTR_DAT_06782480);
  FUN_02d6084c(PTR_DAT_06782478);
  FUN_02d6084c(PTR_DAT_06782438);
  FUN_02d6084c(PTR_DAT_06782470);
  FUN_02d6084c(PTR_DAT_06782468);
  FUN_02d6084c(PTR_DAT_067824b8);
  FUN_02d6084c(PTR_DAT_06782440);
  *(undefined1 *)(unaff_x20 + 0xe5a) = 1;
  puVar4 = (undefined8 *)PTR_DAT_06782438;
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    bVar1 = *(byte *)(lVar3 + 0x130);
    bVar2 = *(byte *)(*(long *)PTR_DAT_0677d928 + 0x130);
    if ((bVar1 < bVar2) ||
       (puVar4 = (undefined8 *)PTR_DAT_067824b0,
       *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0677d928)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06782478 + 0x130);
      if ((bVar1 < bVar2) ||
         (puVar4 = (undefined8 *)PTR_DAT_06782480,
         *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06782478)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_067824a8 + 0x130);
        if ((bVar1 < bVar2) ||
           (puVar4 = (undefined8 *)PTR_DAT_067824a0,
           *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067824a8))
        {
          bVar2 = *(byte *)(*(long *)PTR_DAT_06782468 + 0x130);
          if ((bVar1 < bVar2) ||
             (puVar4 = (undefined8 *)PTR_DAT_06782470,
             *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06782468)
             ) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_06782440 + 0x130);
            if ((bVar1 < bVar2) ||
               (puVar4 = (undefined8 *)PTR_DAT_067824b8,
               *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
               *(long *)PTR_DAT_06782440)) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_06782430 + 0x130);
              if ((bVar1 < bVar2) ||
                 (puVar4 = (undefined8 *)PTR_DAT_06782498,
                 *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)PTR_DAT_06782430)) {
                bVar2 = *(byte *)(*(long *)PTR_DAT_06782488 + 0x130);
                if ((bVar1 < bVar2) ||
                   (puVar4 = (undefined8 *)PTR_DAT_06782490,
                   *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
                   *(long *)PTR_DAT_06782488)) {
                  bVar2 = *(byte *)(*(long *)PTR_DAT_06782458 + 0x130);
                  puVar4 = (undefined8 *)PTR_DAT_06782438;
                  if ((bVar2 <= bVar1) &&
                     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
                      *(long *)PTR_DAT_06782458)) {
                    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782460);
                    FUN_0515fe98();
                    return lVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar3 = thunk_FUN_02d9d534(*puVar4);
  FUN_0504920c(lVar3,0);
  *(long **)(lVar3 + 0x10) = unaff_x19;
  thunk_FUN_02dd37b4();
  return lVar3;
}


