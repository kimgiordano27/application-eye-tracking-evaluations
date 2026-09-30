/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 04a1b7b4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 in_w3;
  long *in_x4;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x23;
  int unaff_w26;
  
  do {
    uVar1 = unaff_w19 + ((int)(unaff_w26 - unaff_w19) >> 1);
                    /* try { // try from 04a1b7c8 to 04b1b7db has its CatchHandler @ 04a1b7e8 */
    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (in_x4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 04a1b7dc to 04b1b7ff has its CatchHandler @ 04a1b788 */
    uVar2 = *(undefined4 *)(unaff_x23 + (long)(int)uVar1 * 4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a1b7c8 with catch @ 04a1b7e8
                        */
      lVar4 = FUN_0322bef4();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 04a1b800 to 04b1b817 has its CatchHandler @ 04a1b850 */
      lVar4 = FUN_0322bef4(lVar4);
    }
    lVar6 = *in_x4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a1b850;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(in_x4,lVar4,0);
LAB_04a1b850:
    iVar3 = (*(code *)*puVar5)(in_x4,uVar2,in_w3,puVar5[1]);
    if (iVar3 == 0) {
      return uVar1;
    }
    if (iVar3 < 0) {
      unaff_w19 = uVar1 + 1;
    }
    else {
      unaff_w26 = uVar1 - 1;
    }
    if (unaff_w26 < (int)unaff_w19) {
      return ~unaff_w19;
    }
  } while( true );
}


