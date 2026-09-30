/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$SendAnchorShareRequest
ENTRY_POINT: 052f8fe8
PROGRAM: Untangled-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__SendAnchorShareRequest(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar4 = FUN_037f15fc();
  plVar7 = (long *)(unaff_x19 + 0x28);
  *plVar7 = lVar4;
  thunk_FUN_02f411dc(plVar7,lVar4);
  puVar2 = PTR_DAT_06d07c70;
  if (*plVar7 != 0) {
    lVar4 = *(long *)(*plVar7 + 0x178);
                    /* try { // try from 052f9018 to 053f9077 has its CatchHandler @ 052f91fc */
    uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d07c70);
    FUN_04754a8c();
    puVar3 = PTR_DAT_06d07c78;
    if (lVar4 != 0) {
      FUN_0475e530(lVar4,uVar5,*(undefined8 *)PTR_DAT_06d07c78);
      if (*plVar7 != 0) {
        lVar4 = *(long *)(*plVar7 + 0x180);
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
        FUN_04754a8c();
        if (lVar4 != 0) {
                    /* try { // try from 052f908c to 053f909f has its CatchHandler @ 052f91f4 */
          FUN_0475e530(lVar4,uVar5,*(undefined8 *)puVar3);
          puVar1 = PTR_DAT_06d01e20;
          lVar4 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 052f90a8 to 053f90b3 has its CatchHandler @ 052f91f0 */
          if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
                    /* try { // try from 052f90b4 to 053f91d3 has its CatchHandler @ 052f8dec */
            uVar10 = 0;
            uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              lVar8 = *(long *)(lVar4 + 0x20 + uVar10 * 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar6 = FUN_066cd30c(lVar8,0);
              if ((uVar6 & 1) != 0) {
                if (lVar8 == 0) goto LAB_052f9194;
                lVar9 = *(long *)(lVar8 + 0x178);
                uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                FUN_04754a8c();
                if (lVar9 == 0) goto LAB_052f9194;
                FUN_0475e530(lVar9,uVar5,*(undefined8 *)puVar3);
                lVar8 = *(long *)(lVar8 + 0x180);
                uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                FUN_04754a8c();
                if (lVar8 == 0) goto LAB_052f9194;
                FUN_0475e530(lVar8,uVar5,*(undefined8 *)puVar3);
              }
              uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar4 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_052f9194:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


