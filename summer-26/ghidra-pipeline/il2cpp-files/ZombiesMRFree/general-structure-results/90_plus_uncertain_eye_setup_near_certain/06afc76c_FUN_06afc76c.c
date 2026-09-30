/*
FUNCTION_NAME: FUN_06afc76c
ENTRY_POINT: 06afc76c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_06afc76c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int local_54;
  undefined1 local_50 [16];
  
  puVar5 = PTR_DAT_06f98e98;
  if ((DAT_073ab3af & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(OVRPlugin_OVRP_1_30_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f98e98);
    FUN_02fe925c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_37_0_TypeInfo);
    DAT_073ab3af = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar4 = PTR_DAT_06f6df30;
  puVar3 = PTR_DAT_06f6d668;
  iVar1 = param_2 + -1;
  local_54 = iVar1;
  if (-1 < iVar1) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) {
LAB_06afc9e4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (iVar1 < *(int *)(lVar10 + 0x18)) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      local_50 = FUN_046299b8(lVar10,iVar1,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo);
      uVar8 = local_50._8_8_;
      if (0 < local_50._12_4_) {
        iVar2 = local_50._12_4_ + -1;
        local_50._12_4_ = iVar2;
        if (iVar2 == 0) {
          if ((uVar8 & 1) == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_06afc9e4;
            FUN_052d753c(*(long *)(param_1 + 0x18),local_50._0_8_,
                         *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
          }
          local_50._0_8_ = 0;
          thunk_FUN_03048534(local_50,0);
          local_50._8_8_ = local_50._8_8_ & 0xffffffffffffff00;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_06afc9e4;
          FUN_04bb6e90(*(long *)(param_1 + 0x20),param_2,
                       *(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo);
        }
        lVar10 = *(long *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        if (lVar10 != 0) {
          FUN_04629a10(lVar10,iVar1,local_50._0_8_,local_50._8_8_,
                       *(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
          return;
        }
        goto LAB_06afc9e4;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&local_54);
      uVar9 = *(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo;
      goto LAB_06afc968;
    }
  }
  puVar6 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar7 = thunk_FUN_0301043c(*(undefined8 *)puVar4,&local_54);
  uVar9 = *(undefined8 *)puVar6;
LAB_06afc968:
  uVar7 = FUN_059693f4(uVar9,uVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar3);
  }
  FUN_068bd958(uVar7,0);
  return;
}


