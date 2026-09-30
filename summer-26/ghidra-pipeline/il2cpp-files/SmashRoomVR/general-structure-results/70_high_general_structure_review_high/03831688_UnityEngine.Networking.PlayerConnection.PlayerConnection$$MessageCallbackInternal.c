/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$MessageCallbackInternal
ENTRY_POINT: 03831688
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_20;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void UnityEngine_Networking_PlayerConnection_PlayerConnection__MessageCallbackInternal
               (ulong param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  int iVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined8 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da6000);
    thunk_FUN_01ad9084(PTR_DAT_03da6008);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    *(undefined1 *)(unaff_x20 + 0x4d0) = 1;
  }
  uStack00000000000000a4 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  in_stack_00000090 = 0;
  _fStack0000000000000068 = 0;
  _fStack0000000000000060 = 0;
  in_stack_00000078 = 0;
  _fStack0000000000000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uVar7 = param_3;
  uVar26 = param_4;
  if (*(int *)(param_5 + 0x290) == 0) {
    uVar11 = *(undefined8 *)(param_5 + 0x2a0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar11,0,0);
    if ((uVar7 & 1) == 0) {
      lVar12 = FUN_0391c27c(param_5,0);
    }
    else {
      lVar12 = *(long *)(param_5 + 0x2a0);
    }
    if (lVar12 == 0) goto LAB_03831e98;
    uVar11 = FUN_03928d34(lVar12,0);
    uVar7 = param_3;
    uVar26 = param_4;
    fVar14 = (float)FUN_039291ac(lVar12,0);
    fVar28 = *(float *)(param_5 + 0x298);
    fVar23 = (float)uVar11;
    fVar33 = fVar23 + fVar14 * fVar28;
    fVar21 = (float)param_3;
    fVar14 = fVar21 + (float)uVar7 * fVar28;
    fVar17 = (float)param_4;
    fVar28 = fVar17 + (float)uVar26 * fVar28;
    uVar7 = (ulong)DAT_00b55104;
    uVar26 = (ulong)DAT_00b553e4;
    FUN_038f997c(DAT_00b553b0,uVar7,uVar26,DAT_00b55108,0);
    iVar10 = *(int *)(param_5 + 0x2d4);
    if (iVar10 == 2) {
      fVar17 = tanf(*(float *)(param_5 + 0x2dc) * DAT_00b552c8 * 0.5);
      fVar16 = (float)uVar26;
      fVar29 = *(float *)(param_5 + 0x298);
      fVar17 = fVar17 * fVar29;
      fVar21 = (float)FUN_03929130(lVar12,0);
      fVar23 = fVar17 * fVar29;
      fVar22 = fVar17 * fVar16;
      fVar15 = (float)FUN_039290b4(lVar12,0);
      FUN_038f9680(uVar11,param_3,param_4,fVar33,fVar14,fVar28,0);
      FUN_038f9680(uVar11,param_3,param_4,fVar33 + fVar17 * fVar15,fVar14 + fVar17 * fVar29,
                   fVar28 + fVar17 * fVar16,0);
      FUN_038f9680(uVar11,param_3,param_4,fVar33 - fVar17 * fVar15,fVar14 - fVar17 * fVar29,
                   fVar28 - fVar17 * fVar16,0);
      FUN_038f9680(uVar11,param_3,param_4,fVar33 + fVar17 * fVar21,fVar14 + fVar23,fVar28 + fVar22,0
                  );
      FUN_038f9680(uVar11,param_3,param_4,fVar33 - fVar17 * fVar21,fVar14 - fVar23,fVar28 - fVar22,0
                  );
    }
    else {
      if (iVar10 != 1) {
        if (iVar10 == 0) {
          FUN_038f9680(uVar11,param_3,param_4,fVar33,fVar14,fVar28,0);
          uVar7 = param_3;
          uVar26 = param_4;
        }
        goto LAB_03831a3c;
      }
      fVar22 = (float)FUN_03929130(lVar12,0);
      fVar29 = *(float *)(param_5 + 0x2d8);
      fVar22 = fVar22 * fVar29;
      fVar34 = (float)uVar7;
      fVar15 = fVar34 * fVar29;
      fVar32 = (float)uVar26;
      fVar29 = fVar32 * fVar29;
      fVar16 = (float)FUN_039290b4(lVar12,0);
      fVar30 = *(float *)(param_5 + 0x2d8);
      fVar16 = fVar16 * fVar30;
      fVar34 = fVar34 * fVar30;
      fVar32 = fVar32 * fVar30;
      FUN_038f9714(uVar11,param_3,param_4,0);
      FUN_038f9680(fVar23 + fVar16,fVar21 + fVar34,fVar17 + fVar32,fVar33 + fVar16,fVar14 + fVar34,
                   fVar28 + fVar32,0);
      FUN_038f9680(fVar23 - fVar16,fVar21 - fVar34,fVar17 - fVar32,fVar33 - fVar16,fVar14 - fVar34,
                   fVar28 - fVar32,0);
      FUN_038f9680(fVar23 + fVar22,fVar21 + fVar15,fVar17 + fVar29,fVar33 + fVar22,fVar14 + fVar15,
                   fVar28 + fVar29,0);
      FUN_038f9680(fVar23 - fVar22,fVar21 - fVar15,fVar17 - fVar29,fVar33 - fVar22,fVar14 - fVar15,
                   fVar28 - fVar29,0);
      fVar17 = *(float *)(param_5 + 0x2d8);
    }
    uVar7 = (ulong)(uint)fVar14;
    uVar26 = (ulong)(uint)fVar28;
    FUN_038f9714(fVar33,uVar7,uVar26,fVar17,0);
  }
