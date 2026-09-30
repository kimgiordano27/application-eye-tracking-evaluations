/*
FUNCTION_NAME: FUN_032a06d4
ENTRY_POINT: 032a06d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


void FUN_032a06d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  puVar3 = StringLiteral_4504;
  puVar2 = StringLiteral_2724;
  puVar1 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  if ((DAT_03ff5800 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4504);
    thunk_FUN_01ad9084(PTR_DAT_03d84478);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2724);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86550);
    DAT_03ff5800 = 1;
  }
  plVar4 = (long *)FUN_01b47fd0(*(undefined8 *)puVar2,1);
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  lVar5 = FUN_0304eec0(uVar8,0);
  if (plVar4 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar8,0);
    }
    puVar2 = PTR_DAT_03d86550;
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    plVar4[4] = lVar5;
    thunk_FUN_01b4f09c(plVar4 + 4,lVar5);
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_0391ff60(lVar5,*(undefined8 *)puVar2,plVar4,0);
    if (lVar5 != 0) {
      FUN_03923d4c(lVar5,0x3d,0);
      lVar6 = FUN_0391fab4(lVar5,0);
      if (lVar6 != 0) {
        FUN_03928dd4(param_1,param_2,param_3,lVar6,0);
        lVar6 = FUN_0391fab4(lVar5,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar1 = 
        Field_<PrivateImplementationDetails>_E7A6520935E622D270A66BB158A7049033032A904B991BB281E52C703BF7985B
        ;
        if (lVar6 != 0) {
          puVar7 = *(undefined4 **)
                    (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                    + 0xb8);
          FUN_03928f54(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
          lVar6 = FUN_01ed712c(lVar5,*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_03d84478;
          puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          if (lVar6 != 0) {
            FUN_038f0794(DAT_00b55388,lVar6,0);
            FUN_0391b78c(lVar6,0,0);
            uVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
            FUN_03908a38(uVar8,param_4,3,0,0);
            FUN_032a098c(lVar6,uVar8);
            FUN_032a0eec(uVar8,param_5);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_03923b4c(uVar8,0);
            FUN_03923b4c(lVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


