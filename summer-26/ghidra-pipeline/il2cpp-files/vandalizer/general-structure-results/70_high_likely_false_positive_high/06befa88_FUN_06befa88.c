/*
FUNCTION_NAME: FUN_06befa88
ENTRY_POINT: 06befa88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void FUN_06befa88(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_07a4ff7e & 1) == 0) {
    FUN_031f20f4(UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
    FUN_031f20f4(UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    FUN_031f20f4(System_Action<EventData>_TypeInfo);
    FUN_031f20f4(System_Action<FocusEnterEventArgs>_TypeInfo);
    FUN_031f20f4(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var);
    FUN_031f20f4(System_Action<FocusExitEventArgs>_TypeInfo);
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_031f20f4(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_031f20f4(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_031f20f4(System_Action<Font>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759fd00);
    FUN_031f20f4(PTR_DAT_075a8e78);
    FUN_031f20f4(PTR_DAT_0759ca38);
    FUN_031f20f4(PTR_DAT_075a3220);
    DAT_07a4ff7e = 1;
  }
  local_50 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_78 = 0;
  if (param_1 == 0) goto LAB_06befe68;
  uVar4 = FUN_06be8ce8(param_1);
  switch(uVar4) {
  case 0:
    if (param_2 == (long *)0x0) {
LAB_06befe68:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    (**(code **)(*param_2 + 0x208))(param_2,0x5b,*(undefined8 *)(*param_2 + 0x210));
    lVar8 = FUN_06be6248(param_1);
    if (lVar8 == 0) goto LAB_06befe68;
    FUN_047afec0(&local_88,lVar8,*(undefined8 *)System_Action<Font>_TypeInfo);
    puVar2 = System_Action<FocusEnterEventArgs>_TypeInfo;
    bVar1 = false;
    while (uVar5 = FUN_05a2e8e4(&local_88,*(undefined8 *)puVar2), uVar6 = local_78, (uVar5 & 1) != 0
          ) {
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
      }
      bVar1 = true;
      FUN_06befa88(uVar6,param_2);
    }
    FUN_05a2e8e0(&local_88,*(undefined8 *)System_Action<EventData>_TypeInfo);
    lVar8 = *param_2;
    uVar6 = 0x5d;
    break;
  case 1:
    if (param_2 == (long *)0x0) goto LAB_06befe68;
    (**(code **)(*param_2 + 0x208))(param_2,0x7b,*(undefined8 *)(*param_2 + 0x210));
    lVar8 = FUN_06be77ec(param_1);
    if (lVar8 == 0) goto LAB_06befe68;
    FUN_05813c78(&local_70,lVar8,*(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
    puVar3 = UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var;
    puVar2 = PTR_DAT_0759ca38;
    bVar1 = false;
    while (uVar5 = FUN_05afc380(&local_70,*(undefined8 *)puVar3), uVar7 = uStack_58,
          uVar6 = local_60, (uVar5 & 1) != 0) {
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
      }
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      (**(code **)(*param_2 + 600))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x260));
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)puVar2,*(undefined8 *)(*param_2 + 0x260))
      ;
      bVar1 = true;
      FUN_06befa88(uVar7,param_2);
    }
    FUN_05afc4a0(&local_70,*(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    lVar8 = *param_2;
    uVar6 = 0x7d;
    break;
  case 2:
    FUN_06be8c2c(param_1);
    uVar6 = FUN_06beff64();
    if (param_2 == (long *)0x0) goto LAB_06befe68;
    lVar8 = *param_2;
    goto LAB_06befe40;
  case 3:
    uVar6 = FUN_06be8ca0(param_1);
    if (param_2 == (long *)0x0) goto LAB_06befe68;
    pcVar10 = *(code **)(*param_2 + 0x248);
    uVar7 = *(undefined8 *)(*param_2 + 0x250);
    goto LAB_06befe48;
  case 4:
    uVar5 = FUN_06be8bb8(param_1);
    if (param_2 == (long *)0x0) goto LAB_06befe68;
    if ((uVar5 & 1) == 0) {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_075a8e78;
    }
    else {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_075a3220;
    }
    goto LAB_06befe3c;
  case 5:
    if (param_2 == (long *)0x0) goto LAB_06befe68;
    (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
    FUN_06be575c(param_1);
    uVar6 = FUN_06bef714();
    (**(code **)(*param_2 + 600))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x260));
    lVar8 = *param_2;
    uVar6 = 0x22;
    break;
  case 6:
    if (param_2 == (long *)0x0) goto LAB_06befe68;
    lVar8 = *param_2;
    puVar9 = (undefined8 *)PTR_DAT_0759fd00;
LAB_06befe3c:
    uVar6 = *puVar9;
LAB_06befe40:
    pcVar10 = *(code **)(lVar8 + 600);
    uVar7 = *(undefined8 *)(lVar8 + 0x260);
LAB_06befe48:
    (*pcVar10)(param_2,uVar6,uVar7);
  default:
    goto switchD_06befba0_default;
  }
  (**(code **)(lVar8 + 0x208))(param_2,uVar6,*(undefined8 *)(lVar8 + 0x210));
switchD_06befba0_default:
  return;
}


