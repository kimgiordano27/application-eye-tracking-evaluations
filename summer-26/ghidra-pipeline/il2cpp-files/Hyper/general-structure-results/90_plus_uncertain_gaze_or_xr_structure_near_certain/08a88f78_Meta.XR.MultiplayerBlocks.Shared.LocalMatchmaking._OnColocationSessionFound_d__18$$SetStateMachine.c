/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<OnColocationSessionFound>d__18$$SetStateMachine
ENTRY_POINT: 08a88f78
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<OnColocationSessionFound>d__18__SetStateMachine
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 in_w8;
  undefined1 in_w9;
  int *piVar9;
  undefined8 *in_x10;
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
  
  uVar8 = *in_x10;
  unaff_x19[0x12] = in_w8;
  *(undefined1 *)(unaff_x19 + 0x13) = in_w9;
  uVar6 = FUN_05b4f550(param_1,uVar8);
  if ((uVar6 & 1) != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x140);
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac54b88);
    FUN_08a3f034(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar7 + 0x10) = *unaff_x22;
    thunk_FUN_049ee3d8();
    *(undefined4 *)(lVar7 + 0x1c) = unaff_x19[0x12];
    *(undefined1 *)(lVar7 + 0x18) = *(undefined1 *)(unaff_x19 + 0x13);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = FUN_08a3d2f0(lVar11,lVar7,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000098 = FUN_07764808(lVar7,*(undefined8 *)PTR_DAT_0ac549b0);
    uVar6 = FUN_076844c8(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a8);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000098;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      FUN_05a6f734(unaff_x19 + 2,&stack0x00000098);
      return;
    }
    uVar8 = FUN_07684508(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(unaff_x20 + 0x168) = uVar8;
    thunk_FUN_049ee3d8(unaff_x20 + 0x168);
    puVar1 = PTR_DAT_0ac46eb8;
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_0ac09758;
    uStack000000000000000c = unaff_x19[0xe];
    plVar10 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    uVar8 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),(long)&stack0x00000008 + 4);
    in_stack_00000088 =
         FUN_05b69a38(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0ac54b40);
    in_stack_00000010 = FUN_08a3f054(&stack0x00000088,0);
    puVar2 = PTR_DAT_0ac09c40;
    uVar3 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac09c40,&stack0x00000010);
    uVar8 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac54bb0,uVar8,uVar3,0);
    uStack0000000000000008 = unaff_x19[0x12];
    uVar3 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    in_stack_00000088 =
         FUN_05b6f604(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0ac54b50);
    FUN_08a3f054(&stack0x00000088,0);
    uVar4 = thunk_FUN_04983b98(*(undefined8 *)puVar2);
    uVar3 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac54ba8,uVar3,uVar4,0);
    puVar5 = (undefined8 *)PTR_DAT_0ac09810;
    if (*(char *)(unaff_x19 + 0x13) != '\0') {
      puVar5 = (undefined8 *)PTR_DAT_0ac54b98;
    }
    uVar8 = FUN_08bda228(*(undefined8 *)PTR_DAT_0ac54ba0,uVar8,uVar3,*puVar5,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08a88dd8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a88dd8:
    (*(code *)*puVar5)(plVar10,uVar8,puVar5[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


