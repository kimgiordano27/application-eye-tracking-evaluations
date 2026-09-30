/*
FUNCTION_NAME: Oculus.Platform.MessageWithNetSyncSessionList$$.ctor
ENTRY_POINT: 068a4798
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_6
*/


void Oculus_Platform_MessageWithNetSyncSessionList___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 uVar11;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
code_r0x068a4798:
                    /* try { // try from 068a4798 to 069a47a3 has its CatchHandler @ 068a47d0 */
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
                    /* try { // try from 068a47a4 to 069a47a7 has its CatchHandler @ 068a47c8 */
                    /* try { // try from 068a47a8 to 069a47b3 has its CatchHandler @ 068a43e4 */
    if (*(long *)(piVar10 + -2) == param_3) {
                    /* catch() { ... } // from try @ 068a47a4 with catch @ 068a47c8 */
                    /* catch() { ... } // from try @ 068a4794 with catch @ 068a47cc */
                    /* catch() { ... } // from try @ 068a4798 with catch @ 068a47d0 */
      puVar7 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_068a47d4;
    }
    in_x9 = in_x9 - 1;
    piVar10 = piVar10 + 4;
                    /* try { // try from 068a47b4 to 069a47b7 has its CatchHandler @ 068a47c0 */
  } while (in_x9 != 0);
LAB_068a47b8:
                    /* try { // try from 068a47b8 to 069a47bf has its CatchHandler @ 068a47c4 */
                    /* catch() { ... } // from try @ 068a47b4 with catch @ 068a47c0
                       try { // try from 068a47c0 to 069a4803 has its CatchHandler @ 068a43e4 */
  puVar7 = (undefined8 *)FUN_03ac43c4(unaff_x25,param_3,0);
                    /* catch() { ... } // from try @ 068a468c with catch @ 068a47c4
                       catch() { ... } // from try @ 068a47b8 with catch @ 068a47c4 */
LAB_068a47d4:
                    /* catch() { ... } // from try @ 068a4670 with catch @ 068a47d4 */
                    /* catch() { ... } // from try @ 068a4550 with catch @ 068a47d8 */
                    /* catch() { ... } // from try @ 068a45b4 with catch @ 068a47dc */
                    /* catch() { ... } // from try @ 068a4790 with catch @ 068a47e0 */
                    /* catch() { ... } // from try @ 068a478c with catch @ 068a47e4 */
  (*(code *)*puVar7)(unaff_x25,unaff_x24,0,puVar7[1]);
                    /* catch() { ... } // from try @ 068a4788 with catch @ 068a47e8 */
  if (unaff_x22 != 0) {
    do {
      FUN_06bbc478();
      FUN_067e6a34();
      iVar2 = (**(code **)(*unaff_x21 + 0x238))();
      if (iVar2 != 4) {
        FUN_06bbcad8();
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_06bbf460();
          return;
        }
        break;
      }
      plVar3 = (long *)(**(code **)(*unaff_x21 + 0x248))();
      if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)(unaff_x29 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar3);
      }
      FUN_067e6a34();
      if (*(long *)(unaff_x19 + 0x40) == 0) break;
      lVar4 = FUN_06bb2084(*(long *)(unaff_x19 + 0x40),plVar3,0);
      if (lVar4 == 0) {
        uVar5 = FUN_068a4838();
        lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14e0);
        FUN_06b8f0c4(lVar4,plVar3,uVar5,0);
        if ((*(long *)(unaff_x19 + 0x40) == 0) ||
           (FUN_06bb23bc(*(long *)(unaff_x19 + 0x40),lVar4,0), lVar4 == 0)) break;
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x38);
      uVar11 = *unaff_x28;
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar11 = FUN_0675ff58(uVar11,0);
      uVar6 = FUN_067690d8(uVar5,uVar11,0);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(lVar4 + 0x38) == 0) break;
        uVar6 = FUN_0676ab08(*(long *)(lVar4 + 0x38),0);
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(lVar4 + 0x38);
          uVar11 = *(undefined8 *)PTR_DAT_08495378;
          if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar11 = FUN_0675ff58(uVar11,0);
          uVar6 = FUN_06769d78(uVar5,uVar11,0);
          if ((uVar6 & 1) != 0) goto code_r0x068a45c4;
        }
        lVar4 = (**(code **)(*unaff_x21 + 0x248))();
        if (lVar4 != 0) {
          if (unaff_x20 == 0) break;
          lVar4 = FUN_067df97c();
          if (lVar4 != 0) goto LAB_068a4710;
        }
        if (*(int *)(*(long *)PTR_DAT_084a41f8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
      }
      else {
        iVar2 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar2 == 2) {
          FUN_067e6a34();
        }
        uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b14c8);
        FUN_06b76dc4(uVar5,0);
        while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
          FUN_068a4310();
          FUN_067e6a34();
        }
      }
LAB_068a4710:
      if (unaff_x22 == 0) break;
    } while( true );
  }
  goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
code_r0x068a45c4:
  iVar2 = (**(code **)(*unaff_x21 + 0x238))();
  if (iVar2 == 2) {
    FUN_067e6a34();
  }
  unaff_x25 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084a1528);
  FUN_04de7d48(unaff_x25,*(undefined8 *)PTR_DAT_084a1530);
  while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
    uVar5 = (**(code **)(*unaff_x21 + 0x248))();
    if (unaff_x25 == (long *)0x0)
    goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    lVar8 = unaff_x25[2];
    lVar9 = *unaff_x27;
    *(int *)((long)unaff_x25 + 0x1c) = *(int *)((long)unaff_x25 + 0x1c) + 1;
    if (lVar8 == 0) goto Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage;
    uVar1 = *(uint *)(unaff_x25 + 3);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x25 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0(unaff_x25,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    FUN_067e6a34();
  }
  plVar3 = *(long **)(lVar4 + 0x38);
  if ((plVar3 == (long *)0x0) ||
     (uVar5 = (**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440)),
     unaff_x25 == (long *)0x0)) {
Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  unaff_x24 = FUN_06776ce4(uVar5,(int)unaff_x25[3],0);
  param_1 = *unaff_x25;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_08491af0;
  if (in_x9 != 0) goto code_r0x068a4798;
  goto LAB_068a47b8;
}


