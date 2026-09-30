/*
FUNCTION_NAME: FUN_0385eb14
ENTRY_POINT: 0385eb14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_0385eb14(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_48;
  
  if ((DAT_03ff867f & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_977);
    thunk_FUN_01ad9084(PTR_DAT_03da7860);
    thunk_FUN_01ad9084(PTR_DAT_03da7868);
    thunk_FUN_01ad9084(PTR_DAT_03da7870);
    thunk_FUN_01ad9084(PTR_DAT_03da7878);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da7880);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da7888);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da7890);
    thunk_FUN_01ad9084(PTR_DAT_03da7898);
    DAT_03ff867f = 1;
  }
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if ((*(char *)(lVar4 + 0x20) == '\0') && ((param_2 & 1) == 0)) {
      return;
    }
    *(undefined1 *)(lVar4 + 0x20) = 0;
    lVar4 = FUN_0391c27c(lVar4,0);
    if (lVar4 == 0) goto LAB_0385f00c;
    lVar5 = FUN_03928c2c(lVar4,0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar6 = FUN_0391f968(lVar5,0,0);
    lVar12 = 0;
    if ((uVar6 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0385f00c;
      lVar12 = FUN_01e8b0b4(lVar5,*(undefined8 *)StringLiteral_977);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    bVar3 = FUN_0391f968(lVar12,0,0);
    *(byte *)(param_1 + 0x31) = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      if (*(char *)(param_1 + 0x30) != '\x01' || (param_2 & 1) != 0) {
        uVar6 = FUN_01e8b8bc(lVar4,&local_48,*(undefined8 *)PTR_DAT_03da7860);
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_0385f00c;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar9 + 0x10) = 1;
          FUN_0385f3bc(lVar9,local_48);
          uVar7 = local_48;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03923a90(uVar7,0);
        }
        uVar6 = FUN_01e8b8bc(lVar4,&local_58,*(undefined8 *)PTR_DAT_03da7870);
        lVar9 = local_58;
        lVar10 = *(long *)(param_1 + 0x28);
        if (lVar10 == 0) goto LAB_0385f00c;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar10 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar10 + 0x10) = 1;
          if (local_58 == 0) goto LAB_0385f00c;
          *(undefined4 *)(lVar10 + 0x14) = *(undefined4 *)(local_58 + 0x30);
          *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)(local_58 + 0x2c);
          *(undefined1 *)(lVar10 + 0x1c) = *(undefined1 *)(local_58 + 0x28);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03923a90(lVar9,0);
        }
        uVar6 = FUN_01e8b8bc(lVar4,&local_60,*(undefined8 *)PTR_DAT_03da7868);
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 == 0) goto LAB_0385f00c;
        if ((uVar6 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar9 + 0x10) = 1;
          FUN_0385f444(lVar9,local_60);
          uVar7 = local_60;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03923a90(uVar7,0);
        }
        puVar2 = PTR_DAT_03da7878;
        uVar6 = FUN_01e8b8bc(lVar4,(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_03da7878);
        if ((uVar6 & 1) != 0) {
          if (lVar12 == 0) goto LAB_0385f00c;
          uVar6 = FUN_01e8b8bc(lVar12,&local_68,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) {
            if (lVar5 == 0) goto LAB_0385f00c;
            uVar7 = FUN_039230bc(lVar5,0);
            uVar8 = FUN_039230bc(lVar4,0);
            uVar7 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03da7890,uVar7,
                                 *(undefined8 *)PTR_DAT_03da7898,uVar8,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                );
            }
            FUN_038f3474(uVar7,lVar4,0);
          }
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) goto LAB_0385f00c;
          FUN_0391b78c(lVar5,0,0);
        }
      }
      if (*(char *)(param_1 + 0x31) != '\0') goto LAB_0385efe8;
    }
    if ((param_2 & 1) == 0 && *(char *)(param_1 + 0x30) == '\0') {
LAB_0385efe8:
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x31);
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x10) == '\0') goto LAB_0385efe8;
      lVar4 = FUN_0391c2b8(lVar4,0);
      if (lVar4 != 0) {
        uVar7 = FUN_01ed7044(lVar4,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77
                            );
        *(undefined8 *)(param_1 + 0x38) = uVar7;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar7);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_0385f53c(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x38));
          if (*(long *)(param_1 + 0x20) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) != '\0') {
              uVar7 = FUN_01ed7044(lVar4,*(undefined8 *)PTR_DAT_03da7880);
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0385f00c;
              FUN_0385f61c(*(long *)(param_1 + 0x20),uVar7);
            }
            if (*(long *)(param_1 + 0x28) != 0) {
              if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
                lVar4 = FUN_01ed7044(lVar4,*(undefined8 *)PTR_DAT_03da7888);
                plVar11 = (long *)(param_1 + 0x40);
                *plVar11 = lVar4;
                thunk_FUN_01b4f09c(plVar11,lVar4);
                lVar4 = *(long *)(param_1 + 0x28);
                if ((lVar4 == 0) || (lVar5 = *plVar11, lVar5 == 0)) goto LAB_0385f00c;
                *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(lVar4 + 0x14);
                *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar4 + 0x18);
                *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(lVar4 + 0x1c);
              }
              uVar7 = *(undefined8 *)(param_1 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar6 = FUN_0391f968(uVar7,0,0);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_0385f00c;
                FUN_0391b78c(*(long *)(param_1 + 0x48),1,0);
              }
              goto LAB_0385efe8;
            }
          }
        }
      }
    }
  }
LAB_0385f00c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


