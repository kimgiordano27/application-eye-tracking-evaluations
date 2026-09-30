/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 047a5858
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long in_x9;
  int *piVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w28;
  
code_r0x047a5858:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 == 0) {
      return unaff_w25;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w25 + 1;
    }
    else {
      unaff_w28 = unaff_w25 - 1;
    }
    if (unaff_w28 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w25 = unaff_w19 + ((int)(unaff_w28 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    param_1 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          in_x9 = (long)*piVar5;
          goto code_r0x047a5858;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
  } while( true );
}


