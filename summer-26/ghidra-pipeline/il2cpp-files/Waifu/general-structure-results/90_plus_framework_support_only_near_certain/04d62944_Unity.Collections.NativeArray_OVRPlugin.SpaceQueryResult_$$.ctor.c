/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04d62944
PROGRAM: Waifu-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int in_w10;
  ulong in_x11;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  
  do {
                    /* catch() { ... } // from try @ 04d628c4 with catch @ 04d6294c
                       catch() { ... } // from try @ 04d6293c with catch @ 04d6294c */
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = *param_1 | in_x11;
      cVar3 = ExclusiveMonitorsStatus();
    }
                    /* try { // try from 04d62950 to 04e62953 has its CatchHandler @ 04d6295c */
  } while (cVar3 != '\0');
                    /* try { // try from 04d62954 to 04e6295f has its CatchHandler @ 04d627f8 */
  lVar5 = 0;
  if (in_w10 == 0) {
    lVar5 = in_x9;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04d62950 with catch @ 04d6295c
                        */
  if (lVar5 != 0) {
                    /* try { // try from 04d62960 to 04e62c57 has its CatchHandler @ 04d62960
                       catch() { ... } // from try @ 04d62960 with catch @ 04d62960
                       catch() { ... } // from try @ 04d62d30 with catch @ 04d62960
                       catch() { ... } // from try @ 04d62e04 with catch @ 04d62960
                       catch() { ... } // from try @ 04d62eac with catch @ 04d62960 */
    if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar5 != **(long **)(DAT_083ce7a0 + 0xb8)) {
      if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
        FUN_033b9870();
      }
                    /* WARNING: Subroutine does not return */
      FUN_068befc0(0);
    }
    plVar7 = *(long **)(unaff_x22 + 0x18);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x10) != 0) {
        FUN_040f0004();
        return;
      }
      FUN_040f0360();
      return;
    }
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
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
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
        uVar8 = **(undefined8 **)(lVar5 + 0xb8);
        lVar5 = FUN_03398a84(DAT_083d0f60);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618(lVar6);
        }
        Newtonsoft_Json_Linq_JToken__SelectTokens
                  (lVar5,uVar8,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),0);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar5;
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        if (DAT_08908cd0 != 0) {
          uVar1 = *(long *)(lVar6 + 0xb8) + 8;
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
      uVar8 = FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d62c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x188))(plVar7,lVar5,uVar8,*(undefined8 *)(*plVar7 + 400));
      return;
    }
    if ((*(byte *)(DAT_083d1c68 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_083d1c68 + 0x130) * 8 + -8) ==
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
      lVar5 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
      if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083c96c8);
      }
      if (lVar5 != 0) {
        FUN_068bde18(lVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  return;
}


