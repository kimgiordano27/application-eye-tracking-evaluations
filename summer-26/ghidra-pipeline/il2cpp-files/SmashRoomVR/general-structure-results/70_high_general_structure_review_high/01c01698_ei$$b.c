/*
FUNCTION_NAME: ei$$b
ENTRY_POINT: 01c01698
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 ei__b(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  thunk_FUN_01b4f09c();
  if (*unaff_x21 != 0) {
    lVar6 = FUN_0391fab4(*unaff_x21,0);
    lVar7 = FUN_0391c27c();
    if ((lVar7 != 0) && (FUN_03928d34(lVar7,0), lVar6 != 0)) {
      FUN_03928dd4(lVar6,0);
      puVar5 = Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__;
      puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__;
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      fVar1 = DAT_00b55298;
      if (0.0 < *(float *)(unaff_x20 + 0x2c)) {
        iVar11 = 1;
        do {
          uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
          lVar6 = FUN_0391c27c();
          if (lVar6 == 0) goto LAB_01c018d0;
          fVar12 = (float)FUN_03928d34(lVar6,0);
          uVar15 = (ulong)(uint)*(float *)(unaff_x20 + 0x28);
          fVar13 = (float)FUN_0391a0e8(-*(float *)(unaff_x20 + 0x28),0);
          lVar6 = FUN_0391c27c();
          if (lVar6 == 0) goto LAB_01c018d0;
          FUN_03928d34(lVar6,0);
          lVar6 = FUN_0391c27c();
          if (lVar6 == 0) goto LAB_01c018d0;
          FUN_03928d34(lVar6,0);
          fVar14 = (float)FUN_0391a0e8(-*(float *)(unaff_x20 + 0x28),0);
          if (DAT_03fed256 == '\0') {
            thunk_FUN_01ad9084(puVar3);
            DAT_03fed256 = '\x01';
          }
          if (*unaff_x21 == 0) goto LAB_01c018d0;
          puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          uVar17 = *puVar9;
          uVar18 = puVar9[1];
          uVar19 = puVar9[2];
          uVar16 = puVar9[3];
          uVar8 = FUN_0391fab4(*unaff_x21,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          param_3 = param_3 + fVar14;
          lVar6 = FUN_01f25ab0(fVar12 + fVar13,uVar15,param_3,uVar17,uVar18,uVar19,uVar16,uVar10,
                               uVar8,*(undefined8 *)puVar4);
          if (lVar6 == 0) goto LAB_01c018d0;
          lVar6 = FUN_01ed712c(lVar6,*(undefined8 *)puVar5);
          if ((*(long *)(unaff_x20 + 0x40) == 0) || (lVar6 == 0)) goto LAB_01c018d0;
          FUN_038ea5f0(*(float *)(*(long *)(unaff_x20 + 0x40) + 0x20) * fVar1,lVar6,0);
          fVar12 = (float)iVar11;
          iVar11 = iVar11 + 1;
        } while (fVar12 < *(float *)(unaff_x20 + 0x2c));
      }
      uVar16 = *(undefined4 *)(unaff_x20 + 0x30);
      uVar10 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                 );
      FUN_03924d70(uVar16,uVar10,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar10);
      *(undefined4 *)(unaff_x19 + 0x10) = 2;
      return 1;
    }
  }
LAB_01c018d0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


