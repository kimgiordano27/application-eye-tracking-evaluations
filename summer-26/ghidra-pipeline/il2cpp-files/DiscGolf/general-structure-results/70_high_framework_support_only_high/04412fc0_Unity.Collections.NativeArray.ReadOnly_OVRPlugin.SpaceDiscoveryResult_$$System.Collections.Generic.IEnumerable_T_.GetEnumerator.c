/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04412fc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *in_x9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 uVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  while( true ) {
    uVar4 = *in_x9;
    uVar3 = in_x9[2];
    *(undefined8 *)(unaff_x26 + 0x18) = in_x9[1];
    *(undefined8 *)(unaff_x26 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x26 + 0x20) = uVar3;
    uVar1 = thunk_FUN_05542350(param_1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 04412ff4 to 04512ff7 has its CatchHandler @ 04413004 */
                    /* try { // try from 04412ff8 to 0451301f has its CatchHandler @ 04412dc4 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04412efc with catch @ 04413000
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04412ee4 with catch @ 04413004
                       catch(type#1 @ 066567d8) { ... } // from try @ 04412ff4 with catch @ 04413004
                        */
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    in_stack_00000040 = unaff_x21[2];
    param_2 = thunk_FUN_02dd2d7c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                                 &stack0x00000030);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    param_1 = &stack0x00000008;
    param_3 = 0;
    in_x9 = (undefined8 *)(unaff_x25 + (long)(int)unaff_w19 * (long)unaff_w27);
    in_stack_00000008 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


