/*
FUNCTION_NAME: Amazon.S3.Model.CreateSessionRequest$$IsSetBucketKeyEnabled
ENTRY_POINT: 04b48868
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x04b487cc) */
/* WARNING: Removing unreachable block (ram,0x04b487e8) */
/* WARNING: Removing unreachable block (ram,0x04b487ec) */
/* WARNING: Removing unreachable block (ram,0x04b48804) */

void Amazon_S3_Model_CreateSessionRequest__IsSetBucketKeyEnabled(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  plVar4 = (long *)__cxa_begin_catch();
  lVar8 = *plVar4;
  __cxa_end_catch();
  if ((*in_stack_00000008 < 0) && (plVar4 = (long *)*in_stack_00000010, plVar4 != (long *)0x0)) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04b48760;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac09b90,0);
LAB_04b48760:
    (*(code *)*puVar1)(plVar4,puVar1[1]);
  }
  if (lVar8 == 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac08);
    uVar2 = thunk_FUN_04983f60();
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac122b0);
    FUN_08d79944(uVar2,uVar3,0);
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac12398);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184(lVar8);
}


