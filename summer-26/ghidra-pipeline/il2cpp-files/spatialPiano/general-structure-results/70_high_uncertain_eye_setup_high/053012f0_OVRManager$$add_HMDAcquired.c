/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 053012f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDAcquired(float param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *plVar6;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float fVar11;
  float unaff_s13;
  float fVar12;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    fVar10 = unaff_s11;
    fVar11 = unaff_s12;
    fVar12 = unaff_s13;
    fVar8 = unaff_s15;
    fVar9 = unaff_s8;
    uVar3 = FUN_05301460(param_1,unaff_s15,unaff_s8,fVar10,fVar11,fVar12);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar7 = (float)FUN_053016ec(&stack0x00000040);
      if (*(char *)(unaff_x28 + 0x2c8) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2c8) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_053017b4(unaff_s9 +
                           SQRT((unaff_s8 - fVar9) * (unaff_s8 - fVar9) +
                                (unaff_s14 - fVar7) * (unaff_s14 - fVar7) +
                                (unaff_s15 - fVar8) * (unaff_s15 - fVar8)));
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(char *)(unaff_x28 + 0x2c8) == '\0') {
      FUN_02f08768();
      *(undefined1 *)(unaff_x28 + 0x2c8) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar6 = *(long **)(unaff_x19 + 0x10);
    unaff_s13 = unaff_s8 - fVar12;
    unaff_w23 = unaff_w23 + 1;
    unaff_s12 = unaff_s13 * unaff_s13;
    unaff_s9 = unaff_s9 +
               SQRT(unaff_s12 +
                    (unaff_s14 - fVar10) * (unaff_s14 - fVar10) +
                    (unaff_s15 - fVar11) * (unaff_s15 - fVar11));
    if (plVar6 == (long *)0x0) break;
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0530124c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x25,0);
LAB_0530124c:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((iVar1 <= unaff_w23) || (*(float *)(unaff_x19 + 0xc) < unaff_s9)) {
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x10);
    if (plVar6 == (long *)0x0) break;
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_053012c4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x25,1);
LAB_053012c4:
    unaff_s11 = (float)(*(code *)*puVar2)(plVar6,unaff_w23,puVar2[1]);
    param_1 = fVar10;
    unaff_s8 = fVar12;
    unaff_s15 = fVar11;
    unaff_s14 = fVar10;
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


