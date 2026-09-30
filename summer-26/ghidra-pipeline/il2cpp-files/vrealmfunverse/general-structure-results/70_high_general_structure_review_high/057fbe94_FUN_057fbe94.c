/*
FUNCTION_NAME: FUN_057fbe94
ENTRY_POINT: 057fbe94
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_057fbe94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  if ((DAT_066d2b7b & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Capacity__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Item__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<Allocator2D_Area>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Allocator2D_Area>_Add__);
    DAT_066d2b7b = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Item__
  ;
  puVar1 = 
  Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Capacity__
  ;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0385a22c(&local_48,*(long *)(param_1 + 0x18),
                 *(undefined8 *)Method_System_Collections_Generic_List<Allocator2D_Area>_Add__);
    while (uVar3 = FUN_0474b16c(&local_48,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar3 = local_38 & 0xffffffff;
      if (*(uint *)(lVar5 + 0x18) <= (uint)local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar4 = *(long **)(lVar5 + 0x20 + uVar3 * 0x10);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      *(undefined1 *)(lVar5 + 0x20 + uVar3 * 0x10 + 8) = 0;
    }
    FUN_0474b168(&local_48,*(undefined8 *)puVar1);
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


