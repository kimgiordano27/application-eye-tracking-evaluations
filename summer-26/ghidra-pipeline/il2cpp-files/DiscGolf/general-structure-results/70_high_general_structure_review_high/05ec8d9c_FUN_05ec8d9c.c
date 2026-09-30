/*
FUNCTION_NAME: FUN_05ec8d9c
ENTRY_POINT: 05ec8d9c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ec8d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_06dc3e8e & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_02d965b8(
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                );
    FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>__ctor__);
    FUN_02d965b8(Method_System_Nullable<int>__ctor__);
    FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>_Dispose__);
    FUN_02d965b8(Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_02d965b8(Method_Oculus_Platform_Message<DestinationList>_get_Data__);
    FUN_02d965b8(PTR_DAT_06a149c0);
    FUN_02d965b8(PTR_DAT_06a149c8);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__)
    ;
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__);
    FUN_02d965b8(PTR_DAT_06a149d0);
    DAT_06dc3e8e = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_04ff1c80(*(long *)(param_1 + 0x10),param_3,
                         *(undefined8 *)Method_Unity_Collections_NativeArray<uint>__ctor__);
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                                );
      FUN_0400f984(uVar3,*(undefined8 *)
                          Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
                  );
      if (lVar7 == 0) goto LAB_05ec904c;
      FUN_04ff1a8c(lVar7,param_3,uVar3,
                   *(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__);
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = FUN_04ff19ec(*(long *)(param_1 + 0x10),param_3,
                             *(undefined8 *)Method_Unity_Collections_NativeArray<uint>_Dispose__),
       lVar7 != 0)) {
      lVar4 = *(long *)(lVar7 + 0x10);
      lVar6 = *(long *)Method_Oculus_Platform_Message<DestinationList>_get_Data__;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = param_2;
          LeanTween__value(puVar5,param_2);
        }
        else {
          FUN_040101ec(lVar7,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          if (*(char *)(*(long *)(param_1 + 0x50) + 0x30) == '\0') {
            return;
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar2 = FUN_04e937e4(*(long *)(param_1 + 0x18),param_2,
                                 *(undefined8 *)Method_System_Nullable<int>__ctor__);
            if ((uVar2 & 1) == 0) {
              lVar7 = *(long *)(param_1 + 0x18);
              uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a149d0);
              FUN_0408d358(uVar3,*(undefined8 *)PTR_DAT_06a149c8);
              if (lVar7 == 0) goto LAB_05ec904c;
              FUN_04e935f0(lVar7,param_2,uVar3,
                           *(undefined8 *)
                            Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                          );
            }
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar7 = FUN_04e93570(*(long *)(param_1 + 0x18),param_2,
                                     *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__)
               , lVar7 != 0)) {
              lVar4 = *(long *)(lVar7 + 0x10);
              lVar6 = *(long *)PTR_DAT_06a149c0;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = param_3;
                  return;
                }
                FUN_0408dbe4(lVar7,param_3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05ec904c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


