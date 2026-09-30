/*
FUNCTION_NAME: FUN_01c83368
ENTRY_POINT: 01c83368
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_18;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c83368(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_03fed7e4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 01c833a8 to 01d833bf has its CatchHandler @ 01c83af4 */
    thunk_FUN_01ad9084(Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
    DAT_03fed7e4 = 1;
  }
  if (6 < *(uint *)(param_4 + 0x10)) {
    return 0;
  }
  plVar7 = *(long **)(param_4 + 0x20);
  switch(*(uint *)(param_4 + 0x10)) {
  case 0:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((plVar7 == (long *)0x0) || (plVar7[0x18] == 0)) goto LAB_01c83adc;
                    /* try { // try from 01c833fc to 01d83403 has its CatchHandler @ 01c83914 */
    FUN_0391fb70(plVar7[0x18],1,0);
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined1 *)(param_4 + 0x2c) = 0;
    uVar9 = *(undefined4 *)((long)plVar7 + 0xfc);
    *(undefined8 *)(param_4 + 0x30) = 0;
    *(undefined4 *)(param_4 + 0x38) = uVar9;
    lVar8 = plVar7[0x14];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar8,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
      FUN_03924d58(uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
      uVar9 = 2;
      goto LAB_01c83a6c;
    }
    break;
  case 1:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    break;
  case 2:
                    /* try { // try from 01c83494 to 01d834ab has its CatchHandler @ 01c83af4 */
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (plVar7 == (long *)0x0) goto LAB_01c83adc;
    FUN_01c82c48(plVar7);
    uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
    FUN_03924d58(uVar5,0);
    *(undefined8 *)(param_4 + 0x18) = uVar5;
    thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
    uVar9 = 3;
    goto LAB_01c83a6c;
  case 3:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((plVar7 == (long *)0x0) || (plVar7[0x18] == 0)) goto LAB_01c83adc;
    FUN_0391fb70(plVar7[0x18],0,0);
    *(undefined1 *)(param_4 + 0x2c) = 1;
    goto LAB_01c83500;
  case 4:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((plVar7 != (long *)0x0) && (plVar7[0x18] != 0)) {
      FUN_0391fb70(plVar7[0x18],0,0);
      (**(code **)(*plVar7 + 0x3b8))(plVar7,*(undefined8 *)(*plVar7 + 0x3c0));
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
      FUN_03924d58(uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
      uVar9 = 5;
      goto LAB_01c83a6c;
    }
    goto LAB_01c83adc;
  case 5:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (plVar7 == (long *)0x0) goto LAB_01c83adc;
    if ((char)plVar7[0x2c] != '\0') {
      return 0;
    }
    lVar8 = plVar7[0x14];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar8,0,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined1 *)(param_4 + 0x3c) = 0;
    goto LAB_01c83830;
  case 6:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(char *)(param_4 + 0x3c) != '\0') {
      return 0;
    }
    if (plVar7 == (long *)0x0) goto LAB_01c83adc;
