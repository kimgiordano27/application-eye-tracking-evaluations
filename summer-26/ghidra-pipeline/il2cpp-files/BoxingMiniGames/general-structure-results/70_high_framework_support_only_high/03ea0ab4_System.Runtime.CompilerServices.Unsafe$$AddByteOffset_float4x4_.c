/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<float4x4>
ENTRY_POINT: 03ea0ab4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8 System_Runtime_CompilerServices_Unsafe__AddByteOffset<float4x4>(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar8 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_03bd8654(*(undefined8 *)(lVar8 + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_03ea0e44;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*unaff_x20,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar9 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    lVar8 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar8 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar4 = FUN_05e26f18(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar1);
    }
    uVar5 = thunk_FUN_03652da4();
    uVar3 = FUN_05e31434(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_03ea0d60;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar4 = thunk_FUN_03652da4();
    uVar3 = FUN_072652bc(uVar4,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      uVar9 = 2;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar4 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar2 = (long *)FUN_07256a04(uVar4,0);
    if (plVar2 != (long *)0x0) {
      plVar6 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079fed30) {
            puVar7 = (undefined8 *)(lVar1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar2,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar7)(plVar2);
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc(lVar1);
      }
      if (plVar6 == (long *)0x0) {
LAB_03ea0e44:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar6);
      }
      puVar7 = (undefined8 *)thunk_FUN_0367ff68();
      uVar9 = 0;
      uVar4 = 1;
      *unaff_x20 = *puVar7;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  else {
LAB_03ea0d60:
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar1 = FUN_03e8ab4c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_03e69788();
      uVar9 = 0;
      uVar4 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  uVar4 = 0;
  uVar9 = 3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>:
  *unaff_x19 = uVar9;
  return uVar4;
}


