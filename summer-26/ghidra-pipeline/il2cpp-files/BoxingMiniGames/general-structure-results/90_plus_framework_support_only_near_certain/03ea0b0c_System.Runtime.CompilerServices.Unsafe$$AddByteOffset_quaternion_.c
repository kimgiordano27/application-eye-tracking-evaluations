/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<quaternion>
ENTRY_POINT: 03ea0b0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<quaternion>(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  
  uVar1 = (**(code **)(param_1 + 0x1b8))(param_2,*unaff_x20,0,*(undefined8 *)(param_1 + 0x1c0));
  if ((uVar1 & 1) != 0) {
    uVar2 = 0;
    uVar8 = 1;
    goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
  }
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar3 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar3 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05e26f18(uVar2,0);
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar3);
    }
    uVar4 = thunk_FUN_03652da4();
    uVar1 = FUN_05e31434(uVar2,uVar4,0);
    if ((uVar1 & 1) == 0) goto LAB_03ea0d60;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar2 = thunk_FUN_03652da4();
    uVar1 = FUN_072652bc(uVar2,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      uVar8 = 2;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar2 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar5 = (long *)FUN_07256a04(uVar2,0);
    if (plVar5 != (long *)0x0) {
      plVar6 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fed30) {
            puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
          }
          uVar1 = uVar1 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar1 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar7)(plVar5);
      lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar6);
      }
      puVar7 = (undefined8 *)thunk_FUN_0367ff68();
      uVar8 = 0;
      uVar2 = 1;
      *unaff_x20 = *puVar7;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  else {
LAB_03ea0d60:
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar3 = FUN_03e8ab4c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar3 != 0) {
      FUN_03e69788();
      uVar8 = 0;
      uVar2 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  uVar2 = 0;
  uVar8 = 3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>:
  *unaff_x19 = uVar8;
  return uVar2;
}


