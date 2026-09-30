/*
FUNCTION_NAME: OVRManager$$remove_DisplayRefreshRateChanged
ENTRY_POINT: 0519d4b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__remove_DisplayRefreshRateChanged
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *plVar7;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong unaff_d8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 uVar11;
  undefined8 unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong uVar12;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    fVar10 = (float)param_3;
    fVar9 = (float)param_2;
    fStack0000000000000008 = (float)unaff_d14;
    fStack000000000000000c = (float)unaff_d8;
    if (*(int *)(param_4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar8 = (float)OVRManager__remove_SpaceSetComponentStatusComplete(&stack0x00000040);
    if (*(char *)(unaff_x28 + 0x30d) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x28 + 0x30d) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar8 = (float)unaff_d10 - fVar8;
    uVar12 = (ulong)(uint)fStack0000000000000008;
    uVar5 = (ulong)(uint)fStack000000000000000c;
    uVar3 = FUN_0519d948(unaff_s9 +
                         SQRT((fStack000000000000000c - fVar10) * (fStack000000000000000c - fVar10)
                              + fVar8 * fVar8 +
                                (fStack0000000000000008 - fVar9) * (fStack0000000000000008 - fVar9))
                        );
    uVar11 = unaff_d10;
    if ((uVar3 & 1) != 0) {
      return;
    }
    do {
      unaff_d8 = unaff_d13;
      unaff_d14 = unaff_d12;
      unaff_d10 = unaff_d11;
      if (*(char *)(unaff_x28 + 0x30d) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x30d) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar9 = (float)uVar11 - (float)unaff_d10;
      fVar10 = (float)uVar12 - (float)unaff_d14;
      fVar8 = (float)uVar5 - (float)unaff_d8;
      fVar10 = fVar10 * fVar10;
      unaff_d12 = (ulong)(uint)fVar10;
      plVar7 = *(long **)(unaff_x19 + 0x10);
      fVar8 = fVar8 * fVar8;
      unaff_d13 = (ulong)(uint)fVar8;
      unaff_s9 = unaff_s9 + SQRT(fVar8 + fVar9 * fVar9 + fVar10);
      unaff_w23 = unaff_w23 + 1;
      if (plVar7 == (long *)0x0) {
LAB_0519d5b0:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0519d3ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x25,0);
LAB_0519d3ec:
      iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (iVar1 <= unaff_w23) {
        return;
      }
      if (*(float *)(unaff_x19 + 0xc) < unaff_s9) {
        return;
      }
      plVar7 = *(long **)(unaff_x19 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_0519d5b0;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0519d464;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x25,1);
LAB_0519d464:
      unaff_d11 = (*(code *)*puVar2)(plVar7,unaff_w23,puVar2[1]);
      if (unaff_x20 == 0) goto LAB_0519d5b0;
      param_2 = unaff_d14;
      param_3 = unaff_d8;
      uVar3 = FUN_0519d5f8(unaff_d10,unaff_d14,unaff_d8,unaff_d11,unaff_d12,unaff_d13);
      uVar5 = unaff_d8;
      uVar11 = unaff_d10;
      uVar12 = unaff_d14;
    } while ((uVar3 & 1) == 0);
    param_4 = *unaff_x26;
  } while( true );
}


