/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Models.RedeemAppleAppStorePurchase400OneOf.<>c$$<DeserializeIntoActualObject>b__13_0
ENTRY_POINT: 05ef7848
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


void Unity_Services_Economy_Internal_Models_RedeemAppleAppStorePurchase400OneOf_<>c__<DeserializeIntoActualObject>b__13_0
               (undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  int unaff_w21;
  int unaff_w23;
  long unaff_x24;
  long unaff_x26;
  undefined8 uStack0000000000000180;
  
  uStack0000000000000180 = param_1;
  if ((*(long *)(unaff_x24 + 0x1a0) != 0) &&
     (lVar6 = *(long *)(*(long *)(unaff_x24 + 0x1a0) + 0x78), lVar6 != 0)) {
    thunk_FUN_0623a5f0(lVar6,0,0);
    if (*(long *)(unaff_x24 + 0x1d0) != 0) {
      uVar7 = FUN_05ecdde8(*(long *)(unaff_x24 + 0x1d0),0);
      if ((unaff_w21 != 0) || ((uVar7 & 1) != 0)) {
        FUN_05eeef50();
        if (unaff_w21 != 0) {
          FUN_05eeeda8();
          iVar3 = FUN_05eeee48();
          if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
             (plVar8 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x78), plVar8 == (long *)0x0))
          goto LAB_05ef7c34;
          iVar4 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          uVar2 = iVar3 - 1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          uVar5 = uVar2;
          if (iVar4 >> 1 <= (int)uVar2) {
            uVar5 = iVar4 >> 1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar2) {
            uVar1 = uVar5;
          }
          if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
             (plVar8 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x48), plVar8 == (long *)0x0))
          goto LAB_05ef7c34;
          uVar5 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          uVar2 = uVar5;
          if ((int)uVar1 <= (int)uVar5) {
            uVar2 = uVar1;
          }
          uVar1 = 0;
          if (-1 < (int)uVar5) {
            uVar1 = uVar2;
          }
          if (*(long *)(unaff_x24 + 0x148) == 0) goto LAB_05ef7c34;
          if (*(uint *)(*(long *)(unaff_x24 + 0x148) + 0x18) <= uVar1) {
LAB_05ef7950:
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          if (iVar3 == 1) {
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
        uVar7 = FUN_05ed056c();
        if (((uVar7 & 1) != 0) && (*(char *)(unaff_x24 + 0x246) != '\0')) {
          if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
          uVar9 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1a0) + 0x78);
          if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_05e1b7cc(uVar9,*(undefined8 *)Unity_Hierarchy_HierarchySearchQueryDescriptor_var,1,0);
        }
        if (*(char *)(unaff_x24 + 0x247) != '\0') {
          if (*(long *)(unaff_x24 + 0x1a0) == 0) goto LAB_05ef7c34;
          uVar9 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1a0) + 0x78);
          if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_05e1b7cc(uVar9,*(undefined8 *)Fusion_LagCompensation_HitboxCollider_var,1,0);
        }
        uVar7 = FUN_05ee78fc();
        if ((uVar7 & 1) != 0) {
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


