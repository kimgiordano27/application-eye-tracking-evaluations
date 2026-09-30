/*
FUNCTION_NAME: FUN_06856700
ENTRY_POINT: 06856700
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_14;functionality_possible_biometrics_hits_1
*/


void FUN_06856700(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_071d6b31 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Core_VRHandGrabberEvent_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_109_0_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_VROverlayFlags_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a3c0);
    FUN_02f07e70(PTR_DAT_06d3bc78);
    FUN_02f07e70(PTR_DAT_06d3a3c8);
    FUN_02f07e70(OVR_OpenVR_VRControllerState_t_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a560);
    FUN_02f07e70(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a3b0);
    FUN_02f07e70(OVR_OpenVR_VRControllerState_t_Packed_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39e58);
    FUN_02f07e70(PTR_DAT_06d3a3b8);
    FUN_02f07e70(PTR_DAT_06d39720);
    FUN_02f07e70(PTR_DAT_06d3b718);
    FUN_02f07e70(System_Security_Principal_WindowsIdentity_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_<>c__DisplayClass533_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_071d6b31 = 1;
  }
  plVar10 = (long *)param_1[0x8b];
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d3b718) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_068568b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)PTR_DAT_06d3b718,2);
LAB_068568b8:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x88) == 0) {
      return;
    }
    lVar7 = param_1[0x7b];
    if (lVar7 != 0) {
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39e58);
      FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
      FUN_037e9794(lVar7,uVar6,0,*(undefined8 *)OVRPlugin_OVRP_1_108_0_TypeInfo);
    }
    param_1[0x7b] = 0;
    thunk_FUN_02f411dc(param_1 + 0x7b,0);
    puVar1 = PTR_DAT_06d39720;
    plVar10 = *(long **)(param_2 + 0x88);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d39720) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0685699c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)PTR_DAT_06d39720,2);
LAB_0685699c:
      iVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if (iVar4 != 0) {
        return;
      }
      lVar7 = param_1[0x87];
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3a560);
      FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_<>c__DisplayClass533_0_TypeInfo,0);
      if (lVar7 != 0) {
        FUN_037e9794(lVar7,uVar6,0,*(undefined8 *)PTR_DAT_06d3bc78);
        lVar7 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3a3b0);
        FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo,0);
        if (lVar7 != 0) {
          FUN_037e9794(lVar7,uVar6,1,*(undefined8 *)PTR_DAT_06d3a3c0);
          lVar7 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_VRControllerState_t_Packed_TypeInfo);
          FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0);
          if (lVar7 != 0) {
            FUN_037e9794(lVar7,uVar6,0,
                         *(undefined8 *)HurricaneVR_Framework_Core_VRHandGrabberEvent_TypeInfo);
            lVar7 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
            puVar2 = PTR_DAT_06d3a3b8;
            uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3a3b8);
            FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_BodyJointLocation_TypeInfo,0);
            puVar3 = PTR_DAT_06d3a3c8;
            if (lVar7 != 0) {
              FUN_037e9794(lVar7,uVar6,1,*(undefined8 *)PTR_DAT_06d3a3c8);
              lVar7 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
              uVar6 = thunk_FUN_02ef1808(*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_102_0_TypeInfo,0);
              if (lVar7 != 0) {
                FUN_037e9794(lVar7,uVar6,0,*(undefined8 *)OVRPlugin_OVRP_1_109_0_TypeInfo);
                lVar7 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
                uVar6 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_VRControllerState_t_TypeInfo);
                FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_101_0_TypeInfo,0);
                if (lVar7 != 0) {
                  FUN_037e9794(lVar7,uVar6,0,*(undefined8 *)OVR_OpenVR_VROverlayFlags_TypeInfo);
                  plVar10 = *(long **)(param_2 + 0x88);
                  if (plVar10 != (long *)0x0) {
                    lVar7 = *plVar10;
                    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                          goto LAB_06856c6c;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar1,0);
LAB_06856c6c:
                    lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                    FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
                    if (lVar7 != 0) {
                      FUN_037e9794(lVar7,uVar6,1,*(undefined8 *)puVar3);
                      return;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


