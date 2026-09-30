/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$MoveNext
ENTRY_POINT: 08a8a048
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__MoveNext
               (int *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_28;
  
  if ((DAT_0b32c69a & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac54c08);
    FUN_04947ee4(PTR_DAT_0ac111a0);
    FUN_04947ee4(PTR_DAT_0ac54c10);
    FUN_04947ee4(PTR_DAT_0ac54c18);
    FUN_04947ee4(PTR_DAT_0ac54c20);
    DAT_0b32c69a = 1;
  }
  puVar1 = PTR_DAT_0ac111a0;
  lVar5 = *(long *)(param_1 + 8);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar5 + 0x148) != 0) goto LAB_08a8a198;
    if (*(long *)(lVar5 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = FUN_08a3cd9c(*(long *)(lVar5 + 0x140),*(undefined8 *)(param_1 + 10),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    local_28 = FUN_07764808(lVar2,*(undefined8 *)PTR_DAT_0ac54c20);
    uVar3 = FUN_076844c8(&local_28,*(undefined8 *)PTR_DAT_0ac54c18);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_28;
      thunk_FUN_049ee3d8(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a27174(param_1 + 2,&local_28,param_1,*(undefined8 *)PTR_DAT_0ac54c08);
      return;
    }
  }
  uVar4 = FUN_07684508(&local_28,*(undefined8 *)PTR_DAT_0ac54c10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(lVar5 + 0x148) = uVar4;
  thunk_FUN_049ee3d8(lVar5 + 0x148);
LAB_08a8a198:
  lVar5 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(param_1 + 2,0);
  return;
}


