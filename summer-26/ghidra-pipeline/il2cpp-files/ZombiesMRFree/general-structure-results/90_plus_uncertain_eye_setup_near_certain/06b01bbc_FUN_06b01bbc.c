/*
FUNCTION_NAME: FUN_06b01bbc
ENTRY_POINT: 06b01bbc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_14
*/


int FUN_06b01bbc(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_073ab3ad & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6df30);
                    /* try { // try from 06b01c14 to 06c01e5b has its CatchHandler @ 06b01c14
                       catch() { ... } // from try @ 06b01c14 with catch @ 06b01c14
                       catch() { ... } // from try @ 06b01eec with catch @ 06b01c14
                       catch() { ... } // from try @ 06b01fac with catch @ 06b01c14
                       catch() { ... } // from try @ 06b0205c with catch @ 06b01c14 */
    FUN_02fe925c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_81_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f98e98);
    FUN_02fe925c(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_073ab3ad = 1;
  }
  local_48 = 0;
  local_50 = param_2;
  thunk_FUN_03048534(&local_50,param_2);
  uVar3 = local_50;
  puVar2 = PTR_DAT_06f98e98;
  uVar6 = CONCAT71(local_48._1_7_,param_3);
  local_48 = CONCAT44(1,(uint)uVar6 & 0xffffff01);
  uVar6 = local_48;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_06b01e78;
  if (*(int *)(lVar5 + 0x18) < 1) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) goto LAB_06b01e78;
    iVar4 = *(int *)(lVar5 + 0x18);
    if (iVar4 == 0x800) {
      local_54 = 0x800;
      uVar6 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_54);
      uVar6 = FUN_059725f8(*(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo,
                           *(undefined8 *)OVRPlugin_OVRP_1_83_0_TypeInfo,uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
      }
      FUN_068bd958(uVar6,0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *(long *)puVar2;
      }
      return **(int **)(lVar5 + 0xb8);
    }
    if (*(int *)(*(long *)PTR_DAT_06f98e98 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f98e98);
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_06b01e78;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)OVRPlugin_OVRP_1_79_0_TypeInfo;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06b01e78;
    uVar1 = *(uint *)(lVar5 + 0x18);
    iVar4 = iVar4 + 1;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar7 + 0x20);
      *puVar8 = uVar3;
      *(undefined8 *)(lVar7 + 0x28) = uVar6;
      thunk_FUN_03048534(puVar8,0);
    }
    else {
                    /* try { // try from 06b01e5c to 06c01e83 has its CatchHandler @ 06b01fc4 */
      FUN_04629cd4(lVar5,uVar3,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
    iVar4 = FUN_04bb6dec(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo);
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar2);
    }
    if (lVar5 == 0) goto LAB_06b01e78;
    FUN_04629a10(lVar5,iVar4 + -1,uVar3,uVar6,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
  }
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_06b01e78:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_052d606c(*(long *)(param_1 + 0x18),param_2,iVar4,
                 *(undefined8 *)OVRPlugin_OVRP_1_78_0_TypeInfo);
  }
  return iVar4;
}


