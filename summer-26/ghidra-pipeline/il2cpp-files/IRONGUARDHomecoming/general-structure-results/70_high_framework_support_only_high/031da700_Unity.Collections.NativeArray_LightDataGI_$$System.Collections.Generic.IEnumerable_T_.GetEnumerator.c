/*
FUNCTION_NAME: Unity.Collections.NativeArray<LightDataGI>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 031da700
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031da928) */

void Unity_Collections_NativeArray<LightDataGI>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long *param_1)

{
  void *__dest;
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar7;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *param_1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031da6f8 with catch @ 031da718
                        */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 031da730 to 032da747 has its CatchHandler @ 031da780 */
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_031da760;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 031da748 to 032da76f has its CatchHandler @ 031da6b8 */
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar1,0);
LAB_031da760:
    uVar5 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return;
      }
      lVar3 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_031da8cc;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 031da770 to 032da77f has its CatchHandler @ 031da780 */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* catch() { ... } // from try @ 031da730 with catch @ 031da780
                       catch() { ... } // from try @ 031da770 with catch @ 031da780 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 031da784 to 032da787 has its CatchHandler @ 031da790 */
                    /* try { // try from 031da788 to 032da793 has its CatchHandler @ 031da6b8 */
      lVar3 = FUN_01ecaf44(lVar3);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031da784 with catch @ 031da790
                        */
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_031da7d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar3,0);
LAB_031da7d8:
    (*(code *)*puVar2)(&stack0x00000048,param_1,puVar2[1]);
    memcpy(&stack0x00000090,&stack0x00000048,0x48);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar3 + 0x18)) {
      FUN_031d8c18();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    memcpy(&stack0x00000048,&stack0x00000090,0x48);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000000,&stack0x00000048,0x48);
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    __dest = (void *)(lVar3 + (long)(int)uVar7 * 0x48 + 0x20);
    memcpy(__dest,&stack0x00000000,0x48);
    thunk_FUN_01f51358(__dest,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_031da8e8;
    }
  }
LAB_031da8cc:
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,0);
LAB_031da8e8:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


