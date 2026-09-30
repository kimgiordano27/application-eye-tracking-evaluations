/*
FUNCTION_NAME: FUN_058a5cb8
ENTRY_POINT: 058a5cb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058a5cb8(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong unaff_x25;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 local_64 [4];
  
  puVar3 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__;
  if ((DAT_066d31af & 1) == 0) {
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d31af = 1;
  }
  local_64[0] = 0;
  uVar4 = FUN_032b1148(9,*(undefined8 *)puVar3);
  FUN_05814cc8(local_64,uVar4,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_0588a8c8(*(long *)(param_2 + 0x20),0);
  if ((*(int *)(param_4 + 4) == 2) && (-1 < *(int *)(param_4 + 0x20))) {
    if ((*(int *)(param_4 + 0x1c) == 2) || (*(int *)(param_4 + 0x1c) == -1)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar4 = FUN_03ab1904(*(long *)(param_1 + 0x30) + 0x60,*(int *)(param_4 + 0x20),
                           *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
      auVar13 = FUN_058abb4c(uVar4,*(undefined8 *)(param_1 + 0x30),0);
      puVar3 = PTR_DAT_06322b80;
      if (0 < auVar13._8_4_) {
        uVar12 = 0;
        do {
          lVar8 = *(long *)(param_1 + 0x30);
          if (DAT_066d31d7 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                        );
            DAT_066d31d7 = '\x01';
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
          ;
          lVar7 = auVar13._0_8_ + uVar12 * 0x80;
          lVar6 = *(long *)(lVar11 + 0x38);
          iVar1 = *(int *)(lVar7 + 0x58);
          uVar2 = *(uint *)(lVar7 + 0x5c);
          uVar9 = (ulong)uVar2;
          if (lVar6 == 0) {
            FUN_02b76274(lVar11);
            lVar6 = *(long *)(lVar11 + 0x38);
          }
          lVar8 = FUN_0322b7f0(*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)(lVar6 + 0x10));
          if ((int)uVar2 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar2 != 0) {
            puVar10 = (uint *)(lVar8 + (long)iVar1 * 0xc + 8);
            do {
              if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)*puVar10;
              pcVar5 = (char *)FUN_058ab2a4(*(long *)(param_1 + 0x30),*(undefined8 *)(puVar10 + -2),
                                            unaff_x25,0);
              if ((*pcVar5 == '\0') && (pcVar5[0x14] == '\0')) {
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (DAT_066d2bb3 == '\0') {
                  FUN_02b3c81c(puVar3);
                  DAT_066d2bb3 = '\x01';
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_0589a5e8(param_3,param_2,*puVar10,(short)puVar10[-2]);
              }
              uVar9 = uVar9 - 1;
              puVar10 = puVar10 + 3;
            } while (uVar9 != 0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != (auVar13._8_8_ & 0xffffffff));
      }
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    if (DAT_066d31d7 == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                  );
      DAT_066d31d7 = '\x01';
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar1 = *(int *)(param_4 + 0x58);
    uVar2 = *(uint *)(param_4 + 0x5c);
    uVar12 = (ulong)uVar2;
    uVar9 = *(ulong *)
             Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
    ;
    lVar7 = *(long *)(uVar9 + 0x38);
    if (lVar7 == 0) {
      FUN_02b76274(uVar9);
      lVar7 = *(long *)(uVar9 + 0x38);
    }
    lVar8 = FUN_0322b7f0(*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)(lVar7 + 0x10));
    puVar3 = PTR_DAT_06322b80;
    if ((int)uVar2 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar2 != 0) {
      puVar10 = (uint *)(lVar8 + (long)iVar1 * 0xc + 8);
      do {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*puVar10;
        pcVar5 = (char *)FUN_058ab2a4(*(long *)(param_1 + 0x30),*(undefined8 *)(puVar10 + -2),uVar9,
                                      0);
        if (*pcVar5 == '\0') {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb3 == '\0') {
            FUN_02b3c81c(puVar3);
            DAT_066d2bb3 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0589a5e8(param_3,param_2,*puVar10,(short)puVar10[-2]);
        }
        uVar12 = uVar12 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar12 != 0);
    }
  }
  FUN_05814cd4(local_64,0);
  return;
}


