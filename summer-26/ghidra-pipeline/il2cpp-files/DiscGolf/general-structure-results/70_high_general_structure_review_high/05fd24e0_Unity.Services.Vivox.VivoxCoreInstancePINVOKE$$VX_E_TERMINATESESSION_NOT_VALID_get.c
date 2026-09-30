/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_TERMINATESESSION_NOT_VALID_get
ENTRY_POINT: 05fd24e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_TERMINATESESSION_NOT_VALID_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if ((DAT_06dc483c & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputDevice>__
                );
                    /* try { // try from 05fd2514 to 060d2553 has its CatchHandler @ 05fd2bac */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputUser>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InternedString>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<Joystick>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<PlayerInput>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<Pointer>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<float>__)
    ;
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<ulong>__)
    ;
    DAT_06dc483c = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingNullReferenceException
              (*(long *)(param_1 + 0x10),0);
    puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<ulong>__;
    puVar6 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<Pointer>__;
    puVar5 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<PlayerInput>__;
    puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<Joystick>__;
    puVar3 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InternedString>__;
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputUser>__;
    puVar1 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputDevice>__;
    if (*(char *)(param_1 + 0x70) != '\0') {
      FUN_042c6768(param_1 + 0x18,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<float>__
                  );
      FUN_042c7584(param_1 + 0x30,*(undefined8 *)puVar3);
      FUN_042c7c80(param_1 + 0x38,*(undefined8 *)puVar5);
      FUN_042c6e84(param_1 + 0x40,*(undefined8 *)puVar2);
      FUN_042c8a94(param_1 + 0x48,*(undefined8 *)puVar4);
      FUN_042c8a94(param_1 + 0x50,*(undefined8 *)puVar4);
      FUN_042c8394(param_1 + 0x58,*(undefined8 *)puVar6);
      FUN_042c3004(param_1 + 0x60,*(undefined8 *)puVar1);
      FUN_042ca654(param_1 + 0x68,*(undefined8 *)puVar7);
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


