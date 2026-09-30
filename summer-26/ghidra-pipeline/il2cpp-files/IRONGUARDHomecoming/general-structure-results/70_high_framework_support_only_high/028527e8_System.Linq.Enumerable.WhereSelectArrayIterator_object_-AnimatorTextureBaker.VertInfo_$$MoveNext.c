/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<object,-AnimatorTextureBaker.VertInfo>$$MoveNext
ENTRY_POINT: 028527e8
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


/* WARNING: Removing unreachable block (ram,0x02852940) */

void System_Linq_Enumerable_WhereSelectArrayIterator<object,_AnimatorTextureBaker_VertInfo>__MoveNext
               (long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  
  if (param_1 != 0) {
    FUN_0422b208();
    lVar6 = unaff_x20[0x7e];
    FUN_0422b27c();
    plVar2 = (long *)FUN_0249b1a8(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
                    /* try { // try from 02852820 to 02952907 has its CatchHandler @ 02852820
                       catch() { ... } // from try @ 02852820 with catch @ 02852820
                       catch() { ... } // from try @ 02852918 with catch @ 02852820
                       catch() { ... } // from try @ 02852990 with catch @ 02852820
                       catch() { ... } // from try @ 028529bc with catch @ 02852820
                       catch() { ... } // from try @ 02852a1c with catch @ 02852820 */
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,(int)lVar6,(int)unaff_x20[0x7e],*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) == 0) {
      lVar1 = unaff_x20[0x7e];
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar2 = (long *)FUN_029e6a44((int)lVar6,(int)lVar1,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2);
      (**(code **)(*unaff_x20 + 0x838))();
      (**(code **)(*unaff_x20 + 0x198))();
      lVar6 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02852918;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02852918:
      (*(code *)*puVar5)(plVar2,puVar5[1]);
    }
  }
  return;
}


