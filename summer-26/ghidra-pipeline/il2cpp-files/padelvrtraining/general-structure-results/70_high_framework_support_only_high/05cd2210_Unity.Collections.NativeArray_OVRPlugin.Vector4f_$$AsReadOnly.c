/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 05cd2210
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd207c) */
/* WARNING: Removing unreachable block (ram,0x05cd22bc) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long in_x9;
  long in_x10;
  int *piVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
      goto code_r0x05cd2248;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_03d8f370();
code_r0x05cd2248:
  (*(code *)*puVar3)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540();
  }
  if (unaff_w24 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03d180a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0();
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar7 = *plVar4;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(lVar7);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0xd0);
  lVar7 = *(long *)(unaff_x20 + 0x78);
  uVar1 = thunk_FUN_03d1e194(PTR_DAT_091fcc68);
  if (lVar7 == 0) {
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091add20);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar4 = (long *)thunk_FUN_03d9f2a8(*(long *)(unaff_x20 + 0x78),0), plVar4 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar1 = FUN_06fd2168(uVar6,uVar1,uVar2,0);
  thunk_FUN_03d1e194(PTR_DAT_091a4f90);
  uVar6 = thunk_FUN_03d2ef40();
  FUN_071b07cc(uVar6,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar6);
}


