/*
FUNCTION_NAME: FUN_0470cde4
ENTRY_POINT: 0470cde4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_0470cde4(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 param_4,long param_5)

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
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long *local_38;
  
  lVar6 = *(long *)(param_5 + 0x38);
  if (lVar6 == 0) {
    FUN_03a8a718(PTR_DAT_08492fc8);
    FUN_03a8a718(PTR_DAT_08492f60);
    lVar6 = *(long *)(param_5 + 0x38);
    if (lVar6 == 0) {
      FUN_03ac40ec(param_5);
      lVar6 = *(long *)(param_5 + 0x38);
    }
  }
  local_38 = (long *)0x0;
  lVar6 = *(long *)(lVar6 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = **(long **)(param_5 + 0x38);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xb) == '\0') {
LAB_0470d1f4:
    uVar3 = 0;
    uVar7 = 2;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
    ;
  }
  lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar9 = *(long *)(param_5 + 0x38);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xc) != '\0') {
    plVar1 = (long *)FUN_044459e0(*(undefined8 *)(lVar9 + 0x18));
    if (plVar1 == (long *)0x0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_Vector3f>;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,*param_2,(int)param_2[1],0,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      uVar7 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
    lVar9 = *(long *)(param_5 + 0x38);
  }
  lVar6 = *(long *)(lVar9 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar9 = *(long *)(*(long *)(param_5 + 0x38) + 0x48);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_0675ff58(uVar3,0);
    local_58 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(local_58 + 0x135) & 1) == 0) {
      local_58 = FUN_03ac4090(local_58);
    }
    local_48 = *param_2;
    local_50 = 0xffffffffffffffff;
    local_40 = (undefined4)param_2[1];
    uVar4 = thunk_FUN_03a9a6e8(&local_58,0);
    uVar2 = FUN_06769d78(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_0470d200;
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    local_48 = *param_2;
    local_40 = (undefined4)param_2[1];
    local_50 = 0xffffffffffffffff;
    local_58 = lVar6;
    uVar3 = thunk_FUN_03a9a6e8(&local_58,0);
    uVar2 = FUN_07d456b4(uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_0470d1f4;
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    local_48 = *param_2;
    local_40 = (undefined4)param_2[1];
    local_50 = 0xffffffffffffffff;
    local_58 = lVar6;
    uVar3 = thunk_FUN_03a9a6e8(&local_58,0);
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08492f60);
    }
    plVar1 = (long *)FUN_07d36dfc(uVar3,0);
    if (plVar1 != (long *)0x0) {
      local_58 = *param_2;
      local_50 = CONCAT44(local_50._4_4_,(int)param_2[1]);
      local_38 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x38),
                                            &local_58);
      lVar6 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08492fc8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto FUN_0470d274;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar1,*(long *)PTR_DAT_08492fc8,1);
FUN_0470d274:
      (*(code *)*puVar5)(plVar1,param_1,&local_38,puVar5[1]);
      plVar1 = local_38;
      lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      if (plVar1 == (long *)0x0) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<OVRPlugin_Vector3f>:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(*plVar1 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar1);
      }
      plVar1 = (long *)thunk_FUN_03ac7604();
      uVar7 = 0;
      uVar3 = 1;
      lVar6 = plVar1[1];
      *param_2 = *plVar1;
      *(int *)(param_2 + 1) = (int)lVar6;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
  }
  else {
LAB_0470d200:
    if (*(int *)(*(long *)PTR_DAT_08492f60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar6 = FUN_046ee2c8(*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x60));
    if (lVar6 != 0) {
      FUN_046d4374(lVar6,param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x70));
      uVar7 = 0;
      uVar3 = 1;
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>
      ;
    }
  }
  uVar3 = 0;
  uVar7 = 3;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ArrayElementAsRef<LightUtility_LightMeshVertex>:
  *param_3 = uVar7;
  return uVar3;
}


