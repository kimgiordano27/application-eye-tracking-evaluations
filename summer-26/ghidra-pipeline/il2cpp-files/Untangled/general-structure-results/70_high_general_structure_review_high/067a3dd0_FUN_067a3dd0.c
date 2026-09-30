/*
FUNCTION_NAME: FUN_067a3dd0
ENTRY_POINT: 067a3dd0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_067a3dd0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  if ((DAT_071d6361 & 1) == 0) {
    FUN_02f07e70(Photon_Voice_UnsupportedCodecException_TypeInfo);
    FUN_02f07e70(Photon_Voice_UnsupportedSampleTypeException_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_UntagContainerImageRequest_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_UnsignedLongField_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d36c48);
    FUN_02f07e70(Untangled_UntangledCore_TypeInfo);
    DAT_071d6361 = 1;
  }
  puVar1 = PTR_DAT_06d36c48;
  local_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_1[7] == 0) goto LAB_067a4178;
  if (*(int *)(param_1[7] + 0x18) == 0) goto LAB_067a3eac;
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066ca6a0(param_3,0,0);
  if ((uVar3 & 1) != 0) goto LAB_067a3eac;
  if ((param_1[4] == 0) && (param_1[5] == 0)) {
    FUN_067a3cc0(param_1);
  }
  if (param_1[3] == 0) goto LAB_067a4178;
  uVar3 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                    (param_1[3],param_3,&local_38,
                     *(undefined8 *)Photon_Voice_UnsupportedCodecException_TypeInfo);
  if ((uVar3 & 1) != 0) {
    if ((local_38 != 0) && (*(long *)(local_38 + 0x18) != 0)) {
      *param_4 = *(undefined4 *)(*(long *)(local_38 + 0x18) + 0x10);
      uVar5 = *(undefined8 *)(local_38 + 0x58);
      param_5[1] = *(undefined8 *)(local_38 + 0x60);
      *param_5 = uVar5;
      *(int *)(local_38 + 0x20) = *(int *)(local_38 + 0x20) + 1;
      return 1;
    }
    goto LAB_067a4178;
  }
  uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,param_3,1,*(undefined8 *)(*param_1 + 0x1e0));
  if ((uVar3 & 1) == 0) {
LAB_067a4064:
    uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,param_3,0,*(undefined8 *)(*param_1 + 0x1e0));
    if ((uVar3 & 1) == 0) {
LAB_067a3eac:
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar4);
        lVar4 = *(long *)puVar1;
      }
      *param_4 = **(undefined4 **)(lVar4 + 0xb8);
      *param_5 = 0;
      param_5[1] = 0;
      return 0;
    }
    if (param_1[4] == 0) goto LAB_067a4178;
    uVar3 = FUN_068b4b58(param_1[4],param_3,&local_70,param_5,0);
    puVar2 = Untangled_UntangledCore_TypeInfo;
    if ((uVar3 & 1) == 0) goto LAB_067a3eac;
    lVar4 = *(long *)Untangled_UntangledCore_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar4 = *(long *)puVar2;
    }
    if ((**(long **)(lVar4 + 0xb8) == 0) ||
       (local_38 = FUN_03e72b38(**(long **)(lVar4 + 0xb8),
                                *(undefined8 *)
                                 PlayFab_MultiplayerModels_UntagContainerImageRequest_TypeInfo),
       local_38 == 0)) goto LAB_067a4178;
    *(undefined8 *)(local_38 + 0x50) = uStack_48;
    *(undefined8 *)(local_38 + 0x48) = local_50;
    *(undefined8 *)(local_38 + 0x40) = uStack_58;
    *(undefined8 *)(local_38 + 0x38) = local_60;
    *(undefined8 *)(local_38 + 0x30) = uStack_68;
    *(undefined8 *)(local_38 + 0x28) = local_70;
    thunk_FUN_02f411dc(local_38 + 0x38,0);
    if (local_38 == 0) goto LAB_067a4178;
    *(undefined4 *)(local_38 + 0x20) = 1;
    *(long *)(local_38 + 0x18) = param_1[4];
    thunk_FUN_02f411dc();
    uVar5 = *param_5;
    if (local_38 == 0) goto LAB_067a4178;
    *(undefined8 *)(local_38 + 0x60) = param_5[1];
    *(undefined8 *)(local_38 + 0x58) = uVar5;
    if (param_1[3] == 0) goto LAB_067a4178;
    FUN_04c74618(param_1[3],param_3,local_38,
                 *(undefined8 *)Photon_Voice_UnsupportedSampleTypeException_TypeInfo);
    lVar4 = param_1[4];
  }
  else {
    if (param_1[5] == 0) goto LAB_067a4178;
    uVar3 = FUN_068b4b58(param_1[5],param_3,&local_70,param_5,0);
    puVar2 = Untangled_UntangledCore_TypeInfo;
    if ((uVar3 & 1) == 0) goto LAB_067a4064;
    lVar4 = *(long *)Untangled_UntangledCore_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar4 = *(long *)puVar2;
    }
    if ((**(long **)(lVar4 + 0xb8) == 0) ||
       (local_38 = FUN_03e72b38(**(long **)(lVar4 + 0xb8),
                                *(undefined8 *)
                                 PlayFab_MultiplayerModels_UntagContainerImageRequest_TypeInfo),
       local_38 == 0)) goto LAB_067a4178;
    *(undefined8 *)(local_38 + 0x50) = uStack_48;
    *(undefined8 *)(local_38 + 0x48) = local_50;
    *(undefined8 *)(local_38 + 0x40) = uStack_58;
    *(undefined8 *)(local_38 + 0x38) = local_60;
    *(undefined8 *)(local_38 + 0x30) = uStack_68;
    *(undefined8 *)(local_38 + 0x28) = local_70;
    thunk_FUN_02f411dc(local_38 + 0x38,0);
    if (local_38 == 0) goto LAB_067a4178;
    *(undefined4 *)(local_38 + 0x20) = 1;
    *(long *)(local_38 + 0x18) = param_1[5];
    thunk_FUN_02f411dc();
    uVar5 = *param_5;
    if (local_38 == 0) goto LAB_067a4178;
    *(undefined8 *)(local_38 + 0x60) = param_5[1];
    *(undefined8 *)(local_38 + 0x58) = uVar5;
    if (param_1[3] == 0) goto LAB_067a4178;
    FUN_04c74618(param_1[3],param_3,local_38,
                 *(undefined8 *)Photon_Voice_UnsupportedSampleTypeException_TypeInfo);
    lVar4 = param_1[5];
  }
  if (lVar4 != 0) {
    *param_4 = *(undefined4 *)(lVar4 + 0x10);
    return 1;
  }
LAB_067a4178:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


