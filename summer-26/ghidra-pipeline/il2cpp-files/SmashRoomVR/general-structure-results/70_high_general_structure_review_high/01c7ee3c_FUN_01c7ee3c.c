/*
FUNCTION_NAME: FUN_01c7ee3c
ENTRY_POINT: 01c7ee3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


void FUN_01c7ee3c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed7b3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0016FFB253A35DF0561356FCC4A3B414D0AE1C073B142EFE5666A1758C4C5592
                      );
                    /* try { // try from 01c7ee88 to 01d7ee8f has its CatchHandler @ 01c7f9ac */
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_35340AE5E6A27A672C0BD7E709A473DDB85A91D9C49B2DAAD1A3FF3E71C6677C
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_43618BFFFF91993B7ACFDDCE7F5DC0AA6E9246C922F5F6B84F7DA8095FB5F961
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7b3 = 1;
  }
  uVar2 = FUN_01c7eb04(param_5);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar3 = FUN_0391f968(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((param_6 != (long *)0x0) && (lVar4 = FUN_0391c27c(param_6,0), lVar4 != 0)) {
    uVar8 = FUN_03928d34(lVar4,0);
    uVar11 = param_2;
    uVar13 = param_3;
    lVar4 = FUN_0391c27c(param_6,0);
    if (lVar4 != 0) {
      uVar9 = FUN_039274a0(lVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar4 = FUN_01f259b0(uVar8,param_2,param_3,uVar9,uVar11,uVar13,param_4,uVar2,
                           *(undefined8 *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
      fVar10 = (float)param_2;
      fVar12 = (float)param_3;
      if (lVar4 != 0) {
        lVar5 = FUN_01ed712c(lVar4,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_43618BFFFF91993B7ACFDDCE7F5DC0AA6E9246C922F5F6B84F7DA8095FB5F961
                            );
        uVar2 = FUN_01ed7390(lVar4,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_0016FFB253A35DF0561356FCC4A3B414D0AE1C073B142EFE5666A1758C4C5592
                            );
        uVar3 = FUN_03923030(uVar2,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03923a90(uVar2,0);
          lVar6 = FUN_01ed7390(lVar4,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_35340AE5E6A27A672C0BD7E709A473DDB85A91D9C49B2DAAD1A3FF3E71C6677C
                              );
          if (lVar6 == 0) goto LAB_01c7f0d8;
          uVar2 = FUN_0391c2b8(lVar6,0);
          FUN_03923a90(uVar2,0);
        }
        lVar6 = FUN_0391fab4(lVar4,0);
        uVar2 = FUN_0391c27c(param_6,0);
        if (lVar6 != 0) {
          FUN_039294c8(lVar6,uVar2,0);
          lVar6 = FUN_0391fab4(lVar4,0);
          if ((lVar5 != 0) && (fVar7 = (float)FUN_01c33bb4(lVar5,0), lVar6 != 0)) {
            FUN_039282dc(-fVar7,-fVar10,-fVar12,lVar6,0);
            lVar4 = FUN_0391fab4(lVar4,0);
            if (lVar4 != 0) {
              FUN_039294c8(lVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x01c7f0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_6 + 0x1f8))(param_6,lVar5,*(undefined8 *)(*param_6 + 0x200));
              return;
            }
          }
        }
      }
    }
  }
LAB_01c7f0d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


