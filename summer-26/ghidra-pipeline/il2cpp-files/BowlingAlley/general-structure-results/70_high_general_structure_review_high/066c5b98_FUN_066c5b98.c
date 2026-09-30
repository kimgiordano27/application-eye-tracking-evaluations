/*
FUNCTION_NAME: FUN_066c5b98
ENTRY_POINT: 066c5b98
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;telemetry_or_network_hits_10;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x066c5f68) */

void FUN_066c5b98(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_076e0317 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>__ctor__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Remove__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_set_Item__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Clear__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_GetEnumerator__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_Remove__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_get_Count__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_set_Item__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Clear__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Remove__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_set_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>__ctor__
                      );
    DAT_076e0317 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar11 != 0) {
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined4 *)(lVar11 + 0x20 + uVar10 * 4) = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)uVar1);
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(uint *)(param_1 + 0x78) = uVar1 - 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_058f8650(*(long *)(param_1 + 0x10),0,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar11 = FUN_051a7f04(*(long *)(param_1 + 0x48),
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_set_Item__
                               ),
         puVar9 = 
         Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Remove__
         , puVar8 = 
           Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Clear__
         , puVar7 = 
           Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>__ctor__
         , puVar6 = Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_set_Item__,
         puVar5 = Method_System_Collections_Generic_Dictionary<ulong,_Vector3>__ctor__,
         puVar4 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_set_Item__,
         puVar3 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__,
         puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>__ctor__, lVar11 != 0)
         ) {
        FUN_04ca5730(&local_d0,lVar11,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_set_Item__
                    );
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        local_70 = local_c0;
        while (uVar10 = FUN_053ac148(&local_80,*(undefined8 *)puVar5), lVar11 = local_70,
              (uVar10 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_041e3694(&local_d0,local_70,*(undefined8 *)puVar6);
          uStack_98 = uStack_c8;
          local_a0 = local_d0;
          local_90 = local_c0;
          while (uVar10 = FUN_052d44b4(&local_a0,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
            if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_0474e0ec(*(long *)(param_1 + 0x68),local_90,*(undefined8 *)puVar9);
          }
          FUN_052d44b0(&local_a0,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_0474e0ec(*(long *)(param_1 + 0x60),lVar11,*(undefined8 *)puVar7);
        }
        FUN_053ac144(&local_80,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_051a82b8(*(long *)(param_1 + 0x48),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__
                      );
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar11 = FUN_050f8940(*(long *)(param_1 + 0x50),
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Remove__
                                   ), lVar11 != 0)) {
            FUN_04c929a8(&local_b8,lVar11,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>__ctor__
                        );
            while (uVar10 = FUN_05392010(&local_b8,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
              if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              FUN_0474e0ec(*(long *)(param_1 + 0x58),local_a8,*(undefined8 *)puVar8);
            }
            FUN_0539200c(&local_b8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<ulong,_Request>_Clear__);
            if (*(long *)(param_1 + 0x50) != 0) {
              FUN_050f8c98(*(long *)(param_1 + 0x50),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>__ctor__
                          );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


