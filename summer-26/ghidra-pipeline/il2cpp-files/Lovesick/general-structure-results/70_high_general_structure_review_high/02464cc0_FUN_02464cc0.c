/*
FUNCTION_NAME: FUN_02464cc0
ENTRY_POINT: 02464cc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_02464cc0(long param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_0378250b & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_s16__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector3>_Swap__);
    thunk_FUN_00d48444(System_Globalization_CompareOptions_TypeInfo);
    thunk_FUN_00d48444(VolumetricAudio_VA_AudioListener_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5808);
    thunk_FUN_00d48444(Sirenix_Serialization_UInt16Serializer_var);
    DAT_0378250b = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  lVar10 = *(long *)(param_1 + 0x178);
joined_r0x02464d50:
  if (lVar10 != 0) {
    lVar8 = *(long *)Method_Obi_ObiNativeList<Vector3>_Swap__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
    lVar10 = *(long *)(param_1 + 0x178);
    local_70 = 0;
    uStack_68 = 0;
    FUN_02686ec0(&local_70,0,0,param_2,param_2,0);
    if (lVar10 != 0) {
      FUN_00cb5b34(lVar10,local_70,uStack_68,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_s16__);
      if (0 < (int)param_3) {
        uVar9 = 0;
        uVar12 = param_3;
        do {
          lVar10 = *(long *)(param_1 + 0x168);
          if (lVar10 == 0) goto LAB_02464ff0;
          if (*(uint *)(lVar10 + 0x18) <= uVar9) {
LAB_02465014:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar10 = lVar10 + (long)(int)uVar9 * 0x1c;
          iVar1 = 0;
          if (param_4 != 0) {
            iVar1 = *(int *)(lVar10 + 0x28) / param_4;
          }
          iVar7 = 8;
          if (*(char *)(lVar10 + 0x2c) != '\0') {
            iVar7 = 0x10;
          }
          if (iVar1 < iVar7) {
            return;
          }
          lVar10 = *(long *)(param_1 + 0x178);
          if (lVar10 == 0) goto LAB_02464ff0;
          iVar7 = 0;
          while( true ) {
            if (*(int *)(lVar10 + 0x18) <= iVar7) {
              lVar10 = *(long *)(param_1 + 0x178);
              param_4 = param_4 << 1;
              goto joined_r0x02464d50;
            }
            FUN_0132138c(lVar10,iVar7,&local_70,
                         *(undefined8 *)Sirenix_Serialization_UInt16Serializer_var);
            local_80 = local_70;
            uStack_78 = uStack_68;
            iVar2 = FUN_02686d10(&local_80,0);
            iVar3 = FUN_02686d20(&local_80,0);
            iVar4 = FUN_02686cf0(&local_80,0);
            iVar5 = FUN_02686d00(&local_80,0);
            if (iVar1 <= iVar2) break;
            lVar10 = *(long *)(param_1 + 0x178);
            iVar7 = iVar7 + 1;
            if (lVar10 == 0) goto LAB_02464ff0;
          }
          lVar10 = *(long *)(param_1 + 0x168);
          if (lVar10 == 0) goto LAB_02464ff0;
          if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_02465014;
          lVar10 = lVar10 + (long)(int)uVar9 * 0x1c;
          *(int *)(lVar10 + 0x30) = iVar4;
          *(int *)(lVar10 + 0x34) = iVar5;
          *(int *)(lVar10 + 0x38) = iVar1;
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_02464ff0;
          FUN_01324ac8(*(long *)(param_1 + 0x178),iVar7,
                       *(undefined8 *)VolumetricAudio_VA_AudioListener_TypeInfo);
          if (0 < (int)(~uVar9 + param_3)) {
            iVar3 = iVar5 + iVar3;
            uVar11 = 1;
            iVar13 = iVar4;
            do {
              iVar13 = iVar13 + iVar1;
              if ((iVar4 + iVar2 < iVar13 + iVar1) &&
                 (iVar5 = iVar5 + iVar1, iVar13 = iVar4, iVar3 < iVar5 + iVar1)) break;
              lVar10 = *(long *)(param_1 + 0x178);
              local_90 = 0;
              uStack_88 = 0;
              FUN_02686ec0(&local_90,iVar13,iVar5,iVar1,iVar1,0);
              if (lVar10 == 0) goto LAB_02464ff0;
              local_70 = local_90;
              uStack_68 = uStack_88;
              FUN_01323a14(lVar10,iVar7 + uVar11 + -1,&local_70,
                           *(undefined8 *)System_Globalization_CompareOptions_TypeInfo);
              uVar11 = uVar11 + 1;
            } while (uVar12 != uVar11);
          }
          uVar9 = uVar9 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar9 != param_3);
      }
      return;
    }
  }
LAB_02464ff0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


