/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 0578a1fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint in_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  if ((in_w10 < *(byte *)(param_3 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3))
  goto LAB_0578a6d8;
  FUN_05afde1c(*(undefined8 *)PTR_DAT_06f807f0,0);
  uVar3 = FUN_05b0716c();
  if ((uVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_06f80908;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_05afde1c(uVar9,0);
    uVar3 = FUN_05b0716c();
    if ((uVar3 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce98);
      FUN_05acc42c(unaff_x20,0);
      goto LAB_0578a2bc;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    plVar7 = (long *)FUN_05afde1c(uVar9,0);
    if (plVar7 == (long *)0x0) {
LAB_0578a6e0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar3 = (**(code **)(*plVar7 + 0x2b8))();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0578a6e0;
      uVar3 = (**(code **)(*unaff_x20 + 0x3d8))();
      if ((uVar3 & 1) == 0) {
LAB_0578a5bc:
        uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
        if ((uVar3 & 1) == 0) {
switchD_0578a63c_default:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02feb2c4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          plVar7 = (long *)thunk_FUN_0301080c();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02feb2c4(lVar4);
          }
          FUN_049180c8(plVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar7;
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
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06f9ceb0;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06f9ce80;
          break;
        case 7:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06f9ceb8;
          break;
        case 0xb:
        case 0xc:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06f9cea0;
          break;
        default:
          goto switchD_0578a63c_default;
        }
        goto LAB_0578a334;
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x458))();
      uVar10 = *(undefined8 *)PTR_DAT_06f80bf8;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x25);
      }
      uVar10 = FUN_05afde1c(uVar10,0);
      uVar3 = FUN_05b0716c(uVar9,uVar10,0);
      if ((uVar3 & 1) == 0) goto LAB_0578a5bc;
      lVar4 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar4 == 0) goto LAB_0578a6e0;
      if (*(int *)(lVar4 + 0x18) == 0) {
Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar7);
        }
      }
      uVar9 = *(undefined8 *)PTR_DAT_06f9ce90;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar5 = (long *)FUN_05afde1c(uVar9,0);
      plVar6 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
      if (plVar6 == (long *)0x0) goto LAB_0578a6e0;
      if ((plVar7 != (long *)0x0) &&
         (lVar4 = thunk_FUN_03010710(plVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar9 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar9,0);
      }
      if ((int)plVar6[3] == 0)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      plVar6[4] = (long)plVar7;
      thunk_FUN_03048534(plVar6 + 4,plVar7);
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x928))
                                     (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930)),
         plVar5 == (long *)0x0)) goto LAB_0578a6e0;
      uVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x2c0));
      if ((uVar3 & 1) == 0) goto LAB_0578a5bc;
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
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06f9ce88;
LAB_0578a334:
      uVar9 = *puVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x24);
      }
    }
    unaff_x20 = (long *)FUN_05b31ad8(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce78);
    FUN_05acc32c(unaff_x20,0);
LAB_0578a2bc:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  lVar4 = *plVar7;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
    {
LAB_0578a6d8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(unaff_x20);
    }
  }
  return unaff_x20;
}


