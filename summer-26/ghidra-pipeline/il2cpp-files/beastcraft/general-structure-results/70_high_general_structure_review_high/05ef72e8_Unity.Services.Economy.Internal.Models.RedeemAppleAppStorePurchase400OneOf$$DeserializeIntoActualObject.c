/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Models.RedeemAppleAppStorePurchase400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 05ef72e8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05ef76e4) */
/* WARNING: Removing unreachable block (ram,0x05ef7c3c) */

void Unity_Services_Economy_Internal_Models_RedeemAppleAppStorePurchase400OneOf__DeserializeIntoActualObject
               (void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  uint unaff_w19;
  ulong unaff_x20;
  undefined8 uVar14;
  long lVar15;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  long lVar16;
  int iStack0000000000000044;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  uVar3 = FUN_05ed9a44();
  iStack000000000000004c = unaff_w21;
  if ((unaff_x20 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06a368b8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar8 = FUN_0621ad74(0);
    if ((uVar8 & 1) == 0) goto LAB_05ef73c4;
    if ((*(long *)(unaff_x24 + 0x1b8) == 0) ||
       (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1b8) + 0x38), plVar9 == (long *)0x0))
    goto LAB_05ef7c34;
    iVar4 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (iVar4 == 1) {
      plVar9 = *(long **)(unaff_x26 + 0x1d8);
      if (plVar9 == (long *)0x0) goto LAB_05ef7c34;
      uVar8 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if ((uVar8 & 1) == 0) {
        uVar14 = *(undefined8 *)MessagePipe_ISingletonPublisher<TKey,_TMessage>_var;
        iVar4 = FUN_062641e8(0);
        if ((iVar4 * -0x11111111 + 0x8888888U >> 2 | iVar4 * -0x40000000) < 0x4444445) {
          if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_06222224(uVar14,0);
        }
        goto LAB_05ef73c4;
      }
    }
    bVar1 = true;
  }
  else {
LAB_05ef73c4:
    bVar1 = false;
  }
  puVar2 = PTR_DAT_06ab5e18;
  uVar5 = FUN_05ed0d3c();
  uVar6 = FUN_05ed0e2c();
  if (((uVar5 & 1) == 0) && (uVar8 = FUN_05ed0d2c(), (uVar8 & 1) != 0)) {
    if (*(int *)(*(long *)Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var + 0xe4)
        == 0) {
      thunk_FUN_02e9a04c();
    }
    Unity_Services_Leaderboards_Internal_Models_LeaderboardEntry__get_PlayerName();
  }
  iStack0000000000000044 = unaff_w25;
  FUN_03a21438(0x20,*(undefined8 *)puVar2);
  if (unaff_x22 != 0) {
    plVar9 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>();
    puVar2 = PTR_DAT_06ab07f8;
    in_stack_00000178 = plVar9;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar12 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06ab07f8) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
          goto LAB_05ef74e8;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)PTR_DAT_06ab07f8,0xb);
LAB_05ef74e8:
    (*(code *)*puVar10)(plVar9,0,puVar10[1]);
    plVar9 = in_stack_00000178;
    if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar12 = *in_stack_00000178;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
          goto LAB_05ef7550;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_02e759c0(in_stack_00000178,*(long *)puVar2,0xc);
LAB_05ef7550:
    (*(code *)*puVar10)(plVar9,1,puVar10[1]);
    plVar9 = in_stack_00000178;
    puVar2 = MessagePipe_IAsyncRequestHandlerFilter_var;
    lVar12 = *(long *)MessagePipe_IAsyncRequestHandlerFilter_var;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar12 = *(long *)puVar2;
    }
    puVar10 = *(undefined8 **)(lVar12 + 0xb8);
    lVar16 = puVar10[0x18];
    if (lVar16 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar14 = *puVar10;
      lVar16 = thunk_FUN_02e78ab8(*(undefined8 *)MessagePipe_ISingletonAsyncPublisher<TMessage>_var)
      ;
      FUN_04b2178c(lVar16,uVar14,*(undefined8 *)MessagePipe_ISingletonPublisher<TMessage>_var,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
      *plVar11 = lVar16;
      thunk_FUN_02ee2be8(plVar11,lVar16);
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar12 = *plVar9;
    lVar15 = *(long *)MessagePipe_ISingletonAsyncSubscriber<TMessage>_var;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar15 + 0x20)) {
          lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
          goto LAB_05ef7644;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    lVar12 = FUN_02e759c0(plVar9);
LAB_05ef7644:
    lVar12 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar12 + 8),lVar15);
    (**(code **)(lVar12 + 8))(plVar9,lVar16,lVar12);
    plVar9 = in_stack_00000178;
    if (in_stack_00000178 != (long *)0x0) {
      lVar12 = *in_stack_00000178;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06a2ef10) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05ef76cc;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02e759c0(in_stack_00000178,*(long *)PTR_DAT_06a2ef10,0);
