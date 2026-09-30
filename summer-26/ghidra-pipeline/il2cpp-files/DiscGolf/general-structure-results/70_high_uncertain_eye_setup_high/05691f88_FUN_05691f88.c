/*
FUNCTION_NAME: FUN_05691f88
ENTRY_POINT: 05691f88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05691f88(long *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_06dbc7c0 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_UriParser>_TypeInfo);
    FUN_02d965b8(OVRTask<List<bool>>_TypeInfo);
    FUN_02d965b8(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    FUN_02d965b8(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    FUN_02d965b8(OVRTask<OVRResult<Int32Enum>>_TypeInfo);
    DAT_06dbc7c0 = 1;
  }
  FUN_05691c04(param_1);
  plVar11 = param_1 + 6;
  *plVar11 = param_2;
  LeanTween__value(plVar11,param_2);
  if (param_2 != 0) {
    lVar12 = *(long *)(param_2 + 0x60);
    lVar13 = param_1[8];
    param_1[7] = lVar12;
    LeanTween__value(param_1 + 7,lVar12);
    if (lVar13 != 0) {
      FUN_06324564(lVar13,lVar12,0);
      if (param_1[5] != 0) {
        thunk_FUN_0631c1e0(param_1[5],*(undefined8 *)(param_2 + 0x58),0);
        if ((param_1[5] != 0) &&
           (lVar12 = thunk_FUN_0631c110(param_1[5],0),
           puVar3 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo,
           puVar2 = OVRTask<List<OVRPlugin_Result>>_TypeInfo, lVar12 != 0)) {
          bVar4 = FUN_0631fedc(lVar12,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
          uVar10 = FUN_0631fedc(lVar12,*(undefined8 *)puVar3,0);
          iVar5 = FUN_056922b4(uVar10,lVar12);
          if (*plVar11 != 0) {
            cVar1 = *(char *)(*plVar11 + 0xd4);
            if ((bool)(bVar4 & 1) != (cVar1 != '\0')) {
              FUN_0569154c(param_1,*(undefined8 *)puVar2,cVar1 != '\0');
              if (param_1[6] == 0) goto LAB_056922b0;
              FUN_0569154c(param_1,*(undefined8 *)OVRTask<List<bool>>_TypeInfo,
                           *(char *)(param_1[6] + 0xd4) == '\0');
            }
            uVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
            if (((uint)uVar10 & 1) != (uVar6 & 1)) {
              uVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
              FUN_0569154c(param_1,*(undefined8 *)puVar3,uVar6 & 1);
              uVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
              FUN_0569154c(param_1,*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo,
                           (uVar6 ^ 0xffffffff) & 1);
            }
            iVar7 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
            if (iVar7 != iVar5) {
              uVar8 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
              FUN_05692370(param_1,uVar8);
            }
            puVar2 = System_Collections_Generic_Dictionary<string,_UriParser>_TypeInfo;
            if (param_1[5] != 0) {
              thunk_FUN_0631c714(param_1[5],param_1[0xd],0);
              lVar12 = param_1[0xd];
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if ((*plVar11 != 0) && (lVar12 != 0)) {
                FUN_0631a9d8(lVar12,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                             *(undefined1 *)(*plVar11 + 0xd4),0);
                lVar12 = *(long *)puVar2;
                lVar13 = param_1[0xd];
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar12 = *(long *)puVar2;
                }
                uVar8 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 8);
                uVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
                if (lVar13 != 0) {
                  FUN_0631a9d8(lVar13,uVar8,uVar6 & 1,0);
                  lVar12 = *(long *)puVar2;
                  lVar13 = param_1[0xd];
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar12 = *(long *)puVar2;
                  }
                  uVar8 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 4);
                  uVar9 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0))
                  ;
                  if (lVar13 != 0) {
                    FUN_0631a9d8(lVar13,uVar8,uVar9,0);
                    if (param_1[5] != 0) {
                      thunk_FUN_0631c648(param_1[5],param_1[0xd],0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_056922b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


