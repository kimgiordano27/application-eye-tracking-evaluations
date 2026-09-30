/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$InitEffectMesh
ENTRY_POINT: 04c6ac28
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_SpaceMapGPU__InitEffectMesh
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x25;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x26;
  undefined8 *puVar11;
  long unaff_x28;
  undefined8 *puVar12;
  long unaff_x29;
  
  puVar2 = PTR_DAT_065e6f18;
  puVar11 = *(undefined8 **)(unaff_x26 + 0xf30);
  puVar9 = *(undefined8 **)(unaff_x25 + 0xd48);
  puVar12 = *(undefined8 **)(unaff_x28 + 0xaf8);
                    /* catch() { ... } // from try @ 04c6aa24 with catch @ 04c6ac50
                       try { // try from 04c6ac50 to 04d6ac8f has its CatchHandler @ 04c6a620 */
                    /* catch() { ... } // from try @ 04c6ab90 with catch @ 04c6ac54 */
  if ((*(byte *)(unaff_x29 + 0xa21) & 1) == 0) {
                    /* catch() { ... } // from try @ 04c6aa10 with catch @ 04c6ac60 */
                    /* catch() { ... } // from try @ 04c6ab8c with catch @ 04c6ac64 */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de4b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b00);
                    /* catch() { ... } // from try @ 04c6a960 with catch @ 04c6ac74 */
                    /* catch() { ... } // from try @ 04c6a9a0 with catch @ 04c6ac78 */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b10);
                    /* try { // try from 04c6ac90 to 04d6ac93 has its CatchHandler @ 04c6aca0 */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ded48);
                    /* catch() { ... } // from try @ 04c6ac90 with catch @ 04c6aca0 */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b18);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de3a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b28);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b30);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6f30);
                    /* try { // try from 04c6ace0 to 04d6ad07 has its CatchHandler @ 04c6ad1c */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7af8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6f18);
                    /* try { // try from 04c6ad08 to 04d6ad13 has its CatchHandler @ 04c6a620 */
    *(undefined1 *)(unaff_x29 + 0xa21) = 1;
  }
                    /* try { // try from 04c6ad14 to 04d6ad1b has its CatchHandler @ 04c6ad1c */
  FUN_03428244(param_2,*puVar11,*puVar9);
                    /* catch() { ... } // from try @ 04c6ac1c with catch @ 04c6ad1c
                       catch() { ... } // from try @ 04c6ace0 with catch @ 04c6ad1c
                       catch() { ... } // from try @ 04c6ad14 with catch @ 04c6ad1c */
                    /* try { // try from 04c6ad20 to 04d6ae1b has its CatchHandler @ 04c6ad20
                       catch() { ... } // from try @ 04c6ad20 with catch @ 04c6ad20
                       catch() { ... } // from try @ 04c6ae78 with catch @ 04c6ad20
                       catch() { ... } // from try @ 04c6b09c with catch @ 04c6ad20
                       catch() { ... } // from try @ 04c6b0c4 with catch @ 04c6ad20
                       catch() { ... } // from try @ 04c6b170 with catch @ 04c6ad20
                       catch() { ... } // from try @ 04c6b1f4 with catch @ 04c6ad20
                       catch() { ... } // from try @ 04c6b254 with catch @ 04c6ad20 */
  FUN_03428244(param_3,*puVar12,*puVar9);
  FUN_03428244(param_4,*(undefined8 *)puVar2,*puVar9);
  FUN_03428244(param_5,*(undefined8 *)PTR_DAT_065e7b38,*puVar9);
  if ((param_6 == 0) || (lVar10 = *(long *)(param_6 + 0xb0), lVar10 == 0)) {
    lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b20);
    FUN_04c5e968(lVar10,0);
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0)),
     puVar3 = PTR_DAT_065e7b30, puVar2 = PTR_DAT_065e7b28, plVar4 == (long *)0x0))
  goto LAB_04c6af38;
  lVar10 = (**(code **)(*plVar4 + 0x228))
                     (plVar4,lVar10,param_2,param_3,param_4,param_5,*(undefined8 *)(*plVar4 + 0x230)
                     );
  if (param_6 == 0) {
LAB_04c6ae18:
    puVar1 = PTR_DAT_065de3a0;
    uVar6 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065e7b18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar1);
    }
    uVar6 = FUN_04c648fc(uVar6);
    FUN_03523904(param_1,lVar10,uVar6,*(undefined8 *)puVar3);
    if (param_6 != 0) goto LAB_04c6ae70;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    FUN_04c5f06c(param_6,lVar10);
    if (*(long *)(param_6 + 0xd8) == 0) goto LAB_04c6ae18;
    FUN_03523904(param_1,lVar10,*(long *)(param_6 + 0xd8),*(undefined8 *)puVar3);
LAB_04c6ae70:
    uVar6 = *(undefined8 *)(param_6 + 0xb8);
    uVar7 = *(undefined8 *)(param_6 + 200);
  }
  FUN_035236ec(param_1,uVar6,uVar7,lVar10,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_065e7b10;
  puVar2 = PTR_DAT_065de4b0;
  if (lVar10 != 0) {
    uVar6 = *(undefined8 *)(lVar10 + 0x40);
    if ((param_6 == 0) || (lVar8 = *(long *)(param_6 + 0xc0), lVar8 == 0)) {
      lVar8 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    }
    uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_047b3b70(uVar7,lVar8,*(undefined8 *)puVar3,0);
    lVar5 = FUN_04f76b7c(uVar6,uVar7,0);
    lVar8 = 0;
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_02cea798(lVar5,uVar6);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar6);
      }
    }
    *(long *)(lVar10 + 0x40) = lVar8;
    return lVar10;
  }
LAB_04c6af38:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


