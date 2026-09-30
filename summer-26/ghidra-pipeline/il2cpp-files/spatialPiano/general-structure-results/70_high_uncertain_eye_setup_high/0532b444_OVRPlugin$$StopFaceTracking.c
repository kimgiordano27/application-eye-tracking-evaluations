/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking
ENTRY_POINT: 0532b444
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0532b828) */

void OVRPlugin__StopFaceTracking(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fStack0000000000000004;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long *in_stack_00000038;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x538));
  FUN_02f08768(PTR_DAT_067c91b8);
  FUN_02f08768(OVR_OpenVR_EVRTrackedCameraError_TypeInfo);
  FUN_02f08768(OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x2df) = 1;
  in_stack_00000038 = (long *)0x0;
  _uStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000030 = 0;
  in_stack_00000028 = 0;
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x58), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0532b4ec;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02f421d0(plVar11,*(long *)OVR_OpenVR_EVRSkeletalTransformSpace_TypeInfo,0);
LAB_0532b4ec:
  puVar6 = OVR_OpenVR_EVRSubmitFlags_TypeInfo;
  puVar5 = System_Runtime_CompilerServices_TrueReadOnlyCollection<ParameterExpression>_TypeInfo;
  puVar4 = System_Predicate<HandJointId>_TypeInfo;
  puVar3 = PTR_DAT_067c91b8;
  puVar2 = PTR_DAT_067c91b0;
  in_stack_00000038 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
  fVar1 = DAT_011b0598;
  fStack0000000000000004 = DAT_011b00f4;
  do {
    plVar11 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *in_stack_00000038;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0532b598;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*(long *)puVar3,0);
LAB_0532b598:
    uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    plVar11 = in_stack_00000038;
    if ((uVar9 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar8 = *in_stack_00000038;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0532b7b8;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *in_stack_00000038;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0532b5fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*(long *)puVar6,0);
LAB_0532b5fc:
    auVar20 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (auVar20._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar11 = *(long **)(unaff_x19 + 0x30);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *plVar11;
    uVar15 = *(undefined4 *)(auVar20._0_8_ + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0532b66c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar5,4);
LAB_0532b66c:
    uVar9 = (*(code *)*puVar7)(plVar11,uVar15,&stack0x00000018,puVar7[1]);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = (undefined4)in_stack_00000020;
      uVar15 = uStack000000000000001c;
      uVar12 = FUN_060fdd00(uStack0000000000000018,uStack000000000000001c,
                            in_stack_00000020 & 0xffffffff,*(long *)(unaff_x19 + 0x38),0);
      fVar18 = auVar20._12_4_;
      if (auVar20._8_4_ <= fVar18) {
        fVar13 = 0.0;
        fVar18 = 1.0;
LAB_0532b728:
        fVar19 = 0.0;
        fVar14 = 1.0;
      }
      else {
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
          fVar13 = 1.0;
          goto LAB_0532b728;
        }
        fVar13 = (auVar20._8_4_ / fVar18) * 0.5;
        fVar18 = 1.0;
        if (fVar13 <= 1.0) {
          fVar18 = fVar13;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar13) {
          fVar14 = fVar18;
        }
        fVar13 = fVar14 * 0.0 + 1.0;
        fVar18 = fStack0000000000000004 - fVar14 * fStack0000000000000004;
        fVar19 = fVar1 - fVar14 * fVar1;
        fVar14 = fVar13;
      }
      lVar8 = *(long *)puVar4;
      fVar17 = *(float *)(unaff_x19 + 0x40);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar4;
      }
      lVar8 = *(long *)(lVar8 + 0xb8);
      *(float *)(lVar8 + 0xc) = fVar13;
      *(float *)(lVar8 + 0x10) = fVar18;
      *(float *)(lVar8 + 0x14) = fVar19;
      *(float *)(lVar8 + 0x18) = fVar14;
      *(float *)(lVar8 + 0x1c) = fVar17 * 0.5;
      FUN_052ae014(uVar12,uVar15,uVar16,0,0);
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0532b7d4;
    }
  }
LAB_0532b7b8:
  puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*(long *)puVar2,0);
LAB_0532b7d4:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
  return;
}


