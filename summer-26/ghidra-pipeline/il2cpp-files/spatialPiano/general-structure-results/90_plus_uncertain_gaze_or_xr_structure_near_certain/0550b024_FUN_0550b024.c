/*
FUNCTION_NAME: FUN_0550b024
ENTRY_POINT: 0550b024
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0550b024(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_06bbf583 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cd360);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbc88);
    FUN_02f08768(OVRPlugin_OVRP_1_51_0_TypeInfo);
    DAT_06bbf583 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_50_0_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_1_50_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  uVar8 = *(undefined8 *)OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar2 = (long *)FUN_050e4454(uVar8,0);
  if ((param_2 != (long *)0x0) && (plVar3 = (long *)param_2[3], plVar3 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x2a0));
      plVar2 = (long *)param_2[3];
      if ((uVar4 & 1) == 0) {
        if (plVar2 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar2 + 0x188);
          uVar8 = *(undefined8 *)(*plVar2 + 400);
          plVar3 = plVar2;
LAB_0550b230:
          uVar8 = (*pcVar7)(plVar2,uVar8);
          if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc88);
          }
          uVar8 = FUN_0552e020(uVar8,0);
          FUN_05508c0c(param_1,plVar3,uVar8,param_2);
          return;
        }
      }
      else if (plVar2 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
        lVar9 = *(long *)PTR_DAT_067cd360;
        lVar6 = *(long *)(lVar9 + 0x38);
        if (lVar6 == 0) {
          FUN_02f41ef8(lVar9);
          lVar6 = *(long *)(lVar9 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        if (lVar5 != 0) {
          plVar2 = (long *)FUN_050ef718(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo,
                                        **(undefined8 **)(lVar6 + 0xb8),0);
          lVar5 = param_2[3];
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
          }
          plVar3 = (long *)FUN_054d1144(lVar5,plVar2,0);
          if (plVar2 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar2 + 0x3d8);
            uVar8 = *(undefined8 *)(*plVar2 + 0x3e0);
            goto LAB_0550b230;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


