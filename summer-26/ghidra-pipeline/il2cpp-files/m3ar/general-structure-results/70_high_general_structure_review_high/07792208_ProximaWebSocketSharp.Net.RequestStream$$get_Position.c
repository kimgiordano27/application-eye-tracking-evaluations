/*
FUNCTION_NAME: ProximaWebSocketSharp.Net.RequestStream$$get_Position
ENTRY_POINT: 07792208
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void ProximaWebSocketSharp_Net_RequestStream__get_Position
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w24;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  int iStack000000000000000c;
  
  uVar2 = (**(code **)(param_1 + 0x358))(param_2,param_3,0,param_5,*(undefined8 *)(param_1 + 0x360))
  ;
  uVar10 = *(undefined4 *)(unaff_x20 + 0x2c);
  iVar3 = 3;
  if (*(int *)(unaff_x20 + 0x28) != 3) {
    iVar3 = 4;
  }
  uVar2 = FUN_07791370(uVar2,uVar10);
  iStack000000000000000c = *(int *)(unaff_x20 + 0x18);
  if (*(int *)(unaff_x20 + 0x18) < 1) {
    iStack000000000000000c = iVar3 * (int)uVar2;
  }
  fVar9 = (float)FUN_077924e4(uVar2,uVar10);
  if (0 < *(int *)(unaff_x20 + 0x30)) {
    lVar5 = 0;
    do {
      lVar6 = *unaff_x19;
      iVar3 = (int)lVar5;
      if (*(int *)(unaff_x20 + 0x2c) == 0x1406) {
        if (lVar6 == 0) {
LAB_077924dc:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar10 = FUN_0744ce50();
        uVar4 = unaff_w24 + iVar3;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_077924e0;
        lVar8 = (long)(int)uVar4;
        lVar7 = *unaff_x19;
        *(undefined4 *)(lVar6 + lVar8 * 0x10 + 0x20) = uVar10;
        if (lVar7 == 0) goto LAB_077924dc;
        uVar10 = FUN_0744ce50();
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_077924e0;
        lVar6 = *unaff_x19;
        *(undefined4 *)(lVar7 + lVar8 * 0x10 + 0x24) = uVar10;
        if (lVar6 == 0) goto LAB_077924dc;
        uVar10 = FUN_0744ce50();
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_077924e0;
        lVar7 = *unaff_x19;
        *(undefined4 *)(lVar6 + lVar8 * 0x10 + 0x28) = uVar10;
        if (lVar7 == 0) goto LAB_077924dc;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (*(int *)(unaff_x20 + 0x28) == 3) {
LAB_07792400:
          fVar11 = 1.0;
          if (uVar1 <= (uint)(unaff_w24 + iVar3)) {
LAB_077924e0:
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
        }
        else {
          if (uVar1 <= uVar4) goto LAB_077924e0;
          fVar11 = (float)FUN_0744ce50();
        }
      }
      else {
        if (lVar6 == 0) goto LAB_077924dc;
        uVar1 = FUN_07791398();
        uVar4 = unaff_w24 + iVar3;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_077924e0;
        lVar8 = (long)(int)uVar4;
        lVar7 = *unaff_x19;
        *(float *)(lVar6 + lVar8 * 0x10 + 0x20) = (float)uVar1 / fVar9;
        if (lVar7 == 0) goto LAB_077924dc;
        uVar1 = FUN_07791398();
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_077924e0;
        lVar6 = *unaff_x19;
        *(float *)(lVar7 + lVar8 * 0x10 + 0x24) = (float)uVar1 / fVar9;
        if (lVar6 == 0) goto LAB_077924dc;
        uVar1 = FUN_07791398();
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_077924e0;
        lVar7 = *unaff_x19;
        *(float *)(lVar6 + lVar8 * 0x10 + 0x28) = (float)uVar1 / fVar9;
        if (lVar7 == 0) goto LAB_077924dc;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (*(int *)(unaff_x20 + 0x28) == 3) goto LAB_07792400;
        if (uVar1 <= uVar4) goto LAB_077924e0;
        uVar1 = FUN_07791398();
        fVar11 = (float)uVar1 / fVar9;
      }
      iVar3 = *(int *)(unaff_x20 + 0x30);
      lVar5 = lVar5 + 1;
      *(float *)(lVar7 + lVar8 * 0x10 + 0x2c) = fVar11;
    } while (lVar5 < iVar3);
  }
  return;
}


