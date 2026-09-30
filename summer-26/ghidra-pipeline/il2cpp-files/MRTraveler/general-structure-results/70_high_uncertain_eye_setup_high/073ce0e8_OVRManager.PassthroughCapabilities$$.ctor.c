/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 073ce0e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_PassthroughCapabilities___ctor(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x23;
  
  puVar3 = PTR_DAT_08eb58e0;
  puVar2 = PTR_DAT_08eb58d8;
  puVar1 = PTR_DAT_08e69e98;
                    /* catch() { ... } // from try @ 073ce0d4 with catch @ 073ce0f8 */
                    /* try { // try from 073ce100 to 074ce107 has its CatchHandler @ 073ce11c */
                    /* try { // try from 073ce108 to 074ce113 has its CatchHandler @ 073cdbf4 */
  if ((*(byte *)(unaff_x23 + 0x69c) & 1) == 0) {
                    /* try { // try from 073ce114 to 074ce11b has its CatchHandler @ 073ce11c */
    FUN_03c8f898(PTR_DAT_08e69e98);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 073ce100 with catch @ 073ce11c
                       catch(type#2 @ 00000000) { ... } // from try @ 073ce114 with catch @ 073ce11c
                        */
    FUN_03c8f898(PTR_DAT_08eb58e8);
    FUN_03c8f898(PTR_DAT_08eb58f0);
    FUN_03c8f898(PTR_DAT_08eb3318);
    FUN_03c8f898(PTR_DAT_08eb3320);
    FUN_03c8f898(PTR_DAT_08eb5788);
    FUN_03c8f898(PTR_DAT_08eb58d8);
    FUN_03c8f898(PTR_DAT_08eb58e0);
    *(undefined1 *)(unaff_x23 + 0x69c) = 1;
  }
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07064478(uVar4,param_1,*(undefined8 *)puVar2,0);
  FUN_072f4d80(param_1,param_1 + 9,uVar4,0);
  if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb58f0);
    FUN_06632210(uVar4,*(undefined8 *)PTR_DAT_08eb58e8);
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar4;
    thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar4);
    (**(code **)(*param_1 + 0x368))
              (param_1,**(undefined8 **)(*(long *)puVar3 + 0xb8),*(undefined8 *)(*param_1 + 0x370));
  }
  if (param_1[0x19] != 0) {
    lVar5 = FUN_045e1be8(param_1[0x19],*(undefined8 *)PTR_DAT_08eb3318);
    param_1[0x27] = lVar5;
    thunk_FUN_03d233cc(param_1 + 0x27);
    if (param_1[0x24] == 0) {
      lVar5 = FUN_085dbb98(param_1,0);
      if (lVar5 == 0) goto LAB_073ce2dc;
      uVar4 = FUN_0469cb0c(lVar5,*(undefined8 *)PTR_DAT_08eb3320);
      FUN_073ce2e0(param_1,uVar4);
    }
    puVar1 = PTR_DAT_08eb5788;
    if (param_1[0x19] != 0) {
      lVar6 = param_1[0x26];
      uVar4 = FUN_085dbb5c(param_1[0x19],0);
      lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_073ccd7c(lVar5,lVar6,uVar4);
      param_1[0x28] = lVar5;
      thunk_FUN_03d233cc(param_1 + 0x28,lVar5);
      FUN_072f4e24(param_1,param_1 + 9,0);
      return;
    }
  }
LAB_073ce2dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


