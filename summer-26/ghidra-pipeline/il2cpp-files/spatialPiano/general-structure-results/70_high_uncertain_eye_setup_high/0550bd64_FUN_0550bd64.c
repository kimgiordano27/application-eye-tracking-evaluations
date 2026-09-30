/*
FUNCTION_NAME: FUN_0550bd64
ENTRY_POINT: 0550bd64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_17;weak_xr_or_state_hits_17;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_17
*/


void FUN_0550bd64(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_06bbf589 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_02f08768(OVRInput_OVRControllerRTouch_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca3c0);
    DAT_06bbf589 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)PTR_DAT_067ca3c0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  plVar7 = (long *)thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo);
  FUN_0550d4f0(plVar7,0);
  puVar2 = OVRPlugin_OVRP_1_64_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_62_0_TypeInfo;
  if ((param_2 != (long *)0x0) && (plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x178))(plVar7,param_2[4],*(undefined8 *)(*plVar7 + 0x180));
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_0492c420(lVar8,*(undefined8 *)puVar1);
    puVar5 = OVRPlugin_OVRP_1_69_0_TypeInfo;
    puVar4 = OVRPlugin_OVRP_1_66_0_TypeInfo;
    puVar3 = OVRPlugin_OVRP_1_65_0_TypeInfo;
    puVar2 = OVRPlugin_OVRP_1_63_0_TypeInfo;
    puVar1 = OVRInput_OVRControllerRTouch_TypeInfo;
    if (plVar7[3] != 0) {
      FUN_03752930(&local_68,plVar7[3],*(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo);
      while (uVar9 = FUN_04afea94(&local_68,*(undefined8 *)puVar4), uVar11 = local_58,
            (uVar9 & 1) != 0) {
        FUN_0550110c(param_1,local_58);
        uVar10 = FUN_0550122c(param_1,uVar11);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0492cd24(lVar8,uVar11,uVar10,*(undefined8 *)puVar2);
      }
      FUN_04afea90(&local_68,*(undefined8 *)puVar3);
      if (lVar8 != 0) {
        lVar12 = *(long *)(param_1 + 0x10);
        lVar13 = param_2[4];
        iVar6 = FUN_0492ca50(lVar8,*(undefined8 *)puVar1);
        if (iVar6 < 1) {
          lVar8 = 0;
        }
        uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
        FUN_05521000(uVar11,lVar13,lVar8,0);
        if (lVar12 != 0) {
          FUN_054f6d80(lVar12,uVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


