/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetBoundaryGeometry2
ENTRY_POINT: 06970814
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  int iVar12;
  undefined8 in_stack_00000008;
  
  FUN_0697110c();
                    /* try { // try from 06970820 to 06a70823 has its CatchHandler @ 0697083c */
                    /* try { // try from 06970824 to 06a70827 has its CatchHandler @ 06970838 */
  if ((*(long *)(unaff_x20 + 0xe8) != 0) && (*(long *)(*(long *)(unaff_x20 + 0xe8) + 0x40) != 0)) {
                    /* try { // try from 06970828 to 06a7085f has its CatchHandler @ 069705a8 */
    FUN_06971364();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06970790 with catch @ 06970834
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06970824 with catch @ 06970838
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06970820 with catch @ 0697083c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06970764 with catch @ 06970840
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06970700 with catch @ 06970844
                        */
    FUN_0697110c();
    if (*(long *)(unaff_x20 + 0xe8) != 0) {
      FUN_06971364();
                    /* try { // try from 06970860 to 06a70863 has its CatchHandler @ 0697086c */
                    /* catch() { ... } // from try @ 06970860 with catch @ 0697086c */
                    /* try { // try from 06970870 to 06a70877 has its CatchHandler @ 06970880 */
      FUN_0697110c();
                    /* try { // try from 06970878 to 06a70883 has its CatchHandler @ 069705a8 */
      if (*(long *)(unaff_x20 + 0xe8) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06970870 with catch @ 06970880
                        */
        FUN_06971364();
        FUN_0697110c();
        puVar2 = PTR_DAT_084b6410;
        lVar11 = *(long *)(unaff_x20 + 0xe8);
        if (lVar11 != 0) {
          iVar12 = 0;
          do {
            puVar7 = PTR_DAT_084b7290;
            puVar6 = PTR_DAT_084b7280;
            puVar5 = PTR_DAT_084b7250;
            puVar4 = PTR_DAT_084b7220;
            puVar3 = PTR_DAT_084b63c8;
            puVar1 = PTR_DAT_084b5d60;
            lVar8 = *(long *)(lVar11 + 0x38);
            if (lVar8 == 0) break;
            if (*(int *)(lVar8 + 0x18) <= iVar12) {
              in_stack_00000008._4_4_ = 0;
              goto LAB_0697092c;
            }
            FUN_04de82e0(lVar8,iVar12,*(undefined8 *)puVar2);
            FUN_06971364();
            lVar11 = *(long *)(unaff_x20 + 0xe8);
            iVar12 = iVar12 + 1;
          } while (lVar11 != 0);
        }
      }
    }
  }
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_0697092c:
  lVar11 = *(long *)(lVar11 + 0x50);
  if (lVar11 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar11 + 0x18) <= in_stack_00000008._4_4_) {
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    puVar2 = PTR_DAT_084b5da8;
    plVar10 = *(long **)(unaff_x20 + 0xe0);
    if (plVar10 != (long *)0x0) {
      iVar12 = 0;
      goto LAB_06970b08;
    }
    goto LAB_06970bbc;
  }
  lVar11 = FUN_04de82e0(lVar11,in_stack_00000008._4_4_,*(undefined8 *)puVar3);
  uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
  FUN_065c0764(*(undefined8 *)puVar4,uVar9,0);
  FUN_0697110c();
  FUN_06971364();
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x48) == 0)) goto LAB_06970bbc;
  iVar12 = *(int *)(*(long *)(lVar11 + 0x48) + 0x18);
  if (iVar12 == 2) {
    uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar5,uVar9,0);
    FUN_0697110c();
    lVar8 = FUN_0694d3e8(lVar11,0);
    if (lVar8 == 0) goto LAB_06970bbc;
    FUN_06971364();
    uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar6,uVar9,0);
    FUN_0697110c();
    lVar11 = FUN_0694d460(lVar11,0);
    if (lVar11 == 0) goto LAB_06970bbc;
LAB_06970a80:
    FUN_06971364();
  }
  else if (iVar12 == 1) {
    uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar7,uVar9,0);
    FUN_0697110c();
    if ((*(long *)(lVar11 + 0x48) != 0) &&
       (lVar11 = FUN_04de82e0(*(long *)(lVar11 + 0x48),0,*(undefined8 *)puVar1), lVar11 != 0))
    goto LAB_06970a80;
    goto LAB_06970bbc;
  }
  lVar11 = *(long *)(unaff_x20 + 0xe8);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
  if (lVar11 == 0) goto LAB_06970bbc;
  goto LAB_0697092c;
LAB_06970b08:
  lVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
  if (lVar11 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar11 + 0x18) <= iVar12) {
    return;
  }
  plVar10 = *(long **)(unaff_x20 + 0xe0);
  if ((((plVar10 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
       lVar11 == 0)) || (lVar11 = FUN_04de82e0(lVar11,iVar12,*(undefined8 *)puVar2), lVar11 == 0))
     || (plVar10 = (long *)thunk_FUN_03a9a6e8(lVar11,0), plVar10 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
  FUN_0697110c();
  plVar10 = *(long **)(unaff_x20 + 0xe0);
  if ((plVar10 == (long *)0x0) ||
     (lVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
     lVar11 == 0)) goto LAB_06970bbc;
  FUN_04de82e0(lVar11,iVar12,*(undefined8 *)puVar2);
  FUN_06971364();
  plVar10 = *(long **)(unaff_x20 + 0xe0);
  iVar12 = iVar12 + 1;
  if (plVar10 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


