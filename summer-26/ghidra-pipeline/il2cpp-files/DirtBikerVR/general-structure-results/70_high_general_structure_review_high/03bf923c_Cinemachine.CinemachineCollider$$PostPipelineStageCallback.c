/*
FUNCTION_NAME: Cinemachine.CinemachineCollider$$PostPipelineStageCallback
ENTRY_POINT: 03bf923c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Cinemachine_CinemachineCollider__PostPipelineStageCallback
               (float param_1,float param_2,float param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar8;
  int unaff_w22;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  while (lVar5 = *(long *)(unaff_x19 + 0x48), lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_03bf94b0;
    lVar5 = *(long *)(lVar5 + (long)(int)unaff_w20 * (long)unaff_w22 + 0x40);
    if (lVar5 == 0) break;
    fVar10 = (float)FUN_07cac280(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_03bf94b0;
    lVar5 = *(long *)(lVar5 + (long)(int)unaff_w20 * (long)unaff_w22 + 0x38);
    if (lVar5 == 0) break;
    fVar12 = param_2;
    fVar13 = param_3;
    fVar11 = (float)FUN_07cac280(lVar5,0);
    param_2 = param_2 - fVar12;
    param_3 = param_3 - fVar13;
    if (*(int *)(unaff_x19 + 0x40) == 1) {
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar5 = *(long *)(unaff_x19 + 0x48), lVar5 == 0))
      break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_03bf94b0;
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
      if (lVar2 == 0) break;
      lVar5 = FUN_03bb66a0(lVar2,*(undefined4 *)
                                  (lVar5 + (long)(int)unaff_w20 * (long)unaff_w22 + 0x48),0);
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar2 = *(long *)(unaff_x19 + 0x48), lVar2 == 0))
      break;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_03bf94b0;
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
      if ((((lVar3 == 0) ||
           (lVar2 = FUN_03bb66a0(lVar3,*(undefined4 *)
                                        (lVar2 + (long)(int)unaff_w20 * (long)unaff_w22 + 0x48),0),
           lVar2 == 0)) || (*(long *)(lVar2 + 0x10) == 0)) ||
         (fVar14 = (float)FUN_07cac280(*(long *)(lVar2 + 0x10),0), lVar5 == 0)) break;
      fVar12 = param_2 + fVar12;
      fVar13 = param_3 + fVar13;
      *(float *)(lVar5 + 0x28) = (fVar10 - fVar11) + fVar14;
      *(float *)(lVar5 + 0x2c) = fVar12;
      *(float *)(lVar5 + 0x30) = fVar13;
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar5 = *(long *)(unaff_x19 + 0x48), lVar5 == 0))
      break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_03bf94b0;
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
      if ((lVar2 == 0) ||
         (lVar5 = FUN_03bb66a0(lVar2,*(undefined4 *)
                                      (lVar5 + (long)(int)unaff_w20 * (long)unaff_w22 + 0x48),0),
         lVar5 == 0)) break;
      *(float *)(lVar5 + 0x20) = param_1 * *(float *)(unaff_x19 + 0x20);
    }
    else if (*(int *)(unaff_x19 + 0x40) == 0) {
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar5 = *(long *)(unaff_x19 + 0x48), lVar5 == 0))
      break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_03bf94b0;
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
      if ((lVar2 == 0) ||
         (lVar5 = FUN_03bb66a0(lVar2,*(undefined4 *)
                                      (lVar5 + (long)(int)unaff_w20 * (long)unaff_w22 + 0x48),0),
         lVar5 == 0)) break;
      fVar14 = *(float *)(unaff_x19 + 0x20);
      fVar12 = *(float *)(lVar5 + 0x48) + param_1 * param_2 * fVar14;
      fVar13 = *(float *)(lVar5 + 0x4c) + param_1 * param_3 * fVar14;
      *(float *)(lVar5 + 0x44) = *(float *)(lVar5 + 0x44) + param_1 * (fVar10 - fVar11) * fVar14;
      *(float *)(lVar5 + 0x48) = fVar12;
      *(float *)(lVar5 + 0x4c) = fVar13;
    }
    lVar5 = *(long *)(unaff_x19 + 0x48);
    unaff_w20 = unaff_w20 + 1;
    if (lVar5 == 0) break;
    iVar4 = (int)*(ulong *)(lVar5 + 0x18);
    if (iVar4 <= (int)unaff_w20) {
      iVar7 = *(int *)(unaff_x19 + 0x40);
      if ((*(int *)(unaff_x19 + 0x50) != 1) || (iVar7 != 0)) goto LAB_03bf9490;
      if (0 < iVar4) {
        uVar8 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        puVar9 = (undefined4 *)(lVar5 + 0x48);
        goto LAB_03bf9444;
      }
      iVar7 = 0;
      goto LAB_03bf9490;
    }
    param_1 = (float)FUN_03bf8fe8();
    param_2 = fVar12;
    param_3 = fVar13;
  }
LAB_03bf9418:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_03bf9444:
  if (uVar6 <= uVar8) {
LAB_03bf94b0:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  if (((*(long *)(unaff_x19 + 0x28) == 0) ||
      (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar2 == 0)) ||
     (lVar2 = FUN_03bb66a0(lVar2,*puVar9,0), lVar2 == 0)) goto LAB_03bf9418;
  uVar1 = *(uint *)(lVar5 + 0x18);
  uVar6 = (ulong)uVar1;
  uVar8 = uVar8 + 1;
  puVar9 = puVar9 + 0xc;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  if ((long)(int)uVar1 <= (long)uVar8) {
    iVar7 = *(int *)(unaff_x19 + 0x40);
LAB_03bf9490:
    *(int *)(unaff_x19 + 0x50) = iVar7;
    return;
  }
  goto LAB_03bf9444;
}


