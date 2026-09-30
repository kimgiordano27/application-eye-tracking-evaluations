/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 05792280
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_ImmersiveDebugger_Telemetry___cctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xe80));
  FUN_02fe925c(PTR_DAT_06f6d848);
  FUN_02fe925c(PTR_DAT_06f9ce88);
  FUN_02fe925c(PTR_DAT_06f9ce90);
  FUN_02fe925c(PTR_DAT_06f9ce98);
  FUN_02fe925c(PTR_DAT_06f9cea0);
  FUN_02fe925c(PTR_DAT_06f9cea8);
  FUN_02fe925c(PTR_DAT_06f80bf8);
  FUN_02fe925c(PTR_DAT_06f98ef0);
  FUN_02fe925c(PTR_DAT_06f9ceb0);
  FUN_02fe925c(PTR_DAT_06f9ceb8);
  FUN_02fe925c(PTR_DAT_06f80908);
  FUN_02fe925c(PTR_DAT_06f6f008);
  FUN_02fe925c(PTR_DAT_06f6d6a0);
  *(undefined1 *)(unaff_x20 + 0x1aa) = 1;
  puVar2 = PTR_DAT_06f6d6a0;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_06f98ef0;
  plVar6 = (long *)FUN_05afde1c(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05792864;
  }
  uVar12 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f807f0,0);
  uVar7 = FUN_05b0716c(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_DAT_06f80908;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_05afde1c(uVar12,0);
    uVar7 = FUN_05b0716c(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce98);
      FUN_05acc42c(plVar6,0);
      goto LAB_05792448;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_05afde1c(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_0579286c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2c0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_0579286c;
      uVar7 = (**(code **)(*plVar6 + 0x3d8))(plVar6,*(undefined8 *)(*plVar6 + 0x3e0));
      if ((uVar7 & 1) == 0) {
LAB_05792748:
        uVar7 = (**(code **)(*plVar6 + 0x5a8))(plVar6,*(undefined8 *)(*plVar6 + 0x5b0));
        if ((uVar7 & 1) == 0) {
switchD_057927c8_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02feb2c4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          plVar6 = (long *)thunk_FUN_0301080c();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02feb2c4(lVar5);
          }
          FUN_0491a9c4(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar12 = FUN_05b238cc(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar2);
        }
        uVar4 = FUN_05b09cc0(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06f9ceb0;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06f9ce80;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06f9ceb8;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06f9cea0;
          break;
        default:
          goto switchD_057927c8_default;
        }
        goto LAB_057924c0;
      }
      uVar12 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      uVar13 = *(undefined8 *)PTR_DAT_06f80bf8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar2);
      }
      uVar13 = FUN_05afde1c(uVar13,0);
      uVar7 = FUN_05b0716c(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_05792748;
      lVar5 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
      if (lVar5 == 0) goto LAB_0579286c;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05792870:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_DAT_06f9ce90;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar8 = (long *)FUN_05afde1c(uVar12,0);
      plVar9 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
      if (plVar9 == (long *)0x0) goto LAB_0579286c;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_03010710(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                           ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_05792870;
      plVar9[4] = (long)plVar10;
      thunk_FUN_03048534(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x928))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x930)),
         plVar8 == (long *)0x0)) goto LAB_0579286c;
      uVar7 = (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2c0));
      if ((uVar7 & 1) == 0) goto LAB_05792748;
      uVar12 = *(undefined8 *)PTR_DAT_06f9cea8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_05afde1c(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)PTR_DAT_06f9ce88;
LAB_057924c0:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_05afde1c(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_05b31ad8(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce78);
    FUN_05acc32c(plVar6,0);
LAB_05792448:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_05792864:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar6);
    }
  }
  return plVar6;
}


