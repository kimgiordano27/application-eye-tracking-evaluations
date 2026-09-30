/*
FUNCTION_NAME: FUN_01b38fc4
ENTRY_POINT: 01b38fc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_01b38fc4(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if ((DAT_0377d3de & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_ILight2DCullResult_TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                      );
    thunk_FUN_00d48444(StringLiteral_14353);
    DAT_0377d3de = 1;
  }
  lStack_68 = 0;
  local_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_2 != 0) &&
     (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (param_2,0),
     puVar4 = Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__,
     puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo, lVar6 != 0)) {
    FUN_026a0144(&local_110,lVar6,0);
    lStack_a8 = lStack_e8;
    local_b0 = local_f0;
    lStack_98 = lStack_d8;
    local_a0 = lStack_e0;
    lStack_c8 = lStack_108;
    local_d0 = local_110;
    lStack_b8 = lStack_f8;
    local_c0 = lStack_100;
    param_5[5] = lStack_e8;
    param_5[4] = local_f0;
    param_5[7] = lStack_d8;
    param_5[6] = lStack_e0;
    param_5[1] = lStack_108;
    *param_5 = local_110;
    param_5[3] = lStack_f8;
    param_5[2] = lStack_100;
    FUN_010e58e8(param_2,&local_110,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar5 = StringLiteral_302;
    uVar7 = FUN_0268b4e0(local_110,0,0);
    puVar4 = StringLiteral_14353;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026610e4(*(undefined8 *)puVar4,0);
      return 0;
    }
    if ((local_110 != 0) && (lVar6 = FUN_02665318(local_110,0), lVar6 != 0)) {
      uVar8 = FUN_0266b978(lVar6,0);
      uVar9 = FUN_0266da78(lVar6,0);
      lStack_148 = param_5[1];
      local_150 = *param_5;
      lStack_138 = param_5[3];
      lStack_140 = param_5[2];
      lStack_128 = param_5[5];
      local_130 = param_5[4];
      lStack_118 = param_5[7];
      lStack_120 = param_5[6];
      FUN_01b3927c(&local_90,param_1,&local_150);
      puVar4 = PTR_DAT_033f02a8;
      if (*(long *)(param_1 + 0xd8) != 0) {
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x11c);
        if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01b1c118(uVar1,uVar8,uVar9,param_3,0);
        if ((uVar7 & 1) == 0) {
          iVar2 = *(int *)(*(long *)puVar5 + 0xe0);
          puVar3 = (undefined8 *)
                   Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
          ;
        }
        else {
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_01b39278;
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x11c);
          uVar8 = *param_3;
          lStack_c8 = lStack_88;
          local_d0 = local_90;
          lStack_b8 = lStack_78;
          local_c0 = lStack_80;
          lStack_a8 = lStack_68;
          local_b0 = local_70;
          lStack_98 = lStack_58;
          local_a0 = lStack_60;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lStack_178 = lStack_b8;
          local_180 = local_c0;
          lStack_168 = lStack_a8;
          lStack_170 = local_b0;
          lStack_188 = lStack_c8;
          local_190 = local_d0;
          lStack_158 = lStack_98;
          local_160 = local_a0;
          uVar7 = FUN_01b1c388(uVar1,uVar8,&local_190,param_4,0);
          if ((uVar7 & 1) != 0) {
            return 1;
          }
          iVar2 = *(int *)(*(long *)puVar5 + 0xe0);
          puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_ILight2DCullResult_TypeInfo;
        }
        if (iVar2 == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(*puVar3,0);
        return 0;
      }
    }
  }
LAB_01b39278:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


