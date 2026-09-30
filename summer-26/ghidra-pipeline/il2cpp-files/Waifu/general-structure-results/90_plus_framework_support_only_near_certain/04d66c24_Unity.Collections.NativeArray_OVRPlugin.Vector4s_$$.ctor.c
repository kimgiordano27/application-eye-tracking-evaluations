/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 04d66c24
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(void)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  long lVar8;
  undefined1 unaff_w22;
  undefined8 uVar9;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d1968,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d1c68,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d1c30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08418cd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08418cd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08419250,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xb90) = unaff_w22;
  plVar7 = (long *)unaff_x19[3];
  if (plVar7 == (long *)0x0) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    if (*(char *)((long)unaff_x19 + 0x4a) != '\0') {
      if (unaff_x19[2] != 0) {
        FUN_040f0004(*unaff_x19,unaff_x19[1],1,DAT_08418cd0);
        return;
      }
      FUN_040f0360(*unaff_x19,unaff_x19[1],1,DAT_08418cd8);
      return;
    }
    lVar5 = *unaff_x19;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04d66d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),unaff_x19[1],*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  else {
    lVar5 = *plVar7;
    if ((*(byte *)(DAT_083d1968 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_083d1968 + 0x130) * 8 + -8) ==
        DAT_083d1968)) {
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
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (lVar5 == 0) {
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
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar5 = FUN_03398a84(DAT_083d0f60);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618(lVar6);
        }
        Newtonsoft_Json_Linq_JToken__SelectTokens
                  (lVar5,uVar9,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x78),0);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 0x18) = lVar5;
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
      uVar9 = FUN_040f3dc0(*unaff_x19,unaff_x19[1],DAT_08419250);
                    /* WARNING: Could not recover jumptable at 0x04d66f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x188))(plVar7,lVar5,uVar9,*(undefined8 *)(*plVar7 + 400));
      return;
    }
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_083d1c68 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_083d1c68 + 0x130) * 8 + -8) !=
        DAT_083d1c68)) {
      return;
    }
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
    lVar5 = *unaff_x19;
    lVar6 = unaff_x19[1];
    lVar8 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
    if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar8 != 0) {
      FUN_068bde18(lVar8,lVar5,lVar6,0,8,plVar7,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


