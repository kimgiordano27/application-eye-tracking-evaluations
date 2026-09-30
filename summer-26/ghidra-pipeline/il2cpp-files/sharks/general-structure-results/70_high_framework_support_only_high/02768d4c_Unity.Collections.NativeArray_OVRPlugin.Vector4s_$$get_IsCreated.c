/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_IsCreated
ENTRY_POINT: 02768d4c
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_IsCreated
               (undefined8 param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x25;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uStack0000000000000000;
  
  uVar10 = (ulong)param_3;
  uVar13 = unaff_x25;
  uStack0000000000000000 = uVar10;
  while( true ) {
    uVar1 = uVar13 + 1;
    uVar8 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar8 <= (uint)uVar1) break;
    lVar2 = unaff_x22 + uVar1 * 0x10;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    if ((long)unaff_x25 <= (long)uVar13) {
      uVar12 = (uint)uVar13;
      if (uVar8 <= uVar12) break;
      while( true ) {
        uVar13 = (ulong)(int)uVar12;
        lVar2 = unaff_x22 + uVar13 * 0x10;
        uVar9 = *(undefined8 *)(lVar2 + 0x20);
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar11 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        iVar6 = (**(code **)(param_4 + 0x18))
                          (*(undefined8 *)(param_4 + 0x40),uVar4,uVar5,uVar9,uVar11,
                           *(undefined8 *)(param_4 + 0x28));
        if (-1 < iVar6) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar12) || (*(uint *)(unaff_x22 + 0x18) <= uVar12 + 1))
        goto LAB_02768e78;
        uVar9 = *(undefined8 *)(lVar2 + 0x20);
        lVar3 = unaff_x22 + (long)(int)(uVar12 + 1) * 0x10;
        puVar7 = (undefined8 *)(lVar3 + 0x20);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *puVar7 = uVar9;
        thunk_FUN_0188fd20(puVar7,0);
        uVar12 = uVar12 - 1;
        uVar13 = (ulong)uVar12;
        if ((int)uVar12 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_02768e78;
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      uVar10 = uStack0000000000000000;
    }
    uVar12 = (int)uVar13 + 1;
    if (uVar8 <= uVar12) break;
    lVar2 = unaff_x22 + (long)(int)uVar12 * 0x10;
    puVar7 = (undefined8 *)(lVar2 + 0x20);
    *puVar7 = uVar4;
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    thunk_FUN_0188fd20(puVar7,0);
    uVar13 = uVar1;
    if (uVar1 == uVar10) {
      return;
    }
  }
LAB_02768e78:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


