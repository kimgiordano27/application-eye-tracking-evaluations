/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 08a88f84
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  
  uVar7 = FUN_05b4f550();
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x140);
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac54b88);
    FUN_08a3f034(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar8 + 0x10) = *unaff_x22;
    thunk_FUN_049ee3d8();
    *(undefined4 *)(lVar8 + 0x1c) = unaff_x19[0x12];
    *(undefined1 *)(lVar8 + 0x18) = *(undefined1 *)(unaff_x19 + 0x13);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = FUN_08a3d2f0(lVar11,lVar8,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000098 = FUN_07764808(lVar8,*(undefined8 *)PTR_DAT_0ac549b0);
    uVar7 = FUN_076844c8(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a8);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000098;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      FUN_05a6f734(unaff_x19 + 2,&stack0x00000098);
      return;
    }
    uVar3 = FUN_07684508(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(unaff_x20 + 0x168) = uVar3;
    thunk_FUN_049ee3d8(unaff_x20 + 0x168);
    puVar1 = PTR_DAT_0ac46eb8;
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_0ac09758;
    uStack000000000000000c = unaff_x19[0xe];
    plVar10 = (long *)**(undefined8 **)(lVar8 + 0xb8);
    uVar3 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),(long)&stack0x00000008 + 4);
    in_stack_00000088 =
         FUN_05b69a38(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0ac54b40);
    in_stack_00000010 = FUN_08a3f054(&stack0x00000088,0);
    puVar2 = PTR_DAT_0ac09c40;
    uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac09c40,&stack0x00000010);
    uVar3 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac54bb0,uVar3,uVar4,0);
    uStack0000000000000008 = unaff_x19[0x12];
    uVar4 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    in_stack_00000088 =
         FUN_05b6f604(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0ac54b50);
    FUN_08a3f054(&stack0x00000088,0);
    uVar5 = thunk_FUN_04983b98(*(undefined8 *)puVar2);
    uVar4 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac54ba8,uVar4,uVar5,0);
    puVar6 = (undefined8 *)PTR_DAT_0ac09810;
    if (*(char *)(unaff_x19 + 0x13) != '\0') {
      puVar6 = (undefined8 *)PTR_DAT_0ac54b98;
    }
    uVar3 = FUN_08bda228(*(undefined8 *)PTR_DAT_0ac54ba0,uVar3,uVar4,*puVar6,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08a88dd8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a88dd8:
    (*(code *)*puVar6)(plVar10,uVar3,puVar6[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


