/*
FUNCTION_NAME: FUN_0422a0b0
ENTRY_POINT: 0422a0b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0422a27c) */
/* WARNING: Removing unreachable block (ram,0x0422a308) */

void FUN_0422a0b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  if ((DAT_04841234 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458ff88);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045911e8);
    thunk_FUN_01efb3a4(PTR_DAT_04589ea8);
    DAT_04841234 = 1;
  }
  puVar1 = PTR_DAT_04589ea8;
  lVar7 = *(long *)(param_1 + 0x2b8);
  if (*(long *)(param_1 + 0x3a0) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04589ea8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar7 == 0) goto LAB_0422a300;
    FUN_0411cf5c(lVar7,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    uVar4 = *(uint *)(param_1 + 0x50);
  }
  else {
    if (lVar7 == 0) {
LAB_0422a300:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0411cf5c(lVar7,*(undefined8 *)(*(long *)(param_1 + 0x3a0) + 0x28),0);
    FUN_0422a4b4(param_1);
                    /* try { // try from 0422a130 to 0432a157 has its CatchHandler @ 0422a288 */
    FUN_04227d20(param_1,*(uint *)(param_1 + 0x2ac) & 0xffffffbc);
    puVar1 = PTR_DAT_0458ff88;
    uVar4 = *(uint *)(param_1 + 0x50);
    if ((uVar4 >> 0xb & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_0458ff88;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar1;
      }
      if (((*(uint *)(param_1 + 0x374) | *(uint *)(param_1 + 0x370) | *(uint *)(param_1 + 0x368)) >>
           (ulong)(*(uint *)(*(long *)(lVar7 + 0xb8) + 0x10) & 0x1f) & 1) != 0) {
                    /* try { // try from 0422a18c to 0432a1b3 has its CatchHandler @ 0422a284 */
        plVar2 = (long *)FUN_025e1568(param_2,*(undefined8 *)(param_1 + 0x3a0),
                                      *(undefined8 *)PTR_DAT_045911e8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* try { // try from 0422a1b4 to 0432a273 has its CatchHandler @ 04229fbc */
        FUN_041d4560(plVar2,param_1,0);
        FUN_041d97d0(param_1,plVar2,0);
        lVar7 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0422a264;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar2,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0422a264:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* try { // try from 0422a274 to 0432a277 has its CatchHandler @ 0422a280 */
                    /* try { // try from 0422a278 to 0432a29f has its CatchHandler @ 04229fbc */
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0422a274 with catch @ 0422a280
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0422a18c with catch @ 0422a284
                        */
      uVar4 = *(uint *)(param_1 + 0x50) & 0xfffff7ff;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0422a130 with catch @ 0422a288
                        */
      *(uint *)(param_1 + 0x50) = uVar4;
    }
  }
  plVar2 = *(long **)(param_1 + 0x3a0);
  *(uint *)(param_1 + 0x50) = uVar4 & 0xffffdfff;
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0422a2a0 to 0432a2a3 has its CatchHandler @ 0422a2bc */
    (**(code **)(*plVar2 + 0x338))(plVar2,param_1,0x218,*(undefined8 *)(*plVar2 + 0x340));
  }
                    /* catch() { ... } // from try @ 0422a2a0 with catch @ 0422a2bc */
  uVar5 = FUN_0340eec4(*(undefined8 *)(param_1 + 0x58),0);
  if (((uVar5 & 1) == 0) && (plVar2 = *(long **)(param_1 + 0x3a0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0422a2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x338))(plVar2,param_1,2,*(undefined8 *)(*plVar2 + 0x340));
    return;
  }
                    /* try { // try from 0422a2fc to 0432a323 has its CatchHandler @ 0422a338 */
  return;
}


