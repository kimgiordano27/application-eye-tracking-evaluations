/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 05fee608
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(void)

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
  float fVar11;
  ulong unaff_d8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 uVar12;
  undefined8 unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong uVar13;
  float unaff_s14;
  ulong uVar14;
  ulong unaff_d15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x28 + 0xba1) = unaff_w27;
    do {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar9 = (float)unaff_d10 - unaff_s14;
      fVar10 = fStack0000000000000008 - (float)unaff_d15;
      fVar11 = fStack000000000000000c - (float)unaff_d8;
      uVar4 = FUN_05feea80(unaff_s9 + SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10));
      uVar6 = (ulong)(uint)fStack000000000000000c;
      uVar12 = unaff_d10;
      uVar13 = unaff_d13;
      uVar14 = (ulong)(uint)fStack0000000000000008;
      if ((uVar4 & 1) != 0) {
        return;
      }
      do {
        uVar4 = unaff_d12;
        unaff_d10 = unaff_d11;
        if (*(char *)(unaff_x28 + 0xba1) == '\0') {
          FUN_031f20f4();
          *(undefined1 *)(unaff_x28 + 0xba1) = unaff_w27;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        fVar9 = (float)uVar12 - (float)unaff_d10;
        fStack0000000000000008 = (float)uVar4;
        fVar10 = (float)uVar14 - fStack0000000000000008;
        fStack000000000000000c = (float)uVar13;
        fVar11 = (float)uVar6 - fStack000000000000000c;
        fVar10 = fVar10 * fVar10;
        unaff_d12 = (ulong)(uint)fVar10;
        plVar8 = *(long **)(unaff_x19 + 0x10);
        fVar11 = fVar11 * fVar11;
        unaff_d13 = (ulong)(uint)fVar11;
        unaff_s9 = unaff_s9 + SQRT(fVar11 + fVar9 * fVar9 + fVar10);
        unaff_w23 = unaff_w23 + 1;
        if (plVar8 == (long *)0x0) {
LAB_05fee6dc:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05fee518;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(plVar8,*unaff_x25,0);
LAB_05fee518:
        iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if (iVar1 <= unaff_w23) {
          return;
        }
        if (*(float *)(unaff_x19 + 0xc) < unaff_s9) {
          return;
        }
        plVar8 = *(long **)(unaff_x19 + 0x10);
        if (plVar8 == (long *)0x0) goto LAB_05fee6dc;
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_05fee590;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(plVar8,*unaff_x25,1);
LAB_05fee590:
        unaff_d11 = (*(code *)*puVar2)(plVar8,unaff_w23,puVar2[1]);
        if (unaff_x20 == 0) goto LAB_05fee6dc;
        unaff_d15 = uVar4;
        unaff_d8 = uVar13;
        uVar3 = FUN_05fee724(unaff_d10,uVar4,uVar13,unaff_d11,unaff_d12,unaff_d13);
        uVar6 = uVar13;
        uVar12 = unaff_d10;
        uVar13 = unaff_d13;
        uVar14 = uVar4;
      } while ((uVar3 & 1) == 0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      unaff_s14 = (float)FUN_05fee9b8(&stack0x00000040);
    } while (*(char *)(unaff_x28 + 0xba1) != '\0');
  } while( true );
}


