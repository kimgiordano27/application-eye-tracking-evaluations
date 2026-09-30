/*
FUNCTION_NAME: FUN_01c336d8
ENTRY_POINT: 01c336d8
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


void FUN_01c336d8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long *param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  
  if ((DAT_03fed528 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0016FFB253A35DF0561356FCC4A3B414D0AE1C073B142EFE5666A1758C4C5592
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_35340AE5E6A27A672C0BD7E709A473DDB85A91D9C49B2DAAD1A3FF3E71C6677C
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_43618BFFFF91993B7ACFDDCE7F5DC0AA6E9246C922F5F6B84F7DA8095FB5F961
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_D8531D9B599ACFE84B07D041489F1000638214D6D645161C595D59107D7F519A
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_07FA6E88C946B2528C09C16C2FB8E9CDA49AFFAFC601774C437FD9F2DF3ECE01
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed528 = 1;
  }
  plVar10 = (long *)(param_5 + 0x80);
  lVar4 = *plVar10;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D
                              );
    FUN_02b591b0(lVar4,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8
                );
    *plVar10 = lVar4;
    thunk_FUN_01b4f09c(plVar10,lVar4);
    lVar4 = *plVar10;
    if (lVar4 == 0) goto LAB_01c33bb0;
  }
  puVar3 = 
  Field_<PrivateImplementationDetails>_07FA6E88C946B2528C09C16C2FB8E9CDA49AFFAFC601774C437FD9F2DF3ECE01
  ;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (0 < *(int *)(lVar4 + 0x18)) {
    uVar5 = FUN_02b59714(lVar4,0,*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_07FA6E88C946B2528C09C16C2FB8E9CDA49AFFAFC601774C437FD9F2DF3ECE01
                        );
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar6 = FUN_03922f24(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (*plVar10 == 0) goto LAB_01c33bb0;
      FUN_02b5b0dc(*plVar10,0,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2
                  );
    }
  }
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_0391f968(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar4 = *plVar10;
  if (lVar4 == 0) goto LAB_01c33bb0;
  if (4 < *(int *)(lVar4 + 0x18)) {
    uVar5 = FUN_02b59714(lVar4,0,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar6 = FUN_0391f968(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (((*plVar10 == 0) || (lVar4 = FUN_02b59714(*plVar10,0,*(undefined8 *)puVar3), lVar4 == 0))
         || (lVar4 = FUN_0391c27c(lVar4,0), lVar4 == 0)) goto LAB_01c33bb0;
      uVar5 = FUN_03928c2c(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar6 = FUN_03922f24(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*plVar10 == 0) || (lVar4 = FUN_02b59714(*plVar10,0,*(undefined8 *)puVar3), lVar4 == 0))
        goto LAB_01c33bb0;
        uVar5 = FUN_0391c2b8(lVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        FUN_03923a90(uVar5,0);
      }
    }
  }
  if (param_6 != (long *)0x0) {
    uVar5 = *(undefined8 *)(param_5 + 0x48);
    lVar4 = FUN_0391c27c(param_6,0);
    if (lVar4 != 0) {
      uVar12 = FUN_03928d34(lVar4,0);
      uVar15 = param_2;
      uVar17 = param_3;
      lVar4 = FUN_0391c27c(param_6,0);
      if (lVar4 != 0) {
        uVar13 = FUN_039274a0(lVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar4 = FUN_01f259b0(uVar12,param_2,param_3,uVar13,uVar15,uVar17,param_4,uVar5,
                             *(undefined8 *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__
                            );
        fVar14 = (float)param_2;
        fVar16 = (float)param_3;
        if (lVar4 != 0) {
          lVar7 = FUN_01ed712c(lVar4,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_43618BFFFF91993B7ACFDDCE7F5DC0AA6E9246C922F5F6B84F7DA8095FB5F961
                              );
          uVar5 = FUN_01ed7390(lVar4,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_0016FFB253A35DF0561356FCC4A3B414D0AE1C073B142EFE5666A1758C4C5592
                              );
          FUN_03923a90(uVar5,0);
          lVar8 = FUN_01ed7390(lVar4,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_35340AE5E6A27A672C0BD7E709A473DDB85A91D9C49B2DAAD1A3FF3E71C6677C
                              );
          if (lVar8 != 0) {
            uVar5 = FUN_0391c2b8(lVar8,0);
            FUN_03923a90(uVar5,0);
            lVar8 = FUN_0391fab4(lVar4,0);
            uVar5 = FUN_0391c27c(param_6,0);
            if (lVar8 != 0) {
              FUN_039294c8(lVar8,uVar5,0);
              lVar8 = FUN_0391fab4(lVar4,0);
              if ((lVar7 != 0) && (fVar11 = (float)FUN_01c33bb4(lVar7), lVar8 != 0)) {
                FUN_039282dc(-fVar11,-fVar14,-fVar16,lVar8,0);
                lVar4 = FUN_0391fab4(lVar4,0);
                if (lVar4 != 0) {
                  FUN_039294c8(lVar4,0,0);
                  uVar6 = FUN_0391f968(lVar7,0,0);
                  if ((uVar6 & 1) == 0) {
LAB_01c33b7c:
                    /* WARNING: Could not recover jumptable at 0x01c33bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*param_6 + 0x1f8))(param_6,lVar7,*(undefined8 *)(*param_6 + 0x200))
                    ;
                    return;
                  }
                  lVar4 = *plVar10;
                  if (lVar4 != 0) {
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *(long *)
                             Field_<PrivateImplementationDetails>_D8531D9B599ACFE84B07D041489F1000638214D6D645161C595D59107D7F519A
                    ;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar10 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = lVar7;
                        thunk_FUN_01b4f09c(plVar10,lVar7);
                      }
                      else {
                        FUN_02b599e4(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_01c33b7c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c33bb0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


