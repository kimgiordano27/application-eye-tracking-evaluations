/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<InstanceOcclusionEventDebugArray.Info>
ENTRY_POINT: 03ea0c1c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<InstanceOcclusionEventDebugArray_Info>
          (undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = 0xffffffffffffffff;
  lStack0000000000000000 = param_1;
  thunk_FUN_03652da4();
  uVar1 = FUN_05e31434();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar2 = FUN_03e8ab4c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar2 != 0) {
      FUN_03e69788();
      uVar7 = 0;
      uVar3 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    uStack0000000000000010 = *unaff_x20;
    uStack0000000000000008 = 0xffffffffffffffff;
    lStack0000000000000000 = lVar2;
    uVar3 = thunk_FUN_03652da4();
    uVar1 = FUN_072652bc(uVar3,0);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      uVar7 = 2;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    uStack0000000000000010 = *unaff_x20;
    uStack0000000000000008 = 0xffffffffffffffff;
    lStack0000000000000000 = lVar2;
    uVar3 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar4 = (long *)FUN_07256a04(uVar3,0);
    if (plVar4 != (long *)0x0) {
      lStack0000000000000000 = *unaff_x20;
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar2 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079fed30) {
            puVar6 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar6)(plVar4);
      lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc(lVar2);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar5);
      }
      puVar6 = (undefined8 *)thunk_FUN_0367ff68();
      uVar7 = 0;
      uVar3 = 1;
      *unaff_x20 = *puVar6;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  uVar3 = 0;
  uVar7 = 3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>:
  *unaff_x19 = uVar7;
  return uVar3;
}


