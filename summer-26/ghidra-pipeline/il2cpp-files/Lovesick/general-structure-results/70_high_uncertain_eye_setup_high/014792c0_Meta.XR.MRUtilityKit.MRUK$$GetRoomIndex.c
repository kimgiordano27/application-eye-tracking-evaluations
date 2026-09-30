/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$GetRoomIndex
ENTRY_POINT: 014792c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01478fd0) */
/* WARNING: Removing unreachable block (ram,0x014793bc) */

void Meta_XR_MRUtilityKit_MRUK__GetRoomIndex(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar7;
  int unaff_w25;
  
  if (unaff_w21 == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar7 = *plVar2;
    __cxa_end_catch();
    puVar1 = System_SystemException_TypeInfo;
    if (unaff_w25 < 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_017d8b7c(*(long *)(unaff_x20 + 0x48),0);
        plVar2 = *(long **)(unaff_x20 + 0x40);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      }
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00dbe778(lVar7);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a2130(unaff_x19 + 2,0);
  }
  else {
    if (unaff_w25 < 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_017d8b7c(*(long *)(unaff_x20 + 0x48),0);
        plVar2 = *(long **)(unaff_x20 + 0x40);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      }
    }
    if (unaff_w21 != 1) {
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    puVar3 = (undefined8 *)__cxa_begin_catch();
    uVar4 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                              );
    uVar5 = thunk_FUN_00d43524(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_03274860,0);
    }
    uVar4 = *puVar3;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar7 = thunk_FUN_00d48444(System_SystemException_TypeInfo);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_016a21d4(unaff_x19 + 2,uVar4,0);
  }
  return;
}


