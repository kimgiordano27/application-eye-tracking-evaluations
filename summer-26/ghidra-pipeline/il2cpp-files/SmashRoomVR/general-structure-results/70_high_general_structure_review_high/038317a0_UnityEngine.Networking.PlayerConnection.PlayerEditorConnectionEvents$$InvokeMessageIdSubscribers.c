/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents$$InvokeMessageIdSubscribers
ENTRY_POINT: 038317a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents__InvokeMessageIdSubscribers
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long unaff_x19;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  ulong uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  float fVar28;
  ulong unaff_d12;
  float unaff_s13;
  undefined4 uStack0000000000000004;
  float fStack0000000000000014;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  undefined4 uStack00000000000000ac;
  
  FUN_038f997c(0);
  iVar10 = *(int *)(unaff_x19 + 0x2d4);
  if (iVar10 == 2) {
    tanf(*(float *)(unaff_x19 + 0x2dc) * DAT_00b552c8 * 0.5);
    FUN_03929130();
    FUN_039290b4();
    FUN_038f9680(0);
    FUN_038f9680(0);
    FUN_038f9680(0);
    FUN_038f9680(0);
    FUN_038f9680(0);
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 == 0) {
        FUN_038f9680(0);
        param_2 = unaff_d12;
        param_3 = unaff_d11;
      }
      goto LAB_03831a3c;
    }
    fVar17 = (float)FUN_03929130();
    fVar12 = *(float *)(unaff_x19 + 0x2d8);
    fVar17 = fVar17 * fVar12;
    fVar20 = (float)param_2;
    fVar21 = fVar20 * fVar12;
    fVar27 = (float)param_3;
    fVar12 = fVar27 * fVar12;
    fVar13 = (float)FUN_039290b4();
    fVar25 = *(float *)(unaff_x19 + 0x2d8);
    fVar13 = fVar13 * fVar25;
    fVar20 = fVar20 * fVar25;
    fVar27 = fVar27 * fVar25;
    FUN_038f9714(0);
    fVar28 = (float)unaff_d12;
    fVar25 = (float)unaff_d11;
    fStack0000000000000014 = unaff_s9;
    FUN_038f9680(unaff_s13 + fVar13,fVar28 + fVar20,fVar25 + fVar27,unaff_s9 + fVar13,
                 in_stack_00000028._4_4_ + fVar20,unaff_s10 + fVar27,0);
    FUN_038f9680(unaff_s13 - fVar13,fVar28 - fVar20,fVar25 - fVar27,fStack0000000000000014 - fVar13,
                 in_stack_00000028._4_4_ - fVar20,unaff_s10 - fVar27,0);
    FUN_038f9680(unaff_s13 + fVar17,fVar28 + fVar21,fVar25 + fVar12,fStack0000000000000014 + fVar17,
                 in_stack_00000028._4_4_ + fVar21,unaff_s10 + fVar12,0);
    FUN_038f9680(unaff_s13 - fVar17,fVar28 - fVar21,fVar25 - fVar12,fStack0000000000000014 - fVar17,
                 in_stack_00000028._4_4_ - fVar21,unaff_s10 - fVar12,0);
  }
  param_2 = (ulong)(uint)in_stack_00000028._4_4_;
  param_3 = (ulong)(uint)unaff_s10;
  FUN_038f9714(0);
