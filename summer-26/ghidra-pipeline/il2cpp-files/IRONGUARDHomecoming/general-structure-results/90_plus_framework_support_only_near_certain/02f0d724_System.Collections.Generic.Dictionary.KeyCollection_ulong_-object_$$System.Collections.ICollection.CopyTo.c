/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<ulong,-object>$$System.Collections.ICollection.CopyTo
ENTRY_POINT: 02f0d724
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f0d948) */

void System_Collections_Generic_Dictionary_KeyCollection<ulong,_object>__System_Collections_ICollection_CopyTo
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  
  lVar3 = FUN_01ecaf44();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
                    /* try { // try from 02f0d738 to 0300d81b has its CatchHandler @ 02f0d0c4 */
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02f0d774;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02f0d774:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02f0d908 with catch @ 02f0d944
                       catch() { ... } // from try @ 02f0d93c with catch @ 02f0d944 */
    FUN_01f08a3c();
  }
  iVar10 = 0;
  do {
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f0d7ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02f0d7ec:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
                    /* catch() { ... } // from try @ 02f0d8b0 with catch @ 02f0d8c8 */
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 == 0) goto LAB_02f0d8f8;
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 02f0d81c to 0300d81f has its CatchHandler @ 02f0d880 */
                    /* try { // try from 02f0d820 to 0300d823 has its CatchHandler @ 02f0d87c */
      lVar3 = FUN_01ecaf44(lVar3);
                    /* try { // try from 02f0d824 to 0300d827 has its CatchHandler @ 02f0d878 */
    }
                    /* try { // try from 02f0d828 to 0300d833 has its CatchHandler @ 02f0d874 */
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 02f0d834 to 0300d837 has its CatchHandler @ 02f0d860 */
                    /* try { // try from 02f0d838 to 0300d83f has its CatchHandler @ 02f0d874 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 02f0d840 to 0300d847 has its CatchHandler @ 02f0d0c4 */
        if (*(long *)(piVar9 + -2) == lVar3) {
                    /* catch() { ... } // from try @ 02f0d2a4 with catch @ 02f0d864 */
                    /* catch() { ... } // from try @ 02f0d414 with catch @ 02f0d868 */
                    /* catch() { ... } // from try @ 02f0d2e4 with catch @ 02f0d86c */
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f0d870;
        }
                    /* try { // try from 02f0d848 to 0300d84b has its CatchHandler @ 02f0d858 */
        uVar8 = uVar8 - 1;
                    /* try { // try from 02f0d84c to 0300d8af has its CatchHandler @ 02f0d0c4 */
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 02f0d848 with catch @ 02f0d858 */
                    /* catch() { ... } // from try @ 02f0d3f4 with catch @ 02f0d85c */
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar3,0);
                    /* catch() { ... } // from try @ 02f0d834 with catch @ 02f0d860 */
LAB_02f0d870:
                    /* catch() { ... } // from try @ 02f0d36c with catch @ 02f0d870 */
                    /* catch() { ... } // from try @ 02f0d828 with catch @ 02f0d874
                       catch() { ... } // from try @ 02f0d838 with catch @ 02f0d874 */
                    /* catch() { ... } // from try @ 02f0d824 with catch @ 02f0d878 */
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                    /* catch() { ... } // from try @ 02f0d820 with catch @ 02f0d87c */
                    /* catch() { ... } // from try @ 02f0d81c with catch @ 02f0d880 */
    if (iVar10 == 0) {
      *(undefined8 *)(unaff_x21 + 8) = uVar6;
                    /* try { // try from 02f0d8b0 to 0300d8b3 has its CatchHandler @ 02f0d8c8 */
      thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 8));
    }
    else {
                    /* catch() { ... } // from try @ 02f0d6d4 with catch @ 02f0d884 */
      lVar3 = *(long *)(unaff_x21 + 0x10);
                    /* catch() { ... } // from try @ 02f0d550 with catch @ 02f0d888 */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02f0d93c to 0300d943 has its CatchHandler @ 02f0d944 */
        FUN_01f08a3c();
      }
                    /* catch() { ... } // from try @ 02f0d660 with catch @ 02f0d88c */
                    /* catch() { ... } // from try @ 02f0d5d0 with catch @ 02f0d890 */
                    /* catch() { ... } // from try @ 02f0d4d4 with catch @ 02f0d894 */
                    /* catch() { ... } // from try @ 02f0d454 with catch @ 02f0d898 */
      if (*(uint *)(lVar3 + 0x18) <= iVar10 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar3 + (long)(int)(iVar10 - 1U) * 8 + 0x20) = uVar6;
      thunk_FUN_01f51358();
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    /* try { // try from 02f0d908 to 0300d92f has its CatchHandler @ 02f0d944 */
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f0d914;
    }
  }
LAB_02f0d8f8:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02f0d914:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
                    /* try { // try from 02f0d930 to 0300d93b has its CatchHandler @ 02f0d0c4 */
  return;
}


