/*
FUNCTION_NAME: FUN_0526a404
ENTRY_POINT: 0526a404
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6
*/


void FUN_0526a404(long param_1,double param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  double local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((DAT_066cfe27 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Analytics_SubsystemsAnalyticStop_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631c498);
    DAT_066cfe27 = 1;
  }
  puVar3 = PTR_DAT_0631c498;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 10) {
    if (iVar1 < 7) {
      if (iVar1 == 4) {
        if ((long)param_2 < 0x10000) {
          uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x88);
          goto LAB_0526a5f8;
        }
      }
      else if (iVar1 == 5) {
        if ((long)param_2 < 0x80) {
          uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x30);
LAB_0526a5c8:
          local_48 = (double)CONCAT71(local_48._1_7_,SUB81(param_2,0));
          goto LAB_0526a618;
        }
      }
      else {
        if (iVar1 != 6) goto LAB_0526a664;
        if ((long)param_2 < 0x100) {
          uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x18);
          goto LAB_0526a5c8;
        }
      }
    }
    else if (iVar1 == 7) {
      if ((long)param_2 < 0x8000) {
        uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x38);
LAB_0526a5f8:
        local_48 = (double)CONCAT62(local_48._2_6_,SUB82(param_2,0));
        goto LAB_0526a618;
      }
    }
    else if (iVar1 == 8) {
      if ((long)param_2 < 0x10000) {
        uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x40);
        goto LAB_0526a5f8;
      }
    }
    else {
      if (iVar1 != 9) goto LAB_0526a664;
      if ((long)param_2 < 0x80000000) {
        uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x48);
        goto LAB_0526a57c;
      }
    }
LAB_0526a640:
    if (*(long *)(lVar2 + 0x28) == local_38) {
      uVar4 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,*(undefined8 *)UnityEngine_Analytics_SubsystemsAnalyticStop_TypeInfo);
    }
  }
  else {
    if (iVar1 < 0xd) {
      if (iVar1 == 10) {
        if (0xffffffff < (long)param_2) goto LAB_0526a640;
        uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x50);
LAB_0526a57c:
        local_48 = (double)CONCAT44(local_48._4_4_,SUB84(param_2,0));
      }
      else if (iVar1 == 0xb) {
        uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x68);
        local_48 = param_2;
      }
      else {
        if (iVar1 != 0xc) {
LAB_0526a664:
          uVar4 = FUN_05279718(0);
          if (*(long *)(lVar2 + 0x28) == local_38) {
            uVar5 = thunk_FUN_02ba3594(UnityEngine_Analytics_SubsystemsAnalyticStop_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,uVar5);
          }
          goto LAB_0526a698;
        }
        uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x70);
        local_48 = param_2;
      }
    }
    else if (iVar1 == 0xd) {
      uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x78);
      local_48 = (double)CONCAT44(local_48._4_4_,(float)(long)param_2);
    }
    else if (iVar1 == 0xe) {
      local_48 = (double)(long)param_2;
      uVar4 = *(undefined8 *)(PTR_DAT_06312310 + 0x80);
    }
    else {
      if (iVar1 != 0xf) goto LAB_0526a664;
      if (*(int *)(*(long *)PTR_DAT_0631c498 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      auVar6 = FUN_04dda4a0(param_2,0);
      uStack_40 = auVar6._8_8_;
      local_48 = auVar6._0_8_;
      uVar4 = *(undefined8 *)puVar3;
    }
LAB_0526a618:
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar4,&local_48);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
LAB_0526a698:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