LAB_03831a3c:
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((((uVar8 & 1) == 0) || (*(long *)(param_5 + 0x3a0) == 0)) ||
     (*(int *)(*(long *)(param_5 + 0x3a0) + 0x18) < 2)) {
    return;
  }
  uStack00000000000000ac = 0;
  uVar8 = FUN_03833168(param_5,&stack0x00000080,(long)((long)register0x00000008 + 0xa8) + 4);
  if ((uVar8 & 1) != 0) {
    uVar7 = (ulong)DAT_00b55104;
    uVar26 = (ulong)DAT_00b553e4;
    FUN_038f997c(DAT_00b553b0,uVar7,uVar26,DAT_00b55108,0);
    uVar11 = FUN_03959c54(&stack0x00000080,0);
    uVar8 = uVar7;
    uVar27 = uVar26;
    fVar33 = (float)FUN_03959c54(&stack0x00000080,0);
    fVar14 = (float)uVar8;
    fVar28 = (float)uVar27;
    fVar17 = (float)FUN_03959c60(&stack0x00000080,0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar21 = SQRT(fVar28 * fVar28 + fVar17 * fVar17 + fVar14 * fVar14);
    if (fVar21 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar17 = *pfVar9;
      fVar14 = pfVar9[1];
      fVar28 = pfVar9[2];
    }
    else {
      fVar17 = fVar17 / fVar21;
      fVar14 = fVar14 / fVar21;
      fVar28 = fVar28 / fVar21;
    }
    FUN_038f9680(uVar11,uVar7,uVar26,fVar33 + fVar17 * DAT_00b55658,
                 (float)uVar8 + fVar14 * DAT_00b55658,(float)uVar27 + fVar28 * DAT_00b55658,0);
  }
  uStack00000000000000ac = 0;
  uVar8 = FUN_038331d4(param_5,&stack0x00000030,(long)((long)register0x00000008 + 0xa8) + 4);
  if ((uVar8 & 1) != 0) {
    FUN_038f997c(DAT_00b553b0,DAT_00b55104,DAT_00b553e4,DAT_00b55108,0);
    fVar14 = in_stack_00000058._4_4_;
    fVar28 = fStack0000000000000060;
    uVar7 = _fStack0000000000000060 & 0xffffffff;
    fVar33 = fStack0000000000000064;
    uVar26 = (ulong)(uint)fStack0000000000000064;
    fVar17 = fStack0000000000000068;
    fVar21 = fStack000000000000006c;
    fVar23 = fStack0000000000000070;
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar22 = SQRT(fVar23 * fVar23 + fVar17 * fVar17 + fVar21 * fVar21);
    if (fVar22 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar17 = *pfVar9;
      fVar21 = pfVar9[1];
      fVar23 = pfVar9[2];
    }
    else {
      fVar17 = fVar17 / fVar22;
      fVar21 = fVar21 / fVar22;
      fVar23 = fVar23 / fVar22;
    }
    FUN_038f9680(fVar14,uVar7,uVar26,fVar14 + fVar17 * DAT_00b55658,fVar28 + fVar21 * DAT_00b55658,
                 fVar33 + fVar23 * DAT_00b55658,0);
  }
  puVar6 = PTR_DAT_03da6008;
  uVar5 = DAT_00b55680;
  uVar4 = DAT_00b5564c;
  uVar3 = DAT_00b55608;
  uVar2 = DAT_00b554bc;
  uVar25 = DAT_00b5510c;
  iVar10 = *(int *)(param_5 + 0x3ac);
  iVar1 = *(int *)(param_5 + 0x3b0);
  iVar13 = iVar1;
  if (((0 < iVar10) && (iVar13 = iVar10, 0 < iVar1)) && (iVar1 <= iVar10)) {
    iVar13 = iVar1;
  }
  lVar12 = *(long *)(param_5 + 0x3a0);
  if (lVar12 != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar10) {
        if (*(int *)(param_5 + 0x290) == 2) {
          lVar12 = *(long *)(param_5 + 0x3b8);
          if (lVar12 == 0) break;
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_03831ff8;
          uVar7 = (ulong)*(uint *)(lVar12 + 0x24);
          uVar26 = (ulong)*(uint *)(lVar12 + 0x28);
          uVar11 = FUN_035a0b0c(*(undefined4 *)(lVar12 + 0x20),uVar7,uVar26,0);
          lVar12 = *(long *)(param_5 + 0x3b8);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03831ff8;
          uVar8 = (ulong)*(uint *)(lVar12 + 0x30);
          uVar25 = *(undefined4 *)(lVar12 + 0x34);
          uVar19 = FUN_035a0b0c(*(undefined4 *)(lVar12 + 0x2c),uVar8,0);
          lVar12 = *(long *)(param_5 + 0x3b8);
        }
        else {
          if (*(int *)(param_5 + 0x290) != 1) {
            return;
          }
          lVar12 = *(long *)(param_5 + 0x3c0);
          if (lVar12 == 0) break;
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_03831ff8;
          uVar7 = (ulong)*(uint *)(lVar12 + 0x24);
          uVar26 = (ulong)*(uint *)(lVar12 + 0x28);
          uVar11 = FUN_035a0b0c(*(undefined4 *)(lVar12 + 0x20),uVar7,uVar26,0);
          lVar12 = *(long *)(param_5 + 0x3c0);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03831ff8;
          uVar8 = (ulong)*(uint *)(lVar12 + 0x30);
          uVar25 = *(undefined4 *)(lVar12 + 0x34);
          uVar19 = FUN_035a0b0c(*(undefined4 *)(lVar12 + 0x2c),uVar8,0);
          lVar12 = *(long *)(param_5 + 0x3c0);
        }
        if (lVar12 != 0) {
          if (2 < *(uint *)(lVar12 + 0x18)) {
            uStack0000000000000004 = *(undefined4 *)(lVar12 + 0x3c);
            FUN_035a0b0c(*(undefined4 *)(lVar12 + 0x38),0);
            if (*(int *)(*(long *)
                          Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_03832034(uVar11,uVar7,uVar26,uVar19,uVar8,uVar25);
            return;
          }
LAB_03831ff8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        break;
      }
      uVar11 = FUN_02c7fa14(lVar12,iVar10,*(undefined8 *)puVar6);
      if ((iVar13 == 0) ||
         (uVar31 = 0x3f000000, uVar20 = uVar4, uVar18 = uVar3, uVar24 = uVar3, iVar10 < iVar13)) {
        uVar31 = 0x3f400000;
        uVar20 = uVar5;
        uVar18 = uVar25;
        uVar24 = uVar2;
      }
      FUN_038f997c(uVar18,uVar20,uVar24,uVar31,0);
      uVar8 = uVar7;
      uVar27 = uVar26;
      FUN_035a0b0c(uVar11,uVar7,uVar26,0);
      FUN_038f97b4(0);
      lVar12 = *(long *)(param_5 + 0x3a0);
      if (lVar12 == 0) break;
      if (iVar10 < *(int *)(lVar12 + 0x18) + -1) {
        uVar19 = FUN_02c7fa14(lVar12,iVar10 + 1,*(undefined8 *)puVar6);
        uVar11 = FUN_035a0b0c(uVar11,uVar7,uVar26,0);
        uVar19 = FUN_035a0b0c(uVar19,uVar8,uVar27,0);
        FUN_038f9680(uVar11,uVar7,uVar26,uVar19,uVar8,uVar27,0);
        lVar12 = *(long *)(param_5 + 0x3a0);
        uVar8 = uVar7;
        uVar27 = uVar26;
      }
      uVar7 = uVar8;
      uVar26 = uVar27;
      iVar10 = iVar10 + 1;
    } while (lVar12 != 0);
  }
LAB_03831e98:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


