/*
FUNCTION_NAME: FUN_01c32ad8
ENTRY_POINT: 01c32ad8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c32ad8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar3 = Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__;
  if ((DAT_03fed524 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_74F2EF0A08BC1B6D74E98D0CF504F8F0A829B883BCEB38400547BB20A14EB710
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_6B86346BCDA28BB4FBD3A407D253606CD2A07448E617725E47D855B4A350893C
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_B505C81061D0543AD51E7647E8F8AD345BF4A526AB19F8801F2783BA61C579E3
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_83DEFF6870D3EFC3B06DA9FB88E60F98835F3F03A1BD4326D324499DD9442541
                      );
    thunk_FUN_01ad9084(
                      Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_DCC7E8451AA5F98600EB722B0B005DC89619B07D8BE56D037575A1DD86E1B79A
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_6680EF7C996EBE8B078F112B7F99E86B5365893EB69E158B378DB5CA24F42F85
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_FF70314AD1044274393BBB86781E5643965D15C6829CD74981F85C2851B0ED9F
                      );
    DAT_03fed524 = 1;
  }
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02b591b0(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_5 + 0x38) = uVar4;
  thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x38),uVar4);
  lVar5 = FUN_01c71b24(0);
  if (lVar5 != 0) {
    FUN_01c7e1a4(lVar5,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_FF70314AD1044274393BBB86781E5643965D15C6829CD74981F85C2851B0ED9F
                 ,0);
    lVar5 = FUN_01c71b24(0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar5 != 0) {
      FUN_01c7e1a4(lVar5,*(undefined8 *)
                          Field_<PrivateImplementationDetails>_6680EF7C996EBE8B078F112B7F99E86B5365893EB69E158B378DB5CA24F42F85
                   ,0);
      uVar4 = *(undefined8 *)(param_5 + 0x50);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_03923030(uVar4,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_83DEFF6870D3EFC3B06DA9FB88E60F98835F3F03A1BD4326D324499DD9442541
                                  );
        FUN_025bbcf4(lVar5,*(undefined8 *)
                            Field_<PrivateImplementationDetails>_B505C81061D0543AD51E7647E8F8AD345BF4A526AB19F8801F2783BA61C579E3
                    );
        plVar9 = (long *)(param_5 + 0x58);
        *plVar9 = lVar5;
        thunk_FUN_01b4f09c(plVar9,lVar5);
        if ((*(long *)(param_5 + 0x50) == 0) ||
           (lVar5 = FUN_01e8b468(*(long *)(param_5 + 0x50),
                                 *(undefined8 *)
                                  Field_<PrivateImplementationDetails>_74F2EF0A08BC1B6D74E98D0CF504F8F0A829B883BCEB38400547BB20A14EB710
                                ),
           puVar3 = 
           Field_<PrivateImplementationDetails>_DCC7E8451AA5F98600EB722B0B005DC89619B07D8BE56D037575A1DD86E1B79A
           , puVar2 = 
             Field_<PrivateImplementationDetails>_6B86346BCDA28BB4FBD3A407D253606CD2A07448E617725E47D855B4A350893C
           , lVar5 == 0)) goto LAB_01c32d48;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar11 = *plVar9;
            lVar10 = *(long *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
            lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
            FUN_03081994(lVar7,0);
            if (((lVar10 == 0) || (lVar8 = FUN_0391c27c(lVar10,0), lVar8 == 0)) ||
               (uVar13 = FUN_03928d34(lVar8,0), lVar7 == 0)) goto LAB_01c32d48;
            *(undefined4 *)(lVar7 + 0x10) = uVar13;
            *(undefined4 *)(lVar7 + 0x14) = param_2;
            *(undefined4 *)(lVar7 + 0x18) = param_3;
            lVar8 = FUN_0391c27c(lVar10,0);
            if (lVar8 == 0) goto LAB_01c32d48;
            uVar13 = FUN_039274a0(lVar8,0);
            *(undefined4 *)(lVar7 + 0x1c) = uVar13;
            *(undefined4 *)(lVar7 + 0x20) = param_2;
            *(undefined4 *)(lVar7 + 0x24) = param_3;
            *(undefined4 *)(lVar7 + 0x28) = param_4;
            if (lVar11 == 0) goto LAB_01c32d48;
            FUN_025bc5c4(lVar11,lVar10,lVar7,*(undefined8 *)puVar2);
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
      }
      FUN_01c32d58(param_5);
      return;
    }
  }
LAB_01c32d48:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


