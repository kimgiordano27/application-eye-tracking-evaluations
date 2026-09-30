/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Allocate
ENTRY_POINT: 04d66cbc
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Allocate(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long in_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  
  if ((*(byte *)(in_x10 + 0x130) <= *(byte *)(param_1 + 0x130)) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x10 + 0x130) * 8 + -8) == in_x10)) {
    lVar6 = *(long *)(unaff_x21 + 0x20);
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
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x18) == 0) {
      lVar6 = *(long *)(unaff_x21 + 0x20);
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
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      uVar7 = **(undefined8 **)(lVar6 + 0xb8);
      uVar5 = FUN_03398a84(DAT_083d0f60);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618(lVar6);
      }
      Newtonsoft_Json_Linq_JToken__SelectTokens
                (uVar5,uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x78),0);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18) = uVar5;
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0338f618();
      }
      if (DAT_08908cd0 != 0) {
        uVar1 = *(long *)(lVar6 + 0xb8) + 0x18;
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
                    /* WARNING: Could not recover jumptable at 0x04d66f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x188))();
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
    uVar5 = *unaff_x19;
    uVar7 = unaff_x19[1];
    lVar6 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
    if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar6 != 0) {
      FUN_068bde18(lVar6,uVar5,uVar7,0,8,unaff_x20,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  return;
}


