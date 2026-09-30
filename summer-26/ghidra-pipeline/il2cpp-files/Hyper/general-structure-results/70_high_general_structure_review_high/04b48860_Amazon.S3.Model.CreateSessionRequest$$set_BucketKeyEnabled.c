/*
FUNCTION_NAME: Amazon.S3.Model.CreateSessionRequest$$set_BucketKeyEnabled
ENTRY_POINT: 04b48860
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

void Amazon_S3_Model_CreateSessionRequest__set_BucketKeyEnabled(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  int unaff_w21;
  long lVar9;
  int *in_stack_00000008;
  undefined8 *in_stack_00000010;
  int in_stack_00000020;
  
  if (unaff_w21 != 1) {
    FUN_0433b014();
    if (unaff_w21 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_04a6935c();
    }
    puVar1 = (undefined8 *)__cxa_begin_catch();
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
    uVar7 = thunk_FUN_049a9d1c(uVar2,*(undefined8 *)*puVar1);
    if ((uVar7 & 1) != 0) {
      uVar2 = *puVar1;
      *(undefined8 *)(&stack0x00000018 + (long)in_stack_00000020 * 8) = uVar2;
      in_stack_00000020 = in_stack_00000020 + 1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac10910);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac10a98);
      FUN_07b6c824(unaff_x19 + 2,uVar2,uVar3);
      return;
    }
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_0a568bf8,0);
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar9 = *plVar4;
  __cxa_end_catch();
  if ((*in_stack_00000008 < 0) && (plVar4 = (long *)*in_stack_00000010, plVar4 != (long *)0x0)) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04b48760;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac09b90,0);
LAB_04b48760:
    (*(code *)*puVar1)(plVar4,puVar1[1]);
  }
  if (lVar9 == 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac08);
    uVar2 = thunk_FUN_04983f60();
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac122b0);
    FUN_08d79944(uVar2,uVar3,0);
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac12398);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184(lVar9);
}


