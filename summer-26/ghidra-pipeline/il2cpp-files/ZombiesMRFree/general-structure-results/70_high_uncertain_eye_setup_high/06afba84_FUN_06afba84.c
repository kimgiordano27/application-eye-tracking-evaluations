/*
FUNCTION_NAME: FUN_06afba84
ENTRY_POINT: 06afba84
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_06afba84(long param_1,long param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  lVar5 = param_1;
  if ((DAT_073ab369 & 1) == 0) {
    lVar5 = FUN_02fe925c(OVRPlugin_OVRP_1_121_0_TypeInfo);
    DAT_073ab369 = 1;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x18);
    lVar5 = 0;
    if ((iVar3 < param_5) || (iVar4 = *(int *)(param_2 + 0x1c), iVar4 < param_4)) {
      return lVar5;
    }
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 != 0) {
      if (param_3 < *(uint *)(lVar7 + 0x18)) {
        uVar1 = *(undefined4 *)(param_2 + 0x10);
        iVar2 = *(int *)(param_2 + 0x14);
        if (*(long *)(lVar7 + (long)(int)param_3 * 8 + 0x20) != 0) {
          FUN_06afb124();
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_121_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar5 = FUN_06afbc00(uVar1,iVar2,iVar3,param_4);
        plVar8 = *(long **)(param_1 + 0x38);
        if (plVar8 == (long *)0x0) goto LAB_06afbbec;
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
          uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar6,0);
        }
        if (param_3 < *(uint *)(plVar8 + 3)) {
          plVar8[(long)(int)param_3 + 4] = lVar5;
          thunk_FUN_03048534(plVar8 + (long)(int)param_3 + 4,lVar5);
          iVar4 = iVar4 - param_4;
          if (iVar4 == 0) {
            plVar8 = (long *)(param_1 + 0x30);
            if (param_2 == *plVar8) {
              *plVar8 = *(long *)(param_2 + 0x28);
              thunk_FUN_03048534(plVar8);
            }
            FUN_06afbcac(param_2);
            FUN_06afb1b4(param_2);
          }
          else {
            *(int *)(param_2 + 0x18) = iVar3;
            *(int *)(param_2 + 0x1c) = iVar4;
            *(undefined4 *)(param_2 + 0x10) = uVar1;
            *(int *)(param_2 + 0x14) = iVar2 + param_4;
          }
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
LAB_06afbbec:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8(lVar5);
}


