/*
FUNCTION_NAME: FUN_06dfa2a4
ENTRY_POINT: 06dfa2a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_11;frame_or_lifecycle_behavior
*/


long FUN_06dfa2a4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  
  puVar4 = Method_System_MemoryExtensions_IndexOf<byte>__;
  if ((DAT_076ea455 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<object>__
                      );
    thunk_FUN_032e1da0(Method_System_MemoryExtensions_IndexOf<char>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<PlayerInput>__
                      );
    thunk_FUN_032e1da0(Method_System_MemoryExtensions_IndexOfAny<char>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
                      );
    thunk_FUN_032e1da0(Method_System_MemoryExtensions_IndexOf<byte>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                      );
    thunk_FUN_032e1da0(Method_System_MemoryExtensions_SequenceEqual<char>__);
    thunk_FUN_032e1da0(Method_System_MemoryExtensions_StartsWith<char>__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<Touch>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                      );
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_DefaultJsonNameTable_Add__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    DAT_076ea455 = 1;
  }
  puVar2 = Method_System_MemoryExtensions_IndexOf<char>__;
  plVar16 = (long *)
            Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
  ;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar1 = Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<object>__;
  lVar5 = FUN_04c0ce30(*(undefined8 *)puVar2);
  lVar10 = *plVar16;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar10);
  }
  lVar10 = FUN_04c0ce30(*(undefined8 *)puVar1);
  puVar2 = Method_System_MemoryExtensions_StartsWith<char>__;
  if (param_1 != (long *)0x0) {
    lVar11 = *param_1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)Method_System_MemoryExtensions_StartsWith<char>__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06dfa430;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_032937ac(param_1,*(long *)Method_System_MemoryExtensions_StartsWith<char>__,0);
LAB_06dfa430:
    lVar11 = (*(code *)*puVar6)(param_1,puVar6[1]);
    if ((lVar11 != 0) &&
       (FUN_039f0f44(lVar11,0,lVar5,
                     *(undefined8 *)Method_System_MemoryExtensions_SequenceEqual<char>__),
       puVar3 = Method_Newtonsoft_Json_DefaultJsonNameTable_Add__, puVar1 = PTR_DAT_072794f0,
       lVar5 != 0)) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar15 = 0;
        do {
          lVar11 = FUN_041e29a8(lVar5,iVar15,*(undefined8 *)puVar3);
          if (lVar11 == 0) goto LAB_06dfa6b4;
          uVar7 = FUN_06be6b40(lVar11,0);
          lVar12 = *param_1;
          lVar9 = *(long *)puVar2;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_06dfa4ec;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_032937ac(param_1,lVar9,0);
LAB_06dfa4ec:
          uVar8 = (*(code *)*puVar6)(param_1,puVar6[1]);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)puVar1);
          }
          uVar13 = FUN_06bece64(uVar7,uVar8,0);
          if (((uVar13 & 1) == 0) &&
             (uVar13 = FUN_06be6054(lVar11,0),
             plVar16 = (long *)
                       Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
             , (uVar13 & 1) != 0)) {
            lVar12 = *param_1;
            lVar9 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 == 0) goto LAB_06dfa5f0;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_06dfa5d8;
          }
          iVar15 = iVar15 + 1;
          plVar16 = (long *)
                    Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
          ;
        } while (iVar15 < *(int *)(lVar5 + 0x18));
      }
      goto LAB_06dfa54c;
    }
  }
  goto LAB_06dfa6b4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06dfa5d8:
    if (*(long *)(piVar14 + -2) == lVar9) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06dfa60c;
    }
  }
LAB_06dfa5f0:
  puVar6 = (undefined8 *)FUN_032937ac(param_1,lVar9,0);
LAB_06dfa60c:
  lVar9 = (*(code *)*puVar6)(param_1,puVar6[1]);
  if ((lVar9 != 0) &&
     (FUN_039f0f44(lVar9,0,lVar10,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                  ),
     puVar2 = 
     Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
     , lVar10 != 0)) {
    iVar15 = *(int *)(lVar10 + 0x18);
    do {
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 < 0) goto LAB_06dfa550;
        lVar9 = FUN_041e29a8(lVar10,iVar15,*(undefined8 *)puVar2);
        if (lVar9 == 0) goto LAB_06dfa6b4;
        uVar7 = FUN_06be6b04(lVar9,0);
        uVar8 = FUN_06be6b04(lVar11,0);
        uVar13 = FUN_06dfaad0(uVar7,uVar8);
      } while ((uVar13 & 1) != 0);
      lVar9 = FUN_041e29a8(lVar10,iVar15,*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_06dfa6b4;
      uVar13 = FUN_06de6ba8(lVar9,0);
    } while ((uVar13 & 1) == 0);
LAB_06dfa54c:
    lVar11 = 0;
LAB_06dfa550:
    puVar2 = Method_System_MemoryExtensions_IndexOfAny<char>__;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    puVar4 = 
    Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<PlayerInput>__;
    FUN_04c0cf70(lVar5,*(undefined8 *)puVar2);
    if (*(int *)(*plVar16 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_04c0cf70(lVar10,*(undefined8 *)puVar4);
    return lVar11;
  }
LAB_06dfa6b4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


