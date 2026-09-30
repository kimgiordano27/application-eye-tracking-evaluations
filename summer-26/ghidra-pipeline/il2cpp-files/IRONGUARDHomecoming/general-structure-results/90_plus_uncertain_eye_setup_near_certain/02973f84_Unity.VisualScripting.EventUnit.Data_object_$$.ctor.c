/*
FUNCTION_NAME: Unity.VisualScripting.EventUnit.Data<object>$$.ctor
ENTRY_POINT: 02973f84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02974110) */

void Unity_VisualScripting_EventUnit_Data<object>___ctor(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *in_x9;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar4 = (*in_x9)();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_04224ea4();
                    /* try { // try from 02973fa0 to 02a7414f has its CatchHandler @ 02973fa0
                       catch() { ... } // from try @ 02973fa0 with catch @ 02973fa0
                       catch() { ... } // from try @ 029741d8 with catch @ 02973fa0
                       catch() { ... } // from try @ 029741ec with catch @ 02973fa0
                       catch() { ... } // from try @ 02974228 with catch @ 02973fa0
                       catch() { ... } // from try @ 02974264 with catch @ 02973fa0 */
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x029740d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x838))();
      return;
    }
    lVar5 = unaff_x20[0x7e];
    uVar11 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
    lVar1 = unaff_x20[0x7f];
    (**(code **)(*unaff_x20 + 0x838))();
    lVar2 = unaff_x20[0x7e];
    uVar10 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
    lVar3 = unaff_x20[0x7f];
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_029e7654((int)lVar5,uVar11,(int)lVar1,(int)lVar2,uVar10,(int)lVar3,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar7);
    (**(code **)(*unaff_x20 + 0x198))();
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_029740e0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_029740e0:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return;
}


