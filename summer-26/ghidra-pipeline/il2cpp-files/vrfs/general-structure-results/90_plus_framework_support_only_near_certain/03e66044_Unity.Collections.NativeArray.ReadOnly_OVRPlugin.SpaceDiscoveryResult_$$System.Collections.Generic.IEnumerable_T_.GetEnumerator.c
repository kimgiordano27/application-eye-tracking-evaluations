/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03e66044
PROGRAM: vrfs-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
          (void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  uint uStack000000000000000c;
  
  do {
    lVar4 = *unaff_x23;
    uStack000000000000000c = unaff_w21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *unaff_x23;
    }
    uVar1 = uStack000000000000000c;
    if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x18) <= (int)unaff_w21) {
      return 1;
    }
    lVar4 = *(long *)(unaff_x19 + 0x88);
                    /* try { // try from 03e66070 to 03f66073 has its CatchHandler @ 03e66084 */
    lVar8 = (long)(int)uStack000000000000000c;
                    /* try { // try from 03e66078 to 03f6607b has its CatchHandler @ 03e66080 */
                    /* try { // try from 03e6607c to 03f660a3 has its CatchHandler @ 03e65db4 */
    uVar5 = FUN_032194f0(&stack0x0000000c,0);
                    /* catch() { ... } // from try @ 03e66078 with catch @ 03e66080 */
                    /* catch() { ... } // from try @ 03e66070 with catch @ 03e66084 */
                    /* catch() { ... } // from try @ 03e65ffc with catch @ 03e66088 */
                    /* catch() { ... } // from try @ 03e66038 with catch @ 03e6608c */
    FUN_02526be4(*unaff_x24,uVar5,*unaff_x25,0);
                    /* try { // try from 03e660a4 to 03f660b7 has its CatchHandler @ 03e66168 */
    uVar5 = (**(code **)(*unaff_x20 + 0x1a8))();
                    /* try { // try from 03e660b8 to 03f6612b has its CatchHandler @ 03e65db4 */
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x22);
    }
    bVar3 = FUN_04161114(uVar5,0,0);
    uVar2 = uStack000000000000000c;
    if (lVar4 == 0) {
thunk_FUN_0160eeb4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_03e661b8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(byte *)(lVar4 + lVar8 + 0x20) = bVar3 & 1;
    lVar4 = *(long *)(unaff_x19 + 0x88);
    if (lVar4 == 0) goto thunk_FUN_0160eeb4;
    lVar8 = (long)(int)uStack000000000000000c;
    if (*(uint *)(lVar4 + 0x18) <= uStack000000000000000c) goto LAB_03e661b8;
    lVar7 = *(long *)(unaff_x19 + 0x90);
    if (*(char *)(lVar4 + lVar8 + 0x20) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar5 = FUN_032194f0(&stack0x0000000c,0);
      FUN_02526be4(*unaff_x24,uVar5,*unaff_x25,0);
      plVar6 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
      if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
      uVar9 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    }
    if (lVar7 == 0) goto thunk_FUN_0160eeb4;
    if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_03e661b8;
    *(undefined4 *)(lVar7 + lVar8 * 4 + 0x20) = uVar9;
    unaff_w21 = uStack000000000000000c + 1;
  } while( true );
}


