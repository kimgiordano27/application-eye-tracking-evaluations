/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 0696bd00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  long lVar13;
  ulong uVar14;
  
  puVar4 = PTR_DAT_084b7088;
  puVar3 = PTR_DAT_084b7080;
  puVar2 = PTR_DAT_084b7078;
                    /* try { // try from 0696bd1c to 06a6bd1f has its CatchHandler @ 0696c35c */
                    /* try { // try from 0696bd20 to 06a6bd2f has its CatchHandler @ 0696c3d0 */
  uVar5 = FUN_0447b578(param_2,**(undefined8 **)(param_1 + 0x608));
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
                    /* try { // try from 0696bd40 to 06a6bd47 has its CatchHandler @ 0696c3c8 */
  FUN_04962b78();
  uVar5 = FUN_044e3520(uVar5,uVar6,*(undefined8 *)puVar3);
                    /* try { // try from 0696bd64 to 06a6bd6f has its CatchHandler @ 0696c4fc */
  lVar7 = FUN_044de628(uVar5,*(undefined8 *)puVar2);
  puVar4 = PTR_DAT_084b7098;
  puVar3 = PTR_DAT_084b7090;
  puVar2 = PTR_DAT_0848f788;
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                    /* try { // try from 0696bd8c to 06a6bd8f has its CatchHandler @ 0696c380 */
                    /* try { // try from 0696bd90 to 06a6bd9f has its CatchHandler @ 0696c458 */
      uVar14 = 0;
      uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0696bec0;
        lVar13 = *(long *)(lVar7 + 0x20 + uVar14 * 8);
        uVar9 = FUN_04de894c(*(long *)(unaff_x19 + 0x78),lVar13,*(undefined8 *)puVar4);
        if ((uVar9 & 1) == 0) {
          lVar8 = *(long *)(unaff_x19 + 0x78);
          if (lVar8 == 0) goto LAB_0696bec0;
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0696bec0;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar13;
            thunk_FUN_03afed3c(plVar11,lVar13);
          }
          else {
            FUN_04de85b0(lVar8,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar13 == 0) goto LAB_0696bec0;
          lVar8 = *(long *)(unaff_x19 + 0x80);
          uVar5 = FUN_07c6dc88(lVar13,0);
          if (lVar8 == 0) goto LAB_0696bec0;
          lVar13 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_0696bec0;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar8,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_0696bec0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


