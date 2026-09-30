/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 024699b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(ulong param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0xcb0);
  puVar4 = *(undefined8 **)(unaff_x20 + 0xdf0);
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ce2e10);
    FUN_01ab69ac(PTR_DAT_03ce2de8);
    FUN_01ab69ac(PTR_DAT_03ce2df0);
    FUN_01ab69ac(PTR_DAT_03ce2cb0);
    *(undefined1 *)(unaff_x21 + 899) = 1;
  }
  lVar1 = thunk_FUN_01a89e68(*puVar5);
  Animancer_AnimancerState__OnSetIsPlaying(lVar1,*puVar4);
  lVar3 = *(long *)(param_2 + 0x138);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_2 + 0x14c)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (lVar1 != 0) {
      plVar2 = *(long **)(lVar3 + (long)(int)*(uint *)(param_2 + 0x14c) * 8 + 0x20);
      if (plVar2 != (long *)0x0) {
        lVar3 = *(long *)PTR_DAT_03ce2e10;
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar2,lVar3);
        }
      }
      FUN_01b5f01c(lVar1,plVar2,*(undefined8 *)PTR_DAT_03ce2de8);
      *(long *)(param_2 + 0x140) = lVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x140,lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


