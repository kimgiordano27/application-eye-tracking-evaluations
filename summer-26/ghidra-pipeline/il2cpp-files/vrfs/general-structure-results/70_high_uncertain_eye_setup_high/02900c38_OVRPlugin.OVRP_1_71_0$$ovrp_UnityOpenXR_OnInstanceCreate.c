/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 02900c38
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(long param_1,uint param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000007233c2f & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e18670);
    bRam0000000007233c2f = 1;
  }
  puVar1 = PTR_DAT_06e18670;
  if (param_1 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar4 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e33f10);
    FUN_028f2804(uVar4,uVar5);
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      uVar2 = FUN_02521d48(param_1,param_2,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar6);
      }
      if (uVar2 < 0x100) {
        uVar3 = FUN_02521d48(param_1,param_2,0);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar6);
        }
        FUN_028ff178(uVar3);
        return;
      }
      FUN_0454f03c(param_1,param_2,0);
      return;
    }
    thunk_FUN_0159f088(PTR_DAT_06df0bd0);
    uVar4 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e56518);
    System_Collections_Generic_List<UIPlayersMenu_PlayerOrSeparatorData>__Contains(uVar4,uVar5);
  }
  uVar5 = thunk_FUN_0159f088(PTR_DAT_06df9c10);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar4,uVar5);
}


