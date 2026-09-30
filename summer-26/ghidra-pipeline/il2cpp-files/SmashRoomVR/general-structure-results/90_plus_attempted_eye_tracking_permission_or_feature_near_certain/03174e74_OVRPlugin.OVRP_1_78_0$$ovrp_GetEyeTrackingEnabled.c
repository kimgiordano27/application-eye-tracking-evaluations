/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 03174e74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_13;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  ulong uVar16;
  long *plVar17;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  *(undefined8 *)(unaff_x19 + 0x60) = param_1;
  thunk_FUN_01b4f09c();
  uVar16 = 2;
  do {
    lVar8 = *unaff_x26;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *unaff_x26;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar8 == 0) goto LAB_031751a8;
    if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    iVar1 = *(int *)(lVar8 + uVar16 * 4 + 0x20);
    if ((iVar1 != -1) && ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0)) {
      plVar17 = *(long **)(unaff_x19 + 0x28);
      if (plVar17 == (long *)0x0) goto LAB_031751a8;
      lVar8 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *unaff_x27) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_03174f2c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ae9f78(plVar17,*unaff_x27,4);
LAB_03174f2c:
      (*(code *)*puVar9)(&stack0x00000030,plVar17,uVar16 & 0xffffffff,0,puVar9[1]);
      uVar7 = in_stack_00000038;
      uVar6 = uStack0000000000000034;
      iVar5 = iStack0000000000000030;
      uVar13 = FUN_031751b0();
      if ((uVar13 & 1) == 0) {
        plVar17 = *(long **)(unaff_x19 + 0x28);
        if (plVar17 == (long *)0x0) goto LAB_031751a8;
        lVar8 = *plVar17;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x27) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 4) * 0x10 + 0x138);
              goto LAB_03174fb8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar17,*unaff_x27,4);
LAB_03174fb8:
        (*(code *)*puVar9)(&stack0x00000030,plVar17,iVar1,0,puVar9[1]);
        in_stack_00000010 = CONCAT44(uStack0000000000000034,iStack0000000000000030);
        uStack0000000000000064 = uStack0000000000000044;
        uStack0000000000000060 = uStack0000000000000040;
        in_stack_00000058 = in_stack_00000038;
        in_stack_00000018 = in_stack_00000038;
        uStack0000000000000024 = uStack0000000000000044;
        uStack0000000000000020 = uStack0000000000000040;
        in_stack_00000050 = in_stack_00000010;
        in_stack_00000078 = FUN_03175250();
      }
      iStack0000000000000030 = iVar1;
      uVar10 = thunk_FUN_01afa70c(*unaff_x28,&stack0x00000030);
      in_stack_00000008._4_4_ = (uint)uVar16;
      uVar11 = thunk_FUN_01afa70c(*unaff_x28,(long)&stack0x00000008 + 4);
      FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80b70,uVar10,uVar11,0);
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_031751a8;
      uVar10 = FUN_0317544c(*(long *)(unaff_x19 + 0x30),iVar1);
      if (in_stack_00000078 == 0) goto LAB_031751a8;
      fVar3 = (float)uVar10;
      if (iVar1 != 0) {
        fVar3 = 0.0;
      }
      fVar4 = -(float)uVar10;
      if (uVar16 < 0x13) {
        fVar4 = fVar3;
      }
      FUN_0391c27c(in_stack_00000078,0);
      uVar10 = FUN_031754c4(iVar5,uVar6,uVar7,uVar10,fVar4);
      lVar8 = in_stack_00000078;
      uVar11 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b40);
      FUN_03175740(uVar11,iVar1,uVar16 & 0xffffffff,lVar8,uVar10);
      lVar8 = *(long *)(unaff_x19 + 0x58);
      if (lVar8 == 0) goto LAB_031751a8;
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar14 = *unaff_x29;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031751a8;
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *puVar9 = uVar11;
        thunk_FUN_01b4f09c(puVar9,uVar11);
      }
      else {
        FUN_02b599e4(lVar8,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x18);
  FUN_03175798();
  lVar8 = *(long *)(unaff_x19 + 0x48);
  *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    return;
  }
LAB_031751a8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


