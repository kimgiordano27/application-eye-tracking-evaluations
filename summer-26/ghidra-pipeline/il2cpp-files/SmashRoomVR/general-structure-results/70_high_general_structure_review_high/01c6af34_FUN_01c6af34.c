/*
FUNCTION_NAME: FUN_01c6af34
ENTRY_POINT: 01c6af34
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined1  [16]
FUN_01c6af34(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4 [16],
            undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar12 = param_4._8_8_;
  uVar11 = param_4._0_8_;
                    /* try { // try from 01c6af5c to 01d6afe7 has its CatchHandler @ 01c6af5c
                       catch() { ... } // from try @ 01c6af5c with catch @ 01c6af5c
                       catch() { ... } // from try @ 01c6b070 with catch @ 01c6af5c */
  if ((DAT_03fed702 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_BNG_SceneLoader_<FadeThenLoadScene>d__6_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_227);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_228);
    thunk_FUN_01ad9084(StringLiteral_229);
    DAT_03fed702 = 1;
  }
  fVar9 = *(float *)(param_8 + 0xa0);
  *(float *)(param_8 + 0xa0) = (float)param_7;
  if ((*(float *)(param_8 + 0x6c) < ABS(fVar9 - (float)param_7)) ||
     (0x61 < *(int *)(param_8 + 0xa4))) {
    *(undefined8 *)(param_8 + 0x80) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_8 + 0x80),0);
    *(undefined4 *)(param_8 + 0xa4) = 0;
  }
  else {
    *(int *)(param_8 + 0xa4) = *(int *)(param_8 + 0xa4) + 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_8 + 0x70) == '\0') {
    uVar6 = *(undefined8 *)(param_8 + 0x80);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar6,0,0);
    if ((uVar4 & 1) != 0) goto LAB_01c6b054;
    uVar6 = *(undefined8 *)(param_8 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar6,0,0);
    if ((uVar4 & 1) == 0) goto LAB_01c6b340;
    if (*(long *)(param_8 + 0x80) == 0) goto LAB_01c6b464;
    FUN_038fcbac(0x3f800000,*(long *)(param_8 + 0x80),0);
    lVar5 = *(long *)(param_8 + 0x80);
    if (lVar5 == 0) goto LAB_01c6b464;
    iVar3 = FUN_038fcf24(lVar5,0);
    FUN_038fcf60(lVar5,iVar3 + 1,0);
    if (*(long *)(param_8 + 0x80) == 0) goto LAB_01c6b464;
    lVar5 = FUN_038fd098(*(long *)(param_8 + 0x80),0);
    if ((*(long *)(param_8 + 0x80) == 0) ||
       (iVar3 = FUN_038fcf24(*(long *)(param_8 + 0x80),0), lVar5 == 0)) goto LAB_01c6b464;
    FUN_038ee1a8((float)((iVar3 + -1) / 100),param_7,lVar5,0);
    if (*(long *)(param_8 + 0x80) == 0) goto LAB_01c6b464;
    FUN_038fd110(*(long *)(param_8 + 0x80),lVar5,0);
    lVar5 = *(long *)(param_8 + 0x80);
    if (lVar5 == 0) goto LAB_01c6b464;
    iVar3 = FUN_038fcf24(lVar5,0);
    iVar3 = iVar3 + -1;
  }
  else {
LAB_01c6b054:
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fedc(lVar5,0);
    if (lVar5 == 0) {
LAB_01c6b464:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = FUN_0391fab4(lVar5,0);
    plVar7 = (long *)(param_8 + 0x90);
    *plVar7 = lVar5;
    thunk_FUN_01b4f09c(plVar7,lVar5);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_0392316c(*plVar7,*(undefined8 *)StringLiteral_228,0);
    plVar8 = (long *)(param_8 + 0x88);
    lVar5 = *plVar8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(lVar5,0,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_0391fedc(lVar5,0);
      if (lVar5 == 0) goto LAB_01c6b464;
      lVar5 = FUN_0391fab4(lVar5,0);
      *plVar8 = lVar5;
      thunk_FUN_01b4f09c(plVar8,lVar5);
      if (*plVar8 == 0) goto LAB_01c6b464;
      FUN_0392316c(*plVar8,*(undefined8 *)StringLiteral_229,0);
    }
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_039294c8(*plVar7,*plVar8,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_03928dd4(uVar11,param_5,param_6,*plVar7,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_03928f54(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                 uStack000000000000001c,*plVar7,0);
    if ((*plVar7 == 0) || (lVar5 = FUN_0391c2b8(*plVar7,0), lVar5 == 0)) goto LAB_01c6b464;
    lVar5 = FUN_01ed7044(lVar5,*(undefined8 *)StringLiteral_227);
    plVar7 = (long *)(param_8 + 0x80);
    *plVar7 = lVar5;
    thunk_FUN_01b4f09c(plVar7,lVar5);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fcd58(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 uStack000000000000000c,*plVar7,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fce8c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 uStack000000000000000c,*plVar7,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fcb14(param_7,*plVar7,0);
    puVar2 = Method_BNG_SceneLoader_<FadeThenLoadScene>d__6_System_Collections_IEnumerator_Reset__;
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fcb60(param_7,*plVar7,0);
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_038ee72c(lVar5,0);
    param_6 = param_6 & 0xffffffff;
    uVar11 = uVar11 & 0xffffffff;
    uVar12 = 0;
    if (lVar5 == 0) goto LAB_01c6b464;
    FUN_038ee1a8(0,param_7,lVar5,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fd110(*plVar7,lVar5,0);
    uVar6 = *(undefined8 *)(param_8 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar6,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar7 == 0) goto LAB_01c6b464;
      FUN_038fe83c(*plVar7,*(undefined8 *)(param_8 + 0x38),0);
    }
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fcbf8(*plVar7,5,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fd054(*plVar7,1,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fcc78(*plVar7,1,0);
    if (*plVar7 == 0) goto LAB_01c6b464;
    FUN_038fcfa4(param_1,param_2,param_3,*plVar7,0,0);
    lVar5 = *plVar7;
    if (lVar5 == 0) goto LAB_01c6b464;
    iVar3 = 1;
  }
  FUN_038fcfa4(uVar11,param_5,param_6,lVar5,iVar3,0);
LAB_01c6b340:
  auVar10._8_8_ = uVar12;
  auVar10._0_8_ = uVar11;
  return auVar10;
}


