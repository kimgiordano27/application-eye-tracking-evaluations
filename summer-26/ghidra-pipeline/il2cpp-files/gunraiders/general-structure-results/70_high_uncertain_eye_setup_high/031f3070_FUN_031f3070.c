/*
FUNCTION_NAME: FUN_031f3070
ENTRY_POINT: 031f3070
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031f3070(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_045326cb & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo);
    FUN_01c5d288(OVRManager_<>c_TypeInfo);
    DAT_045326cb = 1;
  }
  puVar2 = VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo;
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar3 = (long *)FUN_031fa42c(*(long *)(param_1 + 0x88),0);
    puVar1 = 
    VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)puVar2)) {
LAB_031f3290:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if (plVar3 != (long *)0x0) {
      param_2 = plVar3;
    }
    if (param_2 != (long *)0x0) {
      if (*(int *)((long)param_2 + 0x24) == 1) {
        lVar6 = param_2[9];
        lVar4 = *(long *)
                 VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
        ;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar1;
        }
        if (lVar6 == *(long *)(*(long *)(lVar4 + 0xb8) + 0x38)) {
          lVar4 = param_2[6];
          param_2[0x1d] = lVar4;
          *(long *)(param_1 + 0x60) = lVar4;
          if (*(long *)(param_1 + 0x30) == 0) {
            return;
          }
          *(long *)(*(long *)(param_1 + 0x30) + 0x28) = lVar4;
          return;
        }
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        FUN_031f7994(*(long *)(param_1 + 0x88),0);
        if (*(long *)(param_1 + 0x88) != 0) {
          plVar3 = (long *)FUN_031fa42c(*(long *)(param_1 + 0x88),0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar3);
          }
          lVar4 = param_2[0x1d];
          if (lVar4 == 0) {
            return;
          }
          if (*(int *)((long)param_2 + 0x14) == 2) {
            if (*(int *)((long)param_2 + 0x24) == 1) {
              *(long *)(param_1 + 0x60) = lVar4;
              if (*(long *)(param_1 + 0x30) != 0) {
                *(long *)(*(long *)(param_1 + 0x30) + 0x28) = lVar4;
              }
            }
            FUN_031f4984(param_1,lVar4,param_2,plVar3,0);
            return;
          }
          if (param_2[0x1b] != 0) {
            FUN_031f26c4(param_2[0x1b],lVar4,param_2[0x21]);
            if (((char)param_2[0x20] == '\0') && (0 < param_2[0xb])) {
              FUN_031f4984(param_1,param_2[0x1d],param_2,plVar3,0);
            }
            if ((char)param_2[0x1c] != '\0') {
              lVar4 = FUN_031f2828(param_1);
              if ((lVar4 == 0) || (plVar5 = (long *)FUN_031f7994(lVar4,0), plVar5 == (long *)0x0))
              goto LAB_031f3264;
              if (*plVar5 != *(long *)OVRManager_<>c_TypeInfo) goto LAB_031f3290;
              FUN_031fc5dc(plVar5,param_2,plVar3,0);
            }
            if (*(int *)((long)param_2 + 0x24) == 1) {
              lVar4 = param_2[0x1d];
              *(long *)(param_1 + 0x60) = lVar4;
              if (*(long *)(param_1 + 0x30) != 0) {
                *(long *)(*(long *)(param_1 + 0x30) + 0x28) = lVar4;
              }
            }
            if (param_2[0x1b] != 0) {
              return;
            }
          }
        }
      }
    }
  }
LAB_031f3264:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


