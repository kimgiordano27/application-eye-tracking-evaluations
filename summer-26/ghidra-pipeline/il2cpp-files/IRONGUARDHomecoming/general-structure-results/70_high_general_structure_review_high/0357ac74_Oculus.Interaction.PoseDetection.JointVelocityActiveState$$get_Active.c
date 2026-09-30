/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.JointVelocityActiveState$$get_Active
ENTRY_POINT: 0357ac74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


ulong Oculus_Interaction_PoseDetection_JointVelocityActiveState__get_Active
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
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
  ushort *in_x10;
  long in_x11;
  uint in_w12;
  uint in_w13;
  uint uVar14;
  uint in_w14;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  short asStack_f0 [76];
  long lStack_58;
  
  do {
    if (in_w13 < 0x1a) {
      uVar14 = in_w14 - 0x37;
    }
    else {
      uVar5 = in_w12;
      if (0x19 < in_w14 - 0x61) {
LAB_0357acd8:
        return (ulong)uVar5;
      }
      uVar14 = in_w14 - 0x57;
    }
    do {
      uVar5 = in_w12;
      if (unaff_w21 <= (int)uVar14) goto LAB_0357acd8;
      if (in_w9 < in_w12) {
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
      uVar5 = uVar14 + in_w12 * unaff_w21;
      if (uVar5 < in_w12) {
        uVar5 = FUN_0357b4d8();
        lVar3 = tpidr_el0;
        lStack_58 = *(long *)(lVar3 + 0x28);
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
        uVar14 = -uVar5;
        if (extraout_w1 != 10) {
          uVar14 = uVar5;
        }
        uVar10 = uVar5;
        if ((int)uVar5 < 0) {
          uVar10 = uVar14;
        }
        if ((param_5 >> 6 & 1) == 0) {
          if ((param_5 & 0x80) != 0) {
            uVar10 = uVar10 & 0xffff;
          }
        }
        else {
          uVar10 = uVar10 & 0xff;
        }
        if (uVar10 == 0) {
          asStack_f0[0] = 0x30;
          uVar16 = 1;
          goto LAB_0357ae50;
        }
        uVar16 = 0;
        goto LAB_0357ae00;
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
      uVar1 = *in_x10;
      in_w14 = (uint)uVar1;
      uVar14 = uVar1 - 0x30;
      in_w12 = uVar5;
    } while (uVar14 < 10);
    in_w13 = uVar1 - 0x41;
  } while( true );
  while( true ) {
    uVar14 = 0;
    if (extraout_w1 != 0) {
      uVar14 = uVar10 / extraout_w1;
    }
    uVar2 = uVar10 - uVar14 * extraout_w1;
    sVar13 = 0x57;
    if (uVar2 < 10) {
      sVar13 = 0x30;
    }
    bVar4 = uVar10 < extraout_w1;
    asStack_f0[uVar16] = sVar13 + (short)uVar2;
    uVar16 = uVar16 + 1;
    uVar10 = uVar14;
    if (bVar4) break;
LAB_0357ae00:
    if (uVar16 == 0x42) {
      uVar16 = 0;
      break;
    }
  }
LAB_0357ae50:
  uVar17 = uVar16;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar14 = (uint)uVar16;
    if (extraout_w1 == 8) {
      if (0x41 < uVar14) goto LAB_0357aff8;
      uVar17 = (ulong)(uVar14 + 1);
      asStack_f0[uVar16 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar14) || (asStack_f0[uVar16 & 0xffffffff] = 0x78, uVar14 == 0x41))
      goto LAB_0357aff8;
      uVar17 = (ulong)(uVar14 + 2);
      asStack_f0[uVar14 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar14 = (uint)uVar17;
    if ((int)uVar5 < 0) {
      if (0x41 < uVar14) {
LAB_0357aff8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      sVar13 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_0357af04;
      if (0x41 < uVar14) goto LAB_0357aff8;
      sVar13 = 0x20;
    }
    else {
      if (0x41 < uVar14) goto LAB_0357aff8;
      sVar13 = 0x2b;
    }
    asStack_f0[uVar17 & 0xffffffff] = sVar13;
    uVar17 = (ulong)(uVar14 + 1);
  }
LAB_0357af04:
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0356bc8c(param_3 & 0xffffffff,uVar17 & 0xffffffff,0);
  uVar16 = thunk_FUN_01ecbcb8(uVar7,0);
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar6 = thunk_FUN_01ed2e78(0);
  psVar12 = (short *)(uVar16 + (long)iVar6);
  iVar15 = (int)uVar17;
  iVar6 = *(int *)(uVar16 + 0x10) - iVar15;
  if ((param_5 & 1) == 0) {
    if (0 < iVar15) {
      uVar17 = uVar17 & 0xffffffff;
      psVar11 = psVar12;
      do {
        if (0x41 < iVar15 - 1U) goto LAB_0357aff8;
        uVar17 = uVar17 - 1;
        psVar12 = psVar11 + 1;
        *psVar11 = asStack_f0[uVar17 & 0xffffffff];
        psVar11 = psVar12;
      } while (uVar17 != 0);
    }
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        *psVar12 = param_4;
        psVar12 = psVar12 + 1;
      } while (iVar6 != 0);
    }
  }
  else {
    psVar11 = psVar12;
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        psVar12 = psVar11 + 1;
        *psVar11 = param_4;
        psVar11 = psVar12;
      } while (iVar6 != 0);
    }
    if (0 < iVar15) {
      uVar17 = uVar17 & 0xffffffff;
      do {
        if (0x41 < iVar15 - 1U) goto LAB_0357aff8;
        uVar17 = uVar17 - 1;
        *psVar12 = asStack_f0[uVar17 & 0xffffffff];
        psVar12 = psVar12 + 1;
      } while (uVar17 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


