/*
FUNCTION_NAME: FUN_058a4cd8
ENTRY_POINT: 058a4cd8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058a4cd8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong unaff_x25;
  ulong unaff_x26;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 local_64 [4];
  
  puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__;
  if ((DAT_066d31aa & 1) == 0) {
    FUN_02b3c81c(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Create__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d31aa = 1;
  }
  local_64[0] = 0;
  uVar6 = FUN_032b1148(7,*(undefined8 *)puVar4);
  FUN_05814cc8(local_64,uVar6,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar2 = *(int *)(param_4 + 4);
  *(undefined1 *)(param_3 + 0x58) = 1;
  if ((iVar2 == 2) && (-1 < *(int *)(param_4 + 0x20))) {
    if (*(int *)(param_4 + 0x1c) + 1U < 2) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar6 = FUN_03ab1904(*(long *)(param_1 + 0x30) + 0x60,*(int *)(param_4 + 0x20),
                           *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
      auVar15 = FUN_058abb4c(uVar6,*(undefined8 *)(param_1 + 0x30),0);
      if (0 < auVar15._8_4_) {
        uVar14 = 0;
        do {
          lVar10 = *(long *)(param_1 + 0x30);
          if (DAT_066d31d6 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                        );
            DAT_066d31d6 = '\x01';
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar13 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
          ;
          lVar9 = auVar15._0_8_ + uVar14 * 0x80;
          lVar8 = *(long *)(lVar13 + 0x38);
          iVar2 = *(int *)(lVar9 + 0x50);
          uVar1 = *(uint *)(lVar9 + 0x54);
          uVar12 = (ulong)uVar1;
          if (lVar8 == 0) {
            FUN_02b76274(lVar13);
            lVar8 = *(long *)(lVar13 + 0x38);
          }
          lVar10 = FUN_0322b7f0(*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(lVar8 + 0x10));
          if ((int)uVar1 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar1 != 0) {
            puVar11 = (uint *)(lVar10 + (long)iVar2 * 0xc + 8);
            do {
              if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)*puVar11;
                    /* try { // try from 058a4e90 to 059a4f97 has its CatchHandler @ 058a4e90
                       catch() { ... } // from try @ 058a4e90 with catch @ 058a4e90
                       catch() { ... } // from try @ 058a4fb0 with catch @ 058a4e90
                       catch() { ... } // from try @ 058a5048 with catch @ 058a4e90
                       catch() { ... } // from try @ 058a509c with catch @ 058a4e90
                       catch() { ... } // from try @ 058a50c0 with catch @ 058a4e90 */
              pcVar7 = (char *)FUN_058ab2a4(*(long *)(param_1 + 0x30),*(undefined8 *)(puVar11 + -2),
                                            unaff_x25,0);
              unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)*puVar11;
              bVar5 = FUN_058abd20(lVar9,*(undefined8 *)(puVar11 + -2),unaff_x26,
                                   *(undefined8 *)(param_1 + 0x30),0);
              cVar3 = pcVar7[0x14];
              *(byte *)(param_3 + 0x58) = (bVar5 ^ 0xff) & 1;
              if (cVar3 == '\0') {
                if (*pcVar7 == '\0') {
                  if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (DAT_066d2bb3 == '\0') {
                    FUN_02b3c81c(PTR_DAT_06322b80);
                    DAT_066d2bb3 = '\x01';
                  }
                    /* try { // try from 058a4f98 to 059a4f9f has its CatchHandler @ 058a507c */
                    /* try { // try from 058a4fa8 to 059a4faf has its CatchHandler @ 058a5078 */
                  if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                    /* try { // try from 058a4fb0 to 059a5043 has its CatchHandler @ 058a4e90 */
                  FUN_0589a088(param_3,param_2,*puVar11,(short)puVar11[-2]);
                }
                else if ((bVar5 & 1) == 0 && pcVar7[0x2c] != '\0') {
                  if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (DAT_066d2bb3 == '\0') {
                    FUN_02b3c81c(PTR_DAT_06322b80);
                    DAT_066d2bb3 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  FUN_0589a4f8(param_3,param_2,*puVar11,(short)puVar11[-2]);
                }
              }
              uVar12 = uVar12 - 1;
              puVar11 = puVar11 + 3;
            } while (uVar12 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (auVar15._8_8_ & 0xffffffff));
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x30);
    if (DAT_066d31d6 == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                  );
      DAT_066d31d6 = '\x01';
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(param_4 + 0x50);
    uVar1 = *(uint *)(param_4 + 0x54);
    uVar14 = (ulong)uVar1;
    uVar12 = *(ulong *)
              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
    ;
    lVar9 = *(long *)(uVar12 + 0x38);
    if (lVar9 == 0) {
      FUN_02b76274(uVar12);
      lVar9 = *(long *)(uVar12 + 0x38);
    }
    lVar10 = FUN_0322b7f0(*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(lVar9 + 0x10));
    puVar4 = PTR_DAT_06322b80;
    if ((int)uVar1 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar1 != 0) {
      puVar11 = (uint *)(lVar10 + (long)iVar2 * 0xc + 8);
      do {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*puVar11;
        pcVar7 = (char *)FUN_058ab2a4(*(long *)(param_1 + 0x30),*(undefined8 *)(puVar11 + -2),uVar12
                                      ,0);
        if (*pcVar7 == '\0') {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb3 == '\0') {
            FUN_02b3c81c(puVar4);
            DAT_066d2bb3 = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_0589a088(param_3,param_2,*puVar11,(short)puVar11[-2]);
        }
        else if (pcVar7[0x2c] != '\0') {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d2bb3 == '\0') {
            FUN_02b3c81c(puVar4);
            DAT_066d2bb3 = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_0589a4f8(param_3,param_2,*puVar11,(short)puVar11[-2]);
        }
        uVar14 = uVar14 - 1;
        puVar11 = puVar11 + 3;
      } while (uVar14 != 0);
    }
  }
  *(undefined1 *)(param_3 + 0x58) = 1;
  FUN_05814cd4(local_64,0);
  return;
}


