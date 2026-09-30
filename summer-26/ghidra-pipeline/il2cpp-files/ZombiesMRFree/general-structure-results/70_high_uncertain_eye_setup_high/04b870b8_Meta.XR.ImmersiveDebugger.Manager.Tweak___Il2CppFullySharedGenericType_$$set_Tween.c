/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<__Il2CppFullySharedGenericType>$$set_Tween
ENTRY_POINT: 04b870b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Tweak<__Il2CppFullySharedGenericType>__set_Tween(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool in_NG;
  long lVar6;
  int in_w8;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  
  if (in_NG) {
    FUN_02fe94f8();
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0();
  }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04b87094 with catch @ 04b870bc
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04b86fb4 with catch @ 04b870c0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04b87028 with catch @ 04b870c4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04b87098 with catch @ 04b870c8
                        */
  uVar2 = in_w8 << 1 | 1;
  lVar6 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d960,uVar2);
                    /* try { // try from 04b870e0 to 04c870f7 has its CatchHandler @ 04b8712c */
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02feb2c4(lVar8);
                    /* try { // try from 04b870f8 to 04c8711b has its CatchHandler @ 04b86ca0 */
  }
  lVar8 = FUN_02fe9340(lVar8,uVar2);
                    /* try { // try from 04b8711c to 04c8712b has its CatchHandler @ 04b8712c */
                    /* catch() { ... } // from try @ 04b870e0 with catch @ 04b8712c
                       catch() { ... } // from try @ 04b8711c with catch @ 04b8712c */
  NodeCanvas_Tasks_Actions_FadeOut___ctor
            (*(undefined8 *)(unaff_x19 + 0x18),0,lVar8,0,*(undefined4 *)(unaff_x19 + 0x20),0);
                    /* try { // try from 04b87130 to 04c87133 has its CatchHandler @ 04b8713c */
                    /* try { // try from 04b87134 to 04c8713f has its CatchHandler @ 04b86ca0 */
  if (0 < *(int *)(unaff_x19 + 0x20)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04b87130 with catch @ 04b8713c
                        */
    if (lVar8 == 0) {
LAB_04b871c4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    uVar7 = 0;
    piVar9 = (int *)(lVar8 + 0x30);
    do {
      if (uVar3 <= uVar7) {
LAB_04b871c0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (lVar6 == 0) goto LAB_04b871c4;
      iVar5 = 0;
      if (uVar2 != 0) {
        iVar5 = piVar9[-4] / (int)uVar2;
      }
      uVar4 = piVar9[-4] - iVar5 * uVar2;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_04b871c0;
      lVar1 = lVar6 + (long)(int)uVar4 * 4;
      uVar7 = uVar7 + 1;
      *piVar9 = *(int *)(lVar1 + 0x20) + -1;
      *(uint *)(lVar1 + 0x20) = uVar7;
      piVar9 = piVar9 + 6;
    } while ((int)uVar7 < *(int *)(unaff_x19 + 0x20));
  }
  *(long *)(unaff_x19 + 0x10) = lVar6;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x10),lVar6);
  *(long *)(unaff_x19 + 0x18) = lVar8;
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18),lVar8);
  return;
}


