/*
FUNCTION_NAME: UnityEngine.UIElements.DynamicAtlas.TextureInfo$$.ctor
ENTRY_POINT: 0401f278
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
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

undefined8 UnityEngine_UIElements_DynamicAtlas_TextureInfo___ctor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x23;
  long lVar7;
  
  plVar1 = (long *)FUN_021580ac();
  lVar7 = *unaff_x23;
  lVar4 = *(long *)(lVar7 + 0x38);
  if (lVar4 == 0) {
    FUN_01ecafa0(lVar7);
    lVar4 = *(long *)(lVar7 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_021580ac(plVar1,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar4 + 0xb8),
                       *(undefined8 *)PTR_DAT_04585fd0);
  uVar2 = FUN_0340ebc0(*(undefined8 *)Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__,
                       uVar2,*(undefined8 *)StringLiteral_7756,0);
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0401f5ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0401f5ec:
  (*(code *)*puVar3)(plVar1,puVar3[1]);
  return uVar2;
}


