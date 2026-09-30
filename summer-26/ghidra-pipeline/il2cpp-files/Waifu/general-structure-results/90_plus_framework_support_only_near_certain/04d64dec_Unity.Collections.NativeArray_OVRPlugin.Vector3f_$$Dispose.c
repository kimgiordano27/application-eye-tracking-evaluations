/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04d64dec
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  puVar6 = (undefined8 *)(param_1 + 0x10);
  *puVar6 = param_2;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((unaff_x23 & 1) != 0) {
    plVar10 = (long *)FUN_0689ad7c(0);
    if (plVar10 != (long *)0x0) {
      lVar9 = FUN_0339a700(*plVar10 + 0x20);
      uVar11 = DAT_083bd568;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
      }
      lVar8 = FUN_0683eca4(uVar11,0);
      if (lVar8 != lVar9) {
        plVar7 = unaff_x22 + 3;
        *plVar7 = (long)plVar10;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = *puVar2 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        goto LAB_04d64e38;
      }
    }
    if (*(int *)(DAT_083d1c68 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar9 = FUN_068b2ce4(0);
    if (DAT_086d9727 == '\0') {
      FUN_0335b6c8(&DAT_083d1c68,1);
      DataMemoryBarrier(2,3);
      DAT_086d9727 = '\x01';
    }
    if (*(int *)(DAT_083d1c68 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (lVar9 != *(long *)(*(long *)(DAT_083d1c68 + 0xb8) + 8)) {
      plVar10 = unaff_x22 + 3;
      *plVar10 = lVar9;
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
LAB_04d64e38:
  lVar9 = *unaff_x22;
  if (lVar9 == 0) {
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
      lVar8 = *unaff_x22;
      if (lVar8 != 0) {
        ClearExclusiveLocal();
        bVar4 = false;
        goto LAB_04d65010;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar4) {
        *unaff_x22 = unaff_x20;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_04d65010:
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
    lVar9 = 0;
    if (!bVar4) {
      lVar9 = lVar8;
    }
    if (lVar9 == 0) {
      return;
    }
  }
  if (*(int *)(DAT_083ce7a0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (lVar9 != **(long **)(DAT_083ce7a0 + 0xb8)) {
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
  lVar9 = *plVar10;
  if ((*(byte *)(DAT_083d1968 + 0x130) <= *(byte *)(lVar9 + 0x130)) &&
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(DAT_083d1968 + 0x130) * 8 + -8) ==
      DAT_083d1968)) {
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0338f618();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0338f618();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0338f618();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0338f618();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) {
      lVar9 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar9 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0338f618();
      }
      uVar11 = **(undefined8 **)(lVar9 + 0xb8);
      lVar9 = FUN_03398a84(DAT_083d0f60);
      lVar8 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618(lVar8);
      }
      Newtonsoft_Json_Linq_JToken__SelectTokens
                (lVar9,uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38),0);
      lVar8 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618();
      }
      *(long *)(*(long *)(lVar8 + 0xb8) + 8) = lVar9;
      lVar8 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618();
      }
      if (DAT_08908cd0 != 0) {
        uVar1 = *(long *)(lVar8 + 0xb8) + 8;
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
                    /* WARNING: Could not recover jumptable at 0x04d65338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x188))(plVar10,lVar9,uVar11,*(undefined8 *)(*plVar10 + 400));
    return;
  }
  if ((*(byte *)(lVar9 + 0x130) < *(byte *)(DAT_083d1c68 + 0x130)) ||
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(DAT_083d1c68 + 0x130) * 8 + -8) !=
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
  lVar9 = *(long *)(*(long *)(DAT_083d1c30 + 0xb8) + 0x28);
  if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083c96c8);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_068bde18(lVar9);
  return;
}


