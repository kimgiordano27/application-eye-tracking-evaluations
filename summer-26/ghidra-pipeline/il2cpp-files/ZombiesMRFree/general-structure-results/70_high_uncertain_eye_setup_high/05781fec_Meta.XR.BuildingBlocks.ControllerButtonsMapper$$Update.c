/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 05781fec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar9 = **(undefined8 **)(in_x9 + 0xbf8);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(param_1);
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar3 = FUN_05b0716c(param_2,uVar9,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x478))();
    if (lVar4 == 0) {
LAB_057822a0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_057822a4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar8 = *(long **)(lVar4 + 0x20);
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
    plVar5 = (long *)FUN_05afde1c(uVar9,0);
    plVar6 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
    if (plVar6 == (long *)0x0) goto LAB_057822a0;
    if ((plVar8 != (long *)0x0) &&
       (lVar4 = thunk_FUN_03010710(plVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar9 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_057822a4;
    plVar6[4] = (long)plVar8;
    thunk_FUN_03048534(plVar6 + 4,plVar8);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x928))
                                   (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930)),
       plVar5 == (long *)0x0)) goto LAB_057822a0;
    uVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2c0));
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_06f9cea8;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x24);
      }
      goto LAB_05781f30;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar3 & 1) != 0) {
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
      puVar7 = (undefined8 *)PTR_DAT_06f9ceb0;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9ce80;
      break;
    case 7:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9ceb8;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06f9cea0;
      break;
    default:
      goto switchD_057821fc_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar9 = FUN_05afde1c(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x24);
    }
LAB_05781f30:
    plVar8 = (long *)FUN_05b31ad8(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar8);
      }
    }
    return plVar8;
  }
switchD_057821fc_default:
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  plVar8 = (long *)thunk_FUN_0301080c();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  FUN_04915548(plVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar8;
}


