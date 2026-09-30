/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 02768d5c
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x25;
  undefined8 uVar9;
  ulong unaff_x26;
  undefined8 uVar10;
  uint uVar11;
  ulong unaff_x28;
  
  while( true ) {
    uVar1 = unaff_x28 + 1;
    uVar8 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar8 <= (uint)uVar1) break;
    lVar2 = unaff_x22 + uVar1 * 0x10;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    if (unaff_x25 <= (long)unaff_x28) {
      uVar11 = (uint)unaff_x28;
      if (uVar8 <= uVar11) break;
      while( true ) {
        unaff_x28 = (ulong)(int)uVar11;
        lVar2 = unaff_x22 + unaff_x28 * 0x10;
        uVar9 = *(undefined8 *)(lVar2 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar10 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        iVar6 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),uVar4,uVar5,uVar9,uVar10,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar6) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar11) || (*(uint *)(unaff_x22 + 0x18) <= uVar11 + 1))
        goto LAB_02768e78;
                    /* try { // try from 02768de8 to 02868e27 has its CatchHandler @ 02768de8
                       catch() { ... } // from try @ 02768de8 with catch @ 02768de8
                       catch() { ... } // from try @ 02768e3c with catch @ 02768de8
                       catch() { ... } // from try @ 02768e78 with catch @ 02768de8
                       catch() { ... } // from try @ 02768eb8 with catch @ 02768de8 */
        uVar9 = *(undefined8 *)(lVar2 + 0x20);
        lVar3 = unaff_x22 + (long)(int)(uVar11 + 1) * 0x10;
        puVar7 = (undefined8 *)(lVar3 + 0x20);
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *puVar7 = uVar9;
        thunk_FUN_0188fd20(puVar7,0);
        uVar11 = uVar11 - 1;
        unaff_x28 = (ulong)uVar11;
        if ((int)uVar11 < unaff_w21) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_02768e78;
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar11 = (int)unaff_x28 + 1;
    if (uVar8 <= uVar11) break;
    lVar2 = unaff_x22 + (long)(int)uVar11 * 0x10;
    puVar7 = (undefined8 *)(lVar2 + 0x20);
    *puVar7 = uVar4;
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    thunk_FUN_0188fd20(puVar7,0);
    unaff_x28 = uVar1;
    if (uVar1 == unaff_x26) {
      return;
    }
  }
LAB_02768e78:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


