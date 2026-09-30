/*
FUNCTION_NAME: OVRPlugin$$get_monoscopic
ENTRY_POINT: 060064dc
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


float OVRPlugin__get_monoscopic(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
FUN_060064e4:
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
LAB_06006554:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar3 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(param_1 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar3 = *(uint *)(unaff_x20 + 0x158) & (uVar3 ^ 0xffffffff);
    }
    else {
      uVar3 = *(uint *)(unaff_x20 + 0x158) | uVar3;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar3;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x26 & 1) == 0) {
          unaff_s10 = unaff_s11;
        }
        return unaff_s10;
      }
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06006550;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iVar1 = FUN_06020530();
      if (iVar1 != 0) break;
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_06006550;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_06006554;
      *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = 0;
    }
    plVar7 = *(long **)(unaff_x20 + 0x130);
    if (plVar7 == (long *)0x0) goto LAB_06006550;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_060063c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar7,*unaff_x24,0);
LAB_060063c4:
    fVar8 = (float)(*(code *)*puVar2)(plVar7,unaff_x21 & 0xffffffff,puVar2[1]);
    if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06006550;
    fVar9 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
    lVar4 = *unaff_x19;
    fVar9 = (fVar8 - fVar9) / (unaff_s9 - fVar9);
    fVar8 = fVar9;
    if (unaff_s9 < fVar9) {
      fVar8 = unaff_s9;
    }
    if (fVar9 < 0.0) {
      fVar8 = unaff_s8;
    }
    if (lVar4 == 0) goto LAB_06006550;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_06006554;
    *(float *)(lVar4 + unaff_x21 * 4 + 0x20) = fVar8;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar1 = FUN_06020530();
    if (iVar1 != 2) break;
    param_1 = *unaff_x19;
    if (param_1 == 0) goto LAB_06006550;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_06006554;
    fVar8 = *(float *)(param_1 + unaff_x21 * 4 + 0x20);
    unaff_x26 = 1;
    if (fVar8 <= unaff_s10) {
      unaff_s10 = fVar8;
    }
  } while( true );
  if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_06006550;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  iVar1 = FUN_06020530();
  param_1 = *unaff_x19;
  if (iVar1 == 1) {
    if (param_1 == 0) goto LAB_06006550;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_06006554;
    fVar8 = *(float *)(param_1 + unaff_x21 * 4 + 0x20);
    if (unaff_s11 <= fVar8) {
      unaff_s11 = fVar8;
    }
  }
  else if (param_1 == 0) {
LAB_06006550:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  goto FUN_060064e4;
}


