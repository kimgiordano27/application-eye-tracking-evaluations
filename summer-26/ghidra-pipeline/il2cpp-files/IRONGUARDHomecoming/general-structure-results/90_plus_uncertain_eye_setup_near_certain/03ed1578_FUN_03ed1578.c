/*
FUNCTION_NAME: FUN_03ed1578
ENTRY_POINT: 03ed1578
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03ed185c) */

void FUN_03ed1578(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined8 local_48;
  
  puVar2 = PTR_DAT_0457c308;
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483ad3a & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457c420);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c428);
    thunk_FUN_01efb3a4(PTR_DAT_0457c430);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c308);
    thunk_FUN_01efb3a4(PTR_DAT_0457c438);
    DAT_0483ad3a = 1;
  }
  puVar3 = PTR_DAT_0457c438;
  local_48 = 0;
  uVar4 = thunk_FUN_01f116d0(param_2,*(undefined8 *)puVar2);
  FUN_03ed054c(param_1,uVar4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_03ec8718(*(undefined8 *)puVar3);
  if ((lVar5 == 0) ||
     (FUN_022df844(lVar5,param_3,*(undefined8 *)PTR_DAT_0457c420), param_3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0457c428) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03ed16cc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_3,*(long *)PTR_DAT_0457c428,0);
LAB_03ed16cc:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
  puVar3 = PTR_DAT_0457c430;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed1744;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03ed1744:
    uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar9 & 1) == 0) goto LAB_03ed17d4;
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed17a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03ed17a0:
    auVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar9 = FUN_03ed1960(param_1,auVar11._0_8_,auVar11._8_8_,&local_48,0);
    uVar4 = local_48;
  } while ((uVar9 & 1) != 0);
  if ((param_4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_CircleXZData>__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_03ed0ca4(uVar8,uVar4,param_1);
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_0457c440);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar4);
  }
LAB_03ed17d4:
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed1828;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03ed1828:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  return;
}


