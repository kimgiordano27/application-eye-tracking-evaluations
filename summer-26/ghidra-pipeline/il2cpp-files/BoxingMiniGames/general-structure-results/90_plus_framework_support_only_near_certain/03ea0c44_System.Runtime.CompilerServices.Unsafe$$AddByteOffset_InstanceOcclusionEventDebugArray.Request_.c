/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<InstanceOcclusionEventDebugArray.Request>
ENTRY_POINT: 03ea0c44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 158
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<InstanceOcclusionEventDebugArray_Request>
          (ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = FUN_03e8ab4c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar6 != 0) {
      FUN_03e69788();
      uVar7 = 0;
      uVar1 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  else {
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar1 = thunk_FUN_03652da4();
    uVar2 = FUN_072652bc(uVar1,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
      uVar7 = 2;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar1 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar3 = (long *)FUN_07256a04(uVar1,0);
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079fed30) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar5)(plVar3);
      lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar4);
      }
      puVar5 = (undefined8 *)thunk_FUN_0367ff68();
      uVar7 = 0;
      uVar1 = 1;
      *unaff_x20 = *puVar5;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  uVar1 = 0;
  uVar7 = 3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>:
  *unaff_x19 = uVar7;
  return uVar1;
}


