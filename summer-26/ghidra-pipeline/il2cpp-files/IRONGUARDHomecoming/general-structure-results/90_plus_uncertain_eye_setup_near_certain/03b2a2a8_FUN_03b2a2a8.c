/*
FUNCTION_NAME: FUN_03b2a2a8
ENTRY_POINT: 03b2a2a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b2a3d8) */

void FUN_03b2a2a8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_048393c5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_048393c5 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_CircleData>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_11764);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  plVar2 = (long *)FUN_03b2468c();
  if ((param_3 & 1) != 0) {
    FUN_03b28888(param_1);
  }
  lVar3 = *(long *)(param_1 + 200);
  if (lVar3 == 0) {
    FUN_03b1da04(param_1);
    lVar3 = *(long *)(param_1 + 200);
  }
  FUN_03b29f10(lVar3,param_2);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03b2a370;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_03b2a370:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


