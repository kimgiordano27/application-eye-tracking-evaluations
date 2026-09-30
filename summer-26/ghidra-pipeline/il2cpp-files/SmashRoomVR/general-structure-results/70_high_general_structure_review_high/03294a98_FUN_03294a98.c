/*
FUNCTION_NAME: FUN_03294a98
ENTRY_POINT: 03294a98
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_9
*/


void FUN_03294a98(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                 uint param_6,uint param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_f0 [2];
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined8 uStack_bc;
  
  if ((DAT_03ff5769 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d7f758);
    thunk_FUN_01ad9084(PTR_DAT_03d7f700);
    thunk_FUN_01ad9084(PTR_DAT_03d7f708);
    thunk_FUN_01ad9084(PTR_DAT_03d7f750);
    thunk_FUN_01ad9084(PTR_DAT_03d85f28);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5769 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (3 < param_6) {
    local_d0 = thunk_FUN_01ad9084(PTR_DAT_03d85f30);
    uStack_c8 = 0xffffffff;
    uStack_c4 = 0xffffffff;
    local_c0 = param_6;
    uVar3 = FUN_030750fc(&local_d0,0);
    uVar6 = thunk_FUN_01ad9084(PTR_DAT_03d85f38);
    uVar3 = FUN_02edd6e8(uVar6,uVar3,0);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__);
    uVar6 = thunk_FUN_01afaadc();
    FUN_03076790(uVar6,uVar3,0);
    uVar3 = thunk_FUN_01ad9084(PTR_DAT_03d85f40);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar6,uVar3);
  }
  lVar4 = 0x88;
  if (1 < param_6) {
    lVar4 = 0xa8;
  }
  plVar8 = *(long **)(param_4 + lVar4);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(plVar8,0);
  if ((uVar2 & 1) == 0) {
LAB_03294d68:
    System_Linq_Expressions_Error__CoercionOperatorNotDefined(&local_d0,param_5,0,0);
    local_f0[0] = local_d0;
    uStack_dc = uStack_bc;
    FUN_03294e50(param_4,param_6 + 1,local_f0,param_7 & 1,0);
    return;
  }
  if (*(int *)(*(long *)
                Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03b26f4c(0);
  lVar4 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d85f28);
  FUN_032eee44(lVar4,uVar3,0);
  if (param_5 != 0) {
    uVar9 = FUN_03928d34(param_5,0);
    fVar13 = param_3;
    fVar11 = param_2;
    fVar10 = (float)FUN_039291ac(param_5,0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar12 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar11 * fVar11);
    if (fVar12 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar7 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar10 = *pfVar7;
      fVar11 = pfVar7[1];
      fVar13 = pfVar7[2];
    }
    else {
      fVar10 = fVar10 / fVar12;
      fVar11 = fVar11 / fVar12;
      fVar13 = fVar13 / fVar12;
    }
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x180) = uVar9;
      *(float *)(lVar4 + 0x184) = param_2;
      *(float *)(lVar4 + 0x188) = param_3;
      *(float *)(lVar4 + 0x18c) = fVar10;
      *(float *)(lVar4 + 400) = fVar11;
      *(float *)(lVar4 + 0x194) = fVar13;
      lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f750);
      FUN_02b9385c(lVar5,*(undefined8 *)PTR_DAT_03d7f758);
      if ((plVar8 != (long *)0x0) &&
         ((**(code **)(*plVar8 + 0x248))(plVar8,lVar4,lVar5,*(undefined8 *)(*plVar8 + 0x250)),
         lVar5 != 0)) {
        if (*(int *)(lVar5 + 0x18) < 1) {
          return;
        }
        FUN_02b93dc0(&local_d0,lVar5,0,*(undefined8 *)PTR_DAT_03d7f708);
        uVar3 = local_d0;
        if (*(long *)(param_4 + 0x48) != 0) {
          uVar6 = FUN_0391c2b8(*(long *)(param_4 + 0x48),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar2 = FUN_0391f968(uVar3,uVar6,0);
          if ((uVar2 & 1) != 0) {
            return;
          }
          goto LAB_03294d68;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


