/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<dr>
ENTRY_POINT: 01c87a04
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<dr>(long param_1,undefined1 param_2 [16])

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
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
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000180;
  undefined4 uStack0000000000000190;
  
  uStack0000000000000080 = param_2._0_8_;
  *(long *)(param_1 + 0x107) = param_2._8_8_;
  *(undefined8 *)(param_1 + 0xff) = uStack0000000000000080;
                    /* try { // try from 01c87a0c to 01d87a13 has its CatchHandler @ 01c87ba8 */
  uStack0000000000000190 = 0;
  uStack0000000000000110 = 0;
  uStack00000000000000c0 = 0;
  uStack0000000000000090 = uStack0000000000000080;
  uStack00000000000000a0 = uStack0000000000000080;
  uStack00000000000000b0 = uStack0000000000000080;
  uStack00000000000000d0 = uStack0000000000000080;
  uStack00000000000000e0 = uStack0000000000000080;
  uStack00000000000000f0 = uStack0000000000000080;
  uStack0000000000000100 = uStack0000000000000080;
  uStack0000000000000120 = uStack0000000000000080;
  uStack0000000000000130 = uStack0000000000000080;
  uStack0000000000000150 = uStack0000000000000080;
  uStack0000000000000160 = uStack0000000000000080;
  uStack0000000000000170 = uStack0000000000000080;
  uStack0000000000000180 = uStack0000000000000080;
  if (*(char *)(unaff_x21 + 599) == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    *(undefined1 *)(unaff_x21 + 599) = 1;
  }
                    /* try { // try from 01c87a64 to 01d87a7b has its CatchHandler @ 01c87c30 */
  uVar16 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  *(undefined8 *)(unaff_x19 + 0x88) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x90) = uVar16;
  uVar16 = FUN_0394f4d8(*unaff_x20,0);
  *(undefined4 *)(unaff_x19 + 0x94) = uVar16;
  iVar3 = FUN_0394fd94(0);
  uVar5 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0);
  if ((((uVar5 & 1) == 0) &&
      (uVar5 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0), iVar3 < 1)) &&
     ((uVar5 & 1) == 0)) goto LAB_01c8815c;
  fVar17 = 10.0;
  *(float *)(unaff_x19 + 0x94) = *(float *)(unaff_x19 + 0x94) * 10.0;
  uVar5 = FUN_0394fa3c(0x69,0);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x54) = 1;
  }
                    /* try { // try from 01c87ac8 to 01d87acf has its CatchHandler @ 01c87ba0 */
  uVar5 = FUN_0394fa3c(0x66,0);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x54) = 0;
  }
  uVar5 = FUN_0394fa3c(0x73,0);
  if ((uVar5 & 1) != 0) {
    *(byte *)(unaff_x19 + 0x58) = *(byte *)(unaff_x19 + 0x58) ^ 1;
  }
  uVar5 = FUN_0394f76c(1,0);
  if ((uVar5 & 1) != 0) {
    uVar16 = FUN_0394f4d8(*(undefined8 *)
                           Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                          ,0);
    *(undefined4 *)(unaff_x19 + 0x84) = uVar16;
                    /* try { // try from 01c87b2c to 01d87b9b has its CatchHandler @ 01c87c30 */
    fVar12 = (float)FUN_0394f4d8(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                                 ,0);
    fVar17 = DAT_00b555a8;
    fVar18 = *(float *)(unaff_x19 + 0x84);
    *(float *)(unaff_x19 + 0x80) = fVar12;
    if ((fVar17 < fVar18) || (fVar18 < DAT_00b552f8)) {
      fVar19 = *(float *)(unaff_x19 + 0x44) - fVar18 * *(float *)(unaff_x19 + 100);
      fVar18 = *(float *)(unaff_x19 + 0x48);
      if (fVar19 <= *(float *)(unaff_x19 + 0x48)) {
        fVar18 = fVar19;
      }
      if (fVar19 < *(float *)(unaff_x19 + 0x4c)) {
        fVar18 = *(float *)(unaff_x19 + 0x4c);
      }
      *(float *)(unaff_x19 + 0x44) = fVar18;
    }
    if ((fVar17 < fVar12) || (fVar17 = DAT_00b552f8, fVar12 < DAT_00b552f8)) {
      fVar18 = *(float *)(unaff_x19 + 0x50) + fVar12 * *(float *)(unaff_x19 + 100);
      fVar17 = fVar18 + -360.0;
      *(float *)(unaff_x19 + 0x50) = fVar18;
      fVar12 = fVar17;
      if ((360.0 < fVar18) || (fVar12 = fVar18, fVar18 < 0.0)) {
        fVar17 = fVar12 + 360.0;
        fVar18 = fVar17;
        if (0.0 <= fVar12) {
          fVar18 = fVar12;
        }
        *(float *)(unaff_x19 + 0x50) = fVar18;
      }
    }
  }
  if (iVar3 == 1) {
    FUN_0394f848(&stack0x00000030,0,0);
    memcpy(&stack0x00000150,&stack0x00000030,0x44);
    iVar4 = FUN_0394f308(&stack0x00000150,0);
    if (iVar4 == 1) {
      FUN_0394f848(&stack0x00000030,0,0);
      memcpy(&stack0x00000150,&stack0x00000030,0x44);
      fVar18 = (float)FUN_0394f2e8(&stack0x00000150,0);
      fVar12 = DAT_00b555a8;
      if ((DAT_00b555a8 < fVar17) || (fVar17 < DAT_00b552f8)) {
        fVar19 = *(float *)(unaff_x19 + 0x44) + fVar17 * DAT_00b555e4;
        fVar17 = *(float *)(unaff_x19 + 0x48);
        if (fVar19 <= *(float *)(unaff_x19 + 0x48)) {
          fVar17 = fVar19;
        }
        if (fVar19 < *(float *)(unaff_x19 + 0x4c)) {
          fVar17 = *(float *)(unaff_x19 + 0x4c);
        }
        *(float *)(unaff_x19 + 0x44) = fVar17;
      }
      if ((fVar12 < fVar18) || (fVar17 = DAT_00b552f8, fVar18 < DAT_00b552f8)) {
        fVar18 = fVar18 * DAT_00b55290 + *(float *)(unaff_x19 + 0x50);
        fVar17 = fVar18 + -360.0;
        *(float *)(unaff_x19 + 0x50) = fVar18;
        fVar12 = fVar17;
        if ((360.0 < fVar18) || (fVar12 = fVar18, fVar18 < 0.0)) {
          fVar17 = fVar12 + 360.0;
          fVar18 = fVar17;
          if (0.0 <= fVar12) {
            fVar18 = fVar12;
          }
          *(float *)(unaff_x19 + 0x50) = fVar18;
        }
      }
    }
  }
  uVar5 = FUN_0394f76c(0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_038f1768(0);
    FUN_0394fadc(0);
    if (lVar6 == 0) goto LAB_01c881c8;
    FUN_038f1588(&stack0x00000018,lVar6,0);
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_039560f4(0x43960000);
    if ((uVar5 & 1) != 0) {
      uVar7 = FUN_03959c7c(&stack0x00000120,0);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar7,uVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = FUN_03959c7c(&stack0x00000120,0);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
        thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x30),uVar7);
        *(undefined4 *)(unaff_x19 + 0x50) = 0;
        *(undefined1 *)(unaff_x19 + 0x58) = *(undefined1 *)(unaff_x19 + 0x5a);
      }
      else {
        *(undefined4 *)(unaff_x19 + 0x50) = 0;
      }
    }
  }
  uVar5 = FUN_0394f76c(2,0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar5 & 1) != 0) {
    plVar8 = (long *)(unaff_x19 + 0x28);
    lVar6 = *plVar8;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar7,lVar6,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x30);
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
      *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
      thunk_FUN_01b4f09c(plVar8,uVar7);
      lVar11 = *(long *)(unaff_x19 + 0x28);
      lVar6 = *(long *)(unaff_x19 + 0x30);
      if (lVar6 == 0) goto LAB_01c881c8;
