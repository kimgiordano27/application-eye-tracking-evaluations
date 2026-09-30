/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<VisibleReflectionProbe>
ENTRY_POINT: 03ea0994
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8 System_Runtime_CompilerServices_Unsafe__AddByteOffset<VisibleReflectionProbe>(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  
  FUN_03642964(&DAT_07b69890);
  FUN_03642964(&DAT_07b6cb98);
  lVar7 = *(long *)(unaff_x21 + 0x38);
  if (lVar7 == 0) {
    FUN_0367ca58();
    lVar7 = *(long *)(unaff_x21 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = **(long **)(unaff_x21 + 0x38);
  lVar7 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0xb) == '\0') {
LAB_03ea0d54:
    uVar3 = 0;
    uVar8 = 2;
    goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
  }
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar7 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0xc) != '\0') {
    plVar1 = (long *)FUN_03bd8654(*(undefined8 *)(lVar10 + 0x18));
    if (plVar1 == (long *)0x0) goto LAB_03ea0e44;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*unaff_x20,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      uVar8 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    lVar10 = *(long *)(unaff_x21 + 0x38);
  }
  lVar7 = *(long *)(lVar10 + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar7 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar7 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  if (**(char **)(lVar7 + 0xb8) == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar3 = FUN_05e26f18(uVar3,0);
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar7);
    }
    uVar4 = thunk_FUN_03652da4();
    uVar2 = FUN_05e31434(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_03ea0d60;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar3 = thunk_FUN_03652da4();
    uVar2 = FUN_072652bc(uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_03ea0d54;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar3 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar1 = (long *)FUN_07256a04(uVar3,0);
    if (plVar1 != (long *)0x0) {
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
      lVar7 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fed30) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>;
          }
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar1,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar6)(plVar1);
      lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      if (plVar5 == (long *)0x0) {
LAB_03ea0e44:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar5);
      }
      puVar6 = (undefined8 *)thunk_FUN_0367ff68();
      uVar8 = 0;
      uVar3 = 1;
      *unaff_x20 = *puVar6;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  else {
LAB_03ea0d60:
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar7 = FUN_03e8ab4c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar7 != 0) {
      FUN_03e69788();
      uVar8 = 0;
      uVar3 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  uVar3 = 0;
  uVar8 = 3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>:
  *unaff_x19 = uVar8;
  return uVar3;
}


