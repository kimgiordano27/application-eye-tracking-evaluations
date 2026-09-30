/*
FUNCTION_NAME: OVRManager$$get_suggestedGpuPerfLevel
ENTRY_POINT: 01f5f578
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__get_suggestedGpuPerfLevel(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  uint unaff_w20;
  uint uVar5;
  long unaff_x22;
  
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f5f4e8 with catch @ 01f5f578
                        */
  thunk_FUN_01279b34();
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f5f504 with catch @ 01f5f57c
                        */
  thunk_FUN_01279b34(PTR_DAT_027ba068);
  thunk_FUN_01279b34(PTR_DAT_027c0ac8);
                    /* try { // try from 01f5f594 to 0205f597 has its CatchHandler @ 01f5f5a4 */
  *(undefined1 *)(unaff_x22 + 0xca9) = 1;
  puVar1 = PTR_DAT_027b1b40;
  if ((*(byte *)(unaff_x19 + 0x25) >> 3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5f784();
    return uVar4;
  }
                    /* catch() { ... } // from try @ 01f5f594 with catch @ 01f5f5a4 */
                    /* try { // try from 01f5f5b0 to 0205f5bb has its CatchHandler @ 01f5f5d0 */
  if (*(int *)(*(long *)PTR_DAT_027b1b40 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
                    /* try { // try from 01f5f5bc to 0205f5c7 has its CatchHandler @ 01f5f474 */
                    /* try { // try from 01f5f5c8 to 0205f5cf has its CatchHandler @ 01f5f5d0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f5f5b0 with catch @ 01f5f5d0
                       catch(type#2 @ 00000000) { ... } // from try @ 01f5f5c8 with catch @ 01f5f5d0
                        */
  if (0xeab17b6000 < *(long *)(unaff_x19 + 0x28) + 504000000000U) {
    uVar5 = 0;
    uVar3 = *(undefined8 *)PTR_DAT_027c0ac8;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    goto LAB_01f5f66c;
  }
  uVar5 = *(uint *)(unaff_x19 + 0x24);
  if ((uVar5 >> 8 & 1) == 0) {
    if ((unaff_w20 >> 5 & 1) != 0) {
      if ((unaff_w20 >> 4 & 1) == 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01e8c020(uVar3,2,0);
        *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
        goto LAB_01f5f6b4;
      }
      *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_027ba068 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01e74fdc(uVar3,2,0);
LAB_01f5f6f0:
      *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
      goto LAB_01f5f6f4;
    }
    if ((unaff_w20 >> 6 & 1) == 0) {
LAB_01f5f6b4:
      uVar5 = 1;
      goto LAB_01f5f66c;
    }
    if ((unaff_w20 >> 4 & 1) == 0) {
      *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar2 = *(long *)puVar1;
      }
      uVar3 = **(undefined8 **)(lVar2 + 0xb8);
      goto LAB_01f5f6f0;
    }
  }
  else {
LAB_01f5f6f4:
    if (((unaff_w20 >> 7 & 1) == 0) || ((*(byte *)(unaff_x19 + 0x25) >> 1 & 1) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((unaff_w20 >> 4 & 1) != 0) {
        uVar4 = FUN_01f5f9c0();
        return uVar4;
      }
      uVar4 = FUN_01f5faec();
      return uVar4;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar5 = 1;
  uVar3 = FUN_01e8c020(uVar3,1,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
LAB_01f5f66c:
  return (ulong)uVar5;
}


