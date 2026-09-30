/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 06006304
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_chromatic(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar8;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float fVar11;
  float fVar12;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  fVar11 = 1.0;
  fVar12 = 0.0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  do {
    lVar4 = *(long *)(unaff_x20 + 0xd0);
    if (lVar4 == 0) goto LAB_06006550;
    uStack0000000000000010 = *(undefined8 *)(lVar4 + 0xd0);
    uStack0000000000000008 = *(undefined8 *)(lVar4 + 200);
    uStack0000000000000000 = *(undefined8 *)(lVar4 + 0xc0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar1 = FUN_06020530();
    if (iVar1 == 0) {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_06006550;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_06006554;
      *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = 0;
    }
    else {
      plVar8 = *(long **)(unaff_x20 + 0x130);
      if (plVar8 == (long *)0x0) {
LAB_06006550:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_060063c4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar8,*unaff_x24,0);
LAB_060063c4:
      fVar9 = (float)(*(code *)*puVar2)(plVar8,unaff_x21 & 0xffffffff,puVar2[1]);
      lVar4 = *(long *)(unaff_x20 + 0xd0);
      if (lVar4 == 0) goto LAB_06006550;
      lVar6 = *unaff_x19;
      fVar10 = (fVar9 - *(float *)(lVar4 + 0xd8)) / (unaff_s9 - *(float *)(lVar4 + 0xd8));
      fVar9 = fVar10;
      if (unaff_s9 < fVar10) {
        fVar9 = unaff_s9;
      }
      if (fVar10 < 0.0) {
        fVar9 = unaff_s8;
      }
      if (lVar6 == 0) goto LAB_06006550;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
LAB_06006554:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(float *)(lVar6 + unaff_x21 * 4 + 0x20) = fVar9;
      uStack0000000000000010 = *(undefined8 *)(lVar4 + 0xd0);
      uStack0000000000000008 = *(undefined8 *)(lVar4 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar4 + 0xc0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iVar1 = FUN_06020530();
      if (iVar1 == 2) {
        lVar4 = *unaff_x19;
        if (lVar4 == 0) goto LAB_06006550;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_06006554;
        fVar9 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
        unaff_x26 = 1;
        if (fVar9 <= fVar11) {
          fVar11 = fVar9;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0xd0);
        if (lVar4 == 0) goto LAB_06006550;
        uStack0000000000000010 = *(undefined8 *)(lVar4 + 0xd0);
        uStack0000000000000008 = *(undefined8 *)(lVar4 + 200);
        uStack0000000000000000 = *(undefined8 *)(lVar4 + 0xc0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar1 = FUN_06020530();
        lVar4 = *unaff_x19;
        if (iVar1 == 1) {
          if (lVar4 == 0) goto LAB_06006550;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_06006554;
          fVar9 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
          if (fVar12 <= fVar9) {
            fVar12 = fVar9;
          }
        }
        else if (lVar4 == 0) goto LAB_06006550;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_06006554;
      uVar3 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
      if (*(float *)(lVar4 + unaff_x21 * 4 + 0x20) <= 0.0) {
        uVar3 = *(uint *)(unaff_x20 + 0x158) & (uVar3 ^ 0xffffffff);
      }
      else {
        uVar3 = *(uint *)(unaff_x20 + 0x158) | uVar3;
      }
      *(uint *)(unaff_x20 + 0x158) = uVar3;
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      if ((unaff_x26 & 1) == 0) {
        fVar11 = fVar12;
      }
      return fVar11;
    }
  } while( true );
}


