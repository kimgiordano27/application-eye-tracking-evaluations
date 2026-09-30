/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 041780c0
PROGRAM: Untangled-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0417830c) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* try { // try from 041780c4 to 042780c7 has its CatchHandler @ 041780e8 */
  puVar3 = (undefined8 *)FUN_02eea86c(param_1,param_2,0);
  puVar1 = PTR_DAT_06d01f60;
                    /* try { // try from 041780c8 to 042780cf has its CatchHandler @ 041780ec */
                    /* try { // try from 041780d8 to 0427810b has its CatchHandler @ 04177e28 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 041780d4 with catch @ 041780e0
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0417800c with catch @ 041780e4
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 041780c4 with catch @ 041780e8
                        */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_06d02048;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 041780c8 with catch @ 041780ec
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 04177f3c with catch @ 041780f0
                        */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 0417810c to 0427810f has its CatchHandler @ 0417811c */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0417810c with catch @ 0417811c */
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto 
          Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
          ;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,0);

    Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
    :
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_041782b4;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041781c4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar4,lVar5,0);
LAB_041781c4:
    (*(code *)*puVar3)(&stack0x00000020,plVar4,puVar3[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000030;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_04176760();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000030 = in_stack_00000050;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar5 = lVar5 + (long)(int)uVar7 * 0x18;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000050;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000040;
    thunk_FUN_02f411dc(lVar5 + 0x20,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_041782d0;
    }
  }
LAB_041782b4:
  puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar1,0);
LAB_041782d0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


