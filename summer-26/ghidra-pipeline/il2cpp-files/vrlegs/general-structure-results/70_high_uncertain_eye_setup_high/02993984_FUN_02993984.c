/*
FUNCTION_NAME: FUN_02993984
ENTRY_POINT: 02993984
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02993c68) */

void FUN_02993984(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  char local_54 [4];
  long local_48;
  
  if ((DAT_04127d23 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07b78);
    FUN_01ab69ac(PTR_DAT_03d07b80);
    FUN_01ab69ac(PTR_DAT_03d07b88);
    FUN_01ab69ac(PTR_DAT_03d07b90);
    FUN_01ab69ac(PTR_DAT_03d07b98);
    FUN_01ab69ac(PTR_DAT_03d07ba0);
    FUN_01ab69ac(PTR_DAT_03d07ba8);
    DAT_04127d23 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x110);
  if (lVar9 == 0) goto LAB_02993c18;
  if (*(char *)(lVar9 + 0x10) == '\0') {
    thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
    uVar11 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d07bb0);
    FUN_0276e9b0(uVar11,uVar8,0);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d07bb8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,uVar8);
  }
  if ((*(char *)(param_1 + 0x20) == '\0') && (0 < *(int *)(lVar9 + 0x1c))) {
    plVar7 = *(long **)(param_1 + 0xf8);
    if (plVar7 == (long *)0x0) goto LAB_02993c18;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,0x65,*(undefined8 *)(*plVar7 + 0x1b0));
    lVar9 = *(long *)(param_1 + 0x110);
    if (lVar9 == 0) goto LAB_02993c18;
    if (iVar5 < *(int *)(lVar9 + 0x1c)) {
      *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
      return;
    }
  }
  if (*(int *)(lVar9 + 0x18) < 1) {
    iVar5 = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 0xf8);
    if (plVar7 == (long *)0x0) goto LAB_02993c18;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))
                      (plVar7,*(int *)(lVar9 + 0x18) << 1,*(undefined8 *)(*plVar7 + 0x1b0));
    lVar9 = *(long *)(param_1 + 0x110);
    if (lVar9 == 0) goto LAB_02993c18;
    iVar5 = iVar5 - *(int *)(lVar9 + 0x18);
  }
  puVar2 = PTR_DAT_03d07ba8;
  if (*(long *)(param_1 + 0xc0) != 0) {
    iVar1 = *(int *)(lVar9 + 0x14);
    iVar6 = FUN_02f0ce18(*(long *)(param_1 + 0xc0),0);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_029988b4();
    if (lVar9 != 0) {
      iVar1 = iVar1 + iVar5;
      *(undefined8 *)(lVar9 + 0x20) = param_2;
      iVar6 = iVar1 + iVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar9 + 0x20),param_2);
      *(int *)(lVar9 + 0x18) = iVar6;
      *(int *)(lVar9 + 0x28) = iVar1;
      uVar11 = *(undefined8 *)(param_1 + 0x100);
      local_54[0] = '\0';
      FUN_027e0bd8(uVar11,local_54,0);
      puVar4 = PTR_DAT_03d07b90;
      puVar3 = PTR_DAT_03d07b80;
      puVar2 = PTR_DAT_03d07b78;
      lVar10 = *(long *)(param_1 + 0x100);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((*(int *)(lVar10 + 0x18) == 0) || (*(char *)(param_1 + 0x20) == '\x01')) {
        FUN_02210dd4(lVar10,lVar9,*(undefined8 *)PTR_DAT_03d07b90);
      }
      else {
        lVar12 = *(long *)(lVar10 + 0x10);
        if (lVar12 != 0) {
          do {
            FUN_01ea4674(lVar12,&local_48,*(undefined8 *)puVar3);
            if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (iVar6 <= *(int *)(local_48 + 0x18)) {
              if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_0221099c(*(long *)(param_1 + 0x100),lVar12,lVar9,*(undefined8 *)PTR_DAT_03d07b88);
              goto LAB_02993be0;
            }
            lVar12 = FUN_0220fecc(lVar12,*(undefined8 *)puVar2);
          } while (lVar12 != 0);
          lVar10 = *(long *)(param_1 + 0x100);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        FUN_02210dd4(lVar10,lVar9,*(undefined8 *)puVar4);
      }
LAB_02993be0:
      if (local_54[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
      }
      return;
    }
  }
LAB_02993c18:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


