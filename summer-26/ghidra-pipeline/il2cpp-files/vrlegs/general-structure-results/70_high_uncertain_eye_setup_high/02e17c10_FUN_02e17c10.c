/*
FUNCTION_NAME: FUN_02e17c10
ENTRY_POINT: 02e17c10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e17d24) */
/* WARNING: Removing unreachable block (ram,0x02e17d60) */

long FUN_02e17c10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  char local_34 [4];
  
                    /* try { // try from 02e17c28 to 02f17c4f has its CatchHandler @ 02e17f5c */
  if ((DAT_0412a198 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc42e8);
    DAT_0412a198 = 1;
  }
  local_34[0] = '\0';
  plVar6 = (long *)(param_1 + 0x28);
  if (*plVar6 == 0) {
                    /* try { // try from 02e17c54 to 02f17c67 has its CatchHandler @ 02e17f58 */
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB_02e17d5c;
    lVar5 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar4 + 0x10) < 1) {
      *plVar6 = lVar5;
    }
    else {
      if (lVar5 == 0) {
LAB_02e17d5c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < *(int *)(lVar5 + 0x10)) {
        uVar1 = FUN_025bdc88(lVar4,*(undefined8 *)PTR_DAT_03cc42e8,lVar5,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar2 = FUN_02e09e44(*(long *)(param_1 + 0x38),0);
                    /* try { // try from 02e17cb0 to 02f17cdb has its CatchHandler @ 02e17f54 */
          local_34[0] = '\0';
          FUN_027e0bd8(uVar2,local_34,0);
          if (*plVar6 == 0) {
            if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            plVar3 = (long *)FUN_02e09e44(*(long *)(param_1 + 0x38),0);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar4 = (**(code **)(*plVar3 + 0x198))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x1a0));
            *plVar6 = lVar4;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
          }
          if (local_34[0] != '\0') {
                    /* try { // try from 02e17d10 to 02f17d37 has its CatchHandler @ 02e17f48 */
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
          }
          goto LAB_02e17d44;
        }
        goto LAB_02e17d5c;
      }
      *plVar6 = lVar4;
      lVar5 = lVar4;
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar5);
  }
LAB_02e17d44:
  return *plVar6;
}


