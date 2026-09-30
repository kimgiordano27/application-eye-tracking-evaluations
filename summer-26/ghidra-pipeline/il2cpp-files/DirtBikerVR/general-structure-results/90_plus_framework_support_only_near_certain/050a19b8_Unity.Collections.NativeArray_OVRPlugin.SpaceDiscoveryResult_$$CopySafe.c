/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 050a19b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ushort in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w28;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_03ac4090(param_2);
                    /* try { // try from 050a19c4 to 051a19cb has its CatchHandler @ 050a1aac */
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
                    /* try { // try from 050a1a04 to 051a1a07 has its CatchHandler @ 050a1ab8 */
                    /* try { // try from 050a1a08 to 051a1a8f has its CatchHandler @ 050a17c8 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_050a1a10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_050a1a10:
    iVar1 = (*(code *)*puVar2)();
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
      FUN_03a8a9c8();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    param_2 = **(long **)(lVar3 + 0xc0);
    in_w8 = *(ushort *)(param_2 + 0x135);
  } while( true );
}


