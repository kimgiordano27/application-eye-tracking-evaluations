/*
FUNCTION_NAME: FUN_01c223d8
ENTRY_POINT: 01c223d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_01c223d8(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,long *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  float *pfVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  if ((DAT_03fed48c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed48c = 1;
  }
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_c0 = 0;
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
  fVar20 = param_6 * param_6;
  fVar16 = SQRT(fVar20 + param_4 * param_4 + param_5 * param_5);
  if (fVar16 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    param_4 = *pfVar9;
    param_5 = pfVar9[1];
    param_6 = pfVar9[2];
  }
  else {
    param_4 = param_4 / fVar16;
    param_5 = param_5 / fVar16;
    param_6 = param_6 / fVar16;
  }
  lVar12 = param_7[0x15];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  local_e8 = param_1;
  fStack_e4 = param_2;
  local_e0 = param_3;
  fStack_dc = param_4;
  local_d8 = param_5;
  fStack_d4 = param_6;
  uVar4 = FUN_039575c8(0x7f800000,&local_e8,lVar12,0);
  puVar3 = 
  Method_OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_System_Collections_IEnumerator_Reset__
  ;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
  ;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((int)uVar4 < 1) {
    plVar14 = (long *)0x0;
  }
  else {
    uVar15 = 0;
    fVar16 = 0.0;
    plVar13 = (long *)0x0;
    do {
      lVar12 = param_7[0x15];
      if (lVar12 == 0) {
LAB_01c22794:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar12 = lVar12 + uVar15 * 0x2c;
      uStack_a8 = *(undefined4 *)(lVar12 + 0x48);
      uStack_c8 = *(undefined8 *)(lVar12 + 0x28);
      uVar19 = *(undefined8 *)(lVar12 + 0x20);
      uStack_c0 = *(undefined8 *)(lVar12 + 0x30);
      uStack_b0 = (undefined4)*(undefined8 *)(lVar12 + 0x40);
      uStack_ac = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x40) >> 0x20);
      uStack_b8 = (undefined4)*(undefined8 *)(lVar12 + 0x38);
      local_b4 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20);
      local_d0 = uVar19;
      lVar12 = FUN_03959c7c(&local_d0,0);
      fVar18 = (float)uVar19;
      if (lVar12 == 0) goto LAB_01c22794;
      plVar7 = (long *)FUN_01e8a9f8(lVar12,*(undefined8 *)puVar3);
      plVar14 = plVar13;
      fVar17 = fVar16;
      if (plVar7 != (long *)0x0) {
        lVar12 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_01c22630;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar2,1);
LAB_01c22630:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar12);
        }
        uVar10 = FUN_03922f24(plVar7,0,0);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_01c22794;
          uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
          uVar6 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
          if ((uVar6 & uVar5) != 0) {
            lVar12 = FUN_0391c27c(plVar7,0);
            if (lVar12 == 0) goto LAB_01c22794;
            fVar17 = (float)FUN_03928d34(lVar12,0);
            if (DAT_03fed25c == '\0') {
              thunk_FUN_01ad9084(
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                );
              DAT_03fed25c = '\x01';
            }
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar20 = fVar20 - param_3;
            fVar17 = SQRT(fVar20 * fVar20 +
                          (fVar17 - param_1) * (fVar17 - param_1) +
                          (fVar18 - param_2) * (fVar18 - param_2));
            uVar10 = FUN_03922f24(plVar13,0,0);
            plVar14 = plVar7;
            if (fVar16 <= fVar17 && (uVar10 & 1) == 0) {
              plVar14 = plVar13;
              fVar17 = fVar16;
            }
          }
        }
      }
      fVar16 = fVar17;
      uVar15 = uVar15 + 1;
      plVar13 = plVar14;
    } while (uVar15 != uVar4);
  }
  return plVar14;
}


