/*
FUNCTION_NAME: OVRManager$$add_SpatialAnchorCreateComplete
ENTRY_POINT: 0519d5a4
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


void OVRManager__add_SpatialAnchorCreateComplete(float param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *plVar8;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float unaff_s9;
  undefined8 unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  while( true ) {
    unaff_s9 = unaff_s9 + param_1;
    unaff_w23 = unaff_w23 + 1;
    if (unaff_x24 == (long *)0x0) break;
    lVar4 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          uVar5 = param_2;
          uVar15 = param_3;
          goto LAB_0519d3ec;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(unaff_x24,*unaff_x25,0);
    uVar5 = param_2;
    uVar15 = param_3;
LAB_0519d3ec:
    iVar1 = (*(code *)*puVar2)(unaff_x24,puVar2[1]);
    if ((iVar1 <= unaff_w23) || (*(float *)(unaff_x19 + 0xc) < unaff_s9)) {
      return;
    }
    plVar8 = *(long **)(unaff_x19 + 0x10);
    if (plVar8 == (long *)0x0) break;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0519d464;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar8,*unaff_x25,1);
LAB_0519d464:
    uVar11 = (*(code *)*puVar2)(plVar8,unaff_w23,puVar2[1]);
    if (unaff_x20 == 0) break;
    uVar6 = unaff_d12;
    uVar16 = unaff_d13;
    uVar3 = FUN_0519d5f8(unaff_d11,unaff_d12,unaff_d13,uVar11,uVar5,uVar15);
    fVar13 = (float)uVar16;
    fVar10 = (float)uVar6;
    if ((uVar3 & 1) != 0) {
      fVar12 = (float)unaff_d12;
      fVar14 = (float)unaff_d13;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar9 = (float)OVRManager__remove_SpaceSetComponentStatusComplete(&stack0x00000040);
      if (*(char *)(unaff_x28 + 0x30d) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x30d) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      fVar9 = (float)unaff_d11 - fVar9;
      unaff_d12 = unaff_d12 & 0xffffffff;
      unaff_d13 = unaff_d13 & 0xffffffff;
      fVar12 = fVar12 - fVar10;
      fVar14 = fVar14 - fVar13;
      uVar6 = FUN_0519d948(unaff_s9 + SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar12 * fVar12));
      if ((uVar6 & 1) != 0) {
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
    fVar10 = (float)unaff_d11 - (float)uVar11;
    fVar13 = (float)unaff_d12 - (float)uVar5;
    fVar12 = (float)unaff_d13 - (float)uVar15;
    fVar13 = fVar13 * fVar13;
    param_2 = (ulong)(uint)fVar13;
    unaff_x24 = *(long **)(unaff_x19 + 0x10);
    fVar12 = fVar12 * fVar12;
    param_3 = (ulong)(uint)fVar12;
    param_1 = SQRT(fVar12 + fVar10 * fVar10 + fVar13);
    unaff_d11 = uVar11;
    unaff_d12 = uVar5;
    unaff_d13 = uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


