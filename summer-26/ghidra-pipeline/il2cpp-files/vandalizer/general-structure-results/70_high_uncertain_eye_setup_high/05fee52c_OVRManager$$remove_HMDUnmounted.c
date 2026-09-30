/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 05fee52c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDUnmounted(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
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
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_d8;
  float unaff_s9;
  undefined8 unaff_d10;
  ulong unaff_d14;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  while( true ) {
    if (*(float *)(unaff_x19 + 0xc) < unaff_s9) {
      return;
    }
    plVar8 = *(long **)(unaff_x19 + 0x10);
    if (plVar8 == (long *)0x0) break;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          uVar6 = param_2;
          uVar15 = param_3;
          goto LAB_05fee590;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar8,*unaff_x25,1);
    uVar6 = param_2;
    uVar15 = param_3;
LAB_05fee590:
    uVar11 = (*(code *)*puVar2)(plVar8,unaff_w23,puVar2[1]);
    if (unaff_x20 == 0) break;
    uVar4 = unaff_d14;
    uVar16 = unaff_d8;
    uVar3 = FUN_05fee724(unaff_d10,unaff_d14,unaff_d8,uVar11,uVar6,uVar15);
    fVar13 = (float)uVar16;
    fVar10 = (float)uVar4;
    if ((uVar3 & 1) != 0) {
      fVar12 = (float)unaff_d14;
      fVar14 = (float)unaff_d8;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar9 = (float)FUN_05fee9b8(&stack0x00000040);
      if (*(char *)(unaff_x28 + 0xba1) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x28 + 0xba1) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar9 = (float)unaff_d10 - fVar9;
      unaff_d14 = unaff_d14 & 0xffffffff;
      unaff_d8 = unaff_d8 & 0xffffffff;
      fVar12 = fVar12 - fVar10;
      fVar14 = fVar14 - fVar13;
      uVar4 = FUN_05feea80(unaff_s9 + SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar12 * fVar12));
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    if (*(char *)(unaff_x28 + 0xba1) == '\0') {
      FUN_031f20f4();
      *(undefined1 *)(unaff_x28 + 0xba1) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar10 = (float)unaff_d10 - (float)uVar11;
    fVar13 = (float)unaff_d14 - (float)uVar6;
    fVar12 = (float)unaff_d8 - (float)uVar15;
    fVar13 = fVar13 * fVar13;
    param_2 = (ulong)(uint)fVar13;
    plVar8 = *(long **)(unaff_x19 + 0x10);
    fVar12 = fVar12 * fVar12;
    param_3 = (ulong)(uint)fVar12;
    unaff_s9 = unaff_s9 + SQRT(fVar12 + fVar10 * fVar10 + fVar13);
    unaff_w23 = unaff_w23 + 1;
    if (plVar8 == (long *)0x0) break;
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05fee518;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar8,*unaff_x25,0);
LAB_05fee518:
    iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    unaff_d8 = uVar15;
    unaff_d10 = uVar11;
    unaff_d14 = uVar6;
    if (iVar1 <= unaff_w23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


