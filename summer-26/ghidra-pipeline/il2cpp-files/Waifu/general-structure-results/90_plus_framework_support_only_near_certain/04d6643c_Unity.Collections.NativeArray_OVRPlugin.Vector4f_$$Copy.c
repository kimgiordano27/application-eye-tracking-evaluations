/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04d6643c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long in_x9;
  long unaff_x21;
  long lVar7;
  long *unaff_x23;
  undefined8 uVar8;
  
  bVar3 = *(byte *)(*(long *)(in_x9 + 0x968) + 0x130);
  if ((bVar3 <= *(byte *)(param_1 + 0x130)) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)(in_x9 + 0x968))) {
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* try { // try from 04d66534 to 04e66657 has its CatchHandler @ 04d66534
                       catch() { ... } // from try @ 04d66534 with catch @ 04d66534
                       catch() { ... } // from try @ 04d6673c with catch @ 04d66534
                       catch() { ... } // from try @ 04d6681c with catch @ 04d66534
                       catch() { ... } // from try @ 04d66824 with catch @ 04d66534
                       catch() { ... } // from try @ 04d668cc with catch @ 04d66534 */
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
    if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) {
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
                (uVar6,uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38),0);
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar6;
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0338f618();
      }
      if (DAT_08908cd0 != 0) {
        uVar1 = *(long *)(lVar7 + 0xb8) + 8;
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
    FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d666dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x23 + 0x188))();
    return;
  }
  if ((*(byte *)(DAT_083d1c68 + 0x130) <= *(byte *)(param_1 + 0x130)) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(DAT_083d1c68 + 0x130) * 8 + -8) ==
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
    lVar7 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
    if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083c96c8);
    }
    if (lVar7 != 0) {
      FUN_068bde18(lVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  return;
}


