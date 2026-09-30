/*
FUNCTION_NAME: FUN_05978ee8
ENTRY_POINT: 05978ee8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05978ee8(long *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ushort *puVar13;
  int *local_50;
  undefined8 uStack_48;
  ushort *local_40;
  undefined8 uStack_38;
  
  puVar7 = Method_System_Array_Empty<Event_Type>__;
  puVar6 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<KeyControl>_get_Count__;
  if ((DAT_066d387d & 1) == 0) {
    FUN_02b3c81c(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02b3c81c(Method_System_Array_Empty<OVRSpatialAnchor_UnboundAnchor>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<KeyControl>_get_Count__);
    FUN_02b3c81c(Method_System_Array_Empty<Event_Type>__);
    DAT_066d387d = 1;
  }
  iVar10 = (int)param_1[6];
  iVar3 = 0;
  if (iVar10 != 0) {
    iVar3 = param_2 / iVar10;
  }
  local_40 = (ushort *)0x0;
  uStack_38 = 0;
  local_50 = (int *)0x0;
  uStack_48 = 0;
  param_2 = param_2 - iVar3 * iVar10;
  FUN_03a1e924(&local_40,*(undefined4 *)((long)param_1 + 0x24),2,1,*(undefined8 *)puVar6);
  FUN_03a14e64(&local_50,*(undefined4 *)((long)param_1 + 0x24),2,1,*(undefined8 *)puVar7);
  iVar10 = *(int *)((long)param_1 + 0x24);
  if (iVar10 < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    iVar12 = 0;
    do {
      iVar1 = *(int *)(*param_1 +
                      (long)(param_2 + 1 + (iVar12 + iVar10 * iVar3) * (int)param_1[4]) * 4);
      if ((int)(short)iVar1 <= iVar1 >> 0x10) {
        iVar10 = (int)uVar11;
        local_40[iVar10] = (ushort)iVar12;
        local_50[iVar10] = iVar1;
        uVar11 = (ulong)(iVar10 + 1);
        iVar10 = *(int *)((long)param_1 + 0x24);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar10);
  }
  puVar7 = Method_System_Array_Empty<OVRSpatialAnchor_UnboundAnchor>__;
  puVar6 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  iVar10 = *(int *)((long)param_1 + 0x2c);
  if (0 < iVar10) {
    lVar4 = param_1[6];
    iVar12 = 0;
    iVar1 = iVar10 * (int)param_1[5];
    do {
      if (0 < (int)uVar11) {
        lVar5 = param_1[5];
        uVar8 = uVar11;
        piVar9 = local_50;
        puVar13 = local_40;
        do {
          if (((int)(short)*piVar9 <= (int)(short)iVar12) && ((int)(short)iVar12 <= *piVar9 >> 0x10)
             ) {
            uVar2 = *puVar13;
            iVar10 = (int)lVar5 * iVar12 +
                     ((int)(short)(uVar2 + ((ushort)((short)uVar2 >> 0xf) >> 10 & 0x1f)) >> 5) +
                     iVar1 * (param_2 + (int)lVar4 * iVar3);
            *(uint *)(param_1[2] + (long)iVar10 * 4) =
                 1 << (ulong)(uVar2 & 0x1f) | *(uint *)(param_1[2] + (long)iVar10 * 4);
          }
          uVar8 = uVar8 - 1;
          puVar13 = puVar13 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar8 != 0);
        iVar10 = *(int *)((long)param_1 + 0x2c);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar10);
  }
  FUN_03a1ec0c(&local_40,*(undefined8 *)puVar6);
  FUN_03a1514c(&local_50,*(undefined8 *)puVar7);
  return;
}


