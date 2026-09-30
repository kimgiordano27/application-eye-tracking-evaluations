/*
FUNCTION_NAME: ei$$d
ENTRY_POINT: 01c015cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 ei__d(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool in_ZR;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int in_w8;
  undefined4 *puVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if (in_ZR) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x20 == 0) goto LAB_01c018d0;
                    /* catch() { ... } // from try @ 01c01604 with catch @ 01c0162c */
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(uVar6,0);
  }
  else {
    if (in_w8 == 1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      lVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar7,*(undefined8 *)
                          Method_Unity_VisualScripting_TypeUtility_<GetTypesSafely>d__35_MoveNext__,
                   0);
      if (unaff_x20 != 0) {
        plVar11 = (long *)(unaff_x20 + 0x38);
        *plVar11 = lVar7;
        thunk_FUN_01b4f09c(plVar11,lVar7);
        if (*plVar11 != 0) {
          lVar7 = FUN_0391fab4(*plVar11,0);
          lVar8 = FUN_0391c27c();
          if ((lVar8 != 0) && (FUN_03928d34(lVar8,0), lVar7 != 0)) {
            FUN_03928dd4(lVar7,0);
            puVar5 = 
            Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__;
            puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__;
            puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
            puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            fVar1 = DAT_00b55298;
            if (0.0 < *(float *)(unaff_x20 + 0x2c)) {
              iVar12 = 1;
              do {
                uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
                lVar7 = FUN_0391c27c();
                if (lVar7 == 0) goto LAB_01c018d0;
                fVar13 = (float)FUN_03928d34(lVar7,0);
                uVar16 = (ulong)(uint)*(float *)(unaff_x20 + 0x28);
                fVar14 = (float)FUN_0391a0e8(-*(float *)(unaff_x20 + 0x28),0);
                lVar7 = FUN_0391c27c();
                if (lVar7 == 0) goto LAB_01c018d0;
                FUN_03928d34(lVar7,0);
                lVar7 = FUN_0391c27c();
                if (lVar7 == 0) goto LAB_01c018d0;
                FUN_03928d34(lVar7,0);
                fVar15 = (float)FUN_0391a0e8(-*(float *)(unaff_x20 + 0x28),0);
                if (DAT_03fed256 == '\0') {
                  thunk_FUN_01ad9084(puVar3);
                  DAT_03fed256 = '\x01';
                }
                if (*plVar11 == 0) goto LAB_01c018d0;
                puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                uVar18 = *puVar10;
                uVar19 = puVar10[1];
                uVar20 = puVar10[2];
                uVar17 = puVar10[3];
                uVar9 = FUN_0391fab4(*plVar11,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                param_3 = param_3 + fVar15;
                lVar7 = FUN_01f25ab0(fVar13 + fVar14,uVar16,param_3,uVar18,uVar19,uVar20,uVar17,
                                     uVar6,uVar9,*(undefined8 *)puVar4);
                if (lVar7 == 0) goto LAB_01c018d0;
                lVar7 = FUN_01ed712c(lVar7,*(undefined8 *)puVar5);
                if ((*(long *)(unaff_x20 + 0x40) == 0) || (lVar7 == 0)) goto LAB_01c018d0;
                FUN_038ea5f0(*(float *)(*(long *)(unaff_x20 + 0x40) + 0x20) * fVar1,lVar7,0);
                fVar13 = (float)iVar12;
                iVar12 = iVar12 + 1;
              } while (fVar13 < *(float *)(unaff_x20 + 0x2c));
            }
            uVar17 = *(undefined4 *)(unaff_x20 + 0x30);
            uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                        Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                      );
            FUN_03924d70(uVar17,uVar6,0);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
            thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar6);
            *(undefined4 *)(unaff_x19 + 0x10) = 2;
            return 1;
          }
        }
      }
LAB_01c018d0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (in_w8 == 0) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x40400000,uVar6,0);
                    /* try { // try from 01c01604 to 01d01617 has its CatchHandler @ 01c0162c */
      *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar6);
                    /* try { // try from 01c01618 to 01d0163f has its CatchHandler @ 01c0158c */
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}


