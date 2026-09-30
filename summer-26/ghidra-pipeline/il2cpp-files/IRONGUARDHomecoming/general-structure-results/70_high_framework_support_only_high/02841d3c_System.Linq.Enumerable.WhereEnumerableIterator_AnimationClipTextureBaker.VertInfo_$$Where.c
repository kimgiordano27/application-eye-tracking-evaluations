/*
FUNCTION_NAME: System.Linq.Enumerable.WhereEnumerableIterator<AnimationClipTextureBaker.VertInfo>$$Where
ENTRY_POINT: 02841d3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02841eb4) */

void System_Linq_Enumerable_WhereEnumerableIterator<AnimationClipTextureBaker_VertInfo>__Where
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
                    /* try { // try from 02841d50 to 02941d5f has its CatchHandler @ 02841d60 */
  uVar1 = (**(code **)(param_1 + 0x1b8))(param_2,unaff_x20[0x7e],unaff_x20[0x7f]);
  if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 02841d00 with catch @ 02841d60
                       catch() { ... } // from try @ 02841d50 with catch @ 02841d60 */
    lVar2 = FUN_04224ea4();
                    /* try { // try from 02841d64 to 02941d67 has its CatchHandler @ 02841d70 */
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02841e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x838))();
      return;
    }
                    /* try { // try from 02841d68 to 02941d73 has its CatchHandler @ 02841ae8 */
    lVar9 = unaff_x20[0x7e];
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02841d64 with catch @ 02841d70
                        */
    lVar8 = unaff_x20[0x7f];
    (**(code **)(*unaff_x20 + 0x838))();
    lVar6 = unaff_x20[0x7e];
    lVar7 = unaff_x20[0x7f];
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_029e54ac(lVar9,lVar8,lVar6,lVar7,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3);
    (**(code **)(*unaff_x20 + 0x198))();
    lVar2 = *plVar3;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02841e88;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02841e88:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


