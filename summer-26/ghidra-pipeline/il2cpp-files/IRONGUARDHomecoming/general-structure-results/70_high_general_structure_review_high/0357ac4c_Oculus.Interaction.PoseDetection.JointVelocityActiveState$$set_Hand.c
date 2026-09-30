/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointVelocityActiveState$$set_Hand
ENTRY_POINT: 0357ac4c
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


ulong Oculus_Interaction_PoseDetection_JointVelocityActiveState__set_Hand
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  uint in_w8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  uint in_w9;
  ushort *puVar12;
  long in_x11;
  long lVar13;
  uint uVar14;
  long in_x13;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  short asStack_f0 [76];
  long lStack_58;
  
  puVar12 = (ushort *)(unaff_x22 + in_x11 * 2);
  lVar13 = in_x13 - in_x11;
  uVar4 = 0;
  do {
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar1 = *puVar12;
    uVar14 = uVar1 - 0x30;
    uVar15 = uVar4;
    if (9 < uVar14) {
      uVar14 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar14 = uVar14 - 0x37;
      }
      else {
        if (0x19 < uVar14 - 0x61) break;
        uVar14 = uVar14 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar14) break;
    if (in_w9 < uVar4) {
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
    uVar15 = uVar14 + uVar4 * unaff_w21;
    if (uVar15 < uVar4) {
      uVar4 = FUN_0357b4d8();
      lVar13 = tpidr_el0;
      lStack_58 = *(long *)(lVar13 + 0x28);
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
      uVar15 = -uVar4;
      if (extraout_w1 != 10) {
        uVar15 = uVar4;
      }
      uVar14 = uVar4;
      if ((int)uVar4 < 0) {
        uVar14 = uVar15;
      }
      if ((param_5 >> 6 & 1) == 0) {
        if ((param_5 & 0x80) != 0) {
          uVar14 = uVar14 & 0xffff;
        }
      }
      else {
        uVar14 = uVar14 & 0xff;
      }
      if (uVar14 == 0) {
        asStack_f0[0] = 0x30;
        uVar17 = 1;
        goto LAB_0357ae50;
      }
      uVar17 = 0;
      goto LAB_0357ae00;
    }
    in_w8 = in_w8 + 1;
    lVar13 = lVar13 + -1;
    puVar12 = puVar12 + 1;
    *unaff_x19 = in_w8;
    uVar4 = uVar15;
  } while (lVar13 != 0);
  return (ulong)uVar15;
  while( true ) {
    uVar15 = 0;
    if (extraout_w1 != 0) {
      uVar15 = uVar14 / extraout_w1;
    }
    uVar2 = uVar14 - uVar15 * extraout_w1;
    sVar11 = 0x57;
    if (uVar2 < 10) {
      sVar11 = 0x30;
    }
    bVar3 = uVar14 < extraout_w1;
    asStack_f0[uVar17] = sVar11 + (short)uVar2;
    uVar17 = uVar17 + 1;
    uVar14 = uVar15;
    if (bVar3) break;
LAB_0357ae00:
    if (uVar17 == 0x42) {
      uVar17 = 0;
      break;
    }
  }
LAB_0357ae50:
  uVar18 = uVar17;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar15 = (uint)uVar17;
    if (extraout_w1 == 8) {
      if (0x41 < uVar15) goto LAB_0357aff8;
      uVar18 = (ulong)(uVar15 + 1);
      asStack_f0[uVar17 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar15) || (asStack_f0[uVar17 & 0xffffffff] = 0x78, uVar15 == 0x41))
      goto LAB_0357aff8;
      uVar18 = (ulong)(uVar15 + 2);
      asStack_f0[uVar15 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar15 = (uint)uVar18;
    if ((int)uVar4 < 0) {
      if (0x41 < uVar15) {
LAB_0357aff8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      sVar11 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0357af04;
      if (0x41 < uVar15) goto LAB_0357aff8;
      sVar11 = 0x20;
    }
    else {
      if (0x41 < uVar15) goto LAB_0357aff8;
      sVar11 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar11;
    uVar18 = (ulong)(uVar15 + 1);
  }
LAB_0357af04:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0356bc8c(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar17 = thunk_FUN_01ecbcb8(uVar6,0);
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar5 = thunk_FUN_01ed2e78(0);
  psVar10 = (short *)(uVar17 + (long)iVar5);
  iVar16 = (int)uVar18;
  iVar5 = *(int *)(uVar17 + 0x10) - iVar16;
  if ((param_5 & 1) == 0) {
    if (0 < iVar16) {
      uVar18 = uVar18 & 0xffffffff;
      psVar9 = psVar10;
      do {
        if (0x41 < iVar16 - 1U) goto LAB_0357aff8;
        uVar18 = uVar18 - 1;
        psVar10 = psVar9 + 1;
        *psVar9 = asStack_f0[uVar18 & 0xffffffff];
        psVar9 = psVar10;
      } while (uVar18 != 0);
    }
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        *psVar10 = param_4;
        psVar10 = psVar10 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    psVar9 = psVar10;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        psVar10 = psVar9 + 1;
        *psVar9 = param_4;
        psVar9 = psVar10;
      } while (iVar5 != 0);
    }
    if (0 < iVar16) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar16 - 1U) goto LAB_0357aff8;
        uVar18 = uVar18 - 1;
        *psVar10 = asStack_f0[uVar18 & 0xffffffff];
        psVar10 = psVar10 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar13 + 0x28) == lStack_58) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


