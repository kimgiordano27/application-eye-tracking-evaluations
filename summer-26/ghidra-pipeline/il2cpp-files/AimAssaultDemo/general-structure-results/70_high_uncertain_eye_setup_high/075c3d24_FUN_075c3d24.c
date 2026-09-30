/*
FUNCTION_NAME: FUN_075c3d24
ENTRY_POINT: 075c3d24
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_075c3d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  
  puVar1 = OVRPlugin_OVRP_1_54_0_TypeInfo;
  if ((DAT_0826e845 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_0373b518(PTR_DAT_07d97418);
    FUN_0373b518(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_57_0_TypeInfo);
    DAT_0826e845 = 1;
  }
  lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_062855bc(lVar3,0);
  puVar1 = PTR_DAT_07d97418;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    uVar4 = FUN_0623d4dc(param_2,param_3,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                         (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1],0);
    puVar2 = OVRPlugin_OVRP_1_56_0_TypeInfo;
    puVar1 = OVRPlugin_OVRP_1_55_0_TypeInfo;
    if ((uVar4 & 1) != 0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar5 = thunk_FUN_037788cc();
      uVar11 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_58_0_TypeInfo);
      uVar8 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_59_0_TypeInfo);
      FUN_061a1bb8(uVar5,uVar11,uVar8,0);
      uVar11 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_5_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar11);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      uVar5 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
      FUN_044a3874(uVar5,lVar3,*(undefined8 *)puVar2,0);
      uVar4 = FUN_03f45cf0(uVar11,uVar5,*(undefined8 *)puVar1);
      if ((uVar4 & 1) == 0) {
        plVar6 = (long *)FUN_075c3bec();
        if (plVar6 == (long *)0x0) goto LAB_075c3f00;
        lVar9 = *plVar6;
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        uVar11 = *(undefined8 *)(lVar3 + 0x18);
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)OVRPlugin_OVRP_1_52_0_TypeInfo) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_075c3eb4;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo,5);
LAB_075c3eb4:
        (*(code *)*puVar7)(plVar6,uVar5,uVar11,puVar7[1]);
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar3 = FUN_075c3f68(*(long *)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0x10),
                               *(undefined8 *)(lVar3 + 0x18)), lVar3 != 0)) {
        FUN_05566214(lVar3,param_4,*(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo);
        return;
      }
    }
  }
LAB_075c3f00:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


