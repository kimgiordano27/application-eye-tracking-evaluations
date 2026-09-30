/*
FUNCTION_NAME: FUN_06856094
ENTRY_POINT: 06856094
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_20
*/


void FUN_06856094(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_071d6b30 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d39e40);
    FUN_02f07e70(System_Security_Principal_WindowsAccountType_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_02f07e70(Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a3a0);
    FUN_02f07e70(PTR_DAT_06d3a558);
    FUN_02f07e70(PTR_DAT_06d3a3a8);
    FUN_02f07e70(OVR_OpenVR_VRControllerState_t_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a560);
    FUN_02f07e70(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a3b0);
    FUN_02f07e70(OVR_OpenVR_VRControllerState_t_Packed_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d39e58);
    FUN_02f07e70(PTR_DAT_06d3a3b8);
    FUN_02f07e70(PTR_DAT_06d39720);
    FUN_02f07e70(PTR_DAT_06d39e60);
    FUN_02f07e70(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_<>c__DisplayClass533_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_071d6b30 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x90) == 0) {
      return;
    }
    lVar5 = FUN_068d1814(param_1,0);
    param_1[0x7b] = lVar5;
    thunk_FUN_02f411dc(param_1 + 0x7b);
    lVar5 = param_1[0x7b];
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39e58);
      FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
      FUN_037e93c4(lVar5,uVar6,0,*(undefined8 *)PTR_DAT_06d39e40);
    }
    FUN_068565f4(param_1);
    puVar1 = PTR_DAT_06d39720;
    plVar10 = *(long **)(param_2 + 0x90);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d39720) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_068562c0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)PTR_DAT_06d39720,2);
LAB_068562c0:
      iVar4 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      if (iVar4 != 0) {
        return;
      }
      lVar5 = param_1[0x87];
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3a560);
      FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_<>c__DisplayClass533_0_TypeInfo,0);
      if (lVar5 != 0) {
        FUN_037e93c4(lVar5,uVar6,0,*(undefined8 *)PTR_DAT_06d3a558);
        lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
        uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3a3b0);
        FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo,0);
        if (lVar5 != 0) {
          FUN_037e93c4(lVar5,uVar6,1,*(undefined8 *)PTR_DAT_06d3a3a0);
          lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_VRControllerState_t_Packed_TypeInfo);
          FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0);
          if (lVar5 != 0) {
            FUN_037e93c4(lVar5,uVar6,0,
                         *(undefined8 *)System_Security_Principal_WindowsAccountType_TypeInfo);
            lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
            puVar3 = PTR_DAT_06d3a3b8;
            uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3a3b8);
            FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_BodyJointLocation_TypeInfo,0);
            puVar2 = PTR_DAT_06d3a3a8;
            if (lVar5 != 0) {
              FUN_037e93c4(lVar5,uVar6,1,*(undefined8 *)PTR_DAT_06d3a3a8);
              lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
              uVar6 = thunk_FUN_02ef1808(*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
              FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_102_0_TypeInfo,0);
              if (lVar5 != 0) {
                FUN_037e93c4(lVar5,uVar6,0,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
                lVar5 = (**(code **)(*param_1 + 0x768))(param_1,*(undefined8 *)(*param_1 + 0x770));
                uVar6 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_VRControllerState_t_TypeInfo);
                FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_101_0_TypeInfo,0);
                if (lVar5 != 0) {
                  FUN_037e93c4(lVar5,uVar6,0,
                               *(undefined8 *)
                                Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_TypeInfo
                              );
                  plVar10 = *(long **)(param_2 + 0x90);
                  if (plVar10 != (long *)0x0) {
                    lVar5 = *plVar10;
                    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                          goto LAB_06856590;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_02eea86c(plVar10,*(long *)puVar1,0);
LAB_06856590:
                    lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
                    uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                    FUN_05025f00(uVar6,param_1,*(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
                    if (lVar5 != 0) {
                      FUN_037e93c4(lVar5,uVar6,1,*(undefined8 *)puVar2);
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


