/*
FUNCTION_NAME: FUN_0422bb1c
ENTRY_POINT: 0422bb1c
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_0422bb1c(long param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  local_50 = 0;
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      return 0;
    }
    local_60 = 0;
    uStack_58 = 0;
    FUN_04d920e4(&local_60,0,4,1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38)
                );
    *(undefined8 *)(param_1 + 0x18) = uStack_58;
    *(long *)(param_1 + 0x10) = local_60;
    return 0;
  }
  uVar4 = FUN_0422c58c(param_1);
  uVar5 = (uint)(uVar4 >> 0x20);
  if ((int)uVar5 < 1) {
    lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    uVar5 = param_2;
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar8 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar8 = param_2;
      if ((int)param_2 <= (int)uVar3) {
        uVar8 = uVar3;
      }
      uVar8 = uVar8 + uVar3;
      if (uVar3 != 0) {
        FUN_04d920e4(&local_50,uVar8,4,1,*(undefined8 *)(lVar6 + 0x38));
        puVar7 = (undefined8 *)(param_1 + 0x10);
        FUN_04d92c58(*puVar7,*(undefined8 *)(param_1 + 0x18),local_50,uStack_48,uVar3,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
        Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                  (puVar7,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20));
        iVar1 = uVar3 + param_2;
        *(undefined8 *)(param_1 + 0x18) = uStack_48;
        *puVar7 = local_50;
        if (uVar8 - iVar1 != 0 && iVar1 <= (int)uVar8) {
          FUN_0422c6b4(param_1,CONCAT44(uVar8 - iVar1,iVar1));
        }
        uVar4 = (ulong)uVar3;
        goto LAB_0422bc90;
      }
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (param_1 + 0x10,*(undefined8 *)(lVar6 + 0x20));
      lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    local_60 = 0;
    uStack_58 = 0;
    FUN_04d920e4(&local_60,uVar8,4,1,*(undefined8 *)(lVar6 + 0x38));
    *(undefined8 *)(param_1 + 0x18) = uStack_58;
    *(long *)(param_1 + 0x10) = local_60;
  }
LAB_0422bc90:
  iVar1 = (int)uVar4 + uVar5;
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) <= iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return uVar4 & 0xffffffff | (ulong)uVar5 << 0x20;
}


