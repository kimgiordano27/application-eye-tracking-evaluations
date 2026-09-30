/*
FUNCTION_NAME: FUN_0416aa34
ENTRY_POINT: 0416aa34
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long * FUN_0416aa34(long param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0335b6c8(&DAT_084012d0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f33e0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f33d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c4d78,1);
    DataMemoryBarrier(2,3);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0338f674(param_3);
    }
  }
  lVar6 = DAT_084012d0;
  lVar8 = *(long *)(DAT_084012d0 + 0x38);
  if (lVar8 == 0) {
    FUN_0338f674(DAT_084012d0);
    lVar8 = *(long *)(lVar6 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0338f618();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  if (param_2 != (long *)0x0) {
    lVar6 = **(long **)(lVar6 + 0xb8);
    iVar5 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (0 < iVar5) {
      lVar6 = FUN_03398a84(DAT_083c4d78);
      FUN_04ab0488(lVar6,iVar5,DAT_083f33d8);
      iVar11 = 0;
      do {
        uVar7 = (**(code **)(*param_2 + 0x238))(param_2,iVar11,*(undefined8 *)(*param_2 + 0x240));
        lVar8 = DAT_083f33e0;
        if (lVar6 == 0) goto MagicaCloth2_ExSimpleNativeArray<ColliderManager_WorkData>__Serialize;
        lVar9 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) goto MagicaCloth2_ExSimpleNativeArray<ColliderManager_WorkData>__Serialize;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar10 = uVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
          FUN_04ab0e54(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar5);
    }
    FUN_06d5b830(param_1,lVar6,0);
    if (param_1 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 8))(param_1,param_2);
      FUN_06d5bbe0(param_1,lVar6,0);
      return param_2;
    }
  }
MagicaCloth2_ExSimpleNativeArray<ColliderManager_WorkData>__Serialize:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


