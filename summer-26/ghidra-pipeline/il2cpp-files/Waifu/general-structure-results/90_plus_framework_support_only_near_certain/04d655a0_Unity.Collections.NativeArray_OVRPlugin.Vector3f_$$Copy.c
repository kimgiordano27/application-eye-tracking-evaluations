/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04d655a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_1 & 1) != 0) {
    return;
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x19 + 0x10);
  if (lVar9 == 0) {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    FUN_04d6583c();
    return;
  }
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618(lVar7);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    lVar6 = FUN_03398a84();
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar8 + 0x135);
    lVar7 = lVar8;
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_0338f618(lVar7);
    }
    FUN_05b89a90(lVar6,uVar10,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x50));
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 0x10) = lVar6;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (DAT_08908cd0 != 0) {
      uVar1 = *(long *)(lVar7 + 0xb8) + 0x10;
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
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_03f6cfe8(lVar9,lVar6);
  return;
}


