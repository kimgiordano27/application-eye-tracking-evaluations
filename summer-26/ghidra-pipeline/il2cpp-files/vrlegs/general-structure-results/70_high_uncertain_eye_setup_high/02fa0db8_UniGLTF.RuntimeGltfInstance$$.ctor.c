/*
FUNCTION_NAME: UniGLTF.RuntimeGltfInstance$$.ctor
ENTRY_POINT: 02fa0db8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02fa0ea0) */

void UniGLTF_RuntimeGltfInstance___ctor(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  long lVar7;
  int unaff_w26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 in_stack_000000a8;
  undefined1 uStack00000000000000ac;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar1;
    __cxa_end_catch();
    if ((unaff_w26 < 0) && (in_stack_00000078._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar7);
    }
    in_stack_000000a8 = *(undefined1 *)((long)unaff_x19 + 0x49);
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    uStack00000000000000ac = 1;
    FUN_020fafcc(&stack0x00000030,*(undefined8 *)(unaff_x19 + 0xe),&stack0x000000ac,&stack0x000000a8
                );
    in_stack_00000088 = in_stack_00000038;
    in_stack_00000080 = in_stack_00000030;
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,0);
    in_stack_00000038 = in_stack_00000088;
    in_stack_00000030 = in_stack_00000080;
    in_stack_00000048 = in_stack_00000098;
    in_stack_00000040 = in_stack_00000090;
    if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000018 = in_stack_00000038;
    in_stack_00000010 = in_stack_00000030;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    FUN_02145584(unaff_x19 + 2,&stack0x00000010,*(undefined8 *)PTR_DAT_03d25dd0);
  }
  else {
    if ((unaff_w26 < 0) && (in_stack_00000078._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar4 = thunk_FUN_01a6848c(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) == 0) {
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_03abd138,0);
    }
    uVar3 = *puVar2;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,0);
    lVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d25be0);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d25e08);
    FUN_02145a18(unaff_x19 + 2,uVar3,uVar5);
  }
  return;
}


