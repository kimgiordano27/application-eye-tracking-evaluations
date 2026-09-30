/*
FUNCTION_NAME: FUN_04229ea0
ENTRY_POINT: 04229ea0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04229ff8) */

void FUN_04229ea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04841233 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458ffc0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045911e0);
    DAT_04841233 = 1;
  }
  if ((*(long *)(param_1 + 0x3a0) != 0) &&
     (FUN_0422a3c4(param_1), puVar1 = PTR_DAT_0458ffc0, (*(byte *)(param_1 + 0x51) >> 3 & 1) == 0))
  {
    lVar2 = *(long *)PTR_DAT_0458ffc0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    if (((*(uint *)(param_1 + 0x374) | *(uint *)(param_1 + 0x370) | *(uint *)(param_1 + 0x368)) >>
         (ulong)(*(uint *)(*(long *)(lVar2 + 0xb8) + 0x10) & 0x1f) & 1) != 0) {
      plVar3 = (long *)FUN_025e1568(*(undefined8 *)(param_1 + 0x3a0),param_2,
                                    *(undefined8 *)PTR_DAT_045911e0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar3,param_1,0);
      FUN_041d97d0(param_1,plVar3,0);
      lVar2 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04229fd8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
                    /* try { // try from 04229fbc to 0432a12f has its CatchHandler @ 04229fbc
                       catch() { ... } // from try @ 04229fbc with catch @ 04229fbc
                       catch() { ... } // from try @ 0422a1b4 with catch @ 04229fbc
                       catch() { ... } // from try @ 0422a278 with catch @ 04229fbc
                       catch() { ... } // from try @ 0422a324 with catch @ 04229fbc */
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_04229fd8:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return;
}


