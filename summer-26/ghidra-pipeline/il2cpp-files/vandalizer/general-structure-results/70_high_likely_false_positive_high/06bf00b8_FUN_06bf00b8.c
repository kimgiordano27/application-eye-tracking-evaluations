/*
FUNCTION_NAME: FUN_06bf00b8
ENTRY_POINT: 06bf00b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void FUN_06bf00b8(long param_1,long *param_2,int param_3)

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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_07a4ff7f & 1) == 0) {
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
    FUN_031f20f4(UnityEngine_VFX_VisualEffectControlClip_ClipEvent_var);
    FUN_031f20f4(PTR_DAT_0759e2b0);
    FUN_031f20f4(PTR_DAT_075d6ad8);
    FUN_031f20f4(PTR_DAT_0759fd00);
    FUN_031f20f4(PTR_DAT_075a8e78);
    FUN_031f20f4(PTR_DAT_075a3220);
    DAT_07a4ff7f = 1;
  }
  local_60 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_88 = 0;
  if (param_1 == 0) goto LAB_06bf05a8;
  uVar4 = FUN_06be8ce8(param_1);
  switch(uVar4) {
  case 0:
    lVar8 = FUN_06be6248(param_1);
    if ((lVar8 == 0) || (param_2 == (long *)0x0)) goto LAB_06bf05a8;
    if (*(int *)(lVar8 + 0x18) == 0) {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_075d6ad8;
      goto LAB_06bf0578;
    }
    (**(code **)(*param_2 + 0x208))(param_2,0x5b,*(undefined8 *)(*param_2 + 0x210));
    (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    lVar8 = FUN_06be6248(param_1);
    if (lVar8 == 0) goto LAB_06bf05a8;
    FUN_047afec0(&local_98,lVar8,*(undefined8 *)System_Action<Font>_TypeInfo);
    puVar2 = System_Action<FocusEnterEventArgs>_TypeInfo;
    bVar1 = false;
    while (uVar5 = FUN_05a2e8e4(&local_98,*(undefined8 *)puVar2), uVar6 = local_88, (uVar5 & 1) != 0
          ) {
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
        (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
      }
      FUN_06bef6a0(param_2,param_3 + 1);
      bVar1 = true;
      FUN_06bf00b8(uVar6,param_2,param_3 + 1);
    }
    FUN_05a2e8e0(&local_98,*(undefined8 *)System_Action<EventData>_TypeInfo);
    (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    FUN_06bef6a0(param_2,param_3);
    lVar8 = *param_2;
    uVar6 = 0x5d;
    break;
  case 1:
    if (param_2 == (long *)0x0) {
LAB_06bf05a8:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    (**(code **)(*param_2 + 0x208))(param_2,0x7b,*(undefined8 *)(*param_2 + 0x210));
    (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    lVar8 = FUN_06be77ec(param_1);
    if (lVar8 == 0) goto LAB_06bf05a8;
    FUN_05813c78(&local_c0,lVar8,*(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
    puVar3 = UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var;
    puVar2 = PTR_DAT_0759e2b0;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    uStack_68 = uStack_a8;
    local_70 = uStack_b0;
    local_60 = local_a0;
    bVar1 = false;
    while (uVar5 = FUN_05afc380(&local_80,*(undefined8 *)puVar3), uVar7 = uStack_68,
          uVar6 = local_70, (uVar5 & 1) != 0) {
      if (bVar1) {
        (**(code **)(*param_2 + 0x208))(param_2,0x2c,*(undefined8 *)(*param_2 + 0x210));
        (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
      }
      FUN_06bef6a0(param_2,param_3 + 1);
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      (**(code **)(*param_2 + 600))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x260));
      (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
      (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)puVar2,*(undefined8 *)(*param_2 + 0x260))
      ;
      bVar1 = true;
      FUN_06bf00b8(uVar7,param_2,param_3 + 1);
    }
    FUN_05afc4a0(&local_80,*(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
    FUN_06bef6a0(param_2,param_3);
    lVar8 = *param_2;
    uVar6 = 0x7d;
    break;
  case 2:
    FUN_06be8c2c(param_1);
    uVar6 = FUN_06beff64();
    if (param_2 == (long *)0x0) goto LAB_06bf05a8;
    lVar8 = *param_2;
    goto LAB_06bf057c;
  case 3:
    uVar6 = FUN_06be8ca0(param_1);
    if (param_2 == (long *)0x0) goto LAB_06bf05a8;
    pcVar10 = *(code **)(*param_2 + 0x248);
    uVar7 = *(undefined8 *)(*param_2 + 0x250);
    goto LAB_06bf0584;
  case 4:
    uVar5 = FUN_06be8bb8(param_1);
    if (param_2 == (long *)0x0) goto LAB_06bf05a8;
    if ((uVar5 & 1) == 0) {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_075a8e78;
    }
    else {
      lVar8 = *param_2;
      puVar9 = (undefined8 *)PTR_DAT_075a3220;
    }
    goto LAB_06bf0578;
  case 5:
    if (param_2 == (long *)0x0) goto LAB_06bf05a8;
    (**(code **)(*param_2 + 0x208))(param_2,0x22,*(undefined8 *)(*param_2 + 0x210));
    FUN_06be575c(param_1);
    uVar6 = FUN_06bef714();
    (**(code **)(*param_2 + 600))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x260));
    lVar8 = *param_2;
    uVar6 = 0x22;
    break;
  case 6:
    if (param_2 == (long *)0x0) goto LAB_06bf05a8;
    lVar8 = *param_2;
    puVar9 = (undefined8 *)PTR_DAT_0759fd00;
LAB_06bf0578:
    uVar6 = *puVar9;
LAB_06bf057c:
    pcVar10 = *(code **)(lVar8 + 600);
    uVar7 = *(undefined8 *)(lVar8 + 0x260);
LAB_06bf0584:
    (*pcVar10)(param_2,uVar6,uVar7);
  default:
    goto switchD_06bf01f0_default;
  }
  (**(code **)(lVar8 + 0x208))(param_2,uVar6,*(undefined8 *)(lVar8 + 0x210));
switchD_06bf01f0_default:
  return;
}


