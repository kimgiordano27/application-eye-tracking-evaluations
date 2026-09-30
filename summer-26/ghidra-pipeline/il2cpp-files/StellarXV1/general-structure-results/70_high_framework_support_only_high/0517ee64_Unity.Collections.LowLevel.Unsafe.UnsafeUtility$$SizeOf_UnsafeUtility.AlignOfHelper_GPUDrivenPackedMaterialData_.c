/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<GPUDrivenPackedMaterialData>>
ENTRY_POINT: 0517ee64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<GPUDrivenPackedMaterialData>>
          (void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long lVar10;
  
                    /* try { // try from 0517ee64 to 0527ee93 has its CatchHandler @ 0517ecf4 */
  lVar1 = FUN_040b1acc();
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 0517ee2c with catch @ 0517ee68
                        */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {

    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<FrustumPlaneCuller_PlanePacket4>>
    :
    uVar4 = 0;
    uVar8 = 2;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
    ;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar10 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_04a89df0(*(undefined8 *)(lVar10 + 0x18));
    if (plVar2 == (long *)0x0)
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>>
    ;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*unaff_x20,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
      ;
    }
    lVar10 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar10 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_0768890c(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar1);
    }
    uVar5 = thunk_FUN_0408781c();
    uVar3 = FUN_07692be0(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_0517f1c8;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_0408781c();
    uVar3 = FUN_08a67ec8(uVar4,0);
    if ((uVar3 & 1) == 0)
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<FrustumPlaneCuller_PlanePacket4>>
    ;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    uVar4 = thunk_FUN_0408781c();
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8d20);
    }
    plVar2 = (long *)UnityEngine_UIElements_UIEventRegistration__TakeCapture(uVar4,0);
    if (plVar2 != (long *)0x0) {
      plVar6 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar7 = (undefined8 *)(lVar1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector3f>>
            ;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_092b8d88,1);

      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector3f>>
      :
      (*(code *)*puVar7)(plVar2);
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc(lVar1);
      }
      if (plVar6 == (long *)0x0) {

        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>>
        :
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar6);
      }
      puVar7 = (undefined8 *)thunk_FUN_040b5044();
      uVar8 = 0;
      uVar4 = 1;
      *unaff_x20 = *puVar7;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
      ;
    }
  }
  else {
LAB_0517f1c8:
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar1 = FUN_05162558(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_051486ec();
      uVar8 = 0;
      uVar4 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
      ;
    }
  }
  uVar4 = 0;
  uVar8 = 3;

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRAnchor_FilterUnion>>
  :
  *unaff_x19 = uVar8;
  return uVar4;
}


