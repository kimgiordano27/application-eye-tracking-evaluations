/*
FUNCTION_NAME: FUN_02e453dc
ENTRY_POINT: 02e453dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


void FUN_02e453dc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  puVar2 = StringLiteral_305;
  if ((DAT_03ff02a6 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_305);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(StringLiteral_4948);
    thunk_FUN_01ad9084(StringLiteral_4949);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_430);
    thunk_FUN_01ad9084(StringLiteral_4950);
    thunk_FUN_01ad9084(StringLiteral_4951);
    DAT_03ff02a6 = 1;
  }
  lVar6 = FUN_01e8b468(param_1,*(undefined8 *)puVar2);
  puVar5 = StringLiteral_4951;
  puVar4 = StringLiteral_4948;
  puVar3 = StringLiteral_430;
  puVar2 = Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar12 = *(long *)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar12 == 0) || (lVar7 = FUN_0391c2b8(lVar12,0), lVar7 == 0)) goto LAB_02e4567c;
        uVar8 = FUN_01ed712c(lVar7,*(undefined8 *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_2__
                            );
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar9 = FUN_03923030(uVar8,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_02e4567c;
          FUN_02907dd4(*(long *)(param_1 + 0x30),uVar8,*(undefined8 *)StringLiteral_4949);
        }
        lVar10 = thunk_FUN_01afaadc(*(undefined8 *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
        FUN_0391fe00(lVar10,*(undefined8 *)StringLiteral_4950,0);
        if (lVar10 == 0) goto LAB_02e4567c;
        lVar11 = FUN_0391fab4(lVar10,0);
        uVar8 = FUN_0391fab4(lVar7,0);
        if (lVar11 == 0) goto LAB_02e4567c;
        FUN_03929660(lVar11,uVar8,0,0);
        lVar7 = FUN_01ed7044(lVar10,*(undefined8 *)
                                     Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                            );
        uVar8 = FUN_03900d8c(lVar12,0);
        if (lVar7 == 0) goto LAB_02e4567c;
        FUN_03900dc8(lVar7,uVar8,0);
        lVar12 = FUN_01ed7044(lVar10,*(undefined8 *)puVar2);
        uVar8 = FUN_01f2f4f0(*(undefined8 *)puVar5,*(undefined8 *)puVar3);
        if (lVar12 == 0) goto LAB_02e4567c;
        FUN_038fe8bc(lVar12,uVar8,0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_02e4567c;
        FUN_02907dd4(*(long *)(param_1 + 0x28),lVar10,*(undefined8 *)puVar4);
        FUN_0391fb70(lVar10,0,0);
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return;
  }
LAB_02e4567c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


