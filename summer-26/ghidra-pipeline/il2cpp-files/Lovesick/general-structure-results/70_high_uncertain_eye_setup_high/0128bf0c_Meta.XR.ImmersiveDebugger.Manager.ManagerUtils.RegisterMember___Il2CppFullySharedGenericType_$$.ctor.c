/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0128bf0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0128c028) */

void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>___ctor
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  if (param_2 != 1) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto 
          Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>__Invoke
          ;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();

    Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>__Invoke
    :
    (*(code *)*puVar1)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(*(undefined8 *)(unaff_x29 + -0x88));
  }
  plVar2 = (long *)__cxa_begin_catch(*(undefined8 *)(unaff_x29 + -0x88));
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo)
      {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
        goto LAB_0128bde0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_0128bde0:
  (*(code *)*puVar1)();
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar6);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0xa0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


