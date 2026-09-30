/*
FUNCTION_NAME: FUN_0640c418
ENTRY_POINT: 0640c418
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_0640c418(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000006e9c1fb & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_ValidateCommandEvent_TypeInfo);
    FUN_02e3ca1c(System_Xml_ValidateNames_TypeInfo);
    FUN_02e3ca1c(mixpanel_Value_TypeInfo);
    FUN_02e3ca1c(System_Xml_ValidatingReaderNodeData_TypeInfo);
    bRam0000000006e9c1fb = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x40)) {
    return;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x3c);
  FUN_0640c720(param_1);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0640c82c();
    puVar2 = System_Xml_ValidatingReaderNodeData_TypeInfo;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_052e8e18(&uStack_98,*(long *)(param_1 + 0x28),
                   *(undefined8 *)System_Xml_ValidatingReaderNodeData_TypeInfo);
      puVar1 = UnityEngine_UIElements_ValidateCommandEvent_TypeInfo;
      puStack_58 = puStack_90;
      uStack_60 = uStack_98;
      lStack_50 = lStack_88;
      uStack_98 = 0;
      puStack_90 = &uStack_60;
      while (uVar5 = FUN_04fc09e8(&uStack_60,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_0640c398(*(long *)(param_1 + 0x48),lStack_50,0x10);
      }
      FUN_04fc09e4(&uStack_60,*(undefined8 *)UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo);
      puVar3 = mixpanel_Value_TypeInfo;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_052e8944(*(long *)(param_1 + 0x28),*(undefined8 *)mixpanel_Value_TypeInfo);
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_052e8e18(&uStack_98,*(long *)(param_1 + 0x30),*(undefined8 *)puVar2);
          puVar2 = UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo;
          puStack_78 = puStack_90;
          uStack_80 = uStack_98;
          lStack_70 = lStack_88;
          uStack_98 = 0;
          puStack_90 = &uStack_80;
          while (uVar5 = FUN_04fc09e8(&uStack_80,*(undefined8 *)puVar1), lVar4 = lStack_70,
                (uVar5 & 1) != 0) {
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar5 = FUN_063ad460(lStack_70,0);
            if (((uVar5 & 1) != 0) || (uVar5 = FUN_063ad510(lVar4,0), (uVar5 & 1) != 0)) {
              uVar6 = FUN_063a8c80(lVar4,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_0651b0d0(uVar6,0);
              lVar7 = *(long *)(param_1 + 0x48);
              uVar6 = FUN_063a8c80(lVar4,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_0640c8d0(lVar7,lVar4,uVar6);
            }
          }
          FUN_04fc09e4(&uStack_80,*(undefined8 *)UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo
                      );
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_052e8944(*(long *)(param_1 + 0x30),*(undefined8 *)puVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


