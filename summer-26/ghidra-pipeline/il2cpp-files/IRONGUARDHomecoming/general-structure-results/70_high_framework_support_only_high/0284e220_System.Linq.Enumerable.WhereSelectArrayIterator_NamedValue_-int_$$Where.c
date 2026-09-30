/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<NamedValue,-int>$$Where
ENTRY_POINT: 0284e220
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


/* WARNING: Removing unreachable block (ram,0x0284e398) */

void System_Linq_Enumerable_WhereSelectArrayIterator<NamedValue,_int>__Where(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 != 0) {
    FUN_0422b208();
    lVar6 = unaff_x20[0x7e];
    lVar7 = unaff_x20[0x7f];
                    /* try { // try from 0284e248 to 0294e327 has its CatchHandler @ 0284e248
                       catch() { ... } // from try @ 0284e248 with catch @ 0284e248
                       catch() { ... } // from try @ 0284e334 with catch @ 0284e248
                       catch() { ... } // from try @ 0284e3a4 with catch @ 0284e248
                       catch() { ... } // from try @ 0284e3d0 with catch @ 0284e248
                       catch() { ... } // from try @ 0284e430 with catch @ 0284e248 */
    FUN_0422b27c();
    plVar1 = (long *)FUN_02499e28(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,lVar6,lVar7,unaff_x20[0x7e],unaff_x20[0x7f],
                       *(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      lVar8 = unaff_x20[0x7e];
      lVar9 = unaff_x20[0x7f];
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar1 = (long *)FUN_029e6444(lVar6,lVar7,lVar8,lVar9,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar1);
      (**(code **)(*unaff_x20 + 0x838))();
      (**(code **)(*unaff_x20 + 0x198))();
      lVar6 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto FUN_0284e36c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
FUN_0284e36c:
      (*(code *)*puVar4)(plVar1,puVar4[1]);
    }
  }
  return;
}


