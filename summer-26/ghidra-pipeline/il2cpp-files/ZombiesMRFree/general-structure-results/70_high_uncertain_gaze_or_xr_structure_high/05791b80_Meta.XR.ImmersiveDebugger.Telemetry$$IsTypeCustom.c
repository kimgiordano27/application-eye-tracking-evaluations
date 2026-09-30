/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 05791b80
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


long * Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(ulong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  if ((param_1 & 1) != 0) {
    lVar3 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar3 == 0) {
LAB_05791dfc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_05791e00:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar8 = *(long **)(lVar3 + 0x20);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar8);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_06f9ce90;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar4 = (long *)FUN_05afde1c(uVar9,0);
    plVar5 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
    if (plVar5 == (long *)0x0) goto LAB_05791dfc;
    if ((plVar8 != (long *)0x0) &&
       (lVar3 = thunk_FUN_03010710(plVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
      uVar9 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar9,0);
    }
    if ((int)plVar5[3] == 0) goto LAB_05791e00;
    plVar5[4] = (long)plVar8;
    thunk_FUN_03048534(plVar5 + 4,plVar8);
    if ((plVar4 == (long *)0x0) ||
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x928))
                                   (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x930)),
       plVar4 == (long *)0x0)) goto LAB_05791dfc;
    uVar6 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x2c0));
    if ((uVar6 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_06f9cea8;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x24);
      }
      goto LAB_05791a8c;
    }
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar6 & 1) != 0) {
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
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9ceb0;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9ce80;
      break;
    case 7:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9ceb8;
      break;
    case 0xb:
    case 0xc:
      lVar3 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9cea0;
      break;
    default:
      goto switchD_05791d58_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_05afde1c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x24);
    }
LAB_05791a8c:
    plVar8 = (long *)FUN_05b31ad8(uVar9);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar8);
      }
    }
    return plVar8;
  }
switchD_05791d58_default:
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  plVar8 = (long *)thunk_FUN_0301080c();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  FUN_0491a604(plVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  return plVar8;
}


