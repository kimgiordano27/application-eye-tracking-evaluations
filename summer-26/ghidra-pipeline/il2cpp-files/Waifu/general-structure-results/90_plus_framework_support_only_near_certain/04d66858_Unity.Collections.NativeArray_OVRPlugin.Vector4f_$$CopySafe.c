/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 04d66858
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(long *param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 04d66858 to 04e6685b has its CatchHandler @ 04d66868 */
                    /* catch() { ... } // from try @ 04d66858 with catch @ 04d66868 */
  if ((DAT_086dab8f & 1) == 0) {
    FUN_0335b6c8(&DAT_083cb4e8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ce7a0,1);
    DataMemoryBarrier(2,3);
    DAT_086dab8f = 1;
  }
                    /* try { // try from 04d668a4 to 04e668cb has its CatchHandler @ 04d668e0 */
  if ((char)param_1[4] != '\0') {
    if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
                    /* WARNING: Subroutine does not return */
    FUN_068befc0(0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if (*param_1 == 0) {
    if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
                    /* try { // try from 04d668cc to 04e668d7 has its CatchHandler @ 04d66534 */
      FUN_033b9870();
    }
                    /* try { // try from 04d668d8 to 04e668df has its CatchHandler @ 04d668e0 */
    lVar7 = **(long **)(DAT_083ce7a0 + 0xb8);
    do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04d668a4 with catch @ 04d668e0
                       catch(type#2 @ 00000000) { ... } // from try @ 04d668d8 with catch @ 04d668e0
                        */
      if (*param_1 != 0) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_04d668fc;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_04d668fc:
    DataMemoryBarrier(2,3);
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)param_1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (bVar5) {
      return;
    }
  }
  lVar7 = *(long *)(param_2 + 0x20);
  lVar10 = param_1[2];
  if (lVar10 == 0) {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    FUN_04d66be0(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x68));
    return;
  }
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar7 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar8 = *(long *)(param_2 + 0x20);
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    lVar7 = FUN_03398a84();
    lVar9 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
    lVar8 = lVar9;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0338f618(lVar9);
      uVar3 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar8 = *(long *)(param_2 + 0x20);
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48);
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    FUN_05b89b78(lVar7,uVar11,uVar12,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x50));
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    *(long *)(*(long *)(lVar8 + 0xb8) + 0x10) = lVar7;
    lVar8 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    if (DAT_08908cd0 != 0) {
      uVar1 = *(long *)(lVar8 + 0xb8) + 0x10;
      puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  if (*(int *)(DAT_083cb4e8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0338f618();
  }
  FUN_03f6d06c(lVar10,lVar7,param_1,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x58));
  return;
}


