/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 04d63af4
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  ulong in_x10;
  long in_x12;
  long in_x13;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar8;
  undefined8 uVar9;
  
                    /* try { // try from 04d63af4 to 04e63af7 has its CatchHandler @ 04d63b18 */
  puVar2 = (ulong *)(in_x9 + in_x12);
                    /* try { // try from 04d63af8 to 04e63afb has its CatchHandler @ 04d637b0 */
  do {
                    /* try { // try from 04d63afc to 04e63aff has its CatchHandler @ 04d63b08 */
                    /* try { // try from 04d63b00 to 04e63b33 has its CatchHandler @ 04d637b0 */
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = *puVar2 | in_x13 << (in_x10 & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 04d63afc with catch @ 04d63b08
                        */
  } while (cVar3 != '\0');
  do {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 04d63aec with catch @ 04d63b18
                       catch(type#1 @ 07e8c608) { ... } // from try @ 04d63af4 with catch @ 04d63b18
                        */
    lVar7 = *unaff_x22;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 04d63934 with catch @ 04d63b1c
                        */
    if (lVar7 != 0) {
      ClearExclusiveLocal();
      bVar4 = false;
      goto LAB_04d63c90;
    }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 04d63af0 with catch @ 04d63b10
                        */
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
    if (bVar4) {
      *unaff_x22 = unaff_x20;
      cVar3 = ExclusiveMonitorsStatus();
    }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 04d638f4 with catch @ 04d63b14
                        */
  } while (cVar3 != '\0');
  bVar4 = true;
LAB_04d63c90:
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 0xcd0) != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)unaff_x22 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)unaff_x22 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = 0;
  if (!bVar4) {
    lVar6 = lVar7;
  }
  if (lVar6 != 0) {
    if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar6 != **(long **)(DAT_083ce7a0 + 0xb8)) {
      if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
        FUN_033b9870();
      }
                    /* WARNING: Subroutine does not return */
      FUN_068befc0(0);
    }
    plVar8 = (long *)unaff_x22[3];
    if (plVar8 == (long *)0x0) {
      if (unaff_x22[2] != 0) {
        FUN_040f0004();
        return;
      }
      FUN_040f0360();
      return;
    }
    lVar7 = *plVar8;
    if ((*(byte *)(DAT_083d1968 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_083d1968 + 0x130) * 8 + -8) ==
        DAT_083d1968)) {
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
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
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
        uVar9 = **(undefined8 **)(lVar7 + 0xb8);
        lVar7 = FUN_03398a84(DAT_083d0f60);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618(lVar6);
        }
        Newtonsoft_Json_Linq_JToken__SelectTokens
                  (lVar7,uVar9,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),0);
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0338f618();
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar7;
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
      uVar9 = FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d63fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x188))(plVar8,lVar7,uVar9,*(undefined8 *)(*plVar8 + 400));
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
  }
  return;
}


