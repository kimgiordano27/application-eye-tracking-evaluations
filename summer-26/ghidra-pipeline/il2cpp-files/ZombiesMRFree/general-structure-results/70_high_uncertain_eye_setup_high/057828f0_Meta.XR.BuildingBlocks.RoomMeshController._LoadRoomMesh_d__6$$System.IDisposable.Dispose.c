/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 057828f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose
                 (void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x24;
  long *unaff_x25;
  
  plVar3 = (long *)FUN_05afde1c();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24))
    goto LAB_05782dec;
  }
  uVar4 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f807f0,0);
  uVar5 = FUN_05b0716c(plVar3,uVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)PTR_DAT_06f80908;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar4 = FUN_05afde1c(uVar4,0);
    uVar5 = FUN_05b0716c(plVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
      plVar3 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce98);
      FUN_05acc42c(plVar3,0);
      goto LAB_057829d0;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    plVar9 = (long *)FUN_05afde1c(uVar4,0);
    if (plVar9 == (long *)0x0) {
LAB_05782df4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar5 = (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x2c0));
    if ((uVar5 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_05782df4;
      uVar5 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0));
      if ((uVar5 & 1) == 0) {
LAB_05782cd0:
        uVar5 = (**(code **)(*plVar3 + 0x5a8))(plVar3,*(undefined8 *)(*plVar3 + 0x5b0));
        if ((uVar5 & 1) == 0) {
switchD_05782d50_default:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02feb2c4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          plVar3 = (long *)thunk_FUN_0301080c();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02feb2c4(lVar6);
          }
          FUN_049158cc(plVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar3;
        }
        if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar4 = FUN_05b238cc(plVar3,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*unaff_x25);
        }
        uVar2 = FUN_05b09cc0(uVar4,0);
        switch(uVar2) {
        case 5:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06f9ceb0;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06f9ce80;
          break;
        case 7:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06f9ceb8;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *unaff_x25;
          puVar10 = (undefined8 *)PTR_DAT_06f9cea0;
          break;
        default:
          goto switchD_05782d50_default;
        }
        goto LAB_05782a48;
      }
      uVar4 = (**(code **)(*plVar3 + 0x458))(plVar3,*(undefined8 *)(*plVar3 + 0x460));
      uVar11 = *(undefined8 *)PTR_DAT_06f80bf8;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x25);
      }
      uVar11 = FUN_05afde1c(uVar11,0);
      uVar5 = FUN_05b0716c(uVar4,uVar11,0);
      if ((uVar5 & 1) == 0) goto LAB_05782cd0;
      lVar6 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
      if (lVar6 == 0) goto LAB_05782df4;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05782df8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar9 = *(long **)(lVar6 + 0x20);
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
      plVar7 = (long *)FUN_05afde1c(uVar4,0);
      plVar8 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
      if (plVar8 == (long *)0x0) goto LAB_05782df4;
      if ((plVar9 != (long *)0x0) &&
         (lVar6 = thunk_FUN_03010710(plVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
        uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar4,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_05782df8;
      plVar8[4] = (long)plVar9;
      thunk_FUN_03048534(plVar8 + 4,plVar9);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x928))
                                     (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x930)),
         plVar7 == (long *)0x0)) goto LAB_05782df4;
      uVar5 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x2c0));
      if ((uVar5 & 1) == 0) goto LAB_05782cd0;
      uVar4 = *(undefined8 *)PTR_DAT_06f9cea8;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar4 = FUN_05afde1c(uVar4,0);
      plVar3 = plVar9;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x24);
      }
    }
    else {
      lVar6 = *unaff_x25;
      puVar10 = (undefined8 *)PTR_DAT_06f9ce88;
LAB_05782a48:
      uVar4 = *puVar10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar4 = FUN_05afde1c(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x24);
      }
    }
    plVar3 = (long *)FUN_05b31ad8(uVar4,plVar3,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar3 = (long *)thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f9ce78);
    FUN_05acc32c(plVar3,0);
LAB_057829d0:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar9;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4(lVar6);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_05782dec:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar3);
    }
  }
  return plVar3;
}


