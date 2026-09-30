/*
FUNCTION_NAME: FUN_0412e9ec
ENTRY_POINT: 0412e9ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0412ebdc) */

void FUN_0412e9ec(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar2 = PTR_DAT_0458a560;
  puVar1 = PTR_DAT_0458a558;
  if ((DAT_048407bf & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a560);
    thunk_FUN_01efb3a4(PTR_DAT_0458a558);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a568);
    DAT_048407bf = 1;
  }
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
                    /* try { // try from 0412ea78 to 0422eb87 has its CatchHandler @ 0412ea78
                       catch() { ... } // from try @ 0412ea78 with catch @ 0412ea78
                       catch() { ... } // from try @ 0412ec8c with catch @ 0412ea78
                       catch() { ... } // from try @ 0412ed70 with catch @ 0412ea78
                       catch() { ... } // from try @ 0412ee14 with catch @ 0412ea78 */
  FUN_041d2ef4(uVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_041dfef4(param_2,uVar4,param_3,param_1,0);
  if (param_3 != (long *)0x0) {
    lVar7 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0458a568) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0412eb08;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_3,*(long *)PTR_DAT_0458a568,0);
LAB_0412eb08:
    (*(code *)*puVar6)(param_3,plVar5,puVar6[1]);
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0412eb6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_0412eb6c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  puVar1 = Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__;
  if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar3 = FUN_04039fb4(0);
  if (iVar3 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar3 = FUN_04039fb4(0);
    if (iVar3 != 1) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


