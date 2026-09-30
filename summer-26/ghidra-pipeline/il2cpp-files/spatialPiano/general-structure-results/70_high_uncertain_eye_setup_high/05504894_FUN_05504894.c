/*
FUNCTION_NAME: FUN_05504894
ENTRY_POINT: 05504894
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05504894(long param_1,long param_2,long *param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if ((DAT_06bbf560 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d8d28);
    FUN_02f08768(OVRPlugin_OVRP_1_110_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbc80);
    FUN_02f08768(PTR_DAT_067cbc88);
    DAT_06bbf560 = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_05504dc8;
  uVar4 = (**(code **)(*param_3 + 0x958))(param_3,param_2,*(undefined8 *)(*param_3 + 0x960));
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_2 == 0) goto LAB_05504dc8;
  uVar4 = FUN_050ef21c(param_2,0);
  puVar1 = PTR_DAT_067cbc88;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_0552b3f4(param_3,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar5 = (long *)FUN_0552b364(param_3,0);
      if (plVar5 == (long *)0x0) goto LAB_05504dc8;
      uVar4 = (**(code **)(*plVar5 + 0x958))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x960));
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  uVar4 = FUN_050ef21c(param_3,0);
  puVar1 = PTR_DAT_067cbc88;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_0552b3f4(param_2,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar5 = (long *)FUN_0552b364(param_2,0);
      if (plVar5 == (long *)0x0) goto LAB_05504dc8;
      uVar4 = (**(code **)(*plVar5 + 0x958))(plVar5,param_3,*(undefined8 *)(*plVar5 + 0x960));
      if ((uVar4 & 1) != 0) {
        lVar9 = *(long *)(param_1 + 0x10);
        uVar6 = FUN_0551fde0(0);
        if (lVar9 == 0) goto LAB_05504dc8;
        goto LAB_05504d48;
      }
    }
  }
  puVar1 = PTR_DAT_067cbc88;
  if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar5 = (long *)FUN_0552b364(param_2,0);
  plVar7 = (long *)FUN_0552b364(param_3,0);
  uVar4 = FUN_0552bab0(plVar5,0);
  if ((uVar4 & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_05504dc8;
    uVar4 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
    if ((uVar4 & 1) != 0) goto LAB_05504a94;
LAB_05504ba4:
    uVar4 = (**(code **)(*param_3 + 0x598))(param_3,*(undefined8 *)(*param_3 + 0x5a0));
    puVar1 = OVRPlugin_OVRP_1_110_0_TypeInfo;
    if ((uVar4 & 1) == 0) {
      lVar9 = *(long *)(PTR_DAT_067c9338 + 0x10);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_050e4454(lVar9 + 0x20,0);
      uVar4 = FUN_050ed374(param_3,uVar6,0);
      if (((uVar4 & 1) != 0) ||
         (uVar4 = (**(code **)(*param_3 + 0x298))(param_3,param_2,*(undefined8 *)(*param_3 + 0x2a0))
         , (uVar4 & 1) != 0)) {
        return;
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) {
        uVar6 = FUN_055201c0(param_3,0);
LAB_05504d48:
        FUN_054f6d80(lVar9,uVar6);
        return;
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x10);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_110_0_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar9 != 0) {
        FUN_054f6d80(lVar9,**(undefined8 **)(*(long *)puVar1 + 0xb8));
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054fafec(*(long *)(param_1 + 0x10),param_3);
          return;
        }
      }
    }
  }
  else {
LAB_05504a94:
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_0552bab0(plVar7,0);
    if ((uVar4 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_05504dc8;
      uVar4 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
      if ((uVar4 & 1) == 0) {
        uVar6 = *(undefined8 *)PTR_DAT_067d8d28;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = FUN_050e4454(uVar6,0);
        uVar4 = FUN_050ed374(plVar7,uVar6,0);
        if ((uVar4 & 1) == 0) goto LAB_05504ba4;
      }
    }
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x98) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar5 = (long *)FUN_05108c84(plVar5,0);
      }
      if (plVar7 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
        if ((uVar4 & 1) == 0) {
          plVar10 = (long *)0x0;
          plVar8 = plVar7;
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x98) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          plVar8 = (long *)FUN_05108c84(plVar7,0);
          plVar10 = plVar7;
        }
        if (*(int *)(*(long *)PTR_DAT_067cbc80 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar2 = FUN_0552b2a0(plVar5,0);
        iVar3 = FUN_0552b2a0(plVar8,0);
        if (iVar2 == iVar3) {
          if (plVar10 == (long *)0x0) {
            if (*(long *)(param_1 + 0x10) != 0) {
              FUN_054faee8(*(long *)(param_1 + 0x10),iVar2,param_5 & 1);
              return;
            }
            goto LAB_05504dc8;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar4 = FUN_0552b3f4(param_2,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar4 = FUN_0552b3f4(param_3,0);
            if ((uVar4 & 1) == 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              uVar6 = FUN_0551fde0(0);
              if (lVar9 == 0) goto LAB_05504dc8;
              FUN_054f6d80(lVar9,uVar6);
            }
          }
        }
        else {
          lVar9 = *(long *)(param_1 + 0x10);
          if ((param_4 & 1) == 0) {
            if (lVar9 == 0) goto LAB_05504dc8;
            FUN_054fae64(lVar9,iVar2,iVar3,param_5 & 1);
          }
          else {
            if (lVar9 == 0) goto LAB_05504dc8;
            FUN_054fade0(lVar9,iVar2,iVar3,param_5 & 1);
          }
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_054faf80(*(long *)(param_1 + 0x10),plVar10);
          return;
        }
      }
    }
  }
LAB_05504dc8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


