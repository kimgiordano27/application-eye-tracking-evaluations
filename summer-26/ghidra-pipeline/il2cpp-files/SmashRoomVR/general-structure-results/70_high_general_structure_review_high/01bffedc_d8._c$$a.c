/*
FUNCTION_NAME: d8.<>c$$a
ENTRY_POINT: 01bffedc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


undefined8 d8_<>c__a(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 in_w8;
  float *pfVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *(undefined4 *)(unaff_x19 + 0x10) = in_w8;
  if (unaff_x20 != 0) {
    uVar15 = (ulong)(uint)*(float *)(unaff_x20 + 0x28);
    if (*(float *)(unaff_x20 + 0x28) <= *(float *)(unaff_x19 + 0x28)) {
      uVar14 = FUN_0391c2b8();
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      FUN_03923a90(uVar14,0);
      return 0;
    }
    lVar4 = FUN_0391c27c();
    if (lVar4 != 0) {
      uVar14 = FUN_03928d34(lVar4,0);
      uVar19 = *(undefined4 *)(unaff_x20 + 0x20);
      uVar3 = FUN_03920150(*(undefined4 *)(unaff_x20 + 0x54),0);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
      }
      lVar4 = FUN_03957ffc(uVar14,uVar15,param_3,uVar19,uVar3,0);
      puVar2 = 
      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass8_0_<Triangulate>b__0__
      ;
      puVar1 = 
      Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__0__
      ;
      fVar17 = DAT_00b55370;
      fVar13 = DAT_00b55290;
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar10 = 0;
          do {
            lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass8_0_<Triangulate>b__1__
                                      );
            FUN_03081994(lVar5,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
LAB_01c00370:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            if (lVar5 == 0) goto LAB_01c00374;
            plVar9 = (long *)(lVar5 + 0x10);
            *plVar9 = *(long *)(lVar4 + 0x20 + uVar10 * 8);
            thunk_FUN_01b4f09c(plVar9);
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
            uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_UnityEngine_ProBuilder_MeshOperations_Triangulation_<>c__DisplayClass7_0_<Triangulate>b__1__
                                       );
            FUN_02d7dbc4(uVar14,lVar5,*(undefined8 *)puVar2,0);
            uVar7 = FUN_01e79450(lVar6,uVar14,*(undefined8 *)puVar1);
            uVar16 = param_3;
            if ((uVar7 & 1) != 0) {
              if (*plVar9 == 0) goto LAB_01c00374;
              lVar5 = FUN_01e8a9f8(*plVar9,*(undefined8 *)
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
              uVar16 = param_3;
              if ((uVar7 & 1) != 0) {
                if (lVar5 == 0) goto LAB_01c00374;
                uVar7 = FUN_0395a324(lVar5,0);
                fVar21 = (float)uVar15;
                uVar16 = param_3;
                if ((uVar7 & 1) == 0) {
                  lVar6 = FUN_0391c27c();
                  if (lVar6 == 0) goto LAB_01c00374;
                  fVar11 = (float)FUN_03928d34(lVar6,0);
                  if ((*plVar9 == 0) ||
                     (uVar15 = param_3, fVar22 = fVar21, lVar6 = FUN_0391c27c(*plVar9,0), lVar6 == 0
                     )) goto LAB_01c00374;
                  fVar12 = (float)FUN_03928d34(lVar6,0);
                  uVar16 = uVar15;
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
                  fVar11 = fVar11 - fVar12;
                  fVar21 = fVar21 - fVar22;
                  fVar22 = (float)param_3 - (float)uVar15;
                  uVar15 = (ulong)(uint)(fVar22 * fVar22);
                  fVar12 = SQRT(fVar22 * fVar22 + fVar11 * fVar11 + fVar21 * fVar21);
                  if (fVar13 < fVar12) {
                    fVar20 = *(float *)(unaff_x20 + 0x20);
                    fVar18 = *(float *)(unaff_x20 + 0x24);
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
                    if (fVar12 <= fVar17) {
                      if (DAT_03fed257 == '\0') {
                        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                        DAT_03fed257 = '\x01';
                      }
                      pfVar8 = *(float **)
                                (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                      fVar11 = *pfVar8;
                      fVar21 = pfVar8[1];
                      fVar22 = pfVar8[2];
                    }
                    else {
                      fVar11 = fVar11 / fVar12;
                      fVar21 = fVar21 / fVar12;
                      fVar22 = fVar22 / fVar12;
                    }
                    fVar18 = fVar18 * (1.0 - fVar12 / fVar20);
                    uVar15 = (ulong)(uint)(fVar18 * fVar21);
                    uVar16 = (ulong)(uint)(fVar18 * fVar22);
                    FUN_0395ae9c(fVar18 * fVar11,lVar5,5,0);
                  }
                }
              }
            }
            uVar10 = uVar10 + 1;
            param_3 = uVar16;
          } while ((long)uVar10 < (long)*(int *)(lVar4 + 0x18));
        }
        fVar17 = *(float *)(unaff_x19 + 0x28);
        fVar13 = (float)FUN_03925cf4(0);
        *(float *)(unaff_x19 + 0x28) = fVar17 + fVar13;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
  }
LAB_01c00374:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


