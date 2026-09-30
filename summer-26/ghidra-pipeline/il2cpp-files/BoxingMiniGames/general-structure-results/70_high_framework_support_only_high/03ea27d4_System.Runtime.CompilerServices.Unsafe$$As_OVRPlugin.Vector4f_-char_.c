/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.Vector4f,-char>
ENTRY_POINT: 03ea27d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_Vector4f,_char>(void)

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
  
  lVar1 = FUN_0367c9fc();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
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
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {
System_Runtime_CompilerServices_Unsafe__AsRef<Painter2D_Painter2DJobData>:
    uVar4 = 0;
    uVar8 = 2;
    goto FUN_03ea2bc0;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar10 + 0x20);
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
  lVar1 = *(long *)(lVar10 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar10 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_03bd8740(*(undefined8 *)(lVar10 + 0x18));
    if (plVar2 == (long *)0x0)
    goto System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRResult<Int32Enum>>;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))();
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto FUN_03ea2bc0;
    }
    lVar10 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar10 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar10 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar10 + 0x20);
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
  lVar1 = *(long *)(lVar10 + 0x20);
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
    if ((uVar3 & 1) == 0)
    goto System_Runtime_CompilerServices_Unsafe__AsRef<ReceiverSphereCuller_SplitInfo>;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar4 = thunk_FUN_03652da4();
    uVar3 = FUN_072652bc(uVar4,0);
    if ((uVar3 & 1) == 0)
    goto System_Runtime_CompilerServices_Unsafe__AsRef<Painter2D_Painter2DJobData>;
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar4 = thunk_FUN_03652da4();
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar2 = (long *)FUN_07256a04(uVar4,0);
    if (plVar2 == (long *)0x0) goto LAB_03ea2bbc;
    plVar6 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38));
    lVar1 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fed30) {
          puVar7 = (undefined8 *)(lVar1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<ConvertMeshJobData>>
          ;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar2,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NativeArray<ConvertMeshJobData>>:
    (*(code *)*puVar7)(plVar2);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc(lVar1);
    }
    if (plVar6 == (long *)0x0) {
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRResult<Int32Enum>>:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar6);
    }
    puVar7 = (undefined8 *)thunk_FUN_0367ff68();
    uVar5 = *puVar7;
    uVar4 = puVar7[2];
    unaff_x20[1] = puVar7[1];
    *unaff_x20 = uVar5;
    unaff_x20[2] = uVar4;
    thunk_FUN_036b7ad0();
  }
  else {
System_Runtime_CompilerServices_Unsafe__AsRef<ReceiverSphereCuller_SplitInfo>:
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar1 = FUN_03e8b58c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 == 0) {
LAB_03ea2bbc:
      uVar4 = 0;
      uVar8 = 3;
      goto FUN_03ea2bc0;
    }
    FUN_03e6b608();
  }
  uVar8 = 0;
  uVar4 = 1;
FUN_03ea2bc0:
  *unaff_x19 = uVar8;
  return uVar4;
}


