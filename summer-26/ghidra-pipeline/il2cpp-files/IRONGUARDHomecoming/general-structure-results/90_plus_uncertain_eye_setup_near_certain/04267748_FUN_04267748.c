/*
FUNCTION_NAME: FUN_04267748
ENTRY_POINT: 04267748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x042678fc) */

void FUN_04267748(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_0457ab80;
  if ((DAT_048416b8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0457ab80);
    DAT_048416b8 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_04283fa4(plVar5,0);
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04284998(plVar5,param_2,0);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x108);
    if (DAT_0482ee9c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
      DAT_0482ee9c = '\x01';
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (ulong)(uint)(*(undefined4 **)
                           (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8))
                         [1];
    uVar10 = FUN_04113870(**(undefined4 **)
                            (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8)
                          ,uVar7,lVar9,0);
    iVar3 = FUN_042612bc(param_1);
    iVar4 = FUN_04261318(param_1);
    if (iVar3 == iVar4) {
      FUN_042679d0(uVar10,uVar7,param_1,plVar5);
    }
    else {
      FUN_042680e8(uVar10,uVar7,param_1,plVar5);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04284998(plVar5,param_2,0);
  }
  lVar9 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_042678d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_042678d4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


