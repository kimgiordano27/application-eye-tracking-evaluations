/*
FUNCTION_NAME: FUN_05b79128
ENTRY_POINT: 05b79128
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b7953c) */
/* WARNING: Removing unreachable block (ram,0x05b79438) */
/* WARNING: Removing unreachable block (ram,0x05b79524) */
/* WARNING: Removing unreachable block (ram,0x05b7952c) */

void FUN_05b79128(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_58 [8];
  
  if ((DAT_06b81cab & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769100);
    FUN_02d6084c(PTR_DAT_06769110);
    FUN_02d6084c(PTR_DAT_06761808);
    FUN_02d6084c(PTR_DAT_067869b8);
    FUN_02d6084c(PTR_DAT_067869c0);
    FUN_02d6084c(Method_Unity_VisualScripting_Divide<Vector2>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
                );
    FUN_02d6084c(PTR_DAT_06769158);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo);
    DAT_06b81cab = 1;
  }
  local_58[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_05b79688();
  puVar3 = Method_Unity_VisualScripting_Divide<Vector2>__ctor__;
  puVar4 = PTR_DAT_06769158;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_06769158 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05b797cc(uVar1);
  FUN_05b79874(uVar1);
  FUN_05ab01d4(0);
  uVar8 = FUN_034e36d4(0,*(undefined8 *)puVar3);
  FUN_05a0996c(local_58,uVar8,0);
  local_90 = 0;
  uStack_88 = 0;
  FUN_05b82d34(&local_90,param_2,param_3,0);
  puVar3 = PTR_DAT_06769110;
  uStack_68 = uStack_88;
  local_70 = local_90;
  iVar7 = FUN_06030c10(0);
  if (*(int *)(*(long *)PTR_DAT_06761808 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_06089ab4(iVar7 == 1,0);
  FUN_06089af0(1,0);
  FUN_05b79950(param_1);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar9 = FUN_05b6a66c();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = *(undefined4 *)(lVar9 + 0x54);
  if (*(int *)(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)Unity_Burst_Intrinsics_X86_Sse4_2_TypeInfo);
  }
  FUN_059e6380(uVar1,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
              + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05a4b6dc(1,0);
  FUN_05b79c50(param_1,param_3);
  puVar6 = UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
  puVar5 = PTR_DAT_067869c0;
  puVar2 = PTR_DAT_06769100;
  if (0 < *(int *)(param_3 + 0x18)) {
    iVar7 = 0;
    do {
      uVar8 = FUN_03aac1c4(param_3,iVar7,*(undefined8 *)puVar5);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_05b79ccc(uVar8);
      if ((uVar10 & 1) == 0) {
        local_90 = 0;
        uStack_88 = 0;
        FUN_05b82a4c(&local_90,param_2,uVar8,0);
        uStack_78 = uStack_88;
        local_80 = local_90;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0637e258(uVar8,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b7b3a4(uVar8,0);
        FUN_05b7b6a8(param_2,uVar8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b82b68(&local_80,0);
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05b79da8(param_2,uVar8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_3 + 0x18));
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar9 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_05a6f840(lVar9,0);
  lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  uVar10 = FUN_06063868(0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8(uVar10,uVar10 & 0xffffffff);
  }
  FUN_05b57f4c(lVar9,uVar10 & 0xffffffff,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05b82e48(&local_70,0);
  FUN_05a09978(local_58,0);
  return;
}


