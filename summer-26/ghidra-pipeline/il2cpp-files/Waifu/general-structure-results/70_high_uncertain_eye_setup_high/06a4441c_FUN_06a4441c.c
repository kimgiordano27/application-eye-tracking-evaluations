/*
FUNCTION_NAME: FUN_06a4441c
ENTRY_POINT: 06a4441c
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06a4441c(float param_1,long param_2,int param_3,undefined4 param_4,float *param_5,
                 long param_6)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  
  if ((DAT_086e1dc8 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cbfd8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f12d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f12e8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ef310,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f12f0,1);
    DataMemoryBarrier(2,3);
    DAT_086e1dc8 = 1;
  }
  if ((*(long *)(param_2 + 0x20) != 0) && (lVar5 = *(long *)(param_2 + 0x28), lVar5 != 0)) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x20) + 0x50);
    iVar7 = 0;
    while (lVar5 = FUN_04ab0b48(lVar5,param_4,DAT_083ef310), lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if ((*(long *)(param_2 + 0x28) == 0) ||
         (lVar5 = FUN_04ab0b48(*(long *)(param_2 + 0x28),param_4,DAT_083ef310), lVar5 == 0)) break;
      FUN_049e2a88(&local_a8,lVar5,iVar7,DAT_083f12f0);
      uVar4 = local_98;
      fVar3 = fStack_9c;
      uVar11 = 0;
      uVar13 = 0;
      local_b8 = local_a8 * param_1;
      uVar9 = (ulong)(uint)local_b8;
      fStack_b4 = fStack_a4 * param_1;
      uVar14 = (ulong)(uint)fStack_b4;
      local_b0 = local_a0 * param_1;
      uVar15 = (ulong)(uint)local_b0;
      if (iVar1 != param_3) {
        fVar8 = fStack_a4;
        fVar10 = local_a0;
        if (*(int *)(DAT_083cbfd8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = OVRPlugin__GetConnectedControllers(&local_b8,0);
        local_b8 = (float)uVar9;
        uVar14 = CONCAT44(uVar11,fVar8);
        uVar15 = CONCAT44(uVar13,fVar10);
        fStack_b4 = fVar8;
        local_b0 = fVar10;
      }
      fVar18 = param_5[2];
      fVar10 = param_5[4];
      fVar12 = param_5[5];
      fVar16 = *param_5;
      fVar17 = param_5[1];
      fVar8 = (float)FUN_07a00c3c(param_5[3],fVar10,fVar12,param_5[6],uVar9,uVar14,uVar15,0);
      lVar5 = DAT_083f12d8;
      if (param_6 == 0) break;
      lVar6 = *(long *)(param_6 + 0x10);
      *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
      if (lVar6 == 0) break;
      uVar2 = *(uint *)(param_6 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar2 * 0x14;
        *(uint *)(param_6 + 0x18) = uVar2 + 1;
        *(float *)(lVar6 + 0x20) = fVar16 + fVar8;
        *(float *)(lVar6 + 0x24) = fVar17 + fVar10;
        *(float *)(lVar6 + 0x28) = fVar18 + fVar12;
        *(float *)(lVar6 + 0x2c) = fVar3 * param_1;
        *(undefined4 *)(lVar6 + 0x30) = uVar4;
      }
      else {
        local_a8 = fVar16 + fVar8;
        fStack_a4 = fVar17 + fVar10;
        local_a0 = fVar18 + fVar12;
        fStack_9c = fVar3 * param_1;
        local_98 = uVar4;
        FUN_049e2ddc(param_6,&local_a8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(param_2 + 0x28);
      iVar7 = iVar7 + 1;
      if (lVar5 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


