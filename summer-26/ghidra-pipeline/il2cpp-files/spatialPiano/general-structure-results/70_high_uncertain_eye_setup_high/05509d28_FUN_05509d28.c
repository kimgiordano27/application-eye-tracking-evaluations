/*
FUNCTION_NAME: FUN_05509d28
ENTRY_POINT: 05509d28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05509d28(long param_1,long *param_2,long *param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_06bbf57d & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_39_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067cadf0);
    FUN_02f08768(PTR_DAT_067cae40);
    FUN_02f08768(PTR_DAT_067cbc88);
    DAT_06bbf57d = 1;
  }
  if (param_3 == (long *)0x0) {
    uVar3 = FUN_0501518c(0,0,0);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_05017f3c(0,0,0), (uVar3 & 1) == 0)) {
      return;
    }
    goto LAB_0550a080;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_067cadf0 + 0x130);
  if (*(byte *)(*param_3 + 0x130) < bVar2) {
    uVar3 = FUN_0501518c(0,0,0);
    if ((uVar3 & 1) != 0) goto LAB_0550a080;
  }
  else {
    plVar1 = param_3;
    if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067cadf0) {
      plVar1 = (long *)0x0;
    }
    uVar3 = FUN_0501518c(plVar1,0,0);
    if ((uVar3 & 1) != 0) {
      if (plVar1 == (long *)0x0) goto LAB_0550a080;
      uVar3 = FUN_05015078(plVar1,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_050150b8(plVar1,0);
        if ((uVar3 & 1) == 0) {
          if (param_2 != (long *)0x0) {
            uVar3 = FUN_05503f1c(param_1,param_2,0xffffffff);
          }
          lVar4 = *(long *)(param_1 + 0x10);
        }
        else {
          if ((param_4 & 1) != 0) goto LAB_0550a08c;
          uVar3 = FUN_05015058(plVar1,0);
          lVar4 = *(long *)(param_1 + 0x10);
          if ((uVar3 & 1) != 0) {
            lVar7 = *plVar1;
            goto LAB_05509e34;
          }
        }
        if (lVar4 != 0) {
          uVar5 = FUN_054fb494(uVar3,plVar1);
          FUN_054f6d80(lVar4,uVar5);
          return;
        }
      }
      else {
        lVar7 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x10);
LAB_05509e34:
        uVar5 = (**(code **)(lVar7 + 0x2d8))(plVar1,0,*(undefined8 *)(lVar7 + 0x2e0));
        uVar6 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
        if (lVar4 != 0) {
          FUN_054f73b4(lVar4,uVar5,uVar6);
          return;
        }
      }
      goto LAB_0550a080;
    }
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_067cae40 + 0x130);
  if ((*(byte *)(*param_3 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067cae40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_3);
  }
  uVar3 = FUN_05017f3c(param_3,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = (**(code **)(*param_3 + 0x298))(param_3,1,*(undefined8 *)(*param_3 + 0x2a0));
  if ((param_4 & 1) != 0) {
    if (lVar4 == 0) goto LAB_0550a080;
    uVar3 = FUN_050162b4(lVar4,0);
    if ((uVar3 & 1) != 0) {
LAB_0550a08c:
      uVar5 = FUN_054de1a8(0);
      uVar6 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_1_3_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,uVar6);
    }
  }
  if (param_2 != (long *)0x0) {
    FUN_05503f1c(param_1,param_2,0xffffffff);
  }
  if (lVar4 != 0) {
    uVar3 = FUN_050162b4(lVar4,0);
    if ((param_2 != (long *)0x0) && ((uVar3 & 1) == 0)) {
      uVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc88);
      }
      uVar3 = FUN_0552b3f4(uVar5,0);
      if ((uVar3 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x10);
        lVar9 = *(long *)OVRPlugin_OVRP_1_39_0_TypeInfo;
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar7 == 0) {
          FUN_02f41ef8(lVar9);
          lVar7 = *(long *)(lVar9 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        if (lVar8 != 0) {
          FUN_054fb8bc(lVar8,lVar4,**(undefined8 **)(lVar7 + 0xb8));
          return;
        }
        goto LAB_0550a080;
      }
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_054fb764(*(long *)(param_1 + 0x10),lVar4);
      return;
    }
  }
LAB_0550a080:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


