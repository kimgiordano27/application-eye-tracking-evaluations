/*
FUNCTION_NAME: FUN_06b020d0
ENTRY_POINT: 06b020d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


int FUN_06b020d0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  uint local_28 [2];
  
  if ((DAT_073ab3ae & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(OVRPlugin_OVRP_1_87_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f98e98);
    DAT_073ab3ae = 1;
  }
  local_28[0] = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = FUN_052d7b70(*(long *)(param_1 + 0x18),param_2,local_28,
                         *(undefined8 *)OVRPlugin_OVRP_1_87_0_TypeInfo);
    if ((uVar2 & 1) == 0) {
      iVar1 = FUN_06b01bbc(param_1,param_2,0);
      return iVar1;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06f98e98 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (lVar3 != 0) {
      auVar4 = FUN_046299b8(lVar3,local_28[0] - 1,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_068be314(0 < auVar4._12_4_,0);
      FUN_068be314((auVar4._8_8_ & 1) == 0,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_04629a10(*(long *)(param_1 + 0x10),local_28[0] - 1,auVar4._0_8_,
                     auVar4._8_8_ + 0x100000000,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
        return local_28[0];
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


