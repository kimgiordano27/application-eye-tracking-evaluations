/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 044ec768
PROGRAM: waitwhat-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  plVar2 = (long *)thunk_FUN_031c3cac();
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    FUN_044eeae0();
    return;
  }
                    /* try { // try from 044ec774 to 045ec78b has its CatchHandler @ 044ec7c4 */
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* try { // try from 044ec78c to 045ec7b3 has its CatchHandler @ 044ec6fc */
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* try { // try from 044ec7b4 to 045ec7c3 has its CatchHandler @ 044ec7c4 */
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_044ec85c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 044ec774 with catch @ 044ec7c4
                       catch() { ... } // from try @ 044ec7b4 with catch @ 044ec7c4 */
    } while (uVar7 != 0);
  }
                    /* try { // try from 044ec7c8 to 045ec7cb has its CatchHandler @ 044ec7d4 */
                    /* try { // try from 044ec7cc to 045ec7d7 has its CatchHandler @ 044ec6fc */
  puVar3 = (undefined8 *)FUN_031c0d08(plVar2,lVar5,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044ec7c8 with catch @ 044ec7d4
                        */
LAB_044ec85c:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    uVar4 = FUN_03188b1c(lVar5,iVar1);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_044ec958;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar2,lVar5,5);
LAB_044ec958:
    (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
    *(int *)(unaff_x19 + 0x18) = iVar1;
  }
  return;
}


