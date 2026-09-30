/*
FUNCTION_NAME: OVR.SoundEmitter.<FadeSoundChannel>d__64$$System.IDisposable.Dispose
ENTRY_POINT: 034fa7bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_SoundEmitter_<FadeSoundChannel>d__64__System_IDisposable_Dispose(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_00000018;
  undefined *puVar5;
  
  if (unaff_x21 == *(long **)(param_1 + 0x10)) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__))
    {
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
OVR_SoundFX__SetOnFinished:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar2 + 0x18) < 3) {
LAB_034fb04c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  if (*(long **)(lVar2 + 0x30) == unaff_x21) {
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__;
  }
  else {
    lVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                              );
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                              );
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 == 0) goto OVR_SoundFX__SetOnFinished;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_034fb04c;
    if (*(long **)(lVar2 + 0x20) != unaff_x21) {
      FUN_01bc50c0();
      plVar6 = (long *)thunk_FUN_01ecaf38();
      FUN_01bc50c0();
      uVar3 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
      FUN_01bc50c0();
      uVar4 = (**(code **)(*unaff_x21 + 0x2e8))();
      uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__);
      uVar3 = FUN_0340f2f0(uVar7,uVar3,uVar4,0);
      thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
      uVar4 = thunk_FUN_01f117cc();
      FUN_03568188(uVar4,uVar3,0);
      uVar3 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar3);
    }
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar5);
  FUN_03568188(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


