/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_REQUEST_TYPE_NOT_SUPPORTED_get
ENTRY_POINT: 05fd1e3c
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


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_TYPE_NOT_SUPPORTED_get(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long in_x9;
  long in_x10;
  long unaff_x19;
  ulong unaff_x21;
  int unaff_w22;
  long *plVar4;
  int unaff_w24;
  int unaff_w25;
  bool bVar5;
  long unaff_x27;
  long *plVar6;
  long lVar7;
  long *unaff_x29;
  ulong uStack0000000000000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  ushort uStack0000000000000020;
  int iStack0000000000000024;
  int iStack0000000000000028;
  uint in_stack_00000030;
  
  plVar6 = *(long **)(unaff_x27 + 0x5d8);
  uStack0000000000000008 = unaff_x21 >> 0x20;
  bVar5 = false;
  lVar7 = (in_x9 + unaff_w25) * 4;
  do {
    in_x10 = in_x10 + 1;
    plVar4 = *(long **)(unaff_x19 + 0x58);
    if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar1 = (undefined8 *)(lVar7 + *plVar4);
    in_stack_00000030 = *(uint *)(puVar1 + 2);
    _iStack0000000000000028 = puVar1[1];
    _uStack0000000000000020 = *puVar1;
    if (*(int *)(*plVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((uint)uStack0000000000000020 == ((uint)unaff_x21 & 0xffff)) {
      plVar4 = *(long **)(unaff_x19 + 0x58);
      if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar1 = (undefined8 *)(lVar7 + *plVar4);
      in_stack_00000030 = *(uint *)(puVar1 + 2);
      _iStack0000000000000028 = puVar1[1];
      _uStack0000000000000020 = *puVar1;
      if (*(int *)(*plVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (iStack0000000000000028 == unaff_w22) {
        plVar4 = *(long **)(unaff_x19 + 0x58);
        if ((*(ushort *)(*(long *)(*unaff_x29 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar1 = (undefined8 *)(*plVar4 + lVar7);
        in_stack_00000030 = *(uint *)(puVar1 + 2);
        _iStack0000000000000028 = puVar1[1];
        _uStack0000000000000020 = *puVar1;
        if (*(int *)(*plVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iStack0000000000000024 == (int)uStack0000000000000008) {
          return bVar5;
        }
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
    }
    lVar7 = lVar7 + 0x14;
    bVar5 = in_w8 <= in_x10;
    unaff_w24 = unaff_w24 + -1;
    if (unaff_w24 == 0) {
      _uStack0000000000000020 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018 & 1;
      FUN_042c81e8(unaff_x19 + 0x58,&stack0x00000020,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputRemoting_Subscriber>__
                  );
      return bVar5;
    }
  } while( true );
}


