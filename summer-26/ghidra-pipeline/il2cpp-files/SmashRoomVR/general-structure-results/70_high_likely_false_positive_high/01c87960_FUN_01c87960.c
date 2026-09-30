/*
FUNCTION_NAME: FUN_01c87960
ENTRY_POINT: 01c87960
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14
*/


void FUN_01c87960(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  if ((DAT_03fed809 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
                    /* try { // try from 01c879a8 to 01d879bf has its CatchHandler @ 01c87c30 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_451);
    thunk_FUN_01ad9084(StringLiteral_452);
    DAT_03fed809 = 1;
  }
  puVar2 = StringLiteral_452;
  uStack_dc = 0;
  uStack_e0 = 0;
  local_90 = 0;
  local_110 = 0;
  local_160 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_e4 = 0;
  uStack_f0 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar16 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  *(undefined8 *)(param_1 + 0x88) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_1 + 0x90) = uVar16;
  uVar16 = FUN_0394f4d8(*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0x94) = uVar16;
  iVar3 = FUN_0394fd94(0);
  uVar5 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0);
  if ((((uVar5 & 1) == 0) &&
      (uVar5 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0), iVar3 < 1)) &&
     ((uVar5 & 1) == 0)) goto LAB_01c8815c;
  fVar17 = 10.0;
  *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) * 10.0;
  uVar5 = FUN_0394fa3c(0x69,0);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  uVar5 = FUN_0394fa3c(0x66,0);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  uVar5 = FUN_0394fa3c(0x73,0);
  if ((uVar5 & 1) != 0) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) ^ 1;
  }
  uVar5 = FUN_0394f76c(1,0);
  if ((uVar5 & 1) != 0) {
    uVar16 = FUN_0394f4d8(*(undefined8 *)
                           Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                          ,0);
    *(undefined4 *)(param_1 + 0x84) = uVar16;
    fVar12 = (float)FUN_0394f4d8(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                                 ,0);
    fVar17 = DAT_00b555a8;
    fVar18 = *(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x80) = fVar12;
    if ((fVar17 < fVar18) || (fVar18 < DAT_00b552f8)) {
      fVar19 = *(float *)(param_1 + 0x44) - fVar18 * *(float *)(param_1 + 100);
      fVar18 = *(float *)(param_1 + 0x48);
      if (fVar19 <= *(float *)(param_1 + 0x48)) {
        fVar18 = fVar19;
      }
      if (fVar19 < *(float *)(param_1 + 0x4c)) {
        fVar18 = *(float *)(param_1 + 0x4c);
      }
      *(float *)(param_1 + 0x44) = fVar18;
    }
    if ((fVar17 < fVar12) || (fVar17 = DAT_00b552f8, fVar12 < DAT_00b552f8)) {
      fVar18 = *(float *)(param_1 + 0x50) + fVar12 * *(float *)(param_1 + 100);
      fVar17 = fVar18 + -360.0;
      *(float *)(param_1 + 0x50) = fVar18;
      fVar12 = fVar17;
      if ((360.0 < fVar18) || (fVar12 = fVar18, fVar18 < 0.0)) {
        fVar17 = fVar12 + 360.0;
        fVar18 = fVar17;
        if (0.0 <= fVar12) {
          fVar18 = fVar12;
        }
        *(float *)(param_1 + 0x50) = fVar18;
      }
    }
  }
  if (iVar3 == 1) {
    FUN_0394f848(&local_1f0,0,0);
    memcpy(&local_d0,&local_1f0,0x44);
    iVar4 = FUN_0394f308(&local_d0,0);
    if (iVar4 == 1) {
      FUN_0394f848(&local_1f0,0,0);
      memcpy(&local_d0,&local_1f0,0x44);
      fVar18 = (float)FUN_0394f2e8(&local_d0,0);
      fVar12 = DAT_00b555a8;
      if ((DAT_00b555a8 < fVar17) || (fVar17 < DAT_00b552f8)) {
        fVar19 = *(float *)(param_1 + 0x44) + fVar17 * DAT_00b555e4;
        fVar17 = *(float *)(param_1 + 0x48);
        if (fVar19 <= *(float *)(param_1 + 0x48)) {
          fVar17 = fVar19;
        }
        if (fVar19 < *(float *)(param_1 + 0x4c)) {
          fVar17 = *(float *)(param_1 + 0x4c);
        }
        *(float *)(param_1 + 0x44) = fVar17;
      }
      if ((fVar12 < fVar18) || (fVar17 = DAT_00b552f8, fVar18 < DAT_00b552f8)) {
        fVar18 = fVar18 * DAT_00b55290 + *(float *)(param_1 + 0x50);
        fVar17 = fVar18 + -360.0;
        *(float *)(param_1 + 0x50) = fVar18;
        fVar12 = fVar17;
        if ((360.0 < fVar18) || (fVar12 = fVar18, fVar18 < 0.0)) {
          fVar17 = fVar12 + 360.0;
          fVar18 = fVar17;
          if (0.0 <= fVar12) {
            fVar18 = fVar12;
          }
          *(float *)(param_1 + 0x50) = fVar18;
        }
      }
    }
  }
  uVar5 = FUN_0394f76c(0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_038f1768(0);
    FUN_0394fadc(0);
    if (lVar6 == 0) goto LAB_01c881c8;
    FUN_038f1588(&local_208,lVar6,0);
    uStack_1e8 = uStack_200;
    local_1f0 = local_208;
    local_1e0 = local_1f8;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    local_210 = local_1e0;
    uStack_218 = uStack_1e8;
    local_220 = local_1f0;
    uVar5 = FUN_039560f4(0x43960000,&local_220,&local_100,0x5c00,0);
    if ((uVar5 & 1) != 0) {
      uVar7 = FUN_03959c7c(&local_100,0);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar7,uVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = FUN_03959c7c(&local_100,0);
        *(undefined8 *)(param_1 + 0x30) = uVar7;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x30),uVar7);
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_1 + 0x5a);
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
  }
  uVar5 = FUN_0394f76c(2,0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar5 & 1) != 0) {
    plVar8 = (long *)(param_1 + 0x28);
    lVar6 = *plVar8;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar7,lVar6,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x30);
        if (lVar6 == 0) goto LAB_01c881c8;
        lVar11 = *plVar8;
        goto LAB_01c87efc;
      }
    }
    else {
      lVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar6,*(undefined8 *)StringLiteral_451,0);
      if (lVar6 == 0) goto LAB_01c881c8;
      uVar7 = FUN_0391fab4(lVar6,0);
      *(undefined8 *)(param_1 + 0x28) = uVar7;
      thunk_FUN_01b4f09c(plVar8,uVar7);
      lVar11 = *(long *)(param_1 + 0x28);
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 == 0) goto LAB_01c881c8;
LAB_01c87efc:
      plVar10 = (long *)(param_1 + 0x30);
      FUN_03928d34(lVar6,0);
      if (lVar11 == 0) goto LAB_01c881c8;
      FUN_03928dd4(lVar11,0);
      if (*plVar10 == 0) goto LAB_01c881c8;
      lVar6 = *plVar8;
      FUN_039274a0(*plVar10,0);
      if (lVar6 == 0) goto LAB_01c881c8;
      FUN_03928f54(lVar6,0);
      *plVar10 = *plVar8;
      thunk_FUN_01b4f09c(plVar10);
      uVar1 = *(undefined1 *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0x5a) = uVar1;
    }
    uVar16 = FUN_0394f4d8(*(undefined8 *)
                           Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                          ,0);
    *(undefined4 *)(param_1 + 0x84) = uVar16;
    uVar16 = FUN_0394f4d8(*(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                          ,0);
    *(undefined4 *)(param_1 + 0x80) = uVar16;
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_01c881c8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    fVar17 = *(float *)(param_1 + 0x84);
    fVar18 = 0.0;
    fVar12 = (float)thunk_FUN_03929a40(*(long *)(param_1 + 0x20),0);
    *(float *)(param_1 + 0x88) = fVar12;
    *(float *)(param_1 + 0x8c) = fVar17;
    *(float *)(param_1 + 0x90) = fVar18;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01c881c8;
    fVar17 = -fVar17;
    FUN_039299b8(-fVar12,fVar17,-fVar18,*(long *)(param_1 + 0x28),0,0);
  }
  if (iVar3 == 2) {
    FUN_0394f848(&local_1f0,0,0);
    memcpy(&local_150,&local_1f0,0x44);
    FUN_0394f848(&local_1f0,1,0);
    memcpy(&local_1a0,&local_1f0,0x44);
    fVar19 = (float)FUN_0394f2c8(&local_150,0);
    fVar12 = fVar17;
    fVar13 = (float)FUN_0394f2e8(&local_150,0);
    fVar17 = fVar17 - fVar12;
    fVar14 = (float)FUN_0394f2c8(&local_1a0,0);
    fVar18 = fVar12;
    fVar15 = (float)FUN_0394f2e8(&local_1a0,0);
    if (DAT_03fed262 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed262 = '\x01';
    }
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    fVar19 = (fVar19 - fVar13) - (fVar14 - fVar15);
    fVar17 = fVar17 - (fVar12 - fVar18);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar17 = fVar17 * fVar17;
    fVar13 = fVar19 * fVar19 + fVar17;
    fVar18 = (float)FUN_0394f2c8(&local_150,0);
    fVar12 = fVar17;
    fVar19 = (float)FUN_0394f2c8(&local_1a0,0);
    if (DAT_03fed262 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed262 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar17 = SQRT(fVar13) -
             SQRT((fVar18 - fVar19) * (fVar18 - fVar19) + (fVar17 - fVar12) * (fVar17 - fVar12));
    if ((DAT_00b555a8 < fVar17) || (fVar17 < DAT_00b552f8)) {
      fVar12 = fVar17 * 0.25 + *(float *)(param_1 + 0x38);
      fVar17 = *(float *)(param_1 + 0x3c);
      if (fVar12 <= *(float *)(param_1 + 0x3c)) {
        fVar17 = fVar12;
      }
      if (fVar12 < *(float *)(param_1 + 0x40)) {
        fVar17 = *(float *)(param_1 + 0x40);
      }
      *(float *)(param_1 + 0x38) = fVar17;
    }
  }
LAB_01c8815c:
  fVar17 = *(float *)(param_1 + 0x94);
  if ((fVar17 < DAT_00b552f8) || (DAT_00b555a8 < fVar17)) {
    fVar12 = *(float *)(param_1 + 0x38) + fVar17 * -5.0;
    fVar17 = *(float *)(param_1 + 0x3c);
    if (fVar12 <= *(float *)(param_1 + 0x3c)) {
      fVar17 = fVar12;
    }
    if (fVar12 < *(float *)(param_1 + 0x40)) {
      fVar17 = *(float *)(param_1 + 0x40);
    }
    *(float *)(param_1 + 0x38) = fVar17;
  }
  return;
}


