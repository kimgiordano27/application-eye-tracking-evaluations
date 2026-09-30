/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointRotationActiveState.JointRotationFeatureConfig$$get_RelativeTo
ENTRY_POINT: 0357ab60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


ulong Oculus_Interaction_PoseDetection_JointRotationActiveState_JointRotationFeatureConfig__get_RelativeTo
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  bool in_ZR;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  short *psVar9;
  short *psVar10;
  short sVar11;
  uint uVar12;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  int iVar17;
  ulong unaff_x23;
  ulong uVar18;
  short asStack_f0 [76];
  long lStack_58;
  
  if ((in_ZR) && ((unaff_x23 & 1) == 0)) {
    uVar3 = *unaff_x19;
    if ((int)unaff_w20 <= (int)uVar3) {
      return 0;
    }
    puVar13 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
    lVar14 = (long)(int)unaff_w20 - (long)(int)uVar3;
    uVar5 = 0;
    do {
      if (unaff_w20 <= uVar3) goto LAB_0357acec;
      uVar1 = *puVar13;
      uVar12 = uVar1 - 0x30;
      if (9 < uVar12) {
        uVar12 = (uint)uVar1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar12 = uVar12 - 0x37;
        }
        else {
          if (0x19 < uVar12 - 0x61) break;
          uVar12 = uVar12 - 0x57;
        }
      }
      if (unaff_w21 <= (int)uVar12) break;
      if (0xccccccc < (uint)uVar5) goto LAB_0357ac04;
      uVar5 = (ulong)(uVar12 + (uint)uVar5 * unaff_w21);
      uVar3 = uVar3 + 1;
      lVar14 = lVar14 + -1;
      puVar13 = puVar13 + 1;
      *unaff_x19 = uVar3;
    } while (lVar14 != 0);
    if ((uint)uVar5 < 0x80000001) {
      return uVar5;
    }
LAB_0357ac04:
    FUN_0357b490();
  }
  uVar3 = *unaff_x19;
  uVar12 = 0x1fffffff;
  if (unaff_w21 != 8) {
    uVar12 = 0x7fffffff;
  }
  uVar15 = 0xfffffff;
  if (unaff_w21 != 0x10) {
    uVar15 = uVar12;
  }
  uVar12 = 0x19999999;
  if (unaff_w21 != 10) {
    uVar12 = uVar15;
  }
  if ((int)unaff_w20 <= (int)uVar3) {
    return 0;
  }
  puVar13 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
  lVar14 = (long)(int)unaff_w20 - (long)(int)uVar3;
  uVar15 = 0;
  do {
    if (unaff_w20 <= uVar3) {
LAB_0357acec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar1 = *puVar13;
    uVar16 = uVar1 - 0x30;
    if (9 < uVar16) {
      uVar16 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar16 = uVar16 - 0x37;
      }
      else {
        if (0x19 < uVar16 - 0x61) goto LAB_0357acd4;
        uVar16 = uVar16 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar16) {
LAB_0357acd4:
      return (ulong)uVar15;
    }
    if (uVar12 < uVar15) {
      thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Font>__
                                );
      FUN_03579c80(uVar6,uVar7);
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegq_s16__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar7);
    }
    uVar16 = uVar16 + uVar15 * unaff_w21;
    if (uVar16 < uVar15) {
      uVar3 = FUN_0357b4d8();
      lVar14 = tpidr_el0;
      lStack_58 = *(long *)(lVar14 + 0x28);
      if ((DAT_04833347 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_ObjectManager_RecordDelayedFixup__);
        thunk_FUN_01efb3a4(Method_Oculus_Voice_ObjectVoiceExperience_HandleComplete__);
        DAT_04833347 = 1;
      }
      memset(asStack_f0,0,0x84);
      if (0x22 < extraout_w1 - 2) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__
                                  );
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks<byte>__
                                  );
        FUN_034efd98(uVar6,uVar7,uVar8,0);
        uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegq_s32__);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,uVar7);
      }
      uVar12 = -uVar3;
      if (extraout_w1 != 10) {
        uVar12 = uVar3;
      }
      uVar15 = uVar3;
      if ((int)uVar3 < 0) {
        uVar15 = uVar12;
      }
      if ((param_5 >> 6 & 1) == 0) {
        if ((param_5 & 0x80) != 0) {
          uVar15 = uVar15 & 0xffff;
        }
      }
      else {
        uVar15 = uVar15 & 0xff;
      }
      if (uVar15 == 0) {
        asStack_f0[0] = 0x30;
        uVar5 = 1;
        goto LAB_0357ae50;
      }
      uVar5 = 0;
      break;
    }
    uVar3 = uVar3 + 1;
    lVar14 = lVar14 + -1;
    puVar13 = puVar13 + 1;
    *unaff_x19 = uVar3;
    uVar15 = uVar16;
    if (lVar14 == 0) {
      return (ulong)uVar16;
    }
  } while( true );
  while( true ) {
    uVar12 = 0;
    if (extraout_w1 != 0) {
      uVar12 = uVar15 / extraout_w1;
    }
    uVar16 = uVar15 - uVar12 * extraout_w1;
    sVar11 = 0x57;
    if (uVar16 < 10) {
      sVar11 = 0x30;
    }
    bVar2 = uVar15 < extraout_w1;
    asStack_f0[uVar5] = sVar11 + (short)uVar16;
    uVar5 = uVar5 + 1;
    uVar15 = uVar12;
    if (bVar2) break;
    if (uVar5 == 0x42) {
      uVar5 = 0;
      break;
    }
  }
LAB_0357ae50:
  uVar18 = uVar5;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar12 = (uint)uVar5;
    if (extraout_w1 == 8) {
      if (0x41 < uVar12) goto LAB_0357aff8;
      uVar18 = (ulong)(uVar12 + 1);
      asStack_f0[uVar5 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar12) || (asStack_f0[uVar5 & 0xffffffff] = 0x78, uVar12 == 0x41))
      goto LAB_0357aff8;
      uVar18 = (ulong)(uVar12 + 2);
      asStack_f0[uVar12 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar12 = (uint)uVar18;
    if ((int)uVar3 < 0) {
      if (0x41 < uVar12) {
LAB_0357aff8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      sVar11 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0357af04;
      if (0x41 < uVar12) goto LAB_0357aff8;
      sVar11 = 0x20;
    }
    else {
      if (0x41 < uVar12) goto LAB_0357aff8;
      sVar11 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar11;
    uVar18 = (ulong)(uVar12 + 1);
  }
LAB_0357af04:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0356bc8c(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar5 = thunk_FUN_01ecbcb8(uVar6,0);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar4 = thunk_FUN_01ed2e78(0);
  psVar10 = (short *)(uVar5 + (long)iVar4);
  iVar17 = (int)uVar18;
  iVar4 = *(int *)(uVar5 + 0x10) - iVar17;
  if ((param_5 & 1) == 0) {
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      psVar9 = psVar10;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_0357aff8;
        uVar18 = uVar18 - 1;
        psVar10 = psVar9 + 1;
        *psVar9 = asStack_f0[uVar18 & 0xffffffff];
        psVar9 = psVar10;
      } while (uVar18 != 0);
    }
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        *psVar10 = param_4;
        psVar10 = psVar10 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    psVar9 = psVar10;
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        psVar10 = psVar9 + 1;
        *psVar9 = param_4;
        psVar9 = psVar10;
      } while (iVar4 != 0);
    }
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_0357aff8;
        uVar18 = uVar18 - 1;
        *psVar10 = asStack_f0[uVar18 & 0xffffffff];
        psVar10 = psVar10 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar14 + 0x28) == lStack_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


