/*
FUNCTION_NAME: FUN_02e1b750
ENTRY_POINT: 02e1b750
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


void FUN_02e1b750(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_03ff0157 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4651);
    thunk_FUN_01ad9084(StringLiteral_4652);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4653);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_0270BFF41CB170C33C20788C368CB1B5A66B0FD0B98D638A827B783537583821
                      );
    thunk_FUN_01ad9084(StringLiteral_4654);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_09FDC69AA887AC8D36E0C8284C7B1D53E580E4880B72A67FF80D7E38317115D9
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_04ECF357DB29240731984FBFCB5523B863107EE624BB1EC416660A70471964A6
                      );
    DAT_03ff0157 = 1;
  }
  FUN_02e1ba74(param_1,param_2);
  if (param_1[0x2b] != 0) {
    FUN_03920f1c(param_1,param_1[0x2b],0);
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1[0x19] != 0) {
    uVar5 = *(undefined8 *)(param_1[0x19] + 0x118);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar5,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = param_1[0x1b];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(lVar6,0);
      if ((uVar3 & 1) == 0) {
        FUN_02e1bbf8(param_1);
      }
      else {
        if (param_1[0x19] == 0) goto LAB_02e1ba70;
        FUN_02e1bb14(param_1[0x19],param_1[0x1b]);
      }
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
      *(undefined1 *)(*(long *)(param_2 + 0x18) + 0x1b9) = 1;
      *(undefined1 *)(param_1 + 0x2f) = 1;
      if (*(int *)((long)param_1 + 0x104) == 0) {
        uVar5 = FUN_02e1bd60(param_1);
      }
      else {
        FUN_02e1aa40();
        uVar5 = FUN_02e1bde8(param_1,*(undefined8 *)(param_2 + 0x18));
      }
      FUN_03920cb0(param_1,uVar5,0);
      if (param_1[5] != 0) {
        FUN_022248f0(param_1[5],param_1,*(undefined8 *)(param_2 + 0x18),
                     *(undefined8 *)
                      Field_<PrivateImplementationDetails>_04ECF357DB29240731984FBFCB5523B863107EE624BB1EC416660A70471964A6
                    );
        puVar2 = StringLiteral_4651;
        if (*(long *)(param_2 + 0x18) != 0) {
          lVar6 = *(long *)(*(long *)(param_2 + 0x18) + 0x168);
          uVar5 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_4653);
          FUN_02200024(uVar5,param_1,*(undefined8 *)puVar2,0);
          if (lVar6 != 0) {
            FUN_02203a6c(lVar6,uVar5,*(undefined8 *)StringLiteral_4654);
            puVar2 = StringLiteral_4652;
            if (*(long *)(param_2 + 0x18) != 0) {
              lVar6 = *(long *)(*(long *)(param_2 + 0x18) + 0x148);
              uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                          Field_<PrivateImplementationDetails>_0270BFF41CB170C33C20788C368CB1B5A66B0FD0B98D638A827B783537583821
                                        );
              FUN_02200c24(uVar5,param_1,*(undefined8 *)puVar2,0);
              if (lVar6 != 0) {
                FUN_02224644(lVar6,uVar5,
                             *(undefined8 *)
                              Field_<PrivateImplementationDetails>_09FDC69AA887AC8D36E0C8284C7B1D53E580E4880B72A67FF80D7E38317115D9
                            );
                lVar6 = param_1[0x21];
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar3 = FUN_03923030(lVar6,0);
                if ((uVar3 & 1) != 0) {
                  if (DAT_03fed51b == '\0') {
                    thunk_FUN_01ad9084(
                                      Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                                      );
                    DAT_03fed51b = '\x01';
                  }
                  puVar2 = 
                  Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                  ;
                  uVar5 = **(undefined8 **)
                            (*(long *)
                              Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                            + 0xb8);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar3 = FUN_03923030(uVar5,0);
                  if ((uVar3 & 1) != 0) {
                    if (DAT_03fed51b == '\0') {
                      thunk_FUN_01ad9084(
                                        Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                                        );
                      DAT_03fed51b = '\x01';
                    }
                    lVar7 = param_1[0x21];
                    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
                    lVar6 = FUN_0391c27c(param_1,0);
                    if ((lVar6 == 0) || (FUN_03928d34(lVar6,0), lVar4 == 0)) goto LAB_02e1ba70;
                    FUN_02df26c0(lVar4,lVar7,0);
                  }
                }
                    /* WARNING: Could not recover jumptable at 0x02e1ba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*param_1 + 0x4c8))(param_1,*(undefined8 *)(*param_1 + 0x4d0));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02e1ba70:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


