/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 050a45e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined1 param_2 [16])

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 in_x9;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000028 = *(undefined8 *)(param_1 + 0x28);
    uStack0000000000000020 = *(undefined8 *)(param_1 + 0x20);
    uStack0000000000000030 = *(undefined8 *)(param_1 + 0x30);
    uStack0000000000000010 = in_x9;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090(lVar2);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 050a4640 to 051a4643 has its CatchHandler @ 050a46f4 */
                    /* try { // try from 050a4644 to 051a46cb has its CatchHandler @ 050a43bc */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_050a467c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_050a467c:
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    param_1 = unaff_x23 + (long)(int)unaff_w24 * (long)unaff_w26;
    uStack0000000000000008 = unaff_x22[1];
    uStack0000000000000000 = *unaff_x22;
    in_x9 = unaff_x22[2];
  } while( true );
}


