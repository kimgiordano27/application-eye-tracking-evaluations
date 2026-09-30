/*
FUNCTION_NAME: FUN_02f763a0
ENTRY_POINT: 02f763a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f765a8) */

undefined4 FUN_02f763a0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  char local_34 [4];
  
  if ((DAT_0412acb1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03ccb048);
    FUN_01ab69ac(PTR_DAT_03d25050);
    FUN_01ab69ac(PTR_DAT_03d25108);
    DAT_0412acb1 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03ccb048 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03ccb048))
    {
      return 0;
    }
  }
  if (((*(char *)(param_1 + 0xdc) == '\0') && (*(char *)(param_1 + 0xa1) == '\0')) &&
     (*(char *)(param_1 + 0xa2) == '\0')) {
    plVar9 = (long *)(param_1 + 200);
    if ((*plVar9 != 0) && (*(char *)(*plVar9 + 0x38) != '\0')) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0xdc) = 1;
      local_34[0] = '\0';
      FUN_027e0bd8(uVar7,local_34,0);
      if (*plVar9 == 0) {
        uVar8 = 0;
      }
      else {
        FUN_02f78e78(*plVar9,0);
        puVar2 = PTR_DAT_03d1fee8;
        if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_02f651a8();
        if ((uVar3 & 1) != 0) {
          plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar10 = *plVar9;
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar7,0);
          }
          if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar4[4] = lVar10;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar10);
          uVar6 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25050,plVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02f6520c(param_1,uVar6,*(undefined8 *)PTR_DAT_03d25108);
        }
        *plVar9 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,0);
        uVar8 = 1;
      }
      if (local_34[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        return uVar8;
      }
      return uVar8;
    }
  }
  return 0;
}


