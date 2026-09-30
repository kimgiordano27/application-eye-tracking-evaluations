/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Fovf>$$get_Current
ENTRY_POINT: 02919e14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_Fovf>__get_Current
               (long param_1,uint param_2,int param_3,undefined8 param_4,long *param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar9 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar9) {
    if (param_1 == 0) {
LAB_02919f38:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      uVar1 = param_2 + ((int)(iVar9 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (param_5 == (long *)0x0) goto LAB_02919f38;
      lVar3 = *(long *)(param_6 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74(lVar3);
      }
      lVar5 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02919f00;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(param_5,lVar3,0);
LAB_02919f00:
      iVar2 = (*(code *)*puVar4)(param_5,uVar8,param_4,puVar4[1]);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar9 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar9);
  }
  return ~param_2;
}


