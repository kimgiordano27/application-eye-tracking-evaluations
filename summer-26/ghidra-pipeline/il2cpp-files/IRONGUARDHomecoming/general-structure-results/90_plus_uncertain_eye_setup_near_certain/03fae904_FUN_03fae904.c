/*
FUNCTION_NAME: FUN_03fae904
ENTRY_POINT: 03fae904
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03fae904(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_0483b824 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0483b824 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_04076670(uVar7,0);
  if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x58) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_040743bc(*(long *)(param_1 + 0x40),*(long *)(param_1 + 0x58),0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      uVar7 = *(undefined8 *)
               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      lVar3 = thunk_FUN_01f116d0(lVar8,uVar7);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar8,uVar7);
      }
      lVar3 = *(long *)puVar1;
      plVar4 = (long *)thunk_FUN_01f116d0(lVar8,lVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar8,lVar3);
      }
      lVar8 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03faea14;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar3,0);
LAB_03faea14:
                    /* WARNING: Could not recover jumptable at 0x03faea24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


