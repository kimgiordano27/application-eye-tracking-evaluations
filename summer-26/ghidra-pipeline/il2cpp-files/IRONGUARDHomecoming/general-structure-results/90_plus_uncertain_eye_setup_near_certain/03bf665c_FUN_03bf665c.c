/*
FUNCTION_NAME: FUN_03bf665c
ENTRY_POINT: 03bf665c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bf67a8) */

undefined8 FUN_03bf665c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_04839aa4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_14176);
    DAT_04839aa4 = 1;
  }
  uVar3 = FUN_0340eec4(param_1,0);
  puVar2 = StringLiteral_14176;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar3 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_14172);
    FUN_034efd20(uVar5,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_14185);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar7);
  }
  plVar4 = (long *)FUN_034d3df0(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar5 = FUN_03bf685c(plVar4);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03bf673c;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03bf673c:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return uVar5;
}


