/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 04c11828
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d846d4(param_1);
    }
    puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar3 = thunk_FUN_02c7737c(PTR_DAT_065c8580);
    uVar4 = thunk_FUN_02c72dcc(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) != 0) {
      uVar3 = *puVar2;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar5 = thunk_FUN_02c7737c(PTR_DAT_065e44b8);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e4540);
      FUN_042668a8(unaff_x19 + 2,uVar3,uVar10);
      return;
    }
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_0620d888,0);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065e5438);
  uVar4 = thunk_FUN_02c72dcc(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_0620d888,0);
  }
  uVar10 = *puVar2;
  __cxa_end_catch();
  plVar11 = *(long **)(unaff_x19 + 0xc);
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065e5440);
  thunk_FUN_02c7737c(PTR_DAT_065e5448);
  uVar3 = FUN_04db96a4(uVar3);
  lVar5 = thunk_FUN_02c7737c(PTR_DAT_065ca230);
  lVar7 = *(long *)(lVar5 + 0x38);
  if (lVar7 == 0) {
    FUN_02ce09d4(lVar5);
    lVar7 = *(long *)(lVar5 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02ce0978();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02ce0978();
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
  lVar7 = *plVar11;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto code_r0x04c11a48;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar5,6);
code_r0x04c11a48:
  (*(code *)*puVar2)(plVar11,uVar10,uVar3,uVar9,puVar2[1]);
  thunk_FUN_02c7737c(PTR_DAT_065e3a00);
  lVar5 = thunk_FUN_02cea894();
  FUN_04f7383c(lVar5,0);
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 8) + 0x20);
  in_stack_00000008 = thunk_FUN_02c7737c(PTR_DAT_065ce4b0);
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000018 = uVar1;
  uVar3 = FUN_04f67024(&stack0x00000008,0);
  uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e5450);
  uVar3 = FUN_04db00f0(uVar10,uVar3,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  thunk_FUN_02c7737c(PTR_DAT_065e5428);
  Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
  thunk_FUN_02c7737c(PTR_DAT_065e3a10);
  uVar3 = thunk_FUN_02cea894();
  FUN_04c11c30(uVar3,lVar5,0);
  uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e5430);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar3,uVar10);
}


