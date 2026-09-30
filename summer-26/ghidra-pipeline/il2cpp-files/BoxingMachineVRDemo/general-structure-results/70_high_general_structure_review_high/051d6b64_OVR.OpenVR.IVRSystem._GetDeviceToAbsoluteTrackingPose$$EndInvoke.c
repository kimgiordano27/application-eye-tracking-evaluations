/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 051d6b64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w27;
  long *unaff_x28;
  
  lVar10 = (**(code **)(param_1 + 0x218))();
  unaff_x19[9] = lVar10;
  thunk_FUN_02dd37b4();
  lVar10 = unaff_x19[10];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[10] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 10,lVar10);
  }
  lVar10 = unaff_x19[0xb];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xb] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0xb,lVar10);
  }
  lVar10 = unaff_x19[0xc];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xc] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0xc,lVar10);
  }
  lVar10 = unaff_x19[0xd];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xd] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0xd,lVar10);
  }
  lVar10 = unaff_x19[0xe];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xe] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0xe,lVar10);
  }
  lVar10 = unaff_x19[0xf];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0xf] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0xf,lVar10);
  }
  lVar10 = unaff_x19[0x12];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0x12] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0x12,lVar10);
  }
  lVar10 = unaff_x19[0x10];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0x10] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0x10,lVar10);
  }
  lVar10 = unaff_x19[0x11];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = (**(code **)(*unaff_x19 + 0x218))();
    unaff_x19[0x11] = lVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0x11,lVar10);
  }
  lVar10 = unaff_x19[0x25];
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar6 = PTR_DAT_06761808;
  plVar1 = unaff_x19 + 0x25;
  uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = unaff_x19[0x26];
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
    if ((uVar11 & 1) != 0) goto LAB_051d6f1c;
    lVar10 = unaff_x19[0x27];
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
    if ((uVar11 & 1) != 0) goto LAB_051d6f1c;
  }
  else {
LAB_051d6f1c:
    puVar5 = PTR_DAT_0675e6b0;
    if (*unaff_x22 == 0) goto LAB_051d73c4;
    lVar10 = FUN_0335b1b8(*unaff_x22,*(undefined8 *)PTR_DAT_0675e6b0);
    *plVar1 = lVar10;
    thunk_FUN_02dd37b4(plVar1,lVar10);
    if (*unaff_x20 == 0) goto LAB_051d73c4;
    lVar10 = FUN_0335b1b8(*unaff_x20,*(undefined8 *)puVar5);
    plVar2 = unaff_x19 + 0x26;
    unaff_x19[0x26] = lVar10;
    thunk_FUN_02dd37b4(plVar2,lVar10);
    if (unaff_x19[7] == 0) goto LAB_051d73c4;
    lVar10 = FUN_0335b1b8(unaff_x19[7],*(undefined8 *)puVar5);
    plVar3 = unaff_x19 + 0x27;
    unaff_x19[0x27] = lVar10;
    thunk_FUN_02dd37b4(plVar3,lVar10);
    lVar10 = unaff_x19[0x25];
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if ((*unaff_x22 == 0) || (lVar10 = FUN_06066d44(*unaff_x22,0), lVar10 == 0))
      goto LAB_051d73c4;
      lVar10 = FUN_033f33ec(lVar10,*(undefined8 *)PTR_DAT_0676e618);
      *plVar1 = lVar10;
      thunk_FUN_02dd37b4(plVar1,lVar10);
      if (*plVar1 == 0) goto LAB_051d73c4;
      FUN_06067680(*plVar1,*(undefined8 *)PTR_DAT_06762bc0,0);
    }
    lVar10 = *plVar2;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if ((*unaff_x20 == 0) || (lVar10 = FUN_06066d44(*unaff_x20,0), lVar10 == 0))
      goto LAB_051d73c4;
      lVar10 = FUN_033f33ec(lVar10,*(undefined8 *)PTR_DAT_0676e618);
      *plVar2 = lVar10;
      thunk_FUN_02dd37b4(plVar2,lVar10);
      if (*plVar2 == 0) goto LAB_051d73c4;
      FUN_06067680(*plVar2,*(undefined8 *)PTR_DAT_06762bc0,0);
    }
    lVar10 = *plVar3;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      if ((*unaff_x21 == 0) || (lVar10 = FUN_06066d44(*unaff_x21,0), lVar10 == 0))
      goto LAB_051d73c4;
      lVar10 = FUN_033f33ec(lVar10,*(undefined8 *)PTR_DAT_0676e618);
      *plVar3 = lVar10;
      thunk_FUN_02dd37b4(plVar3,lVar10);
      if (*plVar3 == 0) goto LAB_051d73c4;
      FUN_06067680(*plVar3,*(undefined8 *)PTR_DAT_06762bc0,0);
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar12 = FUN_0608992c(0);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x28);
    }
    uVar11 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
    if ((uVar11 & 1) != 0) {
      if (*plVar1 == 0) goto LAB_051d73c4;
      FUN_0601e994(*plVar1,3,0);
      if (*plVar2 == 0) goto LAB_051d73c4;
      FUN_0601e994(*plVar2,1,0);
      if (*plVar3 == 0) goto LAB_051d73c4;
      FUN_0601e994(*plVar3,2,0);
    }
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar12 = FUN_0608992c(0);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x28);
  }
  uVar11 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
  if ((uVar11 & 1) != 0) {
    if (unaff_w27 == 0) {
LAB_051d71e0:
      if (*plVar1 == 0) goto LAB_051d73c4;
      iVar9 = thunk_FUN_0601e91c(*plVar1,0);
      if (iVar9 == 3) goto LAB_051d7234;
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_051d73c4;
      uVar12 = 3;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06761670 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_0523c198(0);
      if ((uVar11 & 1) != 0) goto LAB_051d71e0;
      if (*plVar1 == 0) goto LAB_051d73c4;
      iVar9 = thunk_FUN_0601e91c(*plVar1,0);
      if (iVar9 == 1) goto LAB_051d7234;
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_051d73c4;
      uVar12 = 1;
    }
    FUN_0601e994(lVar10,uVar12,0);
  }
