/*
FUNCTION_NAME: FUN_03e9a2bc
ENTRY_POINT: 03e9a2bc
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_03e9a2bc(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  
  if (ABS(param_1) == INFINITY || ABS(param_1) == 0.0) {
    *(undefined1 *)(param_2 + 0x3a8) = 1;
    FUN_03e94e6c(param_2);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x3a0);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x34);
    if (0 < (int)uVar1) {
      lVar5 = *(long *)(lVar2 + 0x60);
      uVar4 = 0;
      do {
        if (lVar5 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000848_PostfixBurstDelegate__EndInvoke
        ;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_03e9a42c;
        lVar9 = *(long *)(lVar5 + (long)(int)uVar4 * 0x50 + 0x48);
        if (lVar9 == 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000848_PostfixBurstDelegate__EndInvoke
        ;
        uVar7 = (uint)*(ulong *)(lVar9 + 0x18);
        if (0 < (int)uVar7) {
          uVar6 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
          uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          pfVar10 = (float *)(lVar9 + 0x2c);
          do {
            if (uVar8 == 0) goto LAB_03e9a42c;
            uVar6 = uVar6 - 1;
            uVar8 = uVar8 - 1;
            *pfVar10 = ABS(param_1) * *pfVar10;
            pfVar10 = pfVar10 + 4;
          } while (uVar6 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)));
    }
    uVar6 = 0;
    lVar5 = 0x48;
    do {
      lVar2 = *(long *)(lVar2 + 0x60);
      if (lVar2 == 0) break;
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar6) {
        return;
      }
      if (uVar6 == 0) {
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_03e9a42c;
        lVar9 = *(long *)(param_2 + 0x3d8);
        if (lVar9 == 0) break;
        puVar3 = (undefined8 *)(lVar2 + 0x48);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x720);
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_03e9a42c:
                    /* WARNING: Subroutine does not return */
          FUN_02061554();
        }
        lVar2 = *(long *)(lVar2 + uVar6 * 8 + 0x20);
        if (lVar2 == 0) break;
        lVar9 = FUN_03ef8230(lVar2,0);
        if ((*(long *)(param_2 + 0x3a0) == 0) ||
           (lVar2 = *(long *)(*(long *)(param_2 + 0x3a0) + 0x60), lVar2 == 0)) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_03e9a42c;
        if (lVar9 == 0) break;
        puVar3 = (undefined8 *)(lVar2 + lVar5);
      }
      FUN_040a70e8(lVar9,0,*puVar3,0);
      lVar2 = *(long *)(param_2 + 0x3a0);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar2 != 0);
  }

  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000848_PostfixBurstDelegate__EndInvoke
  :
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


