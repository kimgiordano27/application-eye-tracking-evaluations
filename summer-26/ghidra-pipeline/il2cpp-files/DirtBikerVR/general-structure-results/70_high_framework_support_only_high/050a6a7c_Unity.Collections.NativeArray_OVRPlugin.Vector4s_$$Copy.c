/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 050a6a7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_050a6bd4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar10 = (long)param_2;
    do {
      uVar9 = *(uint *)(param_1 + 0x18);
      uVar3 = uVar10 + 1;
      if (uVar9 <= (uint)uVar3) {
LAB_050a6bd0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar4 = param_1 + uVar3 * 0x10;
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      if ((long)param_2 <= (long)uVar10) {
        do {
          uVar9 = (uint)uVar10;
          if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_050a6bd0;
          if (param_4 == 0) goto LAB_050a6bd4;
          lVar4 = param_1 + (long)(int)uVar9 * 0x10;
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          uVar7 = *(undefined8 *)(lVar4 + 0x28);
          if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          iVar8 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar5,uVar6,uVar11,uVar7,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar8) break;
          if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_050a6bd0;
          uVar2 = uVar9 + 1;
          if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_050a6bd0;
          lVar1 = param_1 + (long)(int)uVar2 * 0x10;
          uVar11 = *(undefined8 *)(lVar4 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar1 + 0x20) = uVar11;
          thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)uVar2 * 0x10,0);
          uVar10 = (ulong)(uVar9 - 1);
        } while (param_2 <= (int)(uVar9 - 1));
        uVar9 = *(uint *)(param_1 + 0x18);
      }
      uVar2 = (int)uVar10 + 1;
      if (uVar9 <= uVar2) goto LAB_050a6bd0;
      lVar4 = param_1 + (long)(int)uVar2 * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)uVar2 * 0x10,0);
      uVar10 = uVar3;
    } while (uVar3 != (long)param_3);
  }
  return;
}


