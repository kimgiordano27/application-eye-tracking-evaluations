/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$OverrideEffectMaterial
ENTRY_POINT: 06dc2e70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__OverrideEffectMaterial(void)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar2;
  undefined8 uVar3;
  
  FUN_03c8f898(PTR_DAT_08e90a78);
                    /* try { // try from 06dc2e7c to 06ec2e87 has its CatchHandler @ 06dc2f10 */
  FUN_03c8f898(PTR_DAT_08e90a80);
                    /* try { // try from 06dc2e88 to 06ec2f03 has its CatchHandler @ 06dc2c24 */
  FUN_03c8f898(PTR_DAT_08e90a88);
  *(undefined1 *)(unaff_x22 + 0xc25) = 1;
  if (*unaff_x19 == 0) {
    lVar2 = *(long *)PTR_DAT_08e90a70;
    lVar1 = *(long *)(lVar2 + 0x38);
    if (lVar1 == 0) {
      FUN_03cf12a0(lVar2);
      lVar1 = *(long *)(lVar2 + 0x38);
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
                    /* try { // try from 06dc2f04 to 06ec2f07 has its CatchHandler @ 06dc2f14 */
                    /* try { // try from 06dc2f08 to 06ec2f2b has its CatchHandler @ 06dc2c24 */
    lVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a88);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06dc2e7c with catch @ 06dc2f10
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06dc2e68 with catch @ 06dc2f14
                       catch(type#1 @ 088de0a8) { ... } // from try @ 06dc2f04 with catch @ 06dc2f14
                        */
    FUN_06e40ce0(lVar1,uVar3,0);
    *unaff_x19 = lVar1;
    thunk_FUN_03d233cc();
  }
                    /* try { // try from 06dc2f2c to 06ec2f2f has its CatchHandler @ 06dc2f40 */
  if (*unaff_x21 == 0) {
                    /* catch() { ... } // from try @ 06dc2f2c with catch @ 06dc2f40 */
    lVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a80);
    FUN_06dc2fb4();
    *unaff_x21 = lVar1;
    thunk_FUN_03d233cc();
  }
  if ((char)unaff_x20[5] != '\0') {
    lVar1 = (**(code **)(*unaff_x20 + 0x198))();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* try { // try from 06dc2f78 to 06ec2f9f has its CatchHandler @ 06dc2fb4 */
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_05d690c0(*(long *)(lVar1 + 0x18),*unaff_x19,*(undefined8 *)PTR_DAT_08e90a78);
      return;
    }
  }
                    /* try { // try from 06dc2fa0 to 06ec2fab has its CatchHandler @ 06dc2c24 */
                    /* try { // try from 06dc2fac to 06ec2fb3 has its CatchHandler @ 06dc2fb4 */
  return;
}


