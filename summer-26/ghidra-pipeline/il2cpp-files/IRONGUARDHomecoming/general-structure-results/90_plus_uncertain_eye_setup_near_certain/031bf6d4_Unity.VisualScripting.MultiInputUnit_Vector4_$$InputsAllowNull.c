/*
FUNCTION_NAME: Unity.VisualScripting.MultiInputUnit<Vector4>$$InputsAllowNull
ENTRY_POINT: 031bf6d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031bf924) */

void Unity_VisualScripting_MultiInputUnit<Vector4>__InputsAllowNull(void)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  uint uVar9;
  
  puVar3 = (undefined8 *)FUN_01ecb238();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 031bf6fc to 032bf713 has its CatchHandler @ 031bf788 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
                    /* try { // try from 031bf714 to 032bf777 has its CatchHandler @ 031bf644 */
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031bf75c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_031bf75c:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
                    /* try { // try from 031bf8a0 to 032bf94f has its CatchHandler @ 031bf950 */
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_031bf8c8;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 031bf778 to 032bf787 has its CatchHandler @ 031bf788 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
                    /* catch() { ... } // from try @ 031bf6fc with catch @ 031bf788
                       catch() { ... } // from try @ 031bf778 with catch @ 031bf788 */
    }
                    /* try { // try from 031bf78c to 032bf78f has its CatchHandler @ 031bf798 */
    lVar6 = *plVar4;
                    /* try { // try from 031bf790 to 032bf79b has its CatchHandler @ 031bf644 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031bf78c with catch @ 031bf798
                        */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031bf7d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_031bf7d4:
    (*(code *)*puVar3)(&stack0x00000060,plVar4,puVar3[1]);
    memcpy(&stack0x000000c0,&stack0x00000060,0x60);
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    if (uVar9 == *(uint *)(lVar5 + 0x18)) {
      FUN_031bdbfc();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar9 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar9 + 1;
    memcpy(&stack0x00000060,&stack0x000000c0,0x60);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000000,&stack0x00000060,0x60);
                    /* try { // try from 031bf85c to 032bf89f has its CatchHandler @ 031bf85c
                       catch() { ... } // from try @ 031bf85c with catch @ 031bf85c
                       catch() { ... } // from try @ 031bf950 with catch @ 031bf85c
                       catch() { ... } // from try @ 031bf980 with catch @ 031bf85c
                       catch() { ... } // from try @ 031bf9f4 with catch @ 031bf85c */
    if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    __dest = (void *)(lVar5 + (long)(int)uVar9 * 0x60 + 0x20);
    memcpy(__dest,&stack0x00000000,0x60);
    thunk_FUN_01f51358(__dest,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031bf8e4;
    }
  }
LAB_031bf8c8:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_031bf8e4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


