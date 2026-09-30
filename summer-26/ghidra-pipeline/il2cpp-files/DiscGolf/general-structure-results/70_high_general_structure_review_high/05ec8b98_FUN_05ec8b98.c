/*
FUNCTION_NAME: FUN_05ec8b98
ENTRY_POINT: 05ec8b98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_05ec8b98(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_06dc3e8d & 1) == 0) {
    FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<SampleAvatarEntity_AssetData>__ctor__);
    FUN_02d965b8(Method_System_Nullable<GeneralNameType>_get_HasValue__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>_Dispose__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<SampleAvatarEntity_AssetData>_GetEnumerator__
                );
    FUN_02d965b8(Method_System_Nullable<short>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StyleSelectorHelper_SelectorWorkItem>_Add__)
    ;
    FUN_02d965b8(
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
                );
    DAT_06dc3e8d = 1;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x99) == '\0') {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ec8d98;
      if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) == 1) {
        FUN_05e6f7ec(*(undefined8 *)
                      Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
                     ,0);
        return;
      }
    }
    lVar3 = *(long *)(param_1 + 0x40);
    *(undefined1 *)(param_2 + 0x99) = 0;
    puVar2 = Method_System_Nullable<short>__ctor__;
    if (lVar3 != 0) {
      FUN_040115d4(lVar3,param_2,*(undefined8 *)Method_System_Nullable<short>__ctor__);
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar4 = FUN_04ff1c80(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x88),
                             *(undefined8 *)Method_Unity_Collections_NativeArray<uint>__ctor__);
        puVar1 = Method_Unity_Collections_NativeArray<uint>_Dispose__;
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_05ec8d98;
          lVar3 = FUN_04ff19ec(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x88),
                               *(undefined8 *)Method_Unity_Collections_NativeArray<uint>_Dispose__);
          if (lVar3 == 0) goto LAB_05ec8d98;
          FUN_040115d4(lVar3,param_2,*(undefined8 *)puVar2);
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar3 = FUN_04ff19ec(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x88),
                                   *(undefined8 *)puVar1), lVar3 == 0)) goto LAB_05ec8d98;
          if (*(int *)(lVar3 + 0x18) == 0) {
            if (*(long *)(param_1 + 0x48) == 0) goto LAB_05ec8d98;
            FUN_04ff2f1c(*(long *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x88),
                         *(undefined8 *)Method_System_Nullable<GeneralNameType>_get_HasValue__);
          }
        }
        if (((*(long *)(param_1 + 0x50) != 0) &&
            (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x128), lVar3 != 0)) &&
           (lVar3 = *(long *)(lVar3 + 0x60), lVar3 != 0)) {
          uVar4 = FUN_04ff1c80(lVar3,*(undefined8 *)(param_2 + 0x88),
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<SampleAvatarEntity_AssetData>__ctor__
                              );
          if (((uVar4 & 1) == 0) || ((param_3 & 1) == 0)) {
            return;
          }
          if (((*(long *)(param_1 + 0x50) != 0) &&
              (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x128), lVar3 != 0)) &&
             ((lVar3 = *(long *)(lVar3 + 0x60), lVar3 != 0 &&
              (lVar3 = FUN_04ff19ec(lVar3,*(undefined8 *)(param_2 + 0x88),
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List<SampleAvatarEntity_AssetData>_GetEnumerator__
                                   ), lVar3 != 0)))) {
            *(undefined8 *)(lVar3 + 0x28) = 0;
            LeanTween__value((undefined8 *)(lVar3 + 0x28),0);
            return;
          }
        }
      }
    }
  }
LAB_05ec8d98:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


