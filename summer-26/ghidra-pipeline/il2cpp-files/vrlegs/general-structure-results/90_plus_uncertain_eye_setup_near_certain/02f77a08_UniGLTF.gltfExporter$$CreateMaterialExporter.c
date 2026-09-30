/*
FUNCTION_NAME: UniGLTF.gltfExporter$$CreateMaterialExporter
ENTRY_POINT: 02f77a08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f77870) */
/* WARNING: Removing unreachable block (ram,0x02f77888) */
/* WARNING: Removing unreachable block (ram,0x02f77894) */
/* WARNING: Removing unreachable block (ram,0x02f77898) */
/* WARNING: Removing unreachable block (ram,0x02f778b8) */
/* WARNING: Removing unreachable block (ram,0x02f779d4) */
/* WARNING: Removing unreachable block (ram,0x02f778cc) */
/* WARNING: Removing unreachable block (ram,0x02f779e0) */
/* WARNING: Removing unreachable block (ram,0x02f778e4) */
/* WARNING: Removing unreachable block (ram,0x02f778f0) */
/* WARNING: Removing unreachable block (ram,0x02f778f8) */
/* WARNING: Removing unreachable block (ram,0x02f77924) */
/* WARNING: Removing unreachable block (ram,0x02f77904) */
/* WARNING: Removing unreachable block (ram,0x02f77910) */
/* WARNING: Removing unreachable block (ram,0x02f77930) */
/* WARNING: Removing unreachable block (ram,0x02f77bd4) */
/* WARNING: Removing unreachable block (ram,0x02f77a58) */

void UniGLTF_gltfExporter__CreateMaterialExporter(undefined8 param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar6);
    }
    lVar6 = 0;
    if (unaff_x20 != (long *)0x0) {
      FUN_02f79e58(0);
      (**(code **)(*unaff_x20 + 1000))();
      lVar6 = 0;
    }
  }
  else {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (param_2 == 1) {
      puVar3 = (undefined8 *)__cxa_begin_catch();
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar1 = thunk_FUN_01a6848c(uVar4,*(undefined8 *)*puVar3);
      if ((uVar1 & 1) != 0) {
        uVar4 = *puVar3;
        __cxa_end_catch();
        lVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1fee8);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar1 = FUN_02f651a8();
        if ((uVar1 & 1) != 0) {
          lVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1fee8);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          thunk_FUN_01a6ca08(PTR_DAT_03d24bf0);
          FUN_02f66f0c();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01a28d1c(uVar4);
      }
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_03abd138,0);
    }
    if (param_2 != 1) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar1 = FUN_02f651a8();
      if ((uVar1 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02f66c54();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0();
    }
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar1 = FUN_02f651a8();
  if ((uVar1 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66c54();
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar6);
}


