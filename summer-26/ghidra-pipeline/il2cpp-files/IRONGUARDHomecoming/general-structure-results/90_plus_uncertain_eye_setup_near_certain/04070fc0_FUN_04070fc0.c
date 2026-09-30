/*
FUNCTION_NAME: FUN_04070fc0
ENTRY_POINT: 04070fc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_04070fc0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_0483e2f8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483e2f8 = 1;
  }
  uVar2 = FUN_035ad140(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04587118);
    uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04587120);
    FUN_034efd98(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04587128);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  pbVar3 = (byte *)FUN_035b5e80(param_2,0);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *param_1;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0407106c;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(param_1,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_0407106c:
  bVar1 = (*(code *)*puVar4)(param_1,puVar4[1]);
  *pbVar3 = bVar1 & 1;
  return;
}


