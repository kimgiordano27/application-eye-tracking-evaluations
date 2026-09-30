/*
FUNCTION_NAME: FUN_085c96c4
ENTRY_POINT: 085c96c4
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;telemetry_or_network_hits_6
*/


void FUN_085c96c4(ulong *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar10;
  ulong uVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  ulong local_90;
  ulong local_80;
  undefined8 local_78;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  puVar1 = PTR_DAT_09198a20;
  if ((DAT_0969b183 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09198a20);
    FUN_03f13384(PTR_DAT_09198a48);
    FUN_03f13384(PTR_DAT_09198a50);
    FUN_03f13384(PTR_DAT_091154f0);
    FUN_03f13384(PTR_DAT_091154f8);
    FUN_03f13384(PTR_DAT_09115500);
    FUN_03f13384(PTR_DAT_09115508);
    FUN_03f13384(PTR_DAT_0910ed00);
    FUN_03f13384(PTR_DAT_0910ed08);
    DAT_0969b183 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  if (param_2 != 0) {
    FUN_048a2c10(param_2,**(undefined8 **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_09198a48);
    FUN_085c9ca0(&local_80,**(undefined8 **)(*(long *)puVar1 + 0xb8));
    uVar19 = CONCAT44(fStack_70,local_78._4_4_);
    if (DAT_096847b5 == '\0') {
      FUN_03f13384(PTR_DAT_0910c4c8);
      DAT_096847b5 = '\x01';
    }
    uVar8 = **(undefined8 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8);
    fVar5 = (local_78._4_4_ + local_78._4_4_) - (float)uVar8;
    fVar10 = (fStack_70 + fStack_70) - (float)((ulong)uVar8 >> 0x20);
    fVar11 = (local_6c + local_6c) -
             *(float *)(*(undefined8 **)(*(long *)PTR_DAT_0910c4c8 + 0xb8) + 1);
    fVar18 = local_6c;
    fVar17 = (float)local_78;
    if (DAT_01928a50 <= fVar11 * fVar11 + fVar5 * fVar5 + fVar10 * fVar10) {
LAB_085c99bc:
      *param_1 = local_80;
      *(float *)(param_1 + 1) = fVar17;
      *(undefined8 *)((long)param_1 + 0xc) = uVar19;
      *(float *)((long)param_1 + 0x14) = fVar18;
      return;
    }
    lVar2 = *(long *)puVar1;
    local_90 = local_80;
    fVar5 = DAT_01928a50;
    uVar3 = local_80;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar2 = *(long *)puVar1;
      uVar3 = local_80;
    }
    FUN_048a2c10(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),
                 *(undefined8 *)PTR_DAT_09198a50);
    lVar2 = *(long *)puVar1;
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar4 == 0)
          goto UnityEngine_XR_OpenXR_Features_Meta_ARSessionFeature__OnSessionStateChange;
        }
        lVar2 = FUN_056b0600(lVar4,0,*(undefined8 *)PTR_DAT_0910ed08);
        if (lVar2 == 0)
        goto UnityEngine_XR_OpenXR_Features_Meta_ARSessionFeature__OnSessionStateChange;
        uVar6 = FUN_08808ca8(lVar2,0);
        fVar17 = (float)uVar3;
        lVar2 = *(long *)puVar1;
        local_90 = CONCAT44(fVar5,uVar6);
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        FUN_056b1374(&local_68,lVar2,*(undefined8 *)PTR_DAT_09115508);
        puVar1 = PTR_DAT_091154f8;
        local_80 = 0;
        local_78 = &local_68;
        while( true ) {
          fVar10 = (float)uVar3;
          uVar3 = FUN_072070ec(&local_68,*(undefined8 *)puVar1);
          if ((uVar3 & 1) == 0) break;
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          fVar7 = (float)FUN_08808ca8(local_58,0);
          uVar9 = CONCAT44(fVar5,fVar7);
          fVar13 = (float)local_90 - (float)uVar19;
          fVar16 = (float)(local_90 >> 0x20);
          fVar11 = (float)((ulong)uVar19 >> 0x20);
          fVar14 = fVar16 - fVar11;
          fVar15 = (float)local_90 + (float)uVar19;
          fVar16 = fVar16 + fVar11;
          fVar11 = fVar17 - fVar18;
          if (fVar10 <= fVar17 - fVar18) {
            fVar11 = fVar10;
          }
          fVar12 = fVar17 + fVar18;
          if (fVar17 + fVar18 <= fVar10) {
            fVar12 = fVar10;
          }
          uVar3 = uVar9 ^ (uVar9 ^ CONCAT44(fVar14,fVar13)) &
                          CONCAT44(-(uint)(fVar14 < fVar5),-(uint)(fVar13 < fVar7));
          uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar16,fVar15)) &
                          CONCAT44(-(uint)(fVar5 < fVar16),-(uint)(fVar7 < fVar15));
          fVar5 = fVar12 - fVar11;
          fVar10 = (float)(uVar3 >> 0x20);
          fVar18 = fVar5 * 0.5;
          fVar7 = ((float)uVar9 - (float)uVar3) * 0.5;
          fVar13 = ((float)(uVar9 >> 0x20) - fVar10) * 0.5;
          uVar19 = CONCAT44(fVar13,fVar7);
          fVar17 = fVar11 + fVar18;
          local_90 = CONCAT44(fVar10 + fVar13,(float)uVar3 + fVar7);
        }
        FUN_072070e8(&local_68,*(undefined8 *)PTR_DAT_091154f0);
        local_80 = local_90;
        goto LAB_085c99bc;
      }
    }
  }
UnityEngine_XR_OpenXR_Features_Meta_ARSessionFeature__OnSessionStateChange:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


