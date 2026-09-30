/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<UnsafeBitArray>>
ENTRY_POINT: 0517f094
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeBitArray>>
          (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000010;
  
  thunk_FUN_0408781c();
  uVar1 = FUN_07692be0();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar6 = FUN_05162558(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar6 != 0) {
      FUN_051486ec();
      uVar7 = 0;
      uVar2 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
      ;
    }
  }
  else {
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uStack0000000000000010 = *unaff_x20;
    uVar2 = thunk_FUN_0408781c();
    uVar1 = FUN_08a67ec8(uVar2,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      uVar7 = 2;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
      ;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uStack0000000000000010 = *unaff_x20;
    uVar2 = thunk_FUN_0408781c();
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8d20);
    }
    plVar3 = (long *)UnityEngine_UIElements_UIEventRegistration__TakeCapture(uVar2,0);
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar6 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector3f>>
            ;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092b8d88,1);

      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector3f>>
      :
      (*(code *)*puVar5)(plVar3);
      lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar4);
      }
      puVar5 = (undefined8 *)thunk_FUN_040b5044();
      uVar7 = 0;
      uVar2 = 1;
      *unaff_x20 = *puVar5;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
      ;
    }
  }
  uVar2 = 0;
  uVar7 = 3;

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
  :
  *unaff_x19 = uVar7;
  return uVar2;
}


