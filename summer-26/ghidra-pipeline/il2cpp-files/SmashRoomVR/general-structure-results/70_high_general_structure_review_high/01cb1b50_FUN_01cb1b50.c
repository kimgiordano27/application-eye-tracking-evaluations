/*
FUNCTION_NAME: FUN_01cb1b50
ENTRY_POINT: 01cb1b50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_01cb1b50(long param_1,undefined8 *param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  
  if ((DAT_03fed9ff & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_996);
    DAT_03fed9ff = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *param_2;
  fVar20 = *(float *)(param_2 + 1);
  uVar14 = *(undefined8 *)((long)param_2 + 0xc);
  fVar16 = *(float *)((long)param_2 + 0x14);
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  puVar4 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar1 = DAT_00b55370;
  fVar12 = (float)uVar14;
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  fVar10 = SQRT(fVar16 * fVar16 + fVar12 * fVar12 + fVar15 * fVar15);
  if (fVar10 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    uVar14 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar16 = *(float *)(*(undefined8 **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  }
  else {
    uVar14 = CONCAT44(fVar15 / fVar10,fVar12 / fVar10);
    fVar16 = fVar16 / fVar10;
  }
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  puVar7 = *(undefined4 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  uVar19 = *puVar7;
  uVar18 = puVar7[1];
  uVar17 = puVar7[2];
  uVar13 = puVar7[3];
  if (DAT_03feda04 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_964);
    DAT_03feda04 = '\x01';
  }
  if (((**(long **)(*(long *)StringLiteral_964 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)StringLiteral_964 + 0xb8) + 0x20), lVar5 != 0)) &&
     (lVar5 = FUN_0391fab4(lVar5,0),
     puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__,
     puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar5 != 0)) {
    fVar16 = fVar16 * DAT_00b55290;
    fVar10 = (float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar14 >> 0x20) * 0.1;
    uVar6 = FUN_0392a75c(lVar5,*(undefined8 *)StringLiteral_996,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    lVar5 = FUN_01f25ab0(CONCAT44(fVar10,(float)uVar11 + (float)uVar14 * 0.1),fVar10,fVar20 + fVar16
                         ,uVar19,uVar18,uVar17,uVar13,uVar9,uVar6,*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      lVar5 = FUN_01ed712c(lVar5,*(undefined8 *)
                                  Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                          );
      fVar16 = *(float *)((long)param_2 + 0xc);
      fVar20 = *(float *)(param_2 + 2);
      fVar10 = *(float *)((long)param_2 + 0x14);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar12 = SQRT(fVar10 * fVar10 + fVar16 * fVar16 + fVar20 * fVar20);
      if (fVar12 <= fVar1) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar8 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar16 = *pfVar8;
        fVar20 = pfVar8[1];
        fVar10 = pfVar8[2];
      }
      else {
        fVar16 = fVar16 / fVar12;
        fVar20 = fVar20 / fVar12;
        fVar10 = fVar10 / fVar12;
      }
      if (lVar5 != 0) {
        FUN_03959ef0(fVar16 * 25.0,fVar20 * 25.0,fVar10 * 25.0,lVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


