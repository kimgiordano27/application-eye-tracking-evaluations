/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 0144d0b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long unaff_x19;
  long unaff_x20;
  int iVar14;
  long *unaff_x21;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000058;
  
  lVar8 = thunk_FUN_00d61fa0();
  if ((lVar8 != 0) &&
     (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x21 + 0x40)), lVar9 == 0)) {
LAB_0144d824:
    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,0);
  }
  puVar6 = PTR_DAT_033ed038;
  if (*(uint *)(unaff_x21 + 3) < 7) goto LAB_0144d81c;
  unaff_x21[10] = lVar8;
  in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x60);
  in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x58);
  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x50);
  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x48);
  lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&stack0x00000010);
  if ((lVar8 != 0) &&
     (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x21 + 0x40)), lVar9 == 0))
  goto LAB_0144d824;
  puVar6 = Method_WaveFormController_StartListening__;
  if (*(uint *)(unaff_x21 + 3) < 8) goto LAB_0144d81c;
  unaff_x21[0xb] = lVar8;
  puVar7 = StringLiteral_302;
  uVar10 = FUN_01600be4(*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar7);
  }
  FUN_02660dac(uVar10,0);
  dVar19 = *(double *)(unaff_x19 + 0x58);
  dVar21 = *(double *)(unaff_x19 + 0x60);
  dVar22 = *(double *)(unaff_x19 + 0x48);
  dVar20 = *(double *)(unaff_x19 + 0x50);
  uVar10 = NEON_scvtf(*(undefined8 *)(unaff_x19 + 0x34),4);
  fVar17 = (float)((ulong)uVar10 >> 0x20);
  iVar15 = (int)(float)uVar10;
  *(ulong *)(unaff_x19 + 0x98) = CONCAT44((int)fVar17,iVar15);
  if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_0144d820;
  if (*(char *)(*(long *)(unaff_x19 + 0x68) + 0x49) != '\0') {
    if ((*(long *)(unaff_x19 + 0x78) == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) goto LAB_0144d820;
    uVar11 = FUN_0143f1a4(*(long *)(unaff_x19 + 0x70),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0x78) + 0x10));
    if ((*(long *)(unaff_x19 + 0x68) == 0) ||
       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x50), lVar8 == 0)) goto LAB_0144d820;
    unaff_x20 = FUN_0144a1a0(lVar8,uVar11,*(undefined8 *)(unaff_x19 + 0x80),
                             *(undefined8 *)(unaff_x19 + 0x78));
    iVar15 = *(int *)(unaff_x19 + 0x98);
  }
  puVar7 = StringLiteral_9134;
  puVar6 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass32_0_<DOMove>b__0__;
  uVar5 = DAT_028aa160;
  if (0 < iVar15) {
    iVar14 = 0;
    do {
      if ((0 < iVar15) && (lVar8 = *(long *)(unaff_x19 + 0x88), lVar8 != 0)) {
        in_stack_00000058._4_4_ = ((float)iVar14 / (float)iVar15) * 100.0;
        uVar11 = FUN_017841b4((long)&stack0x00000058 + 4,*(undefined8 *)puVar7,0);
        uVar11 = FUN_015f5b28(*(undefined8 *)puVar6,uVar11,0);
        (**(code **)(lVar8 + 0x18))
                  (uVar5,*(undefined8 *)(lVar8 + 0x40),uVar11,*(undefined8 *)(lVar8 + 0x28));
      }
      if (0 < *(int *)(unaff_x19 + 0x9c)) {
        iVar15 = 0;
        do {
          lVar8 = *(long *)(unaff_x19 + 0x90);
          if (lVar8 == 0) goto LAB_0144d820;
          uVar1 = iVar15 + *(int *)(unaff_x19 + 0x30);
          if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0144d81c;
          if (unaff_x20 == 0) goto LAB_0144d820;
          lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          iVar13 = *(int *)(unaff_x19 + 0x2c);
          fVar18 = ((float)iVar15 / fVar17) * (float)dVar21 + (float)dVar20;
          uVar16 = FUN_02672074(((float)iVar14 / (float)uVar10) * (float)dVar19 + (float)dVar22,
                                unaff_x20,0);
          if (lVar8 == 0) goto LAB_0144d820;
          uVar1 = iVar13 + iVar14;
          if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0144d81c;
          lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
          *(undefined4 *)(lVar8 + 0x20) = uVar16;
          *(float *)(lVar8 + 0x24) = fVar18;
          *(undefined4 *)(lVar8 + 0x28) = param_3;
          *(undefined4 *)(lVar8 + 0x2c) = param_4;
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(unaff_x19 + 0x9c));
      }
      iVar15 = *(int *)(unaff_x19 + 0x98);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar15);
    if (0 < iVar15) {
      iVar13 = *(int *)(unaff_x19 + 0x3c);
      iVar14 = 0;
      do {
        if (0 < iVar13) {
          iVar15 = 1;
          iVar12 = -1;
          do {
            lVar8 = *(long *)(unaff_x19 + 0x90);
            if (lVar8 == 0) goto LAB_0144d820;
            uVar1 = *(uint *)(unaff_x19 + 0x30);
            if ((*(uint *)(lVar8 + 0x18) <= iVar12 + uVar1) || (*(uint *)(lVar8 + 0x18) <= uVar1))
            goto LAB_0144d81c;
            lVar9 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_0144d820;
            uVar2 = *(int *)(unaff_x19 + 0x2c) + iVar14;
            if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_0144d81c;
            lVar8 = *(long *)(lVar8 + (long)(int)(iVar12 + uVar1) * 8 + 0x20);
            if (lVar8 == 0) goto LAB_0144d820;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0144d81c;
            lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
            uVar10 = *(undefined8 *)(lVar9 + 0x20);
            lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
            *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
            *(undefined8 *)(lVar8 + 0x20) = uVar10;
            lVar8 = *(long *)(unaff_x19 + 0x90);
            if (lVar8 == 0) goto LAB_0144d820;
            iVar13 = *(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30);
            uVar1 = (iVar15 + iVar13) - 1;
            if ((*(uint *)(lVar8 + 0x18) <= uVar1) ||
               (uVar2 = iVar13 - 1, *(uint *)(lVar8 + 0x18) <= uVar2)) goto LAB_0144d81c;
            lVar9 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_0144d820;
            uVar2 = *(int *)(unaff_x19 + 0x2c) + iVar14;
            if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_0144d81c;
            lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_0144d820;
            if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0144d81c;
            lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
            uVar10 = *(undefined8 *)(lVar9 + 0x20);
            lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
            iVar15 = iVar15 + 1;
            iVar12 = iVar12 + -1;
            *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
            *(undefined8 *)(lVar8 + 0x20) = uVar10;
            iVar13 = *(int *)(unaff_x19 + 0x3c);
          } while (iVar15 <= iVar13);
          iVar15 = *(int *)(unaff_x19 + 0x98);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar15);
    }
  }
  iVar15 = *(int *)(unaff_x19 + 0x9c);
  if (0 < iVar15) {
    iVar13 = *(int *)(unaff_x19 + 0x40);
    iVar14 = 0;
    do {
      if (0 < iVar13) {
        iVar15 = 1;
        iVar12 = -1;
        do {
          lVar8 = *(long *)(unaff_x19 + 0x90);
          if (lVar8 == 0) goto LAB_0144d820;
          uVar1 = *(int *)(unaff_x19 + 0x30) + iVar14;
          if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0144d81c;
          lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_0144d820;
          uVar1 = *(uint *)(unaff_x19 + 0x2c);
          if ((*(uint *)(lVar8 + 0x18) <= uVar1) || (*(uint *)(lVar8 + 0x18) <= iVar12 + uVar1))
          goto LAB_0144d81c;
          puVar3 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar1 * 0x10);
          uVar10 = *puVar3;
          puVar4 = (undefined8 *)(lVar8 + 0x20 + (long)(int)(iVar12 + uVar1) * 0x10);
          puVar4[1] = puVar3[1];
          *puVar4 = uVar10;
          lVar8 = *(long *)(unaff_x19 + 0x90);
          if (lVar8 == 0) goto LAB_0144d820;
          uVar1 = *(int *)(unaff_x19 + 0x30) + iVar14;
          if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0144d81c;
          lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_0144d820;
          iVar13 = *(int *)(unaff_x19 + 0x2c) + *(int *)(unaff_x19 + 0x98);
          uVar1 = iVar13 - 1;
          if ((*(uint *)(lVar8 + 0x18) <= uVar1) ||
             (uVar2 = (iVar15 + iVar13) - 1, *(uint *)(lVar8 + 0x18) <= uVar2)) goto LAB_0144d81c;
          puVar3 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar1 * 0x10);
          uVar10 = *puVar3;
          iVar15 = iVar15 + 1;
          iVar12 = iVar12 + -1;
          puVar4 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar2 * 0x10);
          puVar4[1] = puVar3[1];
          *puVar4 = uVar10;
          iVar13 = *(int *)(unaff_x19 + 0x40);
        } while (iVar15 <= iVar13);
        iVar15 = *(int *)(unaff_x19 + 0x9c);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar15);
  }
  *(undefined4 *)(unaff_x19 + 0xa0) = 1;
  if (*(int *)(unaff_x19 + 0x40) < 1) {
    uVar10 = 0;
  }
  else {
    *(undefined4 *)(unaff_x19 + 0xa4) = 1;
    if (0 < *(int *)(unaff_x19 + 0x3c)) {
      lVar8 = *(long *)(unaff_x19 + 0x90);
      if (lVar8 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x30);
        if ((uVar1 - 1 < *(uint *)(lVar8 + 0x18)) && (uVar1 < *(uint *)(lVar8 + 0x18))) {
          lVar9 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_0144d820;
          uVar2 = *(uint *)(unaff_x19 + 0x2c);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar8 = *(long *)(lVar8 + (long)(int)(uVar1 - 1) * 8 + 0x20);
            if (lVar8 == 0) goto LAB_0144d820;
            uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
              uVar10 = *(undefined8 *)(lVar9 + 0x20);
              lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
              *(undefined8 *)(lVar8 + 0x20) = uVar10;
              lVar8 = *(long *)(unaff_x19 + 0x90);
              if (lVar8 == 0) goto LAB_0144d820;
              uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
              uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
              if ((uVar1 < *(uint *)(lVar8 + 0x18)) && (uVar2 < *(uint *)(lVar8 + 0x18))) {
                lVar9 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_0144d820;
                uVar2 = *(uint *)(unaff_x19 + 0x2c);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar8 == 0) goto LAB_0144d820;
                  uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
                    uVar10 = *(undefined8 *)(lVar9 + 0x20);
                    lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
                    *(undefined8 *)(lVar8 + 0x20) = uVar10;
                    lVar8 = *(long *)(unaff_x19 + 0x90);
                    if (lVar8 == 0) goto LAB_0144d820;
                    uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
                    uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
                    if ((uVar1 < *(uint *)(lVar8 + 0x18)) && (uVar2 < *(uint *)(lVar8 + 0x18))) {
                      lVar9 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                      if (lVar9 == 0) goto LAB_0144d820;
                      uVar2 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                        lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        if (lVar8 == 0) goto LAB_0144d820;
                        uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa0);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
                          uVar10 = *(undefined8 *)(lVar9 + 0x20);
                          lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
                          *(undefined8 *)(lVar8 + 0x20) = uVar10;
                          lVar8 = *(long *)(unaff_x19 + 0x90);
                          if (lVar8 == 0) goto LAB_0144d820;
                          uVar1 = *(uint *)(unaff_x19 + 0x30);
                          uVar2 = uVar1 - *(int *)(unaff_x19 + 0xa4);
                          if ((uVar2 < *(uint *)(lVar8 + 0x18)) && (uVar1 < *(uint *)(lVar8 + 0x18))
                             ) {
                            lVar9 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            if (lVar9 == 0) goto LAB_0144d820;
                            uVar1 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                              lVar8 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                              if (lVar8 == 0) goto LAB_0144d820;
                              uVar2 = uVar1 + *(int *)(unaff_x19 + 0xa0);
                              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
                                uVar10 = *(undefined8 *)(lVar9 + 0x20);
                                lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
                                *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
                                *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                *(undefined8 *)(unaff_x19 + 0x18) = 0;
                                *(undefined4 *)(unaff_x19 + 0x10) = 1;
                                return 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0144d81c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
LAB_0144d820:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    uVar10 = 1;
  }
  return uVar10;
}


