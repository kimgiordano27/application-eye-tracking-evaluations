/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 0562a820
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar4 = (**(code **)(*param_1 + 0x2a8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_070f6488;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_0593e698(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    plVar5 = (long *)FUN_0597090c(uVar10);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      return plVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03189058(plVar5);
  }
  if (unaff_x20 == (long *)0x0) goto LAB_0562ac3c;
  uVar4 = (**(code **)(*unaff_x20 + 0x3c8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x448))();
    uVar11 = *(undefined8 *)PTR_DAT_070ca570;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_0593e698(uVar11,0);
    uVar4 = FUN_05947b18(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x20 + 0x468))();
      if (lVar8 == 0) {
LAB_0562ac3c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0562ac40:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      plVar5 = *(long **)(lVar8 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(plVar5);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_070f6490;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      plVar6 = (long *)FUN_0593e698(uVar10,0);
      plVar7 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
      if (plVar7 == (long *)0x0) goto LAB_0562ac3c;
      if ((plVar5 != (long *)0x0) &&
         (lVar8 = thunk_FUN_031c3cac(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar10 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_0562ac40;
      plVar7[4] = (long)plVar5;
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x938))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940)),
         plVar6 == (long *)0x0)) goto LAB_0562ac3c;
      uVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2b0));
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_070f64a8;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar10 = FUN_0593e698(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_031e5338(*unaff_x24);
        }
        goto LAB_0562ab70;
      }
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar4 & 1) == 0) goto LAB_0562abd0;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_0594a30c(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_0562ab20;
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar8 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_0562ab20:
    if (uVar3 != 5) {
LAB_0562abd0:
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      plVar5 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 ();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
      }
      FUN_04748110(plVar5,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar8 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_0593e698(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_0562ab70:
  uVar10 = FUN_0597090c(uVar10);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4(lVar8);
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4(lVar8);
  }
  plVar5 = (long *)FUN_02d37100(uVar10,lVar8);
  return plVar5;
}


