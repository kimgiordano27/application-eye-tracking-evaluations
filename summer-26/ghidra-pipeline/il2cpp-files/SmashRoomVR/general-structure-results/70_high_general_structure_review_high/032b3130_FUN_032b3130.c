/*
FUNCTION_NAME: FUN_032b3130
ENTRY_POINT: 032b3130
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_032b3130(undefined1 param_1 [16],float param_2,float param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff587a & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff587a = 1;
  }
  lVar5 = param_4[9];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_4[9] != 0) {
    uVar2 = FUN_0391fbf0(param_4[9],0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar5 = (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
    if ((lVar5 != 0) && (lVar5 = FUN_0391c27c(lVar5,0), lVar5 != 0)) {
      uVar6 = FUN_03928d34(lVar5,0);
      if ((param_4[9] != 0) &&
         (fVar11 = param_2, fVar12 = param_3, lVar5 = FUN_0391fab4(param_4[9],0), lVar5 != 0)) {
        fVar7 = (float)FUN_03928d34(lVar5,0);
        fVar10 = fVar11;
        fVar9 = fVar12;
        lVar5 = (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
        if ((lVar5 != 0) && (lVar5 = FUN_0391c27c(lVar5,0), lVar5 != 0)) {
          fVar8 = (float)FUN_03928d34(lVar5,0);
          uVar3 = extraout_x1;
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
            uVar3 = extraout_x1_00;
          }
          puVar1 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          fVar7 = fVar7 - fVar8;
          fVar11 = fVar11 - fVar10;
          fVar12 = fVar12 - fVar9;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
            uVar3 = extraout_x1_01;
          }
          fVar10 = DAT_00b55370;
          fVar9 = SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar11 * fVar11);
          if (fVar9 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
              uVar3 = extraout_x1_02;
            }
            pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            fVar7 = *pfVar4;
            fVar11 = pfVar4[1];
            fVar12 = pfVar4[2];
          }
          else {
            fVar7 = fVar7 / fVar9;
            fVar11 = fVar11 / fVar9;
            fVar12 = fVar12 / fVar9;
          }
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
            uVar3 = extraout_x1_03;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            uVar3 = extraout_x1_04;
          }
          fStack_74 = SQRT(fVar12 * fVar12 + fVar7 * fVar7 + fVar11 * fVar11);
          if (fStack_74 <= fVar10) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
              uVar3 = extraout_x1_05;
            }
            pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            fStack_7c = *pfVar4;
            local_78 = pfVar4[1];
            fStack_74 = pfVar4[2];
          }
          else {
            fStack_7c = fVar7 / fStack_74;
            local_78 = fVar11 / fStack_74;
            fStack_74 = fVar12 / fStack_74;
          }
          local_88 = uVar6;
          fStack_84 = param_2;
          local_80 = param_3;
          System_Text_RegularExpressions_RegexWriter__Dispose(param_4,uVar3,param_6,&local_88,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


