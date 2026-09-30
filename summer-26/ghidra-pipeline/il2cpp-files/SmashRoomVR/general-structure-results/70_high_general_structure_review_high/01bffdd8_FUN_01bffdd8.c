/*
FUNCTION_NAME: FUN_01bffdd8
ENTRY_POINT: 01bffdd8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


undefined8 FUN_01bffdd8(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
                    /* try { // try from 01bffdf4 to 01cffdff has its CatchHandler @ 01bffe24 */
                    /* try { // try from 01bffe00 to 01cffe4f has its CatchHandler @ 01bffd08 */
  if ((DAT_03fed373 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__1__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass8_0_<Triangulate>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass8_0_<Triangulate>b__1__
                      );
    thunk_FUN_01ad9084(Method_EzySlice_Triangulator_<>c_<MonotoneChain>b__2_0__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_<>c_<_ctor>b__47_0__
                      );
    thunk_FUN_01ad9084(Method_TurretScript_<AddForces>d__21_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(
                      Method_TurretScript_<RotateObject>d__19_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_TurretScript_<ShootDelay>d__20_System_Collections_IEnumerator_Reset__)
    ;
    DAT_03fed373 = 1;
  }
  lVar9 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  if (lVar9 != 0) {
    uVar16 = (ulong)(uint)*(float *)(lVar9 + 0x28);
    if (*(float *)(lVar9 + 0x28) <= *(float *)(param_4 + 0x28)) {
      uVar15 = FUN_0391c2b8(lVar9,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      FUN_03923a90(uVar15,0);
      return 0;
    }
    lVar4 = FUN_0391c27c(lVar9,0);
    if (lVar4 != 0) {
      uVar15 = FUN_03928d34(lVar4,0);
      uVar20 = *(undefined4 *)(lVar9 + 0x20);
      uVar3 = FUN_03920150(*(undefined4 *)(lVar9 + 0x54),0);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
      }
      lVar4 = FUN_03957ffc(uVar15,uVar16,param_3,uVar20,uVar3,0);
      puVar2 = 
      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass8_0_<Triangulate>b__0__
      ;
      puVar1 = 
      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__0__
      ;
      fVar18 = DAT_00b55370;
      fVar14 = DAT_00b55290;
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar11 = 0;
          do {
            lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass8_0_<Triangulate>b__1__
                                      );
            FUN_03081994(lVar5,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
LAB_01c00370:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            if (lVar5 == 0) goto LAB_01c00374;
            plVar10 = (long *)(lVar5 + 0x10);
            *plVar10 = *(long *)(lVar4 + 0x20 + uVar11 * 8);
            thunk_FUN_01b4f09c(plVar10);
            lVar6 = FUN_01b47fd0(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,5);
            if (lVar6 == 0) goto LAB_01c00374;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01c00370;
            *(undefined8 *)(lVar6 + 0x20) =
                 *(undefined8 *)
                  Method_TurretScript_<RotateObject>d__19_System_Collections_IEnumerator_Reset__;
            thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x20));
            if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_01c00370;
            *(undefined8 *)(lVar6 + 0x28) =
                 *(undefined8 *)
                  Method_TurretScript_<ShootDelay>d__20_System_Collections_IEnumerator_Reset__;
            thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x28));
            if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_01c00370;
            *(undefined8 *)(lVar6 + 0x30) =
                 *(undefined8 *)Method_EzySlice_Triangulator_<>c_<MonotoneChain>b__2_0__;
            thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x30));
            if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_01c00370;
            *(undefined8 *)(lVar6 + 0x38) =
                 *(undefined8 *)
                  Method_TurretScript_<AddForces>d__21_System_Collections_IEnumerator_Reset__;
            thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x38));
            if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_01c00370;
            *(undefined8 *)(lVar6 + 0x40) =
                 *(undefined8 *)
                  Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_<>c_<_ctor>b__47_0__;
            thunk_FUN_01b4f09c();
            uVar15 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__1__
                                       );
            FUN_02d7dbc4(uVar15,lVar5,*(undefined8 *)puVar2,0);
            uVar7 = FUN_01e79450(lVar6,uVar15,*(undefined8 *)puVar1);
            uVar17 = param_3;
            if ((uVar7 & 1) != 0) {
              if (*plVar10 == 0) goto LAB_01c00374;
              lVar5 = FUN_01e8a9f8(*plVar10,*(undefined8 *)
                                             Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__
                                  );
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar7 = FUN_0391f968(lVar5,0,0);
              uVar17 = param_3;
              if ((uVar7 & 1) != 0) {
                if (lVar5 == 0) goto LAB_01c00374;
                uVar7 = FUN_0395a324(lVar5,0);
                fVar22 = (float)uVar16;
                uVar17 = param_3;
                if ((uVar7 & 1) == 0) {
                  lVar6 = FUN_0391c27c(lVar9,0);
                  if (lVar6 == 0) goto LAB_01c00374;
                  fVar12 = (float)FUN_03928d34(lVar6,0);
                  if ((*plVar10 == 0) ||
                     (uVar16 = param_3, fVar23 = fVar22, lVar6 = FUN_0391c27c(*plVar10,0),
                     lVar6 == 0)) goto LAB_01c00374;
                  fVar13 = (float)FUN_03928d34(lVar6,0);
                  uVar17 = uVar16;
                  if (DAT_03fed25c == '\0') {
                    thunk_FUN_01ad9084(
                                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                      );
                    DAT_03fed25c = '\x01';
                  }
                  if (*(int *)(*(long *)
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  fVar12 = fVar12 - fVar13;
                  fVar22 = fVar22 - fVar23;
                  fVar23 = (float)param_3 - (float)uVar16;
                  uVar16 = (ulong)(uint)(fVar23 * fVar23);
                  fVar13 = SQRT(fVar23 * fVar23 + fVar12 * fVar12 + fVar22 * fVar22);
                  if (fVar14 < fVar13) {
                    fVar21 = *(float *)(lVar9 + 0x20);
                    fVar19 = *(float *)(lVar9 + 0x24);
                    if (DAT_03fed25d == '\0') {
                      thunk_FUN_01ad9084(
                                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                        );
                      DAT_03fed25d = '\x01';
                    }
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    if (fVar13 <= fVar18) {
                      if (DAT_03fed257 == '\0') {
                        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                        DAT_03fed257 = '\x01';
                      }
                      pfVar8 = *(float **)
                                (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                      fVar12 = *pfVar8;
                      fVar22 = pfVar8[1];
                      fVar23 = pfVar8[2];
                    }
                    else {
                      fVar12 = fVar12 / fVar13;
                      fVar22 = fVar22 / fVar13;
                      fVar23 = fVar23 / fVar13;
                    }
                    fVar19 = fVar19 * (1.0 - fVar13 / fVar21);
                    uVar16 = (ulong)(uint)(fVar19 * fVar22);
                    uVar17 = (ulong)(uint)(fVar19 * fVar23);
                    FUN_0395ae9c(fVar19 * fVar12,lVar5,5,0);
                  }
                }
              }
            }
            uVar11 = uVar11 + 1;
            param_3 = uVar17;
          } while ((long)uVar11 < (long)*(int *)(lVar4 + 0x18));
        }
        fVar18 = *(float *)(param_4 + 0x28);
        fVar14 = (float)FUN_03925cf4(0);
        *(float *)(param_4 + 0x28) = fVar18 + fVar14;
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
    }
  }
LAB_01c00374:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


