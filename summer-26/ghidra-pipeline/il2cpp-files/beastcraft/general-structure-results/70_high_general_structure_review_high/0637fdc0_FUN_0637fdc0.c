/*
FUNCTION_NAME: FUN_0637fdc0
ENTRY_POINT: 0637fdc0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0637ffd8) */

void FUN_0637fdc0(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_38;
  
  puVar3 = UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_TypeInfo;
  if ((bRam0000000006e9ba69 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_Analytics_VRDeviceAnalyticAspect_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Analytics_VRDeviceMirrorAnalytic_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_ValidateCommandEvent_TypeInfo);
    FUN_02e3ca1c(System_Xml_ValidateNames_TypeInfo);
    FUN_02e3ca1c(System_Xml_ValidatingReaderNodeData_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6db30);
    bRam0000000006e9ba69 = 1;
  }
  puVar2 = UnityEngine_Analytics_VRDeviceAnalyticAspect_TypeInfo;
  local_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  local_38 = FUN_04b9ab5c(*(undefined8 *)puVar2);
  local_68 = &local_38;
  local_70 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_052e8e18(&local_88,param_2,*(undefined8 *)System_Xml_ValidatingReaderNodeData_TypeInfo);
  puVar5 = UnityEngine_UIElements_ValidateCommandEvent_TypeInfo;
  puVar4 = UnityEngine_Analytics_VRDeviceUserAnalytic_TypeInfo;
  puVar2 = PTR_DAT_06a6db30;
  uStack_58 = puStack_80;
  local_60 = local_88;
  local_50 = local_78;
  puStack_80 = &local_60;
  local_88 = 0;
  while( true ) {
    uVar6 = FUN_04fc09e8(&local_60,*(undefined8 *)puVar5);
    if ((uVar6 & 1) == 0) {
      FUN_04fc09e4(&local_60,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_06382748(*(long *)(param_1 + 0x40),local_38,param_3);
      puVar2 = UnityEngine_Analytics_VRDeviceMirrorAnalytic_TypeInfo;
      lVar7 = *local_68;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_04b9acc4(lVar7,*(undefined8 *)puVar2);
      if (local_70 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccbc();
      }
      return;
    }
    if (local_38 == 0) break;
    lVar7 = *(long *)(local_38 + 0x10);
    lVar9 = *(long *)puVar2;
    *(int *)(local_38 + 0x1c) = *(int *)(local_38 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(local_38 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(local_38 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = local_50;
      thunk_FUN_02ee2be8(puVar8);
    }
    else {
      FUN_03f2b60c(local_38,local_50,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


