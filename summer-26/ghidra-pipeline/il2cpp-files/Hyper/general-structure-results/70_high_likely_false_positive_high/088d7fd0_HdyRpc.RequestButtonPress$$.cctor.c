/*
FUNCTION_NAME: HdyRpc.RequestButtonPress$$.cctor
ENTRY_POINT: 088d7fd0
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void HdyRpc_RequestButtonPress___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_04947ee4(PTR_DAT_0ac47bd8);
  FUN_04947ee4(PTR_DAT_0ac47be0);
  FUN_04947ee4(PTR_DAT_0ac16098);
  FUN_04947ee4(PTR_DAT_0ac160a0);
  FUN_04947ee4(PTR_DAT_0ac0a228);
  FUN_04947ee4(PTR_DAT_0ac160a8);
  FUN_04947ee4(PTR_DAT_0ac163b8);
  FUN_04947ee4(PTR_DAT_0ac163c0);
  FUN_04947ee4(PTR_DAT_0ac09c70);
  *(undefined1 *)(unaff_x23 + 0x266) = 1;
  puVar3 = PTR_DAT_0ac443b8;
  puVar2 = PTR_DAT_0ac09758;
  if ((unaff_x20 == (long *)0x0) || (lVar11 = *unaff_x20, lVar11 == *(long *)PTR_DAT_0ac47bd8)) {
    if (*(int *)(*(long *)PTR_DAT_0ac443b8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_088d7240();
    return;
  }
  if (lVar11 == *(long *)(PTR_DAT_0ac09758 + 0x28)) {
    thunk_FUN_049840a8();
    if (unaff_x19 == (long *)0x0) goto LAB_088d857c;
    lVar11 = *unaff_x19;
LAB_088d8130:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 600);
LAB_088d813c:
                    /* WARNING: Could not recover jumptable at 0x088d814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar11 == *(long *)PTR_DAT_0ac43840) {
    if (unaff_x19 == (long *)0x0) goto LAB_088d857c;
    (**(code **)(*unaff_x19 + 0x228))();
    FUN_088c9b08();
  }
  else {
    if (lVar11 == *(long *)(PTR_DAT_0ac09758 + 0x90)) {
      if (*(int *)(*(long *)PTR_DAT_0ac443b8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
LAB_088d81cc:
      FUN_088d7c20();
      return;
    }
    lVar11 = thunk_FUN_04983e64();
    if (lVar11 != 0) {
      FUN_088d8c9c();
      return;
    }
    lVar11 = thunk_FUN_04983e64();
    puVar4 = PTR_DAT_0ac45ad8;
    if (lVar11 != 0) {
      FUN_088d9380();
      return;
    }
    lVar11 = *unaff_x20;
    if ((lVar11 == *(long *)(puVar2 + 0x48)) || (lVar11 == *(long *)(puVar2 + 0x50))) {
      lVar11 = FUN_04341fc4();
      if (*(int *)(*(long *)PTR_DAT_0ac0b718 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0b718);
      }
      uVar8 = FUN_08cf5044(0);
      if ((lVar11 == 0) ||
         (FUN_0433a9cc(0,*(undefined8 *)puVar4,lVar11,*(undefined8 *)PTR_DAT_0ac163b8,uVar8),
         unaff_x19 == (long *)0x0)) goto LAB_088d857c;
      lVar11 = *unaff_x19;
      goto LAB_088d8130;
    }
    if ((lVar11 != *(long *)(puVar2 + 0x68)) && (lVar11 != *(long *)(puVar2 + 0x70))) {
      bVar1 = *(byte *)(*(long *)(puVar2 + 0x98) + 0x130);
      if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)(puVar2 + 0x98))) {
        if (*(long *)(unaff_x21 + 0x10) != 0) {
          if (*(char *)(*(long *)(unaff_x21 + 0x10) + 0x20) == '\0') {
            if (*(int *)(*(long *)PTR_DAT_0ac47be0 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            lVar11 = HdyRpc_RequestBatteryGet__pb__Google_Protobuf_IBufferMessage_InternalWriteTo();
            if (lVar11 != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              goto LAB_088d81cc;
            }
            puVar6 = (undefined4 *)FUN_0434463c();
            uStack0000000000000008 = *puVar6;
            uVar8 = *(undefined8 *)(puVar2 + 0x48);
            puVar9 = (undefined8 *)&stack0x00000008;
          }
          else {
            puVar6 = (undefined4 *)FUN_0434463c();
            uStack000000000000000c = *puVar6;
            uVar8 = *(undefined8 *)(puVar2 + 0x48);
            puVar9 = (undefined8 *)((long)&stack0x00000008 + 4);
          }
          thunk_FUN_04983b98(uVar8,puVar9);
          FUN_088d7f50();
          return;
        }
        goto LAB_088d857c;
      }
      if ((lVar11 != *(long *)(puVar2 + 0x78)) && (lVar11 != *(long *)(puVar2 + 0x80))) {
        lVar11 = thunk_FUN_04983e64();
        if (lVar11 == 0) {
          plVar7 = (long *)thunk_FUN_04956588();
          uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac47be8);
          uVar10 = 0;
          if (plVar7 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          uVar8 = FUN_08bcc3c0(uVar8,uVar10,0);
          thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
          uVar10 = thunk_FUN_04983f60();
          FUN_08cc420c(uVar10,uVar8,0);
          uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac47bf0);
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar10,uVar8);
        }
        FUN_088d6848();
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_0ac0b718 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar8 = FUN_08cf5044(0);
      puVar2 = PTR_DAT_0ac45ad8;
      lVar11 = FUN_04341fc4();
      if (lVar11 == 0) goto LAB_088d857c;
      uVar12 = *(undefined8 *)puVar2;
      uVar10 = FUN_04341fc4();
      uVar8 = FUN_0433a9cc(0,uVar12,uVar10,*(undefined8 *)PTR_DAT_0ac163c0,uVar8);
      uVar5 = thunk_FUN_08bd7c8c(uVar8,*(undefined8 *)PTR_DAT_0ac160a8,0);
      if ((((uVar5 & 1) == 0) &&
          (uVar5 = thunk_FUN_08bd7c8c(uVar8,*(undefined8 *)PTR_DAT_0ac16098,0), (uVar5 & 1) == 0))
         && (uVar5 = thunk_FUN_08bd7c8c(uVar8,*(undefined8 *)PTR_DAT_0ac160a0,0), (uVar5 & 1) == 0))
      {
        if (unaff_x19 == (long *)0x0) goto LAB_088d857c;
        UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 600);
        goto LAB_088d813c;
      }
      if (unaff_x19 == (long *)0x0) goto LAB_088d857c;
      (**(code **)(*unaff_x19 + 0x228))();
      lVar11 = *unaff_x19;
      goto LAB_088d8180;
    }
    if (unaff_x19 == (long *)0x0) {
LAB_088d857c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*unaff_x19 + 0x228))();
    puVar2 = PTR_DAT_0ac45ad8;
    lVar11 = FUN_04341fc4();
    if (*(int *)(*(long *)PTR_DAT_0ac0b718 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0b718);
    }
    uVar8 = FUN_08cf5044(0);
    if (lVar11 == 0) goto LAB_088d857c;
    FUN_0433a9cc(0,*(undefined8 *)puVar2,lVar11,*(undefined8 *)PTR_DAT_0ac163b8,uVar8);
  }
  lVar11 = *unaff_x19;
LAB_088d8180:
  (**(code **)(lVar11 + 600))();
                    /* WARNING: Could not recover jumptable at 0x088d81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x228))();
  return;
}


