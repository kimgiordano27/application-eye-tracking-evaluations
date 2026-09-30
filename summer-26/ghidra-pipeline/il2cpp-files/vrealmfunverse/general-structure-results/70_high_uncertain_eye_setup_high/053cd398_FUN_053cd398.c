/*
FUNCTION_NAME: FUN_053cd398
ENTRY_POINT: 053cd398
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_053cd398(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long local_48;
  
  if ((DAT_066d09b0 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_02b3c81c(OVRPlugin_Hand_TypeInfo);
    FUN_02b3c81c(OVRPlugin_HandStatus_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_02b3c81c(OVRPlugin_LayerLayout_TypeInfo);
    DAT_066d09b0 = 1;
  }
  local_48 = 0;
  if ((param_2 != 0) && (uVar4 = FUN_053e52fc(param_2,0), param_3 != 0)) {
    uVar5 = FUN_0452f928(param_3,uVar4,&local_48,*(undefined8 *)OVRPlugin_Hand_TypeInfo);
    puVar3 = OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo;
    if ((uVar5 & 1) == 0) {
      uVar4 = FUN_053e52fc(param_2,0);
      FUN_0452ddc0(param_3,uVar4,param_2,*(undefined8 *)puVar3);
      if (param_1 != 0) {
        lVar9 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)OVRPlugin_HandStatus_TypeInfo;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(param_1 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_1 + 0x18) = uVar2 + 1;
            plVar6 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *plVar6 = param_2;
            thunk_FUN_02bb0e9c(plVar6,param_2);
          }
          else {
            FUN_037a6538(param_1,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
    else {
      plVar6 = (long *)FUN_053e52e4(param_2,0);
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        if (plVar6 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0));
          puVar1 = (undefined8 *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          if ((uVar5 & 1) == 0) {
            puVar1 = (undefined8 *)OVRPlugin_LayerLayout_TypeInfo;
          }
          uVar4 = *puVar1;
          plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
          if ((local_48 != 0) && (plVar8 = (long *)FUN_053e52e4(local_48,0), plVar8 != (long *)0x0))
          {
            lVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            if (plVar7 != (long *)0x0) {
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              goto LAB_053cd6b8;
              if ((int)plVar7[3] == 0) goto LAB_053cd6b4;
              plVar7[4] = lVar9;
              thunk_FUN_02bb0e9c(plVar7 + 4,lVar9);
              plVar8 = (long *)FUN_053e52e4(param_2,0);
              if (plVar8 == (long *)0x0) goto LAB_053cd6b0;
              lVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              {
LAB_053cd6b8:
                uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar4,0);
              }
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                plVar7[5] = lVar9;
                thunk_FUN_02bb0e9c(plVar7 + 5,lVar9);
                lVar9 = FUN_053d6158(plVar6,0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)
                   ) goto LAB_053cd6b8;
                if (2 < *(uint *)(plVar7 + 3)) {
                  plVar7[6] = lVar9;
                  thunk_FUN_02bb0e9c(plVar7 + 6,lVar9);
                  lVar9 = FUN_053e52fc(param_2,0);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar7 + 0x40)),
                     lVar10 == 0)) goto LAB_053cd6b8;
                  if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                    plVar7[7] = lVar9;
                    thunk_FUN_02bb0e9c(plVar7 + 7,lVar9);
                    uVar4 = FUN_0540ce80(uVar4,plVar7,0);
                    /* WARNING: Subroutine does not return */
                    FUN_053d7134(uVar4,plVar6,0);
                  }
                }
              }
LAB_053cd6b4:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
          }
        }
      }
    }
  }
LAB_053cd6b0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


