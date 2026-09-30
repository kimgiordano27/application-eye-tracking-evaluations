/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 05ff707c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeBoundary(float param_1,long param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x8a5) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f6df8);
    *(undefined1 *)(unaff_x21 + 0x8a5) = 1;
  }
  puVar5 = PTR_DAT_075f6df8;
  if (*(long *)(param_2 + 0x50) != 0) {
    lVar6 = FUN_05f9468c(*(long *)(param_2 + 0x50),0);
    lVar7 = *(long *)puVar5;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
      lVar7 = *(long *)puVar5;
    }
    if (0.0 <= param_1) {
      puVar1 = (undefined4 *)(param_2 + 0x78);
      puVar2 = (undefined4 *)(param_2 + 0x7c);
      puVar3 = (undefined4 *)(param_2 + 0x80);
      puVar4 = (undefined4 *)(param_2 + 0x84);
    }
    else if ((param_3 & 1) == 0) {
      puVar1 = (undefined4 *)(param_2 + 0x88);
      puVar2 = (undefined4 *)(param_2 + 0x8c);
      puVar3 = (undefined4 *)(param_2 + 0x90);
      puVar4 = (undefined4 *)(param_2 + 0x94);
    }
    else {
      puVar1 = (undefined4 *)(param_2 + 0x98);
      puVar2 = (undefined4 *)(param_2 + 0x9c);
      puVar3 = (undefined4 *)(param_2 + 0xa0);
      puVar4 = (undefined4 *)(param_2 + 0xa4);
    }
    if (lVar6 != 0) {
      thunk_FUN_06e01bd0(*puVar1,*puVar2,*puVar3,*puVar4,lVar6,
                         *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
      if (*(long *)(param_2 + 0x58) != 0) {
        lVar6 = FUN_05f9468c(*(long *)(param_2 + 0x58),0);
        lVar7 = *(long *)puVar5;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar7);
          lVar7 = *(long *)puVar5;
        }
        if (param_1 <= 0.0) {
          puVar1 = (undefined4 *)(param_2 + 0x78);
          puVar2 = (undefined4 *)(param_2 + 0x7c);
          puVar3 = (undefined4 *)(param_2 + 0x80);
          puVar4 = (undefined4 *)(param_2 + 0x84);
        }
        else if ((param_3 & 1) == 0) {
          puVar1 = (undefined4 *)(param_2 + 0x88);
          puVar2 = (undefined4 *)(param_2 + 0x8c);
          puVar3 = (undefined4 *)(param_2 + 0x90);
          puVar4 = (undefined4 *)(param_2 + 0x94);
        }
        else {
          puVar1 = (undefined4 *)(param_2 + 0x98);
          puVar2 = (undefined4 *)(param_2 + 0x9c);
          puVar3 = (undefined4 *)(param_2 + 0xa0);
          puVar4 = (undefined4 *)(param_2 + 0xa4);
        }
        if (lVar6 != 0) {
          thunk_FUN_06e01bd0(*puVar1,*puVar2,*puVar3,*puVar4,lVar6,
                             *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
          if (*(long *)(param_2 + 0x50) != 0) {
            FUN_05f946fc(*(long *)(param_2 + 0x50),0);
            if (*(long *)(param_2 + 0x58) != 0) {
              FUN_05f946fc(*(long *)(param_2 + 0x58),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


