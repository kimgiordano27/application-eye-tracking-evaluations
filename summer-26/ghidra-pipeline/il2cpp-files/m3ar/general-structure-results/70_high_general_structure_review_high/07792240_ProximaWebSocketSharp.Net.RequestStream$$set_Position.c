/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.RequestStream$$set_Position
ENTRY_POINT: 07792240
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void ProximaWebSocketSharp_Net_RequestStream__set_Position(void)

{
  int iVar1;
  uint uVar2;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w24;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  fVar8 = (float)FUN_077924e4();
  if (0 < *(int *)(unaff_x20 + 0x30)) {
    lVar4 = 0;
    do {
      lVar5 = *unaff_x19;
      iVar1 = (int)lVar4;
      if (*(int *)(unaff_x20 + 0x2c) == 0x1406) {
        if (lVar5 == 0) {
LAB_077924dc:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar9 = FUN_0744ce50();
        uVar3 = unaff_w24 + iVar1;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_077924e0;
        lVar7 = (long)(int)uVar3;
        lVar6 = *unaff_x19;
        *(undefined4 *)(lVar5 + lVar7 * 0x10 + 0x20) = uVar9;
        if (lVar6 == 0) goto LAB_077924dc;
        uVar9 = FUN_0744ce50();
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_077924e0;
        lVar5 = *unaff_x19;
        *(undefined4 *)(lVar6 + lVar7 * 0x10 + 0x24) = uVar9;
        if (lVar5 == 0) goto LAB_077924dc;
        uVar9 = FUN_0744ce50();
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_077924e0;
        lVar6 = *unaff_x19;
        *(undefined4 *)(lVar5 + lVar7 * 0x10 + 0x28) = uVar9;
        if (lVar6 == 0) goto LAB_077924dc;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (*(int *)(unaff_x20 + 0x28) == 3) {
LAB_07792400:
          fVar10 = 1.0;
          if (uVar2 <= (uint)(unaff_w24 + iVar1)) {
LAB_077924e0:
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
        }
        else {
          if (uVar2 <= uVar3) goto LAB_077924e0;
          fVar10 = (float)FUN_0744ce50();
        }
      }
      else {
        if (lVar5 == 0) goto LAB_077924dc;
        uVar2 = FUN_07791398();
        uVar3 = unaff_w24 + iVar1;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_077924e0;
        lVar7 = (long)(int)uVar3;
        lVar6 = *unaff_x19;
        *(float *)(lVar5 + lVar7 * 0x10 + 0x20) = (float)uVar2 / fVar8;
        if (lVar6 == 0) goto LAB_077924dc;
        uVar2 = FUN_07791398();
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_077924e0;
        lVar5 = *unaff_x19;
        *(float *)(lVar6 + lVar7 * 0x10 + 0x24) = (float)uVar2 / fVar8;
        if (lVar5 == 0) goto LAB_077924dc;
        uVar2 = FUN_07791398();
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_077924e0;
        lVar6 = *unaff_x19;
        *(float *)(lVar5 + lVar7 * 0x10 + 0x28) = (float)uVar2 / fVar8;
        if (lVar6 == 0) goto LAB_077924dc;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (*(int *)(unaff_x20 + 0x28) == 3) goto LAB_07792400;
        if (uVar2 <= uVar3) goto LAB_077924e0;
        uVar2 = FUN_07791398();
        fVar10 = (float)uVar2 / fVar8;
      }
      iVar1 = *(int *)(unaff_x20 + 0x30);
      lVar4 = lVar4 + 1;
      *(float *)(lVar6 + lVar7 * 0x10 + 0x2c) = fVar10;
    } while (lVar4 < iVar1);
  }
  return;
}


