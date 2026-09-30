/*
FUNCTION_NAME: UniGLTF.gltfExporter$$get_Materials
ENTRY_POINT: 02f779f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f77bd4) */
/* WARNING: Removing unreachable block (ram,0x02f77a58) */

void UniGLTF_gltfExporter__get_Materials(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar3 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar3;
    __cxa_end_catch();
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    puVar1 = PTR_DAT_03d24f10;
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar7);
    }
    if (unaff_x22 != 0) {
      lVar7 = thunk_FUN_01a89d6c();
      if (lVar7 == 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02f64bf4();
      }
      lVar7 = thunk_FUN_01a89d6c();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar7 = *(long *)puVar1;
      plVar3 = (long *)thunk_FUN_01a89d6c();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02f77930;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar3,lVar7,0);
LAB_02f77930:
      (*(code *)*puVar2)(plVar3,3,puVar2[1]);
    }
    lVar7 = 0;
    if (unaff_x20 != (long *)0x0) {
      FUN_02f79e58(0);
      (**(code **)(*unaff_x20 + 1000))();
      lVar7 = 0;
    }
  }
  else {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (param_2 == 1) {
      puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar8 = thunk_FUN_01a6848c(uVar4,*(undefined8 *)*puVar2);
      if ((uVar8 & 1) != 0) {
        uVar4 = *puVar2;
        __cxa_end_catch();
        lVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fee8);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_02f651a8();
        if ((uVar8 & 1) != 0) {
          lVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d1fee8);
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          thunk_FUN_01a6ca08(PTR_DAT_03d24bf0);
          FUN_02f66f0c();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01a28d1c(uVar4);
      }
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_03abd138,0);
    }
    if (param_2 != 1) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_02f651a8();
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02f66c54();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar3 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar3;
    __cxa_end_catch();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02f651a8();
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66c54();
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar7);
}


