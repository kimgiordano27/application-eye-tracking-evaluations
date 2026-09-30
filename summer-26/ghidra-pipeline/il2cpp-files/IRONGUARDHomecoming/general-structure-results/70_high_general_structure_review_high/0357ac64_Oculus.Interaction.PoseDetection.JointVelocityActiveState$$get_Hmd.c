/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointVelocityActiveState$$get_Hmd
ENTRY_POINT: 0357ac64
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


ulong Oculus_Interaction_PoseDetection_JointVelocityActiveState__get_Hmd
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  uint in_w8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  short sVar12;
  uint in_w9;
  ushort *in_x10;
  long in_x11;
  uint in_w12;
  uint uVar13;
  uint in_w14;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  short asStack_f0 [76];
  long lStack_58;
  
  do {
    uVar13 = in_w14 - 0x30;
    uVar4 = in_w12;
    if (9 < uVar13) {
      if (in_w14 - 0x41 < 0x1a) {
        uVar13 = in_w14 - 0x37;
      }
      else {
        if (0x19 < in_w14 - 0x61) goto LAB_0357acd8;
        uVar13 = in_w14 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar13) {
LAB_0357acd8:
      return (ulong)uVar4;
    }
    if (in_w9 < in_w12) {
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
    uVar4 = uVar13 + in_w12 * unaff_w21;
    if (uVar4 < in_w12) {
      uVar4 = FUN_0357b4d8();
      lVar2 = tpidr_el0;
      lStack_58 = *(long *)(lVar2 + 0x28);
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
      uVar13 = -uVar4;
      if (extraout_w1 != 10) {
        uVar13 = uVar4;
      }
      uVar9 = uVar4;
      if ((int)uVar4 < 0) {
        uVar9 = uVar13;
      }
      if ((param_5 >> 6 & 1) == 0) {
        if ((param_5 & 0x80) != 0) {
          uVar9 = uVar9 & 0xffff;
        }
      }
      else {
        uVar9 = uVar9 & 0xff;
      }
      if (uVar9 == 0) {
        asStack_f0[0] = 0x30;
        uVar15 = 1;
        goto LAB_0357ae50;
      }
      uVar15 = 0;
      break;
    }
    in_w8 = in_w8 + 1;
    in_x11 = in_x11 + -1;
    in_x10 = in_x10 + 1;
    *unaff_x19 = in_w8;
    if (in_x11 == 0) goto LAB_0357acd8;
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    in_w14 = (uint)*in_x10;
    in_w12 = uVar4;
  } while( true );
  while( true ) {
    uVar13 = 0;
    if (extraout_w1 != 0) {
      uVar13 = uVar9 / extraout_w1;
    }
    uVar1 = uVar9 - uVar13 * extraout_w1;
    sVar12 = 0x57;
    if (uVar1 < 10) {
      sVar12 = 0x30;
    }
    bVar3 = uVar9 < extraout_w1;
    asStack_f0[uVar15] = sVar12 + (short)uVar1;
    uVar15 = uVar15 + 1;
    uVar9 = uVar13;
    if (bVar3) break;
    if (uVar15 == 0x42) {
      uVar15 = 0;
      break;
    }
  }
LAB_0357ae50:
  uVar16 = uVar15;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar13 = (uint)uVar15;
    if (extraout_w1 == 8) {
      if (0x41 < uVar13) goto LAB_0357aff8;
      uVar16 = (ulong)(uVar13 + 1);
      asStack_f0[uVar15 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar13) || (asStack_f0[uVar15 & 0xffffffff] = 0x78, uVar13 == 0x41))
      goto LAB_0357aff8;
      uVar16 = (ulong)(uVar13 + 2);
      asStack_f0[uVar13 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar13 = (uint)uVar16;
    if ((int)uVar4 < 0) {
      if (0x41 < uVar13) {
LAB_0357aff8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      sVar12 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0357af04;
      if (0x41 < uVar13) goto LAB_0357aff8;
      sVar12 = 0x20;
    }
    else {
      if (0x41 < uVar13) goto LAB_0357aff8;
      sVar12 = 0x2b;
    }
    asStack_f0[uVar16 & 0xffffffff] = sVar12;
    uVar16 = (ulong)(uVar13 + 1);
  }
LAB_0357af04:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0356bc8c(param_3 & 0xffffffff,uVar16 & 0xffffffff,0);
  uVar15 = thunk_FUN_01ecbcb8(uVar6,0);
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar5 = thunk_FUN_01ed2e78(0);
  psVar11 = (short *)(uVar15 + (long)iVar5);
  iVar14 = (int)uVar16;
  iVar5 = *(int *)(uVar15 + 0x10) - iVar14;
  if ((param_5 & 1) == 0) {
    if (0 < iVar14) {
      uVar16 = uVar16 & 0xffffffff;
      psVar10 = psVar11;
      do {
        if (0x41 < iVar14 - 1U) goto LAB_0357aff8;
        uVar16 = uVar16 - 1;
        psVar11 = psVar10 + 1;
        *psVar10 = asStack_f0[uVar16 & 0xffffffff];
        psVar10 = psVar11;
      } while (uVar16 != 0);
    }
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        *psVar11 = param_4;
        psVar11 = psVar11 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    psVar10 = psVar11;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        psVar11 = psVar10 + 1;
        *psVar10 = param_4;
        psVar10 = psVar11;
      } while (iVar5 != 0);
    }
    if (0 < iVar14) {
      uVar16 = uVar16 & 0xffffffff;
      do {
        if (0x41 < iVar14 - 1U) goto LAB_0357aff8;
        uVar16 = uVar16 - 1;
        *psVar11 = asStack_f0[uVar16 & 0xffffffff];
        psVar11 = psVar11 + 1;
      } while (uVar16 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


