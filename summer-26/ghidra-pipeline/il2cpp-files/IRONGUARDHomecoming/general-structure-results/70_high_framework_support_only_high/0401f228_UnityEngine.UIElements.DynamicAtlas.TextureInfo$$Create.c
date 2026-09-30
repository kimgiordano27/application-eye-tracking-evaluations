/*
FUNCTION_NAME: UnityEngine.UIElements.DynamicAtlas.TextureInfo$$Create
ENTRY_POINT: 0401f228
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0401f600) */
/* WARNING: Removing unreachable block (ram,0x0401f618) */
/* WARNING: Removing unreachable block (ram,0x0401f61c) */
/* WARNING: Removing unreachable block (ram,0x0401f638) */
/* WARNING: Removing unreachable block (ram,0x0401f640) */
/* WARNING: Removing unreachable block (ram,0x0401f644) */
/* WARNING: Removing unreachable block (ram,0x0401f7b0) */
/* WARNING: Removing unreachable block (ram,0x0401f81c) */
/* WARNING: Removing unreachable block (ram,0x0401f828) */
/* WARNING: Removing unreachable block (ram,0x0401f860) */
/* WARNING: Removing unreachable block (ram,0x0401f88c) */
/* WARNING: Removing unreachable block (ram,0x0401f8bc) */
/* WARNING: Removing unreachable block (ram,0x0401f8e8) */
/* WARNING: Removing unreachable block (ram,0x0401f90c) */
/* WARNING: Removing unreachable block (ram,0x0401f978) */
/* WARNING: Removing unreachable block (ram,0x0401f660) */
/* WARNING: Removing unreachable block (ram,0x0401f7cc) */
/* WARNING: Removing unreachable block (ram,0x0401f67c) */
/* WARNING: Removing unreachable block (ram,0x0401f69c) */
/* WARNING: Removing unreachable block (ram,0x0401f7c8) */
/* WARNING: Removing unreachable block (ram,0x0401f7a4) */

undefined8 UnityEngine_UIElements_DynamicAtlas_TextureInfo__Create(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x22;
  long *unaff_x23;
  long lVar7;
  
  if (param_1 == 0) {
    FUN_01ecafa0();
    param_1 = *(long *)(unaff_x22 + 0x38);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  plVar2 = (long *)FUN_021580ac();
  lVar7 = *unaff_x23;
  lVar1 = *(long *)(lVar7 + 0x38);
  if (lVar1 == 0) {
    FUN_01ecafa0(lVar7);
    lVar1 = *(long *)(lVar7 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_021580ac(plVar2,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar1 + 0xb8),
                       *(undefined8 *)PTR_DAT_04585fd0);
  uVar3 = FUN_0340ebc0(*(undefined8 *)Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__,
                       uVar3,*(undefined8 *)StringLiteral_7756,0);
  lVar1 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0401f5ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0401f5ec:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
  return uVar3;
}


