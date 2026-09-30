/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 06458d54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_0675ff58(unaff_x21 + 0x20,0);
  uVar4 = FUN_067690d8();
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084974a0);
    FUN_066fc4ac(plVar5,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
LAB_06458da8:
    lVar6 = *plVar8;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar5);
      }
    }
    return plVar5;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
  }
  plVar5 = (long *)FUN_0675ff58(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_06459270:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = (**(code **)(*plVar5 + 0x2b8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_0675ff58(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    plVar5 = (long *)FUN_06792398(uVar10);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
    goto LAB_06458da8;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_06459270;
  uVar4 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x458))();
    uVar11 = *(undefined8 *)PTR_DAT_08495bc0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_0675ff58(uVar11,0);
    uVar4 = FUN_067690d8(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar6 == 0) goto LAB_06459270;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_06459274:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar5);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_08497498;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar8 = (long *)FUN_0675ff58(uVar10,0);
      plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
      if (plVar7 == (long *)0x0) goto LAB_06459270;
      if ((plVar5 != (long *)0x0) &&
         (lVar6 = thunk_FUN_03ac73c0(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
        uVar10 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_06459274;
      plVar7[4] = (long)plVar5;
      thunk_FUN_03afed3c(plVar7 + 4,plVar5);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x978))
                                     (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x980)),
         plVar8 == (long *)0x0)) goto LAB_06459270;
      uVar4 = (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x2c0));
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_084974b0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_0675ff58(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        goto LAB_064591a4;
      }
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar4 & 1) == 0) goto LAB_06459204;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_067850a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_0676b950(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_06459154;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974c0;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974a8;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_08497488;
    }
  }
  else {
LAB_06459154:
    if (uVar3 != 5) {
LAB_06459204:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      plVar5 = (long *)thunk_FUN_03ac74bc();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      FUN_053afff4(plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_084974b8;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_0675ff58(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
LAB_064591a4:
  uVar10 = FUN_06792398(uVar10);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090(lVar6);
  }
  plVar5 = (long *)FUN_035255bc(uVar10,lVar6);
  return plVar5;
}


