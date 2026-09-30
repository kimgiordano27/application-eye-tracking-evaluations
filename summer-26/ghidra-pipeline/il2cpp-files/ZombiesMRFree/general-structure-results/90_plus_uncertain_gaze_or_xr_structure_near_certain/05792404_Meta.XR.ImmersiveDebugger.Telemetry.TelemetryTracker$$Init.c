/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 05792404
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


long * Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  if (in_w9 == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05afde1c();
  uVar3 = FUN_05b0716c();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce98);
    FUN_05acc42c(plVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    plVar7 = *(long **)(lVar5 + 0xc0);
    goto Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x25);
  }
  plVar4 = (long *)FUN_05afde1c(uVar9,0);
  if (plVar4 == (long *)0x0) {
LAB_0579286c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = (**(code **)(*plVar4 + 0x2b8))();
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_0579286c;
    uVar3 = (**(code **)(*unaff_x20 + 0x3d8))();
    if ((uVar3 & 1) == 0) {
LAB_05792748:
      uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
      if ((uVar3 & 1) == 0) {
switchD_057927c8_default:
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        plVar4 = (long *)thunk_FUN_0301080c();
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4(lVar5);
        }
        FUN_0491a9c4(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
        return plVar4;
      }
      if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05b238cc();
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x25);
      }
      uVar2 = FUN_05b09cc0(uVar9,0);
      switch(uVar2) {
      case 5:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06f9ceb0;
        break;
      case 6:
      case 8:
      case 9:
      case 10:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06f9ce80;
        break;
      case 7:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06f9ceb8;
        break;
      case 0xb:
      case 0xc:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06f9cea0;
        break;
      default:
        goto switchD_057927c8_default;
      }
      goto LAB_057924c0;
    }
    uVar9 = (**(code **)(*unaff_x20 + 0x458))();
    uVar10 = *(undefined8 *)PTR_DAT_06f80bf8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    uVar10 = FUN_05afde1c(uVar10,0);
    uVar3 = FUN_05b0716c(uVar9,uVar10,0);
    if ((uVar3 & 1) == 0) goto LAB_05792748;
    lVar5 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar5 == 0) goto LAB_0579286c;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05792870:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar4 = *(long **)(lVar5 + 0x20);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar4);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_06f9ce90;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar7 = (long *)FUN_05afde1c(uVar9,0);
    plVar6 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
    if (plVar6 == (long *)0x0) goto LAB_0579286c;
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = thunk_FUN_03010710(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
      uVar9 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_05792870;
    plVar6[4] = (long)plVar4;
    thunk_FUN_03048534(plVar6 + 4,plVar4);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x928))
                                   (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x930)),
       plVar7 == (long *)0x0)) goto LAB_0579286c;
    uVar3 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2c0));
    if ((uVar3 & 1) == 0) goto LAB_05792748;
    uVar9 = *(undefined8 *)PTR_DAT_06f9cea8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_05afde1c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x24);
    }
  }
  else {
    lVar5 = *unaff_x25;
    puVar8 = (undefined8 *)PTR_DAT_06f9ce88;
LAB_057924c0:
    uVar9 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_05afde1c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x24);
    }
  }
  plVar4 = (long *)FUN_05b31ad8(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor:
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar4);
    }
  }
  return plVar4;
}


