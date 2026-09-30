/*
FUNCTION_NAME: FUN_03806444
ENTRY_POINT: 03806444
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_03806444(undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined4 param_4,
                 long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  if ((DAT_03ff8340 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d953e0);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da55c8);
    DAT_03ff8340 = 1;
  }
  local_58 = 0;
  if (param_6 == 0) {
    return;
  }
  uVar2 = FUN_038067ec(param_5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_5 + 400) == '\0') {
    lVar3 = FUN_034523e4((undefined8 *)(param_5 + 0xc0),0);
    if (((lVar3 != 0) || (lVar3 = FUN_034523e4(param_5 + 0xa8,0), lVar3 != 0)) ||
       (lVar3 = FUN_034523e4(param_5 + 0x138,0), lVar3 != 0)) {
      local_60 = *(undefined8 *)(param_5 + 0xd0);
      uStack_68 = *(undefined8 *)(param_5 + 200);
      local_70 = *(undefined8 *)(param_5 + 0xc0);
      uVar2 = FUN_038068ec(&local_70);
      if ((uVar2 & 1) == 0) {
        local_80 = *(undefined8 *)(param_5 + 0xb8);
        uStack_88 = *(undefined8 *)(param_5 + 0xb0);
        local_90 = *(undefined8 *)(param_5 + 0xa8);
        uVar2 = FUN_038068ec(&local_90);
        if ((uVar2 & 1) != 0) goto LAB_0380655c;
        local_a0 = *(undefined8 *)(param_5 + 0x148);
        uStack_a8 = *(undefined8 *)(param_5 + 0x140);
        local_b0 = *(undefined8 *)(param_5 + 0x138);
        uVar2 = FUN_038068ec(&local_b0);
        if ((uVar2 & 1) != 0) goto LAB_0380655c;
      }
      else {
LAB_0380655c:
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f3474(*(undefined8 *)PTR_DAT_03da55c8,param_5,0);
      }
      *(undefined1 *)(param_5 + 400) = 1;
    }
  }
  lVar3 = FUN_034523e4(param_5 + 0x168,0);
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_01ee11d0(lVar3,*(undefined8 *)PTR_DAT_03d953e0);
  }
  *(bool *)(param_6 + 0x1c) = 0 < iVar1;
  uVar2 = FUN_038069b8(param_5,iVar1,&local_58);
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(param_6 + 0x18) = 0;
    return;
  }
  if (local_58 != 0) {
    uVar10 = FUN_01ee146c(local_58,*(undefined8 *)
                                    Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                         );
    lVar3 = *(long *)(param_5 + 0x180);
    if (lVar3 != 0) {
      fVar6 = (float)FUN_038f06d0(lVar3,0);
      uVar10 = FUN_038f13b8(uVar10,lVar3,0);
      if ((*(long *)(param_5 + 0x180) != 0) &&
         (fVar11 = param_2, fVar12 = fVar6, lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x180),0),
         lVar3 != 0)) {
        fVar7 = (float)FUN_03928d34(lVar3,0);
        if (DAT_03fed25d == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25d = '\x01';
        }
        fVar7 = (float)uVar10 - fVar7;
        fVar11 = param_2 - fVar11;
        fVar12 = fVar6 - fVar12;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar8 = SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar11 * fVar11);
        if (fVar8 <= DAT_00b55370) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar5 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar7 = *pfVar5;
          fVar11 = pfVar5[1];
          fVar12 = pfVar5[2];
        }
        else {
          fVar7 = fVar7 / fVar8;
          fVar11 = fVar11 / fVar8;
          fVar12 = fVar12 / fVar8;
        }
        lVar3 = FUN_0391c27c(param_5,0);
        if (lVar3 != 0) {
          uVar4 = FUN_03928c2c(lVar3,0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar2 = FUN_0391f968(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            lVar3 = FUN_0391c27c(param_5,0);
            if ((lVar3 == 0) || (lVar3 = FUN_03928c2c(lVar3,0), lVar3 == 0)) goto LAB_038067e8;
            uVar10 = FUN_0392a520(uVar10,lVar3,0);
          }
          *(int *)(param_6 + 0x20) = (int)uVar10;
          *(float *)(param_6 + 0x24) = param_2;
          *(float *)(param_6 + 0x28) = fVar6;
          uVar9 = FUN_039148b4(fVar7,0);
          *(undefined4 *)(param_6 + 0x2c) = uVar9;
          *(float *)(param_6 + 0x30) = fVar11;
          *(float *)(param_6 + 0x34) = fVar12;
          *(undefined4 *)(param_6 + 0x38) = param_4;
          *(undefined4 *)(param_6 + 0x18) = 3;
          return;
        }
      }
    }
  }
LAB_038067e8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


