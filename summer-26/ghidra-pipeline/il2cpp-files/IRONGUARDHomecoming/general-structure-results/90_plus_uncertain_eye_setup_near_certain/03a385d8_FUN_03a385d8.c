/*
FUNCTION_NAME: FUN_03a385d8
ENTRY_POINT: 03a385d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a38850) */

uint FUN_03a385d8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_04838bf1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_5859);
    DAT_04838bf1 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_4453);
    FUN_034efd20(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_7167);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar10);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
  puVar4 = StringLiteral_5859;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03a386b0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
                    /* try { // try from 03a3869c to 03b386bb has its CatchHandler @ 03a38a7c */
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,0);
LAB_03a386b0:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      break;
    }
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar3;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
                    /* try { // try from 03a386d8 to 03b386e3 has its CatchHandler @ 03a38a70 */
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03a38714;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,1);
LAB_03a38714:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar8;
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar13 = (**(code **)(lVar11 + 0x1c8))(plVar8,param_2,*(undefined8 *)(lVar11 + 0x1d0));
  } while ((uVar13 & 1) == 0);
  plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar2);
  if (plVar6 != (long *)0x0) {
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03a387d0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,0);
LAB_03a387d0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return uVar5 & 1;
}


