/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 04d63210
PROGRAM: Waifu-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(void)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  
  lVar7 = *unaff_x20;
  bVar3 = *(byte *)(*(long *)(in_x9 + 0x968) + 0x130);
  if ((bVar3 <= *(byte *)(lVar7 + 0x130)) &&
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)(in_x9 + 0x968))) {
    lVar7 = *(long *)(unaff_x21 + 0x20);
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
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x18) == 0) {
      lVar7 = *(long *)(unaff_x21 + 0x20);
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
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      uVar8 = **(undefined8 **)(lVar7 + 0xb8);
      uVar6 = FUN_03398a84(DAT_083d0f60);
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618(lVar7);
      }
      Newtonsoft_Json_Linq_JToken__SelectTokens
                (uVar6,uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x78),0);
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18) = uVar6;
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      if (DAT_08908cd0 != 0) {
        uVar1 = *(long *)(lVar7 + 0xb8) + 0x18;
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
    FUN_040f3dc0(*unaff_x19,unaff_x19[1],DAT_08419250);
                    /* WARNING: Could not recover jumptable at 0x04d634a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x188))();
    return;
  }
  if ((*(byte *)(DAT_083d1c68 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_083d1c68 + 0x130) * 8 + -8) ==
      DAT_083d1c68)) {
    if (*(int *)(DAT_083d1c30 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086d9726 == '\0') {
      FUN_0335b6c8(&DAT_083d1c30,1);
      DataMemoryBarrier(2,3);
      DAT_086d9726 = '\x01';
    }
    if (*(int *)(DAT_083d1c30 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = *unaff_x19;
    uVar8 = unaff_x19[1];
    lVar7 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
    if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar7 != 0) {
      FUN_068bde18(lVar7,uVar6,uVar8,0,8,unaff_x20,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  return;
}