LAB_03831a3c:
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  if ((((uVar7 & 1) == 0) || (*(long *)(unaff_x19 + 0x3a0) == 0)) ||
     (*(int *)(*(long *)(unaff_x19 + 0x3a0) + 0x18) < 2)) {
    return;
  }
  uStack00000000000000ac = 0;
  uVar7 = FUN_03833168();
  if ((uVar7 & 1) != 0) {
    param_2 = (ulong)DAT_00b55104;
    param_3 = (ulong)DAT_00b553e4;
    FUN_038f997c(DAT_00b553b0,param_2,param_3,DAT_00b55108,0);
    uVar15 = FUN_03959c54(&stack0x00000080,0);
    uVar7 = param_2;
    uVar24 = param_3;
    fVar12 = (float)FUN_03959c54(&stack0x00000080,0);
    fVar17 = (float)uVar7;
    fVar21 = (float)uVar24;
    fVar13 = (float)FUN_03959c60(&stack0x00000080,0);
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar20 = SQRT(fVar21 * fVar21 + fVar13 * fVar13 + fVar17 * fVar17);
    if (fVar20 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar13 = *pfVar9;
      fVar17 = pfVar9[1];
      fVar21 = pfVar9[2];
    }
    else {
      fVar13 = fVar13 / fVar20;
      fVar17 = fVar17 / fVar20;
      fVar21 = fVar21 / fVar20;
    }
    FUN_038f9680(uVar15,param_2,param_3,fVar12 + fVar13 * DAT_00b55658,
                 (float)uVar7 + fVar17 * DAT_00b55658,(float)uVar24 + fVar21 * DAT_00b55658,0);
  }
  uStack00000000000000ac = 0;
  uVar7 = FUN_038331d4();
  if ((uVar7 & 1) != 0) {
    FUN_038f997c(DAT_00b553b0,DAT_00b55104,DAT_00b553e4,DAT_00b55108,0);
    param_2 = _fStack0000000000000060 & 0xffffffff;
    param_3 = (ulong)(uint)fStack0000000000000064;
    if (DAT_03fed25d == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25d = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar17 = SQRT(in_stack_00000070 * in_stack_00000070 +
                  fStack0000000000000068 * fStack0000000000000068 +
                  fStack000000000000006c * fStack000000000000006c);
    if (fVar17 <= DAT_00b55370) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fStack0000000000000068 = *pfVar9;
      fStack000000000000006c = pfVar9[1];
      in_stack_00000070 = pfVar9[2];
    }
    else {
      fStack0000000000000068 = fStack0000000000000068 / fVar17;
      fStack000000000000006c = fStack000000000000006c / fVar17;
      in_stack_00000070 = in_stack_00000070 / fVar17;
    }
    FUN_038f9680(in_stack_00000058._4_4_,param_2,param_3,
                 in_stack_00000058._4_4_ + fStack0000000000000068 * DAT_00b55658,
                 fStack0000000000000060 + fStack000000000000006c * DAT_00b55658,
                 fStack0000000000000064 + in_stack_00000070 * DAT_00b55658,0);
  }
  puVar6 = PTR_DAT_03da6008;
  uVar5 = DAT_00b55680;
  uVar4 = DAT_00b5564c;
  uVar3 = DAT_00b55608;
  uVar2 = DAT_00b554bc;
  uVar23 = DAT_00b5510c;
  iVar10 = *(int *)(unaff_x19 + 0x3ac);
  iVar1 = *(int *)(unaff_x19 + 0x3b0);
  iVar11 = iVar1;
  if (((0 < iVar10) && (iVar11 = iVar10, 0 < iVar1)) && (iVar1 <= iVar10)) {
    iVar11 = iVar1;
  }
  lVar8 = *(long *)(unaff_x19 + 0x3a0);
  if (lVar8 != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar10) {
        if (*(int *)(unaff_x19 + 0x290) == 2) {
          lVar8 = *(long *)(unaff_x19 + 0x3b8);
          if (lVar8 == 0) break;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_03831ff8;
          uVar7 = (ulong)*(uint *)(lVar8 + 0x24);
          uVar24 = (ulong)*(uint *)(lVar8 + 0x28);
          uVar15 = FUN_035a0b0c(*(undefined4 *)(lVar8 + 0x20),uVar7,uVar24,0);
          lVar8 = *(long *)(unaff_x19 + 0x3b8);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_03831ff8;
          uVar19 = (ulong)*(uint *)(lVar8 + 0x30);
          uVar23 = *(undefined4 *)(lVar8 + 0x34);
          uVar16 = FUN_035a0b0c(*(undefined4 *)(lVar8 + 0x2c),uVar19,0);
          lVar8 = *(long *)(unaff_x19 + 0x3b8);
        }
        else {
          if (*(int *)(unaff_x19 + 0x290) != 1) {
            return;
          }
          lVar8 = *(long *)(unaff_x19 + 0x3c0);
          if (lVar8 == 0) break;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_03831ff8;
          uVar7 = (ulong)*(uint *)(lVar8 + 0x24);
          uVar24 = (ulong)*(uint *)(lVar8 + 0x28);
          uVar15 = FUN_035a0b0c(*(undefined4 *)(lVar8 + 0x20),uVar7,uVar24,0);
          lVar8 = *(long *)(unaff_x19 + 0x3c0);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_03831ff8;
          uVar19 = (ulong)*(uint *)(lVar8 + 0x30);
          uVar23 = *(undefined4 *)(lVar8 + 0x34);
          uVar16 = FUN_035a0b0c(*(undefined4 *)(lVar8 + 0x2c),uVar19,0);
          lVar8 = *(long *)(unaff_x19 + 0x3c0);
        }
        if (lVar8 != 0) {
          if (2 < *(uint *)(lVar8 + 0x18)) {
            uStack0000000000000004 = *(undefined4 *)(lVar8 + 0x3c);
            FUN_035a0b0c(*(undefined4 *)(lVar8 + 0x38),0);
            if (*(int *)(*(long *)
                          Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_03832034(uVar15,uVar7,uVar24,uVar16,uVar19,uVar23);
            return;
          }
LAB_03831ff8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        break;
      }
      uVar15 = FUN_02c7fa14(lVar8,iVar10,*(undefined8 *)puVar6);
      if ((iVar11 == 0) ||
         (uVar26 = 0x3f000000, uVar18 = uVar4, uVar14 = uVar3, uVar22 = uVar3, iVar10 < iVar11)) {
        uVar26 = 0x3f400000;
        uVar18 = uVar5;
        uVar14 = uVar23;
        uVar22 = uVar2;
      }
      FUN_038f997c(uVar14,uVar18,uVar22,uVar26,0);
      uVar7 = param_2;
      uVar24 = param_3;
      FUN_035a0b0c(uVar15,param_2,param_3,0);
      FUN_038f97b4(0);
      lVar8 = *(long *)(unaff_x19 + 0x3a0);
      if (lVar8 == 0) break;
      if (iVar10 < *(int *)(lVar8 + 0x18) + -1) {
        uVar16 = FUN_02c7fa14(lVar8,iVar10 + 1,*(undefined8 *)puVar6);
        uVar15 = FUN_035a0b0c(uVar15,param_2,param_3,0);
        uVar16 = FUN_035a0b0c(uVar16,uVar7,uVar24,0);
        FUN_038f9680(uVar15,param_2,param_3,uVar16,uVar7,uVar24,0);
        lVar8 = *(long *)(unaff_x19 + 0x3a0);
        uVar7 = param_2;
        uVar24 = param_3;
      }
      param_2 = uVar7;
      param_3 = uVar24;
      iVar10 = iVar10 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


