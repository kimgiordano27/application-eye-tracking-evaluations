/*
FUNCTION_NAME: FUN_04010b50
ENTRY_POINT: 04010b50
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


/* WARNING: Removing unreachable block (ram,0x04010c98) */

void FUN_04010b50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  puVar2 = PTR_DAT_04585948;
  puVar1 = PTR_DAT_04585920;
  if ((DAT_0483bc81 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04585948);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04585930);
    thunk_FUN_01efb3a4(PTR_DAT_04585920);
    thunk_FUN_01efb3a4(PTR_DAT_04585938);
    DAT_0483bc81 = 1;
  }
  FUN_02dfa388(param_1,*(undefined8 *)puVar2);
  uVar3 = FUN_032a0224(param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_04585930;
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_032a01b0(param_1,*(undefined8 *)PTR_DAT_04585938);
    plVar5 = (long *)FUN_03fadc10(uVar4,0);
    lVar6 = FUN_032a0290(param_1,*(undefined8 *)puVar1);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04010220(lVar6,plVar5);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04010c78;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_04010c78:
      (*(code *)*puVar7)(plVar5,puVar7[1]);
    }
  }
  return;
}