LAB_05ef76cc:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
    in_stack_00000188 = in_stack_00000078[1];
    in_stack_00000180 = *in_stack_00000078;
    if (iStack0000000000000054 != 0) {
      FUN_05eecb28();
      in_stack_00000188 = in_stack_00000168;
      in_stack_00000180 = in_stack_00000160;
    }
    if (iStack0000000000000044 == 2) {
      FUN_05eed0bc();
      in_stack_00000188 = in_stack_00000158;
      in_stack_00000180 = in_stack_00000150;
    }
    if (iStack0000000000000050 != 0) {
      FUN_05eefd74();
      in_stack_00000188 = in_stack_00000148;
      in_stack_00000180 = in_stack_00000140;
    }
    if ((uVar5 & 1) != 0) {
      if ((uVar5 & uVar6 & 1) == 0) {
        puVar10 = (undefined8 *)&stack0x00000120;
        FUN_05ef1e0c();
      }
      else {
        puVar10 = (undefined8 *)&stack0x00000130;
        Unity_Services_Economy_Internal_Models_GetPlayerConfiguration400OneOf__FromJson();
      }
      in_stack_00000188 = puVar10[1];
      in_stack_00000180 = *puVar10;
    }
    if (bVar1) {
      FUN_05ef22c4();
      in_stack_00000188 = in_stack_00000118;
      in_stack_00000180 = in_stack_00000110;
    }
    if (((uVar3 ^ 1 | unaff_w19) & 1) == 0) {
      FUN_05ef16bc();
      in_stack_00000188 = in_stack_00000108;
      in_stack_00000180 = in_stack_00000100;
    }
    if ((*(long *)(unaff_x24 + 0x1a0) != 0) &&
       (lVar12 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar12 != 0)) {
      thunk_FUN_0623a5f0(lVar12,0,0);
      if (*(long *)(unaff_x24 + 0x1d0) != 0) {
        uVar8 = FUN_05ecdde8(*(long *)(unaff_x24 + 0x1d0),0);
        if ((iStack000000000000004c != 0) || ((uVar8 & 1) != 0)) {
          FUN_05eeef50();
          if (iStack000000000000004c != 0) {
            FUN_05eeeda8();
            iVar4 = FUN_05eeee48();
            if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
               (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x78), plVar9 == (long *)0x0))
            goto LAB_05ef7c34;
            iVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
            uVar3 = iVar4 - 1;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 1;
            }
            uVar5 = uVar3;
            if (iVar7 >> 1 <= (int)uVar3) {
              uVar5 = iVar7 >> 1;
            }
            uVar6 = 0;
            if (-1 < (int)uVar3) {
              uVar6 = uVar5;
            }
            if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
               (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x48), plVar9 == (long *)0x0))
            goto LAB_05ef7c34;
            uVar5 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
            uVar3 = uVar5;
            if ((int)uVar6 <= (int)uVar5) {
              uVar3 = uVar6;
            }
            uVar6 = 0;
            if (-1 < (int)uVar5) {
              uVar6 = uVar3;
            }
            if (*(long *)(unaff_x24 + 0x148) == 0) goto LAB_05ef7c34;
            if (*(uint *)(*(long *)(unaff_x24 + 0x148) + 0x18) <= uVar6) {
LAB_05ef7950:
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            if (iVar4 == 1) {
              if (*(long *)(unaff_x24 + 0x150) == 0) goto LAB_05ef7c34;
              if (*(int *)(*(long *)(unaff_x24 + 0x150) + 0x18) == 0) goto LAB_05ef7950;
            }
            if (*(long *)(unaff_x26 + 0x1a0) == 0) goto LAB_05ef7c34;
            FUN_05d9fec0(*(long *)(unaff_x26 + 0x1a0),0);
            FUN_05ef37ec();
          }
          if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
          FUN_05eee634();
        }
        if (unaff_w23 != 0) {
          FUN_05ef2bac();
          FUN_05ef3188();
        }
        if ((((*(long *)(unaff_x24 + 0x1a0) != 0) &&
             (FUN_05eea650(), *(long *)(unaff_x24 + 0x1a0) != 0)) &&
            (FUN_05eea94c(), *(long *)(unaff_x24 + 0x1a0) != 0)) &&
           ((Unity_Services_Economy_Model_AppleVerification___ctor(),
            *(long *)(unaff_x24 + 0x1a0) != 0 && (FUN_05eeafe8(), *(long *)(unaff_x24 + 0x1a0) != 0)
            ))) {
          FUN_05eeb098();
          uVar8 = FUN_05ed056c();
          if (((uVar8 & 1) != 0) && (*(char *)(unaff_x24 + 0x246) != '\0')) {
            if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
            uVar14 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1a0) + 0x78);
            if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_05e1b7cc(uVar14,*(undefined8 *)Unity_Hierarchy_HierarchySearchQueryDescriptor_var,1,
                         0);
          }
          if (*(char *)(unaff_x24 + 0x247) != '\0') {
            if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
            uVar14 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1a0) + 0x78);
            if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_05e1b7cc(uVar14,*(undefined8 *)Fusion_LagCompensation_HitboxCollider_var,1,0);
          }
          uVar8 = FUN_05ee78fc();
          if ((uVar8 & 1) != 0) {
            FUN_05ed08a0();
            FUN_05ed0998();
            if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
            FUN_05ed0a28();
            FUN_05eeb134();
          }
          if (*(int *)(*(long *)PTR_DAT_06ab5ec8 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_05ebd50c();
          FUN_05ef5fcc();
          return;
        }
      }
    }
  }
LAB_05ef7c34:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


