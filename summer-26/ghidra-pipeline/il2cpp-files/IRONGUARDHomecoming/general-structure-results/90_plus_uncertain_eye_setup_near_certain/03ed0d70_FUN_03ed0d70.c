/*
FUNCTION_NAME: FUN_03ed0d70
ENTRY_POINT: 03ed0d70
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


/* WARNING: Removing unreachable block (ram,0x03ed1024) */

void FUN_03ed0d70(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 local_38;
  
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483ad39 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457c3b8);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c3c0);
    thunk_FUN_01efb3a4(PTR_DAT_0457c3c8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c3d0);
    DAT_0483ad39 = 1;
  }
  puVar2 = PTR_DAT_0457c3d0;
  local_38 = 0;
  FUN_03ed054c(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = FUN_03ec8718(*(undefined8 *)puVar2);
  if ((lVar4 == 0) ||
     (FUN_022df844(lVar4,param_3,*(undefined8 *)PTR_DAT_0457c3b8), param_3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0457c3c0) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03ed0ea0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)PTR_DAT_0457c3c0,0);
LAB_03ed0ea0:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
  puVar3 = PTR_DAT_0457c3c8;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed0f18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03ed0f18:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) goto LAB_03ed0fa0;
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed0f74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03ed0f74:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar9 = FUN_03ed1128(param_1,uVar7,&local_38,0,0);
    uVar7 = local_38;
  } while ((uVar9 & 1) != 0);
  if ((param_4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_CircleXZData>__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_03ed0ca4(uVar8,uVar7,param_1);
    uVar7 = thunk_FUN_01efb3a4(PTR_DAT_0457c3d8);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar7);
  }
LAB_03ed0fa0:
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ed0ff4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03ed0ff4:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return;
}


