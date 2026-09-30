/*
FUNCTION_NAME: FUN_02c1ff68
ENTRY_POINT: 02c1ff68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c201a0) */

void FUN_02c1ff68(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char local_44 [4];
  
  if ((DAT_041292bb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d16290);
    FUN_01ab69ac(PTR_DAT_03d14ea0);
    FUN_01ab69ac(PTR_DAT_03d16778);
    FUN_01ab69ac(PTR_DAT_03d16780);
    FUN_01ab69ac(PTR_DAT_03d16788);
    FUN_01ab69ac(PTR_DAT_03d168e0);
    DAT_041292bb = 1;
  }
  plVar4 = (long *)(param_1 + 0x18);
  lVar7 = *plVar4;
  *plVar4 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,0);
  puVar1 = PTR_DAT_03d16780;
  puVar2 = PTR_DAT_03d16290;
  if (lVar7 == 0) {
    return;
  }
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d16290);
  FUN_02f24d68(uVar5,param_1,*(undefined8 *)puVar1,0);
  if (*(long *)(lVar7 + 0x40) != 0) {
    FUN_02c0c4b4(*(long *)(lVar7 + 0x40),uVar5,0);
    puVar1 = PTR_DAT_03d16778;
    if (*(long *)(lVar7 + 0x40) != 0) {
      FUN_02c0c37c(*(long *)(lVar7 + 0x40),uVar5,0);
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02f24d68(uVar5,param_1,*(undefined8 *)puVar1,0);
      plVar4 = (long *)FUN_02bd68e4(lVar7,0);
      puVar1 = PTR_DAT_03d14ea0;
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != *(long *)PTR_DAT_03d14ea0) {
LAB_02c2019c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        FUN_02c149bc(plVar4,uVar5,0);
        lVar6 = FUN_02bd68e4(lVar7,0);
        puVar3 = PTR_DAT_03d16788;
        if (lVar6 != 0) {
          FUN_02c1367c(lVar6,uVar5,0);
          uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_02f24d68(uVar5,param_1,*(undefined8 *)puVar3,0);
          plVar4 = (long *)FUN_02bd6738(lVar7,0);
          if (plVar4 != (long *)0x0) {
            if (*plVar4 != *(long *)puVar1) goto LAB_02c2019c;
            FUN_02c149bc(plVar4,uVar5,0);
            lVar6 = FUN_02bd6738(lVar7,0);
            if (lVar6 != 0) {
              FUN_02c1367c(lVar6,uVar5,0);
              if ((param_2 & 1) == 0) {
                return;
              }
              lVar7 = *(long *)(lVar7 + 0x200);
              local_44[0] = '\0';
              FUN_027e0bd8(lVar7,local_44,0);
              if (lVar7 != 0) {
                FUN_02218bd8(lVar7,param_1,*(undefined8 *)PTR_DAT_03d168e0);
                if (local_44[0] == '\0') {
                  return;
                }
                OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


