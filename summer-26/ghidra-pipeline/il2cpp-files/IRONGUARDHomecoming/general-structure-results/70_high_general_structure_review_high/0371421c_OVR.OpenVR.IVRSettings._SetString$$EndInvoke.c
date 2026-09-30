/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._SetString$$EndInvoke
ENTRY_POINT: 0371421c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21
*/


void OVR_OpenVR_IVRSettings__SetString__EndInvoke(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__0__;
  puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__;
  if ((DAT_048360f3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__1__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass49_0_<RequestText>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_048360f3 = 1;
  }
  puVar5 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__;
  puVar4 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass49_0_<RequestText>b__0__;
  FUN_02a85830(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_036f049c(param_2,0);
  uVar6 = FUN_035c41ec(uVar7,0);
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_030f23f0(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = lVar8;
  thunk_FUN_01f51358(plVar12,lVar8);
  puVar4 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__1__;
  if (0 < (int)uVar6) {
    uVar13 = 0;
    do {
      lVar14 = *plVar12;
      uVar7 = FUN_035c41f0(uVar13,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar8);
      }
      uVar7 = FUN_036f0418(param_2,uVar7,0);
      uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_03714128(uVar9,uVar7);
      if (lVar14 == 0) {
LAB_03714404:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(lVar14 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_03714404;
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_01f51358(puVar10,uVar9);
      }
      else {
        FUN_030f2bb4(lVar14,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
  }
  return;
}


