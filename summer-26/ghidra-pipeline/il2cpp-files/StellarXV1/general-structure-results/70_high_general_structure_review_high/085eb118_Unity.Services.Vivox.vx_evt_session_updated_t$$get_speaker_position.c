/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$get_speaker_position
ENTRY_POINT: 085eb118
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__get_speaker_position
               (undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  int in_stack_00000010;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_041676cc(param_1);
    }
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
    uVar5 = thunk_FUN_040daa88(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) != 0) {
      uVar4 = *puVar3;
      *(undefined8 *)(&stack0x00000000 + (long)in_stack_00000010 * 8) = uVar4;
      in_stack_00000010 = in_stack_00000010 + 1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar6 = thunk_FUN_040dedf8(PTR_DAT_09285a68);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_07590860(unaff_x19 + 2,uVar4,0);
      return;
    }
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_08d635d8,0);
  }
  puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar4 = thunk_FUN_040dedf8(PTR_DAT_09332270);
  uVar5 = thunk_FUN_040daa88(uVar4,*(undefined8 *)*puVar3);
  if ((uVar5 & 1) == 0) {
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092bcf78);
    uVar8 = thunk_FUN_040daa88(uVar4,*(undefined8 *)*puVar3);
    if ((uVar8 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&PTR_PTR_08d635d8,0);
    }
  }
  iVar2 = in_stack_00000010;
  uVar4 = *puVar3;
  *(undefined8 *)(&stack0x00000000 + (long)in_stack_00000010 * 8) = uVar4;
  in_stack_00000010 = in_stack_00000010 + 1;
  __cxa_end_catch();
  if ((uVar5 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_085e5324();
    in_stack_00000010 = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_04077828(uVar4);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *(long *)(unaff_x20 + 0xa8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = thunk_FUN_040dedf8(PTR_DAT_09332040);
  lVar6 = FUN_03b0fbe0(8,uVar9,lVar6,uVar4);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar1 = *(int *)(lVar6 + 0x8c);
  lVar10 = thunk_FUN_040dedf8(PTR_DAT_09332268);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = thunk_FUN_040dedf8(PTR_DAT_09332268);
  if (iVar1 == *(int *)(*(long *)(lVar10 + 0xb8) + 0x20)) {
    if (*(long *)(unaff_x20 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_085e5264();
    thunk_FUN_040dedf8(PTR_DAT_09332388);
    FUN_085eb3a4();
  }
  FUN_085e5324();
  in_stack_00000010 = iVar2;
  uVar4 = thunk_FUN_040dedf8(PTR_DAT_09332390);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(lVar6,uVar4);
}


