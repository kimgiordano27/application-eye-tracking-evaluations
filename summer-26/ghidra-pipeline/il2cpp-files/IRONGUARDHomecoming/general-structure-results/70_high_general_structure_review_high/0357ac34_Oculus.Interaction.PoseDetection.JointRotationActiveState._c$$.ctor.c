/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointRotationActiveState.<>c$$.ctor
ENTRY_POINT: 0357ac34
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


ulong Oculus_Interaction_PoseDetection_JointRotationActiveState_<>c___ctor
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  bool in_ZR;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  uint in_w8;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  uint in_w9;
  uint in_w10;
  ushort *puVar14;
  long lVar15;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  int iVar17;
  ulong uVar18;
  short asStack_f0 [76];
  long lStack_58;
  
  if (!in_ZR) {
    in_w10 = in_w9;
  }
  if ((int)in_w8 < (int)unaff_w20) {
    puVar14 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
    lVar15 = (long)(int)unaff_w20 - (long)(int)in_w8;
    uVar4 = 0;
    do {
      if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar1 = *puVar14;
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
        return (ulong)uVar4;
      }
      if (in_w10 < uVar4) {
        thunk_FUN_01efb3a4(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
        uVar7 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Font>__
                                  );
        FUN_03579c80(uVar7,uVar8);
        uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegq_s16__);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,uVar8);
      }
      uVar16 = uVar16 + uVar4 * unaff_w21;
      uVar6 = (ulong)uVar16;
      if (uVar16 < uVar4) {
        uVar4 = FUN_0357b4d8();
        lVar15 = tpidr_el0;
        lStack_58 = *(long *)(lVar15 + 0x28);
        if ((DAT_04833347 & 1) == 0) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_ObjectManager_RecordDelayedFixup__)
          ;
          thunk_FUN_01efb3a4(Method_Oculus_Voice_ObjectVoiceExperience_HandleComplete__);
          DAT_04833347 = 1;
        }
        memset(asStack_f0,0,0x84);
        if (0x22 < extraout_w1 - 2) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar7 = thunk_FUN_01f117cc();
          uVar8 = thunk_FUN_01efb3a4(
                                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__
                                    );
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks<byte>__
                                    );
          FUN_034efd98(uVar7,uVar8,uVar9,0);
          uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqnegq_s32__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,uVar8);
        }
        uVar16 = -uVar4;
        if (extraout_w1 != 10) {
          uVar16 = uVar4;
        }
        uVar10 = uVar4;
        if ((int)uVar4 < 0) {
          uVar10 = uVar16;
        }
        if ((param_5 >> 6 & 1) == 0) {
          if ((param_5 & 0x80) != 0) {
            uVar10 = uVar10 & 0xffff;
          }
        }
        else {
          uVar10 = uVar10 & 0xff;
        }
        if (uVar10 != 0) {
          uVar6 = 0;
          goto LAB_0357ae00;
        }
        asStack_f0[0] = 0x30;
        uVar6 = 1;
        goto LAB_0357ae50;
      }
      in_w8 = in_w8 + 1;
      lVar15 = lVar15 + -1;
      puVar14 = puVar14 + 1;
      *unaff_x19 = in_w8;
      uVar4 = uVar16;
    } while (lVar15 != 0);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
  while( true ) {
    uVar16 = 0;
    if (extraout_w1 != 0) {
      uVar16 = uVar10 / extraout_w1;
    }
    uVar2 = uVar10 - uVar16 * extraout_w1;
    sVar13 = 0x57;
    if (uVar2 < 10) {
      sVar13 = 0x30;
    }
    bVar3 = uVar10 < extraout_w1;
    asStack_f0[uVar6] = sVar13 + (short)uVar2;
    uVar6 = uVar6 + 1;
    uVar10 = uVar16;
    if (bVar3) break;
LAB_0357ae00:
    if (uVar6 == 0x42) {
      uVar6 = 0;
      break;
    }
  }
LAB_0357ae50:
  uVar18 = uVar6;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar16 = (uint)uVar6;
    if (extraout_w1 == 8) {
      if (0x41 < uVar16) goto LAB_0357aff8;
      uVar18 = (ulong)(uVar16 + 1);
      asStack_f0[uVar6 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar16) || (asStack_f0[uVar6 & 0xffffffff] = 0x78, uVar16 == 0x41))
      goto LAB_0357aff8;
      uVar18 = (ulong)(uVar16 + 2);
      asStack_f0[uVar16 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar16 = (uint)uVar18;
    if ((int)uVar4 < 0) {
      if (0x41 < uVar16) {
LAB_0357aff8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      sVar13 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0357af04;
      if (0x41 < uVar16) goto LAB_0357aff8;
      sVar13 = 0x20;
    }
    else {
      if (0x41 < uVar16) goto LAB_0357aff8;
      sVar13 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar13;
    uVar18 = (ulong)(uVar16 + 1);
  }
LAB_0357af04:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0356bc8c(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar6 = thunk_FUN_01ecbcb8(uVar7,0);
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar5 = thunk_FUN_01ed2e78(0);
  psVar12 = (short *)(uVar6 + (long)iVar5);
  iVar17 = (int)uVar18;
  iVar5 = *(int *)(uVar6 + 0x10) - iVar17;
  if ((param_5 & 1) == 0) {
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      psVar11 = psVar12;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_0357aff8;
        uVar18 = uVar18 - 1;
        psVar12 = psVar11 + 1;
        *psVar11 = asStack_f0[uVar18 & 0xffffffff];
        psVar11 = psVar12;
      } while (uVar18 != 0);
    }
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        *psVar12 = param_4;
        psVar12 = psVar12 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    psVar11 = psVar12;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        psVar12 = psVar11 + 1;
        *psVar11 = param_4;
        psVar11 = psVar12;
      } while (iVar5 != 0);
    }
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_0357aff8;
        uVar18 = uVar18 - 1;
        *psVar12 = asStack_f0[uVar18 & 0xffffffff];
        psVar12 = psVar12 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar15 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


