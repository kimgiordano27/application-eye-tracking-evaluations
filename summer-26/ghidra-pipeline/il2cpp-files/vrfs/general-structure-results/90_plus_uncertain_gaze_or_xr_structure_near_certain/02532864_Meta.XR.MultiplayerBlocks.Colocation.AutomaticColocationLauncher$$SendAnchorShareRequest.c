/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 02532864
PROGRAM: vrfs-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
               (long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  
  puVar3 = *(undefined8 **)(param_1 + 0xce8);
  *(undefined1 *)(unaff_x20 + 0x9b) = 0;
  FUN_04661af4(*puVar3);
  fVar7 = unaff_s8 + unaff_s9;
  *(float *)(unaff_x20 + 0x14) = unaff_s8;
  *(float *)(unaff_x20 + 0x18) = fVar7;
  if (*(float *)(unaff_x19 + 0xa0) < fVar7) {
    *(float *)(unaff_x19 + 0xa0) = fVar7;
  }
  lVar2 = *(long *)(unaff_x19 + 0x128);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)PTR_DAT_06d95e40;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = unaff_x20;
        thunk_FUN_01656ef8(plVar5);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))();
      }
      lVar2 = *(long *)(unaff_x19 + 0x120);
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x10);
        lVar6 = *(long *)PTR_DAT_06dcfc20;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = unaff_x20;
            thunk_FUN_01656ef8(plVar5);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))();
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


