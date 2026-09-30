/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 05791b18
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


long * Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar3 = (**(code **)(param_1 + 0x3d8))();
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x458))();
    uVar10 = *(undefined8 *)PTR_DAT_06f80bf8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    uVar10 = FUN_05afde1c(uVar10,0);
    uVar3 = FUN_05b0716c(uVar4,uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar5 == 0) {
LAB_05791dfc:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05791e00:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar9 = *(long **)(lVar5 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar9);
        }
      }
      uVar4 = *(undefined8 *)PTR_DAT_06f9ce90;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar6 = (long *)FUN_05afde1c(uVar4,0);
      plVar7 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
      if (plVar7 == (long *)0x0) goto LAB_05791dfc;
      if ((plVar9 != (long *)0x0) &&
         (lVar5 = thunk_FUN_03010710(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar4,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_05791e00;
      plVar7[4] = (long)plVar9;
      thunk_FUN_03048534(plVar7 + 4,plVar9);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x928))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x930)),
         plVar6 == (long *)0x0)) goto LAB_05791dfc;
      uVar3 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2c0));
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)PTR_DAT_06f9cea8;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar4 = FUN_05afde1c(uVar4,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*unaff_x24);
        }
        goto LAB_05791a8c;
      }
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar4 = FUN_05b238cc();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    uVar2 = FUN_05b09cc0(uVar4,0);
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
      goto switchD_05791d58_default;
    }
    uVar4 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar4 = FUN_05afde1c(uVar4,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x24);
    }
LAB_05791a8c:
    plVar9 = (long *)FUN_05b31ad8(uVar4);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar9);
      }
    }
    return plVar9;
  }
switchD_05791d58_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  plVar9 = (long *)thunk_FUN_0301080c();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
  }
  FUN_0491a604(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}


