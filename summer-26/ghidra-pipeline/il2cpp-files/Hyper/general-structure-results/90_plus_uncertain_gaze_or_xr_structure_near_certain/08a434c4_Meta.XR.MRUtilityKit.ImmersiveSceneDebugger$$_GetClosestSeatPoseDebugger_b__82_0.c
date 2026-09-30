/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__82_0
ENTRY_POINT: 08a434c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__82_0
               (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *unaff_x19;
  uint uVar9;
  long *plVar10;
  long *unaff_x23;
  long in_stack_00000000;
  int *in_stack_00000008;
  long *in_stack_00000010;
  int in_stack_00000028;
  
  if (param_2 == 1) {
    puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
    uVar4 = thunk_FUN_049a9d1c(uVar3,*(undefined8 *)*puVar2);
    iVar1 = in_stack_00000028;
    if ((uVar4 & 1) == 0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_0a568bf8,0);
    }
    plVar10 = (long *)*puVar2;
    *(long **)(&stack0x00000018 + (long)in_stack_00000028 * 8) = plVar10;
    in_stack_00000028 = in_stack_00000028 + 1;
    __cxa_end_catch();
    lVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar5 = FUN_08795a9c(0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac533c0);
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac0ba20);
    uVar3 = FUN_08bd9aa0(uVar6,uVar3,uVar7,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
    FUN_0433cdb4(3,uVar6,lVar5,uVar3);
    uVar9 = 0xd;
    in_stack_00000028 = iVar1;
  }
  else {
    if (param_2 != 1) {
      FUN_0451b928();
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_04a6935c(param_1);
      }
      puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac098c8);
      uVar4 = thunk_FUN_049a9d1c(uVar3,*(undefined8 *)*puVar2);
      if ((uVar4 & 1) != 0) {
        uVar3 = *puVar2;
        *(undefined8 *)(&stack0x00000018 + (long)in_stack_00000028 * 8) = uVar3;
        in_stack_00000028 = in_stack_00000028 + 1;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        lVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac111a0);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_08c7f79c(unaff_x19 + 2,uVar3,0);
        return;
      }
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_0a568bf8,0);
    }
    plVar10 = (long *)__cxa_begin_catch(param_1);
    in_stack_00000000 = *plVar10;
    __cxa_end_catch();
    uVar9 = 0;
  }
  if (*in_stack_00000008 < 0) {
    if ((*in_stack_00000010 == 0) || (lVar5 = *(long *)(*in_stack_00000010 + 0x10), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08de5980(lVar5,0);
  }
  if (in_stack_00000000 == 0) {
    if ((uVar9 < 0xe) && ((1 << (ulong)uVar9 & 0x2041U) != 0)) {
      lVar5 = *unaff_x23;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


