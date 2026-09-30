/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<VisibleLight>
ENTRY_POINT: 03ea096c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8
System_Runtime_CompilerServices_Unsafe__AddByteOffset<VisibleLight>
          (undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  long lVar9;
  long local_50 [3];
  long *local_38;
  
  lVar6 = *(long *)(param_5 + 0x38);
  if (lVar6 == 0) {
    FUN_03642964(&DAT_07b69890);
    FUN_03642964(&DAT_07b6cb98);
    lVar6 = *(long *)(param_5 + 0x38);
    if (lVar6 == 0) {
      FUN_0367ca58(param_5);
      lVar6 = *(long *)(param_5 + 0x38);
    }
  }
  local_38 = (long *)0x0;
  lVar6 = *(long *)(lVar6 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar9 = **(long **)(param_5 + 0x38);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xb) == '\0') {
LAB_03ea0d54:
    uVar3 = 0;
    uVar7 = 2;
    goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
  }
  lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar9 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar9 = *(long *)(param_5 + 0x38);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xc) != '\0') {
    plVar1 = (long *)FUN_03bd8654(*(undefined8 *)(lVar9 + 0x18));
    if (plVar1 == (long *)0x0) goto LAB_03ea0e44;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*param_2,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      uVar7 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
    lVar9 = *(long *)(param_5 + 0x38);
  }
  lVar6 = *(long *)(lVar9 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar9 = *(long *)(*(long *)(param_5 + 0x38) + 0x48);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x50);
    if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar3 = FUN_05e26f18(uVar3,0);
    local_50[0] = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(local_50[0] + 0x135) & 1) == 0) {
      local_50[0] = FUN_0367c9fc(local_50[0]);
    }
    local_50[2] = *param_2;
    local_50[1] = 0xffffffffffffffff;
    uVar4 = thunk_FUN_03652da4(local_50,0);
    uVar2 = FUN_05e31434(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_03ea0d60;
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    local_50[2] = *param_2;
    local_50[1] = 0xffffffffffffffff;
    local_50[0] = lVar6;
    uVar3 = thunk_FUN_03652da4(local_50,0);
    uVar2 = FUN_072652bc(uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_03ea0d54;
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    local_50[2] = *param_2;
    local_50[1] = 0xffffffffffffffff;
    local_50[0] = lVar6;
    uVar3 = thunk_FUN_03652da4(local_50,0);
    if (*(int *)(*(long *)PTR_DAT_079fecc8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fecc8);
    }
    plVar1 = (long *)FUN_07256a04(uVar3,0);
    if (plVar1 != (long *)0x0) {
      local_50[0] = *param_2;
      local_38 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x38),
                                            local_50);
      lVar6 = *plVar1;
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
      puVar5 = (undefined8 *)FUN_0367cd30(plVar1,*(long *)PTR_DAT_079fed30,1);
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector4f>:
      (*(code *)*puVar5)(plVar1,param_1,&local_38,puVar5[1]);
      plVar1 = local_38;
      lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      if (plVar1 == (long *)0x0) {
LAB_03ea0e44:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(long *)(*plVar1 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar1);
      }
      plVar1 = (long *)thunk_FUN_0367ff68();
      uVar7 = 0;
      uVar3 = 1;
      *param_2 = *plVar1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  else {
LAB_03ea0d60:
    if (*(int *)(DAT_07b6cb98 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = FUN_03e8ab4c(*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x60));
    if (lVar6 != 0) {
      FUN_03e69788(lVar6,param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x70));
      uVar7 = 0;
      uVar3 = 1;
      goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>;
    }
  }
  uVar3 = 0;
  uVar7 = 3;
System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_Vector3f>:
  *param_3 = uVar7;
  return uVar3;
}


