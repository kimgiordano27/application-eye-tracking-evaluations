/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 04d639b0
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x25;
  undefined1 unaff_w26;
  
  FUN_0335b6c8(param_1 + 0xc68,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d1c30,1);
                    /* try { // try from 04d639d0 to 04e639d7 has its CatchHandler @ 04d63b0c */
  DataMemoryBarrier(2,3);
                    /* try { // try from 04d639d8 to 04e63aeb has its CatchHandler @ 04d637b0 */
  FUN_0335b6c8(&DAT_08418cd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08418cd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08419250,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23b8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x25 + 0xb81) = unaff_w26;
  if (unaff_x20 == 0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar11 = thunk_FUN_03398a84();
    uVar7 = FUN_033d1ba8(&DAT_08451220);
    FUN_0677f140(uVar11,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar11);
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_04d640b8();
  if ((unaff_w23 >> 1 & 1) != 0) {
    if (*(int *)(DAT_083cb4e8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = FUN_0689adf8(0);
    plVar10 = unaff_x22 + 2;
    *plVar10 = lVar6;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if ((unaff_w23 & 1) != 0) {
    plVar10 = (long *)FUN_0689ad7c(0);
    if (plVar10 != (long *)0x0) {
      lVar6 = FUN_0339a700(*plVar10 + 0x20);
      uVar11 = DAT_083bd568;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
      }
      lVar9 = FUN_0683eca4(uVar11,0);
      if (lVar9 != lVar6) {
        plVar8 = unaff_x22 + 3;
        *plVar8 = (long)plVar10;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        goto LAB_04d63ab8;
      }
    }
    if (*(int *)(DAT_083d1c68 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = FUN_068b2ce4(0);
    if (DAT_086d9727 == '\0') {
      FUN_0335b6c8(&DAT_083d1c68,1);
      DataMemoryBarrier(2,3);
      DAT_086d9727 = '\x01';
    }
    if (*(int *)(DAT_083d1c68 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar6 != *(long *)(*(long *)(DAT_083d1c68 + 0xb8) + 8)) {
      plVar10 = unaff_x22 + 3;
      *plVar10 = lVar6;
      if (DAT_08908cd0 != 0) {
        puVar2 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
LAB_04d63ab8:
  lVar6 = *unaff_x22;
  if (lVar6 == 0) {
    plVar10 = unaff_x22 + 1;
    *plVar10 = unaff_x19;
    if (DAT_08908cd0 != 0) {
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar9 = *unaff_x22;
      if (lVar9 != 0) {
        ClearExclusiveLocal();
        bVar4 = false;
        goto LAB_04d63c90;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar4) {
        *unaff_x22 = unaff_x20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_04d63c90:
    DataMemoryBarrier(2,3);
    if (DAT_08908cd0 != 0) {
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
      lVar6 = lVar9;
    }
    if (lVar6 == 0) {
      return;
    }
  }
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
  plVar10 = (long *)unaff_x22[3];
  if (plVar10 == (long *)0x0) {
    if (unaff_x22[2] == 0) {
      FUN_040f0360();
      return;
    }
    FUN_040f0004();
    return;
  }
  lVar6 = *plVar10;
  if ((*(byte *)(DAT_083d1968 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_083d1968 + 0x130) * 8 + -8) ==
      DAT_083d1968)) {
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
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) {
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
      uVar11 = **(undefined8 **)(lVar6 + 0xb8);
      lVar6 = FUN_03398a84(DAT_083d0f60);
      lVar9 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618(lVar9);
      }
      Newtonsoft_Json_Linq_JToken__SelectTokens
                (lVar6,uVar11,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38),0);
      lVar9 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      *(long *)(*(long *)(lVar9 + 0xb8) + 8) = lVar6;
      lVar9 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      if (DAT_08908cd0 != 0) {
        uVar1 = *(long *)(lVar9 + 0xb8) + 8;
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
    uVar11 = FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d63fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x188))(plVar10,lVar6,uVar11,*(undefined8 *)(*plVar10 + 400));
    return;
  }
  if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_083d1c68 + 0x130)) ||
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_083d1c68 + 0x130) * 8 + -8) !=
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
  lVar6 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
  if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083c96c8);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_068bde18(lVar6);
  return;
}


