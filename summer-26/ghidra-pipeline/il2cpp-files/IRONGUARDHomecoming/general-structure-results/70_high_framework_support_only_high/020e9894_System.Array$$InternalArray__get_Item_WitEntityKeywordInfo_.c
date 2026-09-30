/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<WitEntityKeywordInfo>
ENTRY_POINT: 020e9894
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x020e99bc) */

void System_Array__InternalArray__get_Item<WitEntityKeywordInfo>(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  
  lVar1 = FUN_01f08890(param_1,2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 020e98b4 to 021e98bb has its CatchHandler @ 020e9998 */
  if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_01f116d0(), lVar2 == 0)) {
    uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,0);
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(long *)(lVar1 + 0x20) = unaff_x23;
                    /* try { // try from 020e98cc to 021e98df has its CatchHandler @ 020e9990 */
  thunk_FUN_01f51358();
                    /* try { // try from 020e98e0 to 021e98f3 has its CatchHandler @ 020e9994 */
  if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_01f116d0(), lVar2 == 0)) {
                    /* try { // try from 020e99e0 to 021e99e3 has its CatchHandler @ 020e9a14 */
    uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 020e99e4 to 021e9a03 has its CatchHandler @ 020e9798 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,0);
  }
                    /* try { // try from 020e98f4 to 021e9907 has its CatchHandler @ 020e998c */
  if (*(uint *)(lVar1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(long *)(lVar1 + 0x28) = unaff_x20;
  thunk_FUN_01f51358();
                    /* try { // try from 020e9908 to 021e991b has its CatchHandler @ 020e9988 */
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 020e9928 to 021e992f has its CatchHandler @ 020e997c */
  uVar3 = FUN_021588f4();
  *unaff_x21 = uVar3;
  thunk_FUN_01f51358();
  lVar1 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_020e9998;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_020e9998:
  (*(code *)*puVar4)();
  return;
}


