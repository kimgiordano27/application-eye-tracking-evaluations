/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Models.RedeemAppleAppStorePurchase400OneOf$$.cctor
ENTRY_POINT: 05ef74c8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ef76e4) */
/* WARNING: Removing unreachable block (ram,0x05ef7c3c) */

void Unity_Services_Economy_Internal_Models_RedeemAppleAppStorePurchase400OneOf___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  uint unaff_w21;
  int unaff_w23;
  long unaff_x24;
  long unaff_x26;
  long lVar15;
  undefined8 in_stack_00000038;
  int iStack0000000000000040;
  int iStack0000000000000044;
  uint uStack0000000000000048;
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
  
  puVar7 = (undefined8 *)FUN_02e759c0();
  (*(code *)*puVar7)();
  plVar9 = in_stack_00000178;
  if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *in_stack_00000178;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x20) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_05ef7550;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000178,*unaff_x20,0xc);
LAB_05ef7550:
  (*(code *)*puVar7)(plVar9,1,puVar7[1]);
  plVar9 = in_stack_00000178;
  puVar3 = MessagePipe_IAsyncRequestHandlerFilter_var;
  lVar10 = *(long *)MessagePipe_IAsyncRequestHandlerFilter_var;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar10 = *(long *)puVar3;
  }
  puVar7 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar7[0x18];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar13 = *puVar7;
    lVar15 = thunk_FUN_02e78ab8(*(undefined8 *)MessagePipe_ISingletonAsyncPublisher<TMessage>_var);
    FUN_04b2178c(lVar15,uVar13,*(undefined8 *)MessagePipe_ISingletonPublisher<TMessage>_var,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc0);
    *plVar8 = lVar15;
    thunk_FUN_02ee2be8(plVar8,lVar15);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar10 = *plVar9;
  lVar14 = *(long *)MessagePipe_ISingletonAsyncSubscriber<TMessage>_var;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_05ef7644;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  lVar10 = FUN_02e759c0(plVar9);
LAB_05ef7644:
  lVar10 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar10 + 8),lVar14);
  (**(code **)(lVar10 + 8))(plVar9,lVar15,lVar10);
  plVar9 = in_stack_00000178;
  if (in_stack_00000178 != (long *)0x0) {
    lVar10 = *in_stack_00000178;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a2ef10) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05ef76cc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02e759c0(in_stack_00000178,*(long *)PTR_DAT_06a2ef10,0);
LAB_05ef76cc:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
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
  if ((unaff_w21 & 1) != 0) {
    if ((unaff_w21 & in_stack_00000038._4_4_ & 1) == 0) {
      puVar7 = (undefined8 *)&stack0x00000120;
      FUN_05ef1e0c();
    }
    else {
      puVar7 = (undefined8 *)&stack0x00000130;
      Unity_Services_Economy_Internal_Models_GetPlayerConfiguration400OneOf__FromJson();
    }
    in_stack_00000188 = puVar7[1];
    in_stack_00000180 = *puVar7;
  }
  if (iStack0000000000000040 != 0) {
    FUN_05ef22c4();
    in_stack_00000188 = in_stack_00000118;
    in_stack_00000180 = in_stack_00000110;
  }
  if (((uStack0000000000000048 ^ 1 | unaff_w19) & 1) == 0) {
    FUN_05ef16bc();
    in_stack_00000188 = in_stack_00000108;
    in_stack_00000180 = in_stack_00000100;
  }
  if ((*(long *)(unaff_x24 + 0x1a0) != 0) &&
     (lVar10 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar10 != 0)) {
    thunk_FUN_0623a5f0(lVar10,0,0);
    if (*(long *)(unaff_x24 + 0x1d0) != 0) {
      uVar11 = FUN_05ecdde8(*(long *)(unaff_x24 + 0x1d0),0);
      if ((iStack000000000000004c != 0) || ((uVar11 & 1) != 0)) {
        FUN_05eeef50();
        if (iStack000000000000004c != 0) {
          FUN_05eeeda8();
          iVar4 = FUN_05eeee48();
          if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
             (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x78), plVar9 == (long *)0x0))
          goto LAB_05ef7c34;
          iVar5 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
          uVar2 = iVar4 - 1;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          uVar6 = uVar2;
          if (iVar5 >> 1 <= (int)uVar2) {
            uVar6 = iVar5 >> 1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar2) {
            uVar1 = uVar6;
          }
          if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
             (plVar9 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x48), plVar9 == (long *)0x0))
          goto LAB_05ef7c34;
          uVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
          uVar2 = uVar6;
          if ((int)uVar1 <= (int)uVar6) {
            uVar2 = uVar1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar6) {
            uVar1 = uVar2;
          }
          if (*(long *)(unaff_x24 + 0x148) == 0) goto LAB_05ef7c34;
          if (*(uint *)(*(long *)(unaff_x24 + 0x148) + 0x18) <= uVar1) {
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
          *(long *)(unaff_x24 + 0x1a0) != 0 && (FUN_05eeafe8(), *(long *)(unaff_x24 + 0x1a0) != 0)))
         ) {
        FUN_05eeb098();
        uVar11 = FUN_05ed056c();
        if (((uVar11 & 1) != 0) && (*(char *)(unaff_x24 + 0x246) != '\0')) {
          if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
          uVar13 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1a0) + 0x78);
          if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_05e1b7cc(uVar13,*(undefined8 *)Unity_Hierarchy_HierarchySearchQueryDescriptor_var,1,0)
          ;
        }
        if (*(char *)(unaff_x24 + 0x247) != '\0') {
          if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
          uVar13 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1a0) + 0x78);
          if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_05e1b7cc(uVar13,*(undefined8 *)Fusion_LagCompensation_HitboxCollider_var,1,0);
        }
        uVar11 = FUN_05ee78fc();
        if ((uVar11 & 1) != 0) {
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
LAB_05ef7c34:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


