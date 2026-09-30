/*
FUNCTION_NAME: FUN_03bf542c
ENTRY_POINT: 03bf542c
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


/* WARNING: Removing unreachable block (ram,0x03bf5550) */

void FUN_03bf542c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  
  if ((DAT_04839aa0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04839aa0 = 1;
  }
  uVar2 = FUN_0340eec4(param_2,0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar2 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_14172);
    FUN_034efd20(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01efb3a4(StringLiteral_14173);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  plVar3 = (long *)FUN_034d3e68(param_2,0);
  FUN_03bf55f8(param_1,plVar3);
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03bf54e8;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03bf54e8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


