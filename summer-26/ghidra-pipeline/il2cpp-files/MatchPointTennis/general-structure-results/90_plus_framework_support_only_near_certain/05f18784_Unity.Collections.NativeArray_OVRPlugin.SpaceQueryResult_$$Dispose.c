/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 05f18784
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint in_w8;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar4;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  uint uVar5;
  ulong unaff_x28;
  ulong uVar6;
  undefined8 *unaff_x29;
  
  while ((uVar5 = (uint)unaff_x28, uVar5 < in_w8 && (uVar5 + 1 < in_w8))) {
    puVar2 = (undefined8 *)(unaff_x22 + (long)(int)(uVar5 + 1) * 8 + 0x20);
    *puVar2 = *unaff_x29;
    thunk_FUN_044bb4b4(puVar2,0);
    uVar5 = uVar5 - 1;
    unaff_x28 = (ulong)uVar5;
    if ((int)uVar5 < unaff_w21) goto LAB_05f187c8;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar5) break;
    while( true ) {
      unaff_x29 = (undefined8 *)(unaff_x22 + (long)(int)unaff_x28 * 8 + 0x20);
      uVar4 = *unaff_x29;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,uVar4,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar1 < 0) break;
LAB_05f187c8:
      uVar3 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar3 <= uVar5) goto LAB_05f18810;
        puVar2 = (undefined8 *)(unaff_x22 + (long)(int)uVar5 * 8 + 0x20);
        *puVar2 = unaff_x23;
        thunk_FUN_044bb4b4(puVar2,0);
        if (unaff_x28 == unaff_x26) {
          return;
        }
        uVar3 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if ((uint)uVar3 <= (uint)unaff_x27) goto LAB_05f18810;
        unaff_x23 = *(undefined8 *)(unaff_x22 + unaff_x27 * 8 + 0x20);
        uVar6 = unaff_x28;
      } while ((long)unaff_x28 < unaff_x25);
      if ((uint)uVar3 <= (uint)unaff_x28) goto LAB_05f18810;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  }
LAB_05f18810:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


