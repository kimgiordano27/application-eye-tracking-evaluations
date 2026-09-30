/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRSpaceUser>$$Equals
ENTRY_POINT: 0326f238
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0326f3d4) */
/* WARNING: Removing unreachable block (ram,0x0326f3d0) */
/* WARNING: Removing unreachable block (ram,0x0326f418) */

void System_Collections_Generic_ObjectEqualityComparer<OVRSpaceUser>__Equals(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 0326f23c to 0336f24b has its CatchHandler @ 0326f24c */
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *param_1;
                    /* catch() { ... } // from try @ 0326f1c0 with catch @ 0326f24c
                       catch() { ... } // from try @ 0326f23c with catch @ 0326f24c */
                    /* try { // try from 0326f250 to 0336f253 has its CatchHandler @ 0326f25c */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0326f254 to 0336f25f has its CatchHandler @ 0326f0fc */
    if (uVar5 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326f250 with catch @ 0326f25c
                        */
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 0326f260 to 0336f55f has its CatchHandler @ 0326f260
                       catch() { ... } // from try @ 0326f260 with catch @ 0326f260
                       catch() { ... } // from try @ 0326f624 with catch @ 0326f260
                       catch() { ... } // from try @ 0326f6e8 with catch @ 0326f260
                       catch() { ... } // from try @ 0326f794 with catch @ 0326f260 */
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0326f294;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar1,0);
LAB_0326f294:
    uVar5 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_0326f30c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar3,0);
FUN_0326f30c:
    (*(code *)*puVar2)(&stack0x00000030,param_1,puVar2[1]);
    FUN_0326ecd4();
  } while( true );
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0326f3b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0326f3b8:
    (*(code *)*puVar2)(param_1,puVar2[1]);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


