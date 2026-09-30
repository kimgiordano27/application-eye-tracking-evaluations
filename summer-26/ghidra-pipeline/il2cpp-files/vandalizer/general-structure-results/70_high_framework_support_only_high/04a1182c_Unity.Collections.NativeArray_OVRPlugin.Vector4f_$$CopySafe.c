/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 04a1182c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  uint uVar4;
  ulong unaff_x28;
  ulong uVar5;
  undefined8 *unaff_x29;
  
  do {
    iVar2 = (*param_1)(param_2,unaff_x23,unaff_x24,param_5);
    if (iVar2 < 0) {
      uVar4 = (uint)unaff_x28;
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar4) || (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1))
      goto LAB_04a118bc;
      uVar1 = uVar4 - 1;
      unaff_x28 = (ulong)uVar1;
      *(undefined8 *)(unaff_x22 + (long)(int)(uVar4 + 1) * 8 + 0x20) = *unaff_x29;
      if ((int)uVar1 < unaff_w21) goto LAB_04a1187c;
                    /* try { // try from 04a1186c to 04b1187b has its CatchHandler @ 04a1187c */
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) goto LAB_04a118bc;
    }
    else {
LAB_04a1187c:
                    /* catch() { ... } // from try @ 04a117f0 with catch @ 04a1187c
                       catch() { ... } // from try @ 04a1186c with catch @ 04a1187c */
      uVar3 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar5 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
                    /* try { // try from 04a11880 to 04b11883 has its CatchHandler @ 04a1188c */
        uVar4 = (int)uVar5 + 1;
                    /* try { // try from 04a11884 to 04b1188f has its CatchHandler @ 04a1172c */
        if ((uint)uVar3 <= uVar4) goto LAB_04a118bc;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04a11880 with catch @ 04a1188c
                        */
                    /* try { // try from 04a11890 to 04b11b8f has its CatchHandler @ 04a11890
                       catch() { ... } // from try @ 04a11890 with catch @ 04a11890
                       catch() { ... } // from try @ 04a11c54 with catch @ 04a11890
                       catch() { ... } // from try @ 04a11d18 with catch @ 04a11890
                       catch() { ... } // from try @ 04a11dc4 with catch @ 04a11890 */
        *(undefined8 *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20) = unaff_x23;
        if (unaff_x28 == unaff_x26) {
          return;
        }
        uVar3 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if ((uint)uVar3 <= (uint)unaff_x27) goto LAB_04a118bc;
        unaff_x23 = *(undefined8 *)(unaff_x22 + unaff_x27 * 8 + 0x20);
        uVar5 = unaff_x28;
      } while ((long)unaff_x28 < unaff_x25);
      if ((uint)uVar3 <= (uint)unaff_x28) {
LAB_04a118bc:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
    }
    unaff_x29 = (undefined8 *)(unaff_x22 + (long)(int)unaff_x28 * 8 + 0x20);
    unaff_x24 = *unaff_x29;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    param_5 = *(undefined8 *)(unaff_x20 + 0x28);
  } while( true );
}