LAB_01c83830:
    lVar8 = plVar7[0x14];
    if (lVar8 != 0) {
      fVar10 = (float)FUN_03928280(lVar8,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      pfVar6 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar16 = *pfVar6;
      fVar17 = pfVar6[1];
      fVar18 = pfVar6[2];
      fVar11 = (float)FUN_03925cf4(0);
      fVar12 = *(float *)((long)plVar7 + 0x104);
      if (DAT_03fed51c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed51c = '\x01';
      }
      puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
      fVar14 = fVar16 - fVar10;
      fVar13 = fVar17 - param_2;
      fVar19 = fVar18 - param_3;
      fVar15 = fVar19 * fVar19 + fVar14 * fVar14 + fVar13 * fVar13;
      if ((fVar15 != 0.0) &&
         ((fVar11 = fVar11 * fVar12, fVar11 < 0.0 || (fVar11 * fVar11 < fVar15)))) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar15 = SQRT(fVar15);
        fVar16 = fVar10 + fVar11 * (fVar14 / fVar15);
        fVar17 = param_2 + fVar11 * (fVar13 / fVar15);
        fVar18 = param_3 + fVar11 * (fVar19 / fVar15);
      }
      FUN_039282dc(fVar16,lVar8,0);
      if (plVar7[0x14] == 0) goto LAB_01c83adc;
      fVar10 = (float)FUN_03928280(plVar7[0x14],0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
      fVar11 = *pfVar6;
      fVar12 = pfVar6[1];
      fVar16 = pfVar6[2];
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (SQRT((fVar18 - fVar16) * (fVar18 - fVar16) +
               (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar17 - fVar12) * (fVar17 - fVar12)) <=
          *(float *)(plVar7 + 0x21)) {
        *(undefined1 *)(param_4 + 0x3c) = 1;
      }
      if (2 < *(int *)(param_4 + 0x28)) {
        *(undefined1 *)(param_4 + 0x3c) = 1;
      }
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
      FUN_03924d58(uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
      uVar9 = 6;
      goto LAB_01c83a6c;
    }
    goto LAB_01c83adc;
  }
  if (*(char *)(param_4 + 0x2c) == '\0') {
    if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[0x14], lVar8 != 0)) {
      fVar10 = (float)FUN_03928280(lVar8,0);
      fVar16 = *(float *)(param_4 + 0x30);
      fVar17 = *(float *)(param_4 + 0x34);
      fVar18 = *(float *)(param_4 + 0x38);
      fVar11 = (float)FUN_03925cf4(0);
      fVar12 = *(float *)((long)plVar7 + 0x104);
      if (DAT_03fed51c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed51c = '\x01';
      }
      fVar14 = fVar16 - fVar10;
      fVar13 = fVar17 - param_2;
      fVar19 = fVar18 - param_3;
      fVar15 = fVar19 * fVar19 + fVar14 * fVar14 + fVar13 * fVar13;
      if ((fVar15 != 0.0) &&
         ((fVar11 = fVar11 * fVar12, fVar11 < 0.0 || (fVar11 * fVar11 < fVar15)))) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar15 = SQRT(fVar15);
        fVar16 = fVar10 + fVar11 * (fVar14 / fVar15);
        fVar17 = param_2 + fVar11 * (fVar13 / fVar15);
        fVar18 = param_3 + fVar11 * (fVar19 / fVar15);
      }
      FUN_039282dc(fVar16,lVar8,0);
      if (plVar7[0x14] != 0) {
        fVar10 = (float)FUN_03928280(plVar7[0x14],0);
        fVar11 = *(float *)(param_4 + 0x30);
        fVar12 = *(float *)(param_4 + 0x34);
        fVar16 = *(float *)(param_4 + 0x38);
        if (DAT_03fed25e == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25e = '\x01';
        }
        fVar10 = fVar10 - fVar11;
        fVar17 = fVar17 - fVar12;
        fVar18 = fVar18 - fVar16;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        if (SQRT(fVar18 * fVar18 + fVar10 * fVar10 + fVar17 * fVar17) <= *(float *)(plVar7 + 0x21))
        {
          *(undefined1 *)(param_4 + 0x2c) = 1;
        }
        iVar1 = *(int *)(param_4 + 0x28) + 1;
        *(int *)(param_4 + 0x28) = iVar1;
        if (iVar1 < 2) {
          FUN_01c82c48(plVar7);
        }
        else {
          *(undefined1 *)(param_4 + 0x2c) = 1;
          if (plVar7[0x18] == 0) goto LAB_01c83adc;
          FUN_0391fb70(plVar7[0x18],0,0);
        }
        uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__
                                  );
        FUN_03924d58(uVar5,0);
        *(undefined8 *)(param_4 + 0x18) = uVar5;
        thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
    }
  }
  else if (plVar7 != (long *)0x0) {
LAB_01c83500:
    lVar8 = plVar7[0x14];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar8,0);
    if ((uVar4 & 1) != 0) {
      if (plVar7[0x14] == 0) goto LAB_01c83adc;
      FUN_039282dc(*(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                   *(undefined4 *)(param_4 + 0x38),plVar7[0x14],0);
    }
    uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
    FUN_03924d58(uVar5,0);
    *(undefined8 *)(param_4 + 0x18) = uVar5;
    thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
    uVar9 = 4;
LAB_01c83a6c:
    *(undefined4 *)(param_4 + 0x10) = uVar9;
    return 1;
  }
LAB_01c83adc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


