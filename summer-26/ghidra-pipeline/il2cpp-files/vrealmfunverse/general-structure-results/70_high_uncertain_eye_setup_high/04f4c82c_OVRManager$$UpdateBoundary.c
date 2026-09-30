/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 04f4c82c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *plVar8;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar9;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    FUN_02b3c81c();
    *(undefined1 *)(unaff_x28 + 0xd99) = unaff_w27;
    do {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_04f4cca8(unaff_s9 +
                           SQRT((fStack000000000000000c - unaff_s8) *
                                (fStack000000000000000c - unaff_s8) +
                                (fStack0000000000000008 - unaff_s14) *
                                (fStack0000000000000008 - unaff_s14) +
                                (unaff_s10 - unaff_s15) * (unaff_s10 - unaff_s15)));
      fVar1 = fStack0000000000000008;
      fVar2 = fStack000000000000000c;
      fVar9 = unaff_s10;
      if ((uVar5 & 1) != 0) {
        return;
      }
      do {
        fStack0000000000000008 = unaff_s11;
        unaff_s10 = unaff_s12;
        fStack000000000000000c = unaff_s13;
        if (*(char *)(unaff_x28 + 0xd99) == '\0') {
          FUN_02b3c81c();
          *(undefined1 *)(unaff_x28 + 0xd99) = unaff_w27;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar8 = *(long **)(unaff_x19 + 0x10);
        unaff_s13 = fVar2 - fStack000000000000000c;
        unaff_w23 = unaff_w23 + 1;
        unaff_s12 = unaff_s13 * unaff_s13;
        unaff_s9 = unaff_s9 +
                   SQRT(unaff_s12 +
                        (fVar1 - fStack0000000000000008) * (fVar1 - fStack0000000000000008) +
                        (fVar9 - unaff_s10) * (fVar9 - unaff_s10));
        if (plVar8 == (long *)0x0) {
LAB_04f4c900:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar6 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04f4c734;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x25,0);
LAB_04f4c734:
        iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        if (iVar3 <= unaff_w23) {
          return;
        }
        if (*(float *)(unaff_x19 + 0xc) < unaff_s9) {
          return;
        }
        plVar8 = *(long **)(unaff_x19 + 0x10);
        if (plVar8 == (long *)0x0) goto LAB_04f4c900;
        lVar6 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_04f4c7ac;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x25,1);
LAB_04f4c7ac:
        unaff_s11 = (float)(*(code *)*puVar4)(plVar8,unaff_w23,puVar4[1]);
        if (unaff_x20 == 0) goto LAB_04f4c900;
        unaff_s15 = unaff_s10;
        unaff_s8 = fStack000000000000000c;
        uVar5 = FUN_04f4c948(fStack0000000000000008,unaff_s10,fStack000000000000000c,unaff_s11,
                             unaff_s12,unaff_s13);
        fVar1 = fStack0000000000000008;
        fVar2 = fStack000000000000000c;
        fVar9 = unaff_s10;
      } while ((uVar5 & 1) == 0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      unaff_s14 = (float)FUN_04f4cbe0(&stack0x00000040);
    } while (*(char *)(unaff_x28 + 0xd99) != '\0');
  } while( true );
}


