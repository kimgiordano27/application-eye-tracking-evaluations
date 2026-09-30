/*
FUNCTION_NAME: FUN_04010758
ENTRY_POINT: 04010758
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0401089c) */

void FUN_04010758(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_04585920;
  if ((DAT_0483bc7f & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04585928);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04585930);
    thunk_FUN_01efb3a4(PTR_DAT_04585920);
    thunk_FUN_01efb3a4(PTR_DAT_04585938);
    DAT_0483bc7f = 1;
  }
  uVar2 = FUN_032a0224(param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_04585930;
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_032a01b0(param_1,*(undefined8 *)PTR_DAT_04585938);
    plVar4 = (long *)FUN_03fadc10(uVar3,0);
    lVar5 = FUN_032a0290(param_1,*(undefined8 *)puVar1);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0400fd28(lVar5,plVar4);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0401086c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0401086c:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
  }
  FUN_02dfa120(param_1,*(undefined8 *)PTR_DAT_04585928);
  return;
}


