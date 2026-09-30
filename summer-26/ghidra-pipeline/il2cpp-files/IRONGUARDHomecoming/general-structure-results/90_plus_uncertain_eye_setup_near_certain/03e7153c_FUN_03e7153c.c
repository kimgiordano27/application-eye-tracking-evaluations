/*
FUNCTION_NAME: FUN_03e7153c
ENTRY_POINT: 03e7153c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e717b8) */

void FUN_03e7153c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar2 = PTR_DAT_0457ab80;
  if ((DAT_0483a9fd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0457ab80);
    DAT_0483a9fd = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_04283fa4(plVar8,0);
  if ((*(char *)(param_1 + 0x270) == '\0') && (*(char *)(param_1 + 0x2cb) == '\0')) {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04284998(plVar8,param_2,0);
    goto LAB_03e7172c;
  }
  if (*(char *)(param_1 + 0x2e9) != '\0') {
    iVar3 = FUN_03e6bb1c(param_1,*(undefined4 *)(param_1 + 0x23c));
    *(int *)(param_1 + 0x234) = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
LAB_03e715ec:
      *(int *)(param_1 + 0x234) = iVar4;
    }
    else {
      if (*(long *)(param_1 + 0x220) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar4 = *(int *)(*(long *)(param_1 + 0x220) + 0x10);
      if (iVar4 < iVar3) goto LAB_03e715ec;
    }
    iVar3 = FUN_03e6bb1c(param_1,*(undefined4 *)(param_1 + 0x240));
    *(int *)(param_1 + 0x238) = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
LAB_03e71620:
      *(int *)(param_1 + 0x238) = iVar4;
    }
    else {
      if (*(long *)(param_1 + 0x220) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar4 = *(int *)(*(long *)(param_1 + 0x220) + 0x10);
                    /* try { // try from 03e71610 to 03f71807 has its CatchHandler @ 03e71610
                       catch() { ... } // from try @ 03e71610 with catch @ 03e71610
                       catch() { ... } // from try @ 03e71838 with catch @ 03e71610
                       catch() { ... } // from try @ 03e719a8 with catch @ 03e71610
                       catch() { ... } // from try @ 03e719d0 with catch @ 03e71610
                       catch() { ... } // from try @ 03e71a64 with catch @ 03e71610
                       catch() { ... } // from try @ 03e71aac with catch @ 03e71610
                       catch() { ... } // from try @ 03e71af8 with catch @ 03e71610
                       catch() { ... } // from try @ 03e71b20 with catch @ 03e71610
                       catch() { ... } // from try @ 03e71b50 with catch @ 03e71610 */
      if (iVar4 < iVar3) goto LAB_03e71620;
    }
    *(undefined1 *)(param_1 + 0x2e9) = 0;
  }
  if (*(char *)(param_1 + 0x2ea) != '\0') {
    iVar3 = *(int *)(param_1 + 0x234);
    iVar4 = FUN_03e67f64(param_1);
    uVar5 = FUN_03e6b7a8(param_1,iVar4 + iVar3);
    *(undefined4 *)(param_1 + 0x23c) = uVar5;
    FUN_03e6a108(param_1,param_1 + 0x23c);
    iVar3 = *(int *)(param_1 + 0x238);
    iVar4 = FUN_03e67f64(param_1);
    uVar5 = FUN_03e6b7a8(param_1,iVar4 + iVar3);
    *(undefined4 *)(param_1 + 0x240) = uVar5;
    FUN_03e6a108(param_1,param_1 + 0x240);
    *(undefined1 *)(param_1 + 0x2ea) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x234);
  iVar6 = FUN_03e67f64(param_1);
  iVar4 = *(int *)(param_1 + 0x238);
  iVar7 = FUN_03e67f64(param_1);
  if (iVar6 + iVar3 == iVar7 + iVar4) {
    if (DAT_0482ee9c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
      DAT_0482ee9c = '\x01';
    }
    FUN_03e718a4(param_1,plVar8);
    FUN_03e712b8(param_1);
  }
  else {
    if (DAT_0482ee9c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
      DAT_0482ee9c = '\x01';
    }
    FUN_03e71e88(param_1,plVar8);
    FUN_03e71210(param_1);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_04284998(plVar8,param_2,0);
LAB_03e7172c:
  lVar10 = *plVar8;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03e71778;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03e71778:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


