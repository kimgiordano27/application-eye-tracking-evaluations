/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$OnVisibilityChanged
ENTRY_POINT: 06451d1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  lVar4 = (**(code **)(*unaff_x20 + 0x478))();
  if (lVar4 == 0) {
LAB_06452040:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
LAB_06452044:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  plVar9 = *(long **)(lVar4 + 0x20);
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar9);
    }
  }
  uVar10 = *(undefined8 *)PTR_DAT_08497498;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar5 = (long *)FUN_0675ff58(uVar10,0);
  plVar6 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
  if (plVar6 == (long *)0x0) goto LAB_06452040;
  if ((plVar9 != (long *)0x0) &&
     (lVar4 = thunk_FUN_03ac73c0(plVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
    uVar10 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar10,0);
  }
  if ((int)plVar6[3] == 0) goto LAB_06452044;
  plVar6[4] = (long)plVar9;
  thunk_FUN_03afed3c(plVar6 + 4,plVar9);
  if ((plVar5 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x978))
                                 (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x980)),
     plVar5 == (long *)0x0)) goto LAB_06452040;
  uVar7 = (**(code **)(*plVar5 + 0x2b8))(plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x2c0));
  if ((uVar7 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_084974b0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_0675ff58(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    goto LAB_06451f74;
  }
  uVar7 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar7 & 1) == 0) goto LAB_06451fd4;
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
        if (uVar3 != 7) goto LAB_06451f24;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_084974c0;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_084974a8;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_08497488;
    }
  }
  else {
LAB_06451f24:
    if (uVar3 != 5) {
LAB_06451fd4:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uVar10 = thunk_FUN_03ac74bc();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090(lVar4);
      }
      Unity_Properties_Property<Vector3,_float>__DeclaredValueType
                (uVar10,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar10;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_084974b8;
  }
  uVar10 = *puVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_0675ff58(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
LAB_06451f74:
  uVar10 = FUN_06792398(uVar10);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090(lVar4);
  }
  uVar10 = FUN_035255bc(uVar10,lVar4);
  return uVar10;
}