LAB_051d7234:
  lVar10 = *plVar1;
  if (lVar10 == 0) goto LAB_051d73c4;
  if (*(char *)((long)unaff_x19 + 0xaa) != '\0') {
    FUN_06066430(lVar10,0,0);
    if (unaff_x19[0x26] == 0) goto LAB_051d73c4;
    FUN_06066430(unaff_x19[0x26],0,0);
    lVar13 = unaff_x19[0x27];
    if (lVar13 == 0) goto LAB_051d73c4;
    bVar7 = 0;
    goto LAB_051d7398;
  }
  bVar7 = FUN_0606637c(lVar10,0);
  if (*(byte *)(unaff_x19 + 0x15) == (bVar7 & 1)) {
LAB_051d7318:
    *(undefined1 *)((long)unaff_x19 + 0xab) = 1;
  }
  else {
    if (unaff_x19[0x26] == 0) goto LAB_051d73c4;
    bVar7 = FUN_0606637c(unaff_x19[0x26],0);
    if ((*(byte *)(unaff_x19 + 0x15) ^ 1) == (bVar7 & 1)) goto LAB_051d7318;
    if (unaff_x19[0x27] == 0) goto LAB_051d73c4;
    bVar8 = FUN_0606637c(unaff_x19[0x27],0);
    bVar4 = *(byte *)(unaff_x19 + 0x15);
    bVar7 = bVar8 & bVar4 != 0;
    if (bVar4 != 0) {
      bVar8 = bVar7;
    }
    bVar14 = bVar4 ^ 1;
    if ((unaff_w27 != 0) && (bVar4 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_06761670 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar8 = FUN_0523c198(0);
      bVar14 = ~bVar8 & 1;
      bVar8 = bVar7;
    }
    if (bVar14 == (bVar8 & 1)) goto LAB_051d7318;
  }
  if (*plVar1 != 0) {
    FUN_06066430(*plVar1,(char)unaff_x19[0x15] == '\0',0);
    if (unaff_x19[0x26] != 0) {
      FUN_06066430(unaff_x19[0x26],(char)unaff_x19[0x15],0);
      lVar13 = unaff_x19[0x27];
      bVar7 = (char)unaff_x19[0x15] != '\0';
      lVar10 = 0;
      if ((bool)bVar7) {
        lVar10 = lVar13;
      }
      if ((unaff_w27 != 0) && ((char)unaff_x19[0x15] != '\0')) {
        if (*(int *)(*(long *)PTR_DAT_06761670 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar7 = FUN_0523c198(0);
        lVar13 = lVar10;
      }
      if (lVar13 != 0) {
LAB_051d7398:
        FUN_06066430(lVar13,bVar7 & 1,0);
        return;
      }
    }
  }
LAB_051d73c4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


