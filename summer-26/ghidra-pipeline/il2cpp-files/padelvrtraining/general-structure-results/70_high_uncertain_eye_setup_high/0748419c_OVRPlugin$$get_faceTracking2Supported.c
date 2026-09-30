/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Supported
ENTRY_POINT: 0748419c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Supported(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long *plVar6;
  long unaff_x23;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x220));
  *(undefined1 *)(unaff_x23 + 0xa4a) = 1;
  in_stack_00000038 = 0.0;
  _fStack0000000000000030 = 0;
  in_stack_00000028 = 0.0;
  in_stack_00000020 = 0;
  if (unaff_x22 != (long *)0x0) {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09223790) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07484220;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_07484220:
    iVar1 = (*(code *)*puVar2)();
    if (0 < iVar1) {
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_074843ac;
      FUN_074831c4();
      if (DAT_0983637e == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_0983637e = '\x01';
      }
      lVar3 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
      fStack0000000000000030 = *(float *)(lVar3 + 0x48);
      fVar8 = *(float *)(lVar3 + 0x4c);
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x48);
      fVar9 = *(float *)(lVar3 + 0x50);
      plVar6 = *(long **)(unaff_x19 + 0x20);
      in_stack_00000028 = fVar9;
      in_stack_00000038 = fVar9;
      fStack0000000000000034 = fVar8;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09221620) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_074842e8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_09221620,0);
LAB_074842e8:
        uVar4 = (*(code *)*puVar2)(plVar6);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_091f9220 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          fStack0000000000000030 = (float)FUN_08a5bb88();
          fStack0000000000000030 = -fStack0000000000000030;
          fVar8 = -fVar8;
          fVar9 = -fVar9;
          in_stack_00000038 = fVar9;
          fStack0000000000000034 = fVar8;
          fVar7 = (float)FUN_08a5bb88();
          in_stack_00000028 = -fVar9;
          in_stack_00000020 = CONCAT44(-fVar8,-fVar7);
          if (unaff_w20 == 1) {
            fStack0000000000000030 = -fStack0000000000000030;
            fStack0000000000000034 = -fStack0000000000000034;
            in_stack_00000038 = -in_stack_00000038;
          }
        }
      }
      uVar4 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar4 = FUN_074833f8();
        *(int *)(unaff_x19 + 0x10) = (int)uVar4;
      }
      FUN_07483524(uVar4,*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000030,&stack0x00000020);
    }
    return;
  }
LAB_074843ac:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


