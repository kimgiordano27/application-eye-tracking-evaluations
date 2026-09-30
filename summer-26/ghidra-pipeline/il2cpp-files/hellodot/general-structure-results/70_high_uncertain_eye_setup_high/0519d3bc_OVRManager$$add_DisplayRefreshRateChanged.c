/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 0519d3bc
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


void OVRManager__add_DisplayRefreshRateChanged
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *plVar7;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_d8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 uVar16;
  ulong unaff_d14;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    if (in_x11 == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      uVar12 = param_3;
      uVar14 = param_4;
      uVar16 = unaff_d10;
      goto LAB_0519d3ec;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    uVar14 = unaff_d8;
    uVar12 = unaff_d14;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02ce0a7c(unaff_x24,param_6,0);
        uVar12 = param_3;
        uVar14 = param_4;
        uVar16 = unaff_d10;
LAB_0519d3ec:
        iVar1 = (*(code *)*puVar2)(unaff_x24,puVar2[1]);
        if ((iVar1 <= unaff_w23) || (*(float *)(unaff_x19 + 0xc) < unaff_s9)) {
          return;
        }
        plVar7 = *(long **)(unaff_x19 + 0x10);
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
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0519d464;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x25,1);
LAB_0519d464:
        unaff_d10 = (*(code *)*puVar2)(plVar7,unaff_w23,puVar2[1]);
        if (unaff_x20 == 0) goto LAB_0519d5b0;
        uVar5 = unaff_d14;
        uVar15 = unaff_d8;
        uVar3 = FUN_0519d5f8(uVar16,unaff_d14,unaff_d8,unaff_d10,uVar12,uVar14);
        fVar11 = (float)uVar15;
        fVar9 = (float)uVar5;
        if ((uVar3 & 1) != 0) {
          fVar10 = (float)unaff_d14;
          fVar13 = (float)unaff_d8;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
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
          fVar8 = (float)uVar16 - fVar8;
          unaff_d14 = unaff_d14 & 0xffffffff;
          unaff_d8 = unaff_d8 & 0xffffffff;
          fVar10 = fVar10 - fVar9;
          fVar13 = fVar13 - fVar11;
          uVar5 = FUN_0519d948(unaff_s9 + SQRT(fVar13 * fVar13 + fVar8 * fVar8 + fVar10 * fVar10));
          if ((uVar5 & 1) != 0) {
            return;
          }
        }
        if (*(char *)(unaff_x28 + 0x30d) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x28 + 0x30d) = unaff_w27;
        }
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        fVar9 = (float)uVar16 - (float)unaff_d10;
        fVar11 = (float)unaff_d14 - (float)uVar12;
        fVar10 = (float)unaff_d8 - (float)uVar14;
        fVar11 = fVar11 * fVar11;
        param_3 = (ulong)(uint)fVar11;
        unaff_x24 = *(long **)(unaff_x19 + 0x10);
        fVar10 = fVar10 * fVar10;
        param_4 = (ulong)(uint)fVar10;
        unaff_s9 = unaff_s9 + SQRT(fVar10 + fVar9 * fVar9 + fVar11);
        unaff_w23 = unaff_w23 + 1;
        if (unaff_x24 == (long *)0x0) goto LAB_0519d5b0;
        param_1 = *unaff_x24;
        param_6 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_d8 = uVar14;
        unaff_d14 = uVar12;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
    unaff_d8 = uVar14;
    unaff_d14 = uVar12;
  } while( true );
}


