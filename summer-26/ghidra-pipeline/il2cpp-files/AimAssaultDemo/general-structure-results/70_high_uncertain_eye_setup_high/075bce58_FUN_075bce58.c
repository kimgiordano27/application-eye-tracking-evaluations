/*
FUNCTION_NAME: FUN_075bce58
ENTRY_POINT: 075bce58
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_075bce58(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_07d98260;
  if ((DAT_0826e655 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98260);
    FUN_0373b518(PTR_DAT_07df5c70);
    FUN_0373b518(OVRPlugin_OVRP_1_108_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86580);
    DAT_0826e655 = 1;
  }
  uVar7 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar7 = FUN_062519f8(uVar7,0);
  if (param_1 != (long *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x218))(param_1,uVar7,0,*(undefined8 *)(*param_1 + 0x220));
    *param_2 = 0;
    thunk_FUN_037aeb94(param_2,0);
    *param_3 = 0;
    thunk_FUN_037aeb94(param_3,0);
    *param_4 = 0;
    thunk_FUN_037aeb94(param_4,0);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 1) {
        return 0;
      }
      plVar5 = *(long **)(lVar4 + 0x20);
      if (plVar5 != (long *)0x0) {
        if (*plVar5 != *(long *)PTR_DAT_07df5c70) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54();
        }
        lVar4 = plVar5[2];
        uVar6 = FUN_060c08a0(lVar4,0);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        if (lVar4 != 0) {
          lVar8 = *(long *)OVRPlugin_OVRP_1_108_0_TypeInfo;
          iVar3 = FUN_060c60fc(lVar4,lVar8,0);
          if (iVar3 < 0) {
            return 0;
          }
          if (((lVar8 != 0) &&
              (lVar4 = FUN_060c530c(lVar4,*(int *)(lVar8 + 0x10) + iVar3,0), lVar4 != 0)) &&
             (lVar4 = FUN_060c5764(lVar4,0), lVar4 != 0)) {
            if (*(int *)(lVar4 + 0x10) == 0) {
              return 0;
            }
            sVar2 = FUN_060bb390(lVar4,0,0);
            if (sVar2 == 0x5b) {
              iVar3 = FUN_060c5ba4(lVar4,0x5d,0);
              if (iVar3 == -1) {
                return 0;
              }
              uVar7 = FUN_060c316c(lVar4,1,iVar3 + -1,0);
              *param_2 = uVar7;
              thunk_FUN_037aeb94(param_2,uVar7);
              lVar4 = FUN_060c530c(lVar4,iVar3 + 1,0);
              if ((lVar4 == 0) || (lVar4 = FUN_060c5764(lVar4,0), lVar4 == 0)) goto LAB_075bd168;
            }
            else {
              plVar5 = (long *)(**(code **)(*param_1 + 0x2f8))
                                         (param_1,*(undefined8 *)(*param_1 + 0x300));
              if ((plVar5 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0)),
                 lVar8 == 0)) goto LAB_075bd168;
              *param_2 = *(undefined8 *)(lVar8 + 0x10);
              thunk_FUN_037aeb94(param_2);
            }
            iVar3 = FUN_060c6474(lVar4,0x2e,0);
            if (iVar3 < 0) {
              *param_4 = lVar4;
              thunk_FUN_037aeb94(param_4,lVar4);
              lVar4 = *(long *)PTR_DAT_07d86580;
            }
            else {
              lVar8 = FUN_060c530c(lVar4,iVar3 + 1,0);
              *param_4 = lVar8;
              thunk_FUN_037aeb94(param_4,lVar8);
              lVar4 = FUN_060c316c(lVar4,0,iVar3,0);
            }
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x10) < 1) {
                lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
                *param_3 = lVar4;
              }
              else {
                *param_3 = lVar4;
              }
              thunk_FUN_037aeb94(param_3,lVar4);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_075bd168:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


