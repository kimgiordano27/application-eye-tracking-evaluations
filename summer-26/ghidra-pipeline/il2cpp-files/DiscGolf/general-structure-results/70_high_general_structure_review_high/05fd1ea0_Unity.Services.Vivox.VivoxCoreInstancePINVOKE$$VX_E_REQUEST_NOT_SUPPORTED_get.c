/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_REQUEST_NOT_SUPPORTED_get
ENTRY_POINT: 05fd1ea0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


byte Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_NOT_SUPPORTED_get(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  uint unaff_w21;
  int unaff_w22;
  long *plVar5;
  int unaff_w24;
  long unaff_x25;
  byte unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  ushort uStack0000000000000020;
  int iStack0000000000000024;
  int iStack0000000000000028;
  uint in_stack_00000030;
  
  do {
    thunk_FUN_02df485c();
    lVar4 = unaff_x20;
    do {
      if (uStack0000000000000020 == unaff_w21) {
        plVar5 = *(long **)(unaff_x19 + 0x58);
        if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar1 = (undefined8 *)(unaff_x28 + *plVar5);
        in_stack_00000030 = *(uint *)(puVar1 + 2);
        _iStack0000000000000028 = puVar1[1];
        _uStack0000000000000020 = *puVar1;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iStack0000000000000028 == unaff_w22) {
          plVar5 = *(long **)(unaff_x19 + 0x58);
          if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          puVar1 = (undefined8 *)(*plVar5 + unaff_x28);
          in_stack_00000030 = *(uint *)(puVar1 + 2);
          _iStack0000000000000028 = puVar1[1];
          _uStack0000000000000020 = *puVar1;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (iStack0000000000000024 != in_stack_00000008) {
            thunk_FUN_02dfd288(PTR_DAT_069fcb10);
            uVar2 = thunk_FUN_02dd3144();
            uVar3 = thunk_FUN_02dfd288(
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputAction>__
                                      );
            Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                      (uVar2,uVar3,0);
            uVar3 = thunk_FUN_02dfd288(
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputBinding>__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar2,uVar3);
          }
          goto LAB_05fd1f58;
        }
      }
      unaff_x28 = unaff_x28 + 0x14;
      unaff_x20 = lVar4 + 1;
      unaff_w26 = unaff_x25 <= lVar4;
      unaff_w24 = unaff_w24 + -1;
      if (unaff_w24 == 0) {
        _uStack0000000000000020 = in_stack_00000010;
        in_stack_00000030 = in_stack_00000018 & 1;
        FUN_042c81e8(unaff_x19 + 0x58,&stack0x00000020,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputRemoting_Subscriber>__
                    );
LAB_05fd1f58:
        return unaff_w26 & 1;
      }
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar1 = (undefined8 *)(unaff_x28 + *plVar5);
      in_stack_00000030 = *(uint *)(puVar1 + 2);
      _iStack0000000000000028 = puVar1[1];
      _uStack0000000000000020 = *puVar1;
      lVar4 = unaff_x20;
    } while (*(int *)(*unaff_x27 + 0xe4) != 0);
  } while( true );
}


