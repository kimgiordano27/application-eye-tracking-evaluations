/*
FUNCTION_NAME: FUN_075bfa04
ENTRY_POINT: 075bfa04
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_15
*/


void FUN_075bfa04(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  puVar4 = OVRPlugin_OVRP_1_21_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_1_0_TypeInfo;
  if ((DAT_0826e715 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_21_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d9a8e8);
    FUN_0373b518(PTR_DAT_07d9a8f0);
    FUN_0373b518(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_30_0_TypeInfo);
    DAT_0826e715 = 1;
  }
  plVar8 = (long *)thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_049ce6c0(plVar8,*(undefined8 *)puVar4);
  puVar7 = OVRPlugin_OVRP_1_30_0_TypeInfo;
  puVar6 = OVRPlugin_OVRP_1_29_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_28_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_19_0_TypeInfo;
  puVar3 = PTR_DAT_07d9a8f0;
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 != 0) {
    iVar13 = 0;
    while (iVar13 < *(int *)(lVar14 + 0x18)) {
      plVar9 = (long *)FUN_049cec24(lVar14,iVar13,*(undefined8 *)puVar3);
      if (plVar9 == (long *)0x0) goto LAB_075bfc80;
      uVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,param_2,param_3,*(undefined8 *)(*plVar9 + 400))
      ;
      if ((uVar10 & 1) != 0) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (uVar11 = FUN_049cec24(*(long *)(param_1 + 0x18),iVar13,*(undefined8 *)puVar3),
           plVar8 == (long *)0x0)) goto LAB_075bfc80;
        lVar14 = plVar8[2];
        lVar12 = *(long *)puVar4;
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_075bfc80;
        uVar2 = *(uint *)(plVar8 + 3);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(plVar8 + 3) = uVar2 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(plVar8,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar14 = *(long *)(param_1 + 0x18);
      iVar13 = iVar13 + 1;
      if (lVar14 == 0) goto LAB_075bfc80;
    }
    uVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar7);
    if (plVar8 != (long *)0x0) {
      FUN_04fbae00(uVar11,plVar8,*(undefined8 *)(*plVar8 + 0x210),0);
      FUN_049d0474(lVar14,uVar11,*(undefined8 *)puVar6);
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
        iVar13 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
        iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
        lVar14 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo);
        FUN_049ce730(lVar14,iVar1 + iVar13,*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
        if (lVar14 != 0) {
          FUN_049cf100(lVar14,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar5);
          FUN_049cf100(lVar14,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar5);
          *(long *)(param_1 + 0x20) = lVar14;
          thunk_FUN_037aeb94((long *)(param_1 + 0x20),lVar14);
          *(undefined1 *)(param_1 + 0x28) = 0;
          return;
        }
      }
    }
  }
LAB_075bfc80:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