LAB_01c87efc:
      plVar10 = (long *)(unaff_x19 + 0x30);
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
      uVar1 = *(undefined1 *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x58) = 0;
      *(undefined1 *)(unaff_x19 + 0x5a) = uVar1;
    }
    uVar16 = FUN_0394f4d8(*(undefined8 *)
                           Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                          ,0);
    *(undefined4 *)(unaff_x19 + 0x84) = uVar16;
    uVar16 = FUN_0394f4d8(*(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                          ,0);
    *(undefined4 *)(unaff_x19 + 0x80) = uVar16;
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_01c881c8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    fVar17 = *(float *)(unaff_x19 + 0x84);
    fVar18 = 0.0;
    fVar12 = (float)thunk_FUN_03929a40(*(long *)(unaff_x19 + 0x20),0);
    *(float *)(unaff_x19 + 0x88) = fVar12;
    *(float *)(unaff_x19 + 0x8c) = fVar17;
    *(float *)(unaff_x19 + 0x90) = fVar18;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_01c881c8;
    fVar17 = -fVar17;
    FUN_039299b8(-fVar12,fVar17,-fVar18,*(long *)(unaff_x19 + 0x28),0,0);
  }
  if (iVar3 == 2) {
    FUN_0394f848(&stack0x00000030,0,0);
    memcpy(&stack0x000000d0,&stack0x00000030,0x44);
    FUN_0394f848(&stack0x00000030,1,0);
    memcpy(&stack0x00000080,&stack0x00000030,0x44);
    fVar19 = (float)FUN_0394f2c8(&stack0x000000d0,0);
    fVar12 = fVar17;
    fVar13 = (float)FUN_0394f2e8(&stack0x000000d0,0);
    fVar17 = fVar17 - fVar12;
    fVar14 = (float)FUN_0394f2c8(&stack0x00000080,0);
    fVar18 = fVar12;
    fVar15 = (float)FUN_0394f2e8(&stack0x00000080,0);
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
    fVar18 = (float)FUN_0394f2c8(&stack0x000000d0,0);
    fVar12 = fVar17;
    fVar19 = (float)FUN_0394f2c8(&stack0x00000080,0);
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
      fVar12 = fVar17 * 0.25 + *(float *)(unaff_x19 + 0x38);
      fVar17 = *(float *)(unaff_x19 + 0x3c);
      if (fVar12 <= *(float *)(unaff_x19 + 0x3c)) {
        fVar17 = fVar12;
      }
      if (fVar12 < *(float *)(unaff_x19 + 0x40)) {
        fVar17 = *(float *)(unaff_x19 + 0x40);
      }
      *(float *)(unaff_x19 + 0x38) = fVar17;
    }
  }
LAB_01c8815c:
  fVar17 = *(float *)(unaff_x19 + 0x94);
  if ((fVar17 < DAT_00b552f8) || (DAT_00b555a8 < fVar17)) {
    fVar12 = *(float *)(unaff_x19 + 0x38) + fVar17 * -5.0;
    fVar17 = *(float *)(unaff_x19 + 0x3c);
    if (fVar12 <= *(float *)(unaff_x19 + 0x3c)) {
      fVar17 = fVar12;
    }
    if (fVar12 < *(float *)(unaff_x19 + 0x40)) {
      fVar17 = *(float *)(unaff_x19 + 0x40);
    }
    *(float *)(unaff_x19 + 0x38) = fVar17;
  }
  return;
}


