/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04d61f70
PROGRAM: Waifu-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x30);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x18) == 0) {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = FUN_03398a84(DAT_083d0f60);
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618(lVar5);
    }
    Newtonsoft_Json_Linq_JToken__SelectTokens
              (uVar6,uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x78),0);
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18) = uVar6;
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    if (DAT_08908cd0 != 0) {
      uVar1 = *(long *)(lVar5 + 0xb8) + 0x18;
      puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_040f3dc0(*unaff_x19,unaff_x19[1],DAT_08419250);
                    /* WARNING: Could not recover jumptable at 0x04d62128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


