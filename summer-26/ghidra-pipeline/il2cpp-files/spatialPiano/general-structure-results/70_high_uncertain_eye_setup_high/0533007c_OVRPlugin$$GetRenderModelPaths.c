/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelPaths
ENTRY_POINT: 0533007c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetRenderModelPaths(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  
  if ((*(byte *)(unaff_x21 + 0x31c) & 1) == 0) {
    FUN_02f08768(System_Predicate<Component>_TypeInfo);
    FUN_02f08768(UnityEngine_Vector2_____TypeInfo);
    FUN_02f08768(PTR_DAT_067c9790);
    *(undefined1 *)(unaff_x21 + 0x31c) = 1;
  }
  plVar9 = *(long **)(unaff_x20 + 0x38);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)UnityEngine_Vector2_____TypeInfo) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05330118;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)UnityEngine_Vector2_____TypeInfo,0);
LAB_05330118:
    uVar5 = (*(code *)*puVar2)(plVar9);
    puVar1 = System_Predicate<Component>_TypeInfo;
    if ((uVar5 & 1) != 0) {
      uVar16 = *(undefined4 *)(unaff_x20 + 0x58);
      fVar17 = *(float *)(unaff_x20 + 0x5c);
      fVar18 = *(float *)(unaff_x20 + 0x60);
      uVar19 = *(undefined4 *)(unaff_x20 + 100);
      lVar3 = *(long *)System_Predicate<Component>_TypeInfo;
      if (unaff_w19 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0x60);
        puVar6 = (undefined4 *)(lVar3 + 100);
        puVar8 = (undefined4 *)(lVar3 + 0x68);
      }
      else {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar3 = *(long *)puVar1;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0x18);
        puVar6 = (undefined4 *)(lVar3 + 0x1c);
        puVar8 = (undefined4 *)(lVar3 + 0x20);
      }
      fVar10 = (float)FUN_060dfb18(uVar16,fVar17,fVar18,uVar19,*puVar4,*puVar6,*puVar8,0);
                    /* try { // try from 053301d8 to 054301db has its CatchHandler @ 0533033c */
                    /* try { // try from 053301dc to 054301df has its CatchHandler @ 05330330 */
                    /* try { // try from 053301e0 to 054301e3 has its CatchHandler @ 0533032c */
                    /* try { // try from 053301e4 to 054301e7 has its CatchHandler @ 05330324 */
                    /* try { // try from 053301e8 to 054301eb has its CatchHandler @ 05330320 */
      fVar14 = fVar17;
      fVar15 = fVar18;
      if (*(int *)(*(long *)PTR_DAT_067c9790 + 0xe4) == 0) {
                    /* try { // try from 053301ec to 054301ef has its CatchHandler @ 0533031c */
        thunk_FUN_02f6670c();
      }
                    /* try { // try from 053301f0 to 054301f3 has its CatchHandler @ 05330310 */
                    /* try { // try from 053301f4 to 054301f7 has its CatchHandler @ 05330300 */
                    /* try { // try from 053301f8 to 054301fb has its CatchHandler @ 0533030c */
      fVar11 = (float)FUN_060fde38();
                    /* try { // try from 053301fc to 05430207 has its CatchHandler @ 0532f550 */
                    /* try { // try from 05330208 to 05430213 has its CatchHandler @ 053302f8 */
      if (DAT_06bb8ba2 == '\0') {
                    /* try { // try from 05330214 to 0543036b has its CatchHandler @ 0532f550 */
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb8ba2 = '\x01';
      }
      puVar1 = PTR_DAT_067c8f80;
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar12 = SQRT((fVar18 * fVar18 + fVar10 * fVar10 + fVar17 * fVar17) *
                    (fVar15 * fVar15 + fVar11 * fVar11 + fVar14 * fVar14));
      if (fVar12 < DAT_011afb1c) {
        return true;
      }
      fVar12 = (fVar18 * fVar15 + fVar10 * fVar11 + fVar17 * fVar14) / fVar12;
      fVar17 = 1.0;
      if (fVar12 <= 1.0) {
        fVar17 = fVar12;
      }
      fVar18 = -1.0;
      if (-1.0 <= fVar12) {
        fVar18 = fVar17;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      dVar13 = acos((double)fVar18);
      return (float)dVar13 * DAT_011b0124 <= 40.0;
    }
  }
  return false;
}


