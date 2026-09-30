/*
FUNCTION_NAME: FUN_00e56e74
ENTRY_POINT: 00e56e74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_00e56e74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_48;
  
  puVar1 = System_Collections_Generic_ICollection<Vector3>_TypeInfo;
  if ((DAT_03774db8 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<Vector3>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6518);
    thunk_FUN_00d48444(PTR_DAT_033ef128);
    thunk_FUN_00d48444(UnityEngine_InputSystem_IInputActionCollection_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe_AnyCallbackReturnsTrue<InputDevice,_InputEventPtr>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2f30);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<ChallengeEntryList>_get_Data__);
    DAT_03774db8 = 1;
  }
  FUN_010c2c5c(param_1,&local_48,*(undefined8 *)puVar1);
  *(long *)(param_1 + 0x18) = local_48;
  puVar1 = Method_Oculus_Platform_Message<ChallengeEntryList>_get_Data__;
  if (local_48 != 0) {
    uVar5 = *(undefined8 *)(local_48 + 0x90);
    lVar3 = *(long *)Method_Oculus_Platform_Message<ChallengeEntryList>_get_Data__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = StringLiteral_6518;
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar6 == 0) goto LAB_00e57208;
      FUN_00f75138(lVar6,uVar8,*(undefined8 *)PTR_DAT_033ef128,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
    }
    plVar4 = (long *)FUN_017b76bc(uVar5,lVar6,0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(local_48 + 0x90) = 0;
    }
    else {
      lVar3 = *(long *)puVar2;
      if ((*plVar4 != lVar3) || (*(long **)(local_48 + 0x90) = plVar4, *plVar4 != lVar3))
      goto LAB_00e571e8;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_00e57208;
    lVar6 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(lVar3 + 0x98);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_00e57208;
      FUN_00f75138(lVar7,uVar8,
                   *(undefined8 *)UnityEngine_InputSystem_IInputActionCollection_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar7;
    }
    plVar4 = (long *)FUN_017b76bc(uVar5,lVar7,0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0x98) = 0;
    }
    else {
      lVar6 = *(long *)puVar2;
      if ((*plVar4 != lVar6) || (*(long **)(lVar3 + 0x98) = plVar4, *plVar4 != lVar6))
      goto LAB_00e571e8;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_00e57208;
    lVar6 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(lVar3 + 0xa0);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_00e57208;
      FUN_00f75138(lVar7,uVar8,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe_AnyCallbackReturnsTrue<InputDevice,_InputEventPtr>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar7;
    }
    plVar4 = (long *)FUN_017b76bc(uVar5,lVar7,0);
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(lVar3 + 0xa0) = 0;
    }
    else {
      lVar6 = *(long *)puVar2;
      if ((*plVar4 != lVar6) || (*(long **)(lVar3 + 0xa0) = plVar4, *plVar4 != lVar6))
      goto LAB_00e571e8;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      lVar6 = *(long *)puVar1;
      uVar5 = *(undefined8 *)(lVar3 + 0xa8);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_00e57208;
        FUN_00f75138(lVar7,uVar8,*(undefined8 *)PTR_DAT_033f2f30,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar7;
      }
      plVar4 = (long *)FUN_017b76bc(uVar5,lVar7,0);
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(lVar3 + 0xa8) = 0;
      }
      else {
        lVar6 = *(long *)puVar2;
        if ((*plVar4 != lVar6) || (*(long **)(lVar3 + 0xa8) = plVar4, *plVar4 != lVar6)) {
LAB_00e571e8:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
      return;
    }
  }
LAB_00e57208:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


