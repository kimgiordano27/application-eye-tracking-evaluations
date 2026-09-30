/*
FUNCTION_NAME: Nakama.Ninja.WebSockets.Internal.WebSocketImplementation$$BuildClosePayload
ENTRY_POINT: 08de34d0
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08de37cc) */
/* WARNING: Removing unreachable block (ram,0x08de37fc) */

void Nakama_Ninja_WebSockets_Internal_WebSocketImplementation__BuildClosePayload(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x26;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lStack0000000000000010;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000050;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  puVar5 = PTR_DAT_0ac694b0;
  puVar4 = PTR_DAT_0ac694a0;
  puVar3 = PTR_DAT_0ac69490;
  puVar2 = PTR_DAT_0ac69398;
  puVar1 = PTR_DAT_0ac161f8;
  if (in_NG == in_OV) {
    lStack0000000000000010 = 0;
    uVar10 = 0;
    param_1 = param_1 & 0xffffffff;
    do {
      if (param_1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar11 = *(long *)(unaff_x26 + 0x20 + uVar10 * 8);
      thunk_FUN_049547bc();
      if (lVar11 != 0) {
        for (lVar11 = FUN_07610fd4(lVar11,*(undefined8 *)PTR_DAT_0ac694b8); lVar11 != 0;
            lVar11 = FUN_07610ec8(lVar11,*(undefined8 *)puVar5)) {
          iVar6 = FUN_07610eb0(lVar11,*(undefined8 *)PTR_DAT_0ac694a8);
          if (-1 < iVar6 + -1) {
            do {
              iVar6 = iVar6 + -1;
              uVar8 = FUN_07610e78(lVar11,iVar6,*(undefined8 *)puVar4);
              thunk_FUN_049547bc();
              *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
              thunk_FUN_049ee3d8(unaff_x19 + 0x30,uVar8);
              lVar12 = *(long *)(unaff_x19 + 0x30);
              thunk_FUN_049547bc();
              if (lVar12 != 0) {
                in_stack_00000050 = lVar11;
                thunk_FUN_049ee3d8(&stack0x00000050,lVar11);
                plVar13 = *(long **)(unaff_x19 + 0x30);
                iStack0000000000000058 = iVar6;
                thunk_FUN_049547bc();
                if ((plVar13 == (long *)0x0) || (*plVar13 != *(long *)puVar2)) {
                  FUN_08de3958();
                }
                else {
                  plVar13 = (long *)plVar13[6];
                  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                  FUN_08ddf4b0();
                  in_stack_00000038 = CONCAT44(uStack000000000000005c,iStack0000000000000058);
                  in_stack_00000030 = in_stack_00000050;
                  uVar9 = thunk_FUN_04983b98(*(undefined8 *)puVar3,&stack0x00000030);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0494818c();
                  }
                  (**(code **)(*plVar13 + 0x178))
                            (plVar13,uVar8,uVar9,*(undefined8 *)(*plVar13 + 0x180));
                  uVar7 = FUN_08dc3298(0);
                  thunk_FUN_049547bc();
                  *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
                }
              }
            } while (0 < iVar6);
          }
        }
      }
      param_1 = (ulong)*(uint *)(unaff_x26 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(unaff_x26 + 0x18));
  }
  else {
    lStack0000000000000010 = 0;
  }
  thunk_FUN_049547bc();
  *(undefined4 *)(unaff_x19 + 0x20) = 3;
  thunk_FUN_049547bc();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x30),0);
  thunk_FUN_049547bc(0);
  if (lStack0000000000000010 != 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac12890);
    uVar8 = thunk_FUN_04983f60();
    FUN_08cc3cb4(uVar8,lStack0000000000000010,0);
    uVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac694d8);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar8,uVar9);
  }
  return;
}


