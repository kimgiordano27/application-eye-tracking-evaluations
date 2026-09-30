/*
FUNCTION_NAME: FUN_0324353c
ENTRY_POINT: 0324353c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_0324353c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  puVar2 = StringLiteral_3533;
  puVar1 = StringLiteral_3532;
  if ((DAT_044a5b85 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1524);
    FUN_01d7d918(StringLiteral_1525);
    FUN_01d7d918(StringLiteral_1526);
    FUN_01d7d918(StringLiteral_3534);
    FUN_01d7d918(StringLiteral_3533);
    FUN_01d7d918(StringLiteral_3532);
    FUN_01d7d918(StringLiteral_1527);
    FUN_01d7d918(StringLiteral_1528);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a5b85 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  lVar7 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
                    /* try { // try from 03243600 to 0334363f has its CatchHandler @ 03243600
                       catch() { ... } // from try @ 03243600 with catch @ 03243600
                       catch() { ... } // from try @ 03243654 with catch @ 03243600
                       catch() { ... } // from try @ 03243690 with catch @ 03243600
                       catch() { ... } // from try @ 032436d0 with catch @ 03243600 */
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar7,*(undefined8 *)puVar2);
  puVar5 = StringLiteral_3534;
  puVar4 = StringLiteral_1527;
  puVar3 = StringLiteral_1525;
  puVar2 = StringLiteral_1524;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 03243640 to 03343653 has its CatchHandler @ 03243660 */
    FUN_0319996c(&local_88,*(long *)(param_1 + 0x20),*(undefined8 *)StringLiteral_1528);
    uStack_68 = uStack_80;
    local_70 = local_88;
                    /* try { // try from 03243654 to 03343677 has its CatchHandler @ 03243600 */
    local_60 = local_78;
    while( true ) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03243640 with catch @ 03243660
                        */
      uVar8 = FUN_02c52b88(&local_70,*(undefined8 *)puVar3);
      lVar6 = local_60;
      if ((uVar8 & 1) == 0) {
        FUN_02c52b84(&local_70,*(undefined8 *)puVar2);
        return lVar7;
      }
      if (local_60 == 0) break;
      FUN_032437b4(local_60);
                    /* try { // try from 03243678 to 0334368f has its CatchHandler @ 032436c8 */
      if (*(char *)(lVar6 + 0x20) != '\0') {
        plVar9 = *(long **)(lVar6 + 0x48);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
                    /* try { // try from 03243690 to 033436b7 has its CatchHandler @ 03243600 */
        uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar8 = FUN_033aa3b4(uVar10,0,0);
                    /* try { // try from 032436b8 to 033436c7 has its CatchHandler @ 032436c8 */
        if ((uVar8 & 1) == 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
                    /* catch() { ... } // from try @ 03243678 with catch @ 032436c8
                       catch() { ... } // from try @ 032436b8 with catch @ 032436c8 */
                    /* try { // try from 032436cc to 033436cf has its CatchHandler @ 032436d8 */
          FUN_02f17d24(lVar7,uVar10,*(undefined8 *)puVar5);
                    /* try { // try from 032436d0 to 033436db has its CatchHandler @ 03243600 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032436cc with catch @ 032436d8
                        */
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_03243918(uVar10,lVar6);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


