/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectCategoryButton
ENTRY_POINT: 06d8b848
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectCategoryButton
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  long unaff_x27;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  long in_stack_000000b8;
  
  *(long *)(param_1 + 0x28) = param_3._8_8_;
  *(long *)(param_1 + 0x20) = param_3._0_8_;
  *(long *)(param_1 + 0x38) = param_2._8_8_;
  *(long *)(param_1 + 0x30) = param_2._0_8_;
  thunk_FUN_03d233cc();
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = *(ulong *)(unaff_x19 + 0x58);
  in_stack_00000048 = 0;
  thunk_FUN_03d233cc(&stack0x00000040);
  in_stack_00000048 = *(long *)(unaff_x19 + 0x60);
  thunk_FUN_03d233cc();
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000078 = in_stack_00000058;
  in_stack_00000070 = in_stack_00000050;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      lVar7 = lVar7 + (long)(int)uVar1 * 0x20;
      *(long *)(lVar7 + 0x28) = in_stack_00000048;
      *(ulong *)(lVar7 + 0x20) = in_stack_00000040;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_00000058;
      *(ulong *)(lVar7 + 0x30) = in_stack_00000050;
      thunk_FUN_03d233cc(lVar7 + 0x20,0);
    }
    else {
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      fStack0000000000000098 = (float)in_stack_00000058;
      uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
      fStack0000000000000090 = (float)in_stack_00000050;
      fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
      FUN_0533ee94();
    }
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000040 = *(ulong *)(unaff_x19 + 0x90);
    in_stack_00000048 = 0;
    thunk_FUN_03d233cc(&stack0x00000040);
    in_stack_00000048 = *(long *)(unaff_x19 + 0x98);
    thunk_FUN_03d233cc();
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000078 = in_stack_00000058;
    in_stack_00000070 = in_stack_00000050;
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        lVar7 = lVar7 + (long)(int)uVar1 * 0x20;
        *(long *)(lVar7 + 0x28) = in_stack_00000048;
        *(ulong *)(lVar7 + 0x20) = in_stack_00000040;
        *(undefined8 *)(lVar7 + 0x38) = in_stack_00000058;
        *(ulong *)(lVar7 + 0x30) = in_stack_00000050;
        uVar13 = in_stack_00000040;
        thunk_FUN_03d233cc(lVar7 + 0x20,0);
      }
      else {
        in_stack_00000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        fStack0000000000000098 = (float)in_stack_00000058;
        uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
        fStack0000000000000090 = (float)in_stack_00000050;
        fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
        uVar13 = in_stack_00000050;
        FUN_0533ee94();
      }
      puVar3 = PTR_DAT_08e8ee40;
      puVar2 = PTR_DAT_08e69670;
      if (0 < *(int *)(unaff_x20 + 0x18)) {
        iVar8 = 0;
        do {
          FUN_0533eb24(&stack0x00000080);
          fVar9 = fStack0000000000000090;
          lVar7 = in_stack_00000088;
          uVar4 = in_stack_00000080;
          in_stack_000000a8 = CONCAT44(fStack0000000000000098,fStack0000000000000094);
          in_stack_000000b0 = uStack000000000000009c;
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar5 = FUN_085decd4(uVar4,0,0);
          if ((uVar5 & 1) == 0) {
LAB_06d8bb00:
            uVar6 = FUN_06f75240(*(undefined8 *)puVar3,uVar4,lVar7,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)puVar2);
            }
            FUN_085a48e4(uVar6,0);
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar5 = FUN_085decd4(lVar7,0,0);
            fVar11 = (float)uVar13;
            if ((uVar5 & 1) == 0) goto LAB_06d8bb00;
            if ((lVar7 == 0) || (fVar9 = (float)FUN_085eb198(lVar7,0), uVar4 == 0))
            goto LAB_06d8bc00;
            fVar14 = param_4;
            fVar12 = fVar11;
            fVar10 = (float)FUN_085eb198(uVar4,0);
            if (DAT_09410538 == '\0') {
              FUN_03c8f898(PTR_DAT_08e6a6b8);
              DAT_09410538 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            param_4 = param_4 - fVar14;
            uVar13 = (ulong)(uint)(param_4 * param_4);
            fVar9 = SQRT(param_4 * param_4 +
                         (fVar9 - fVar10) * (fVar9 - fVar10) + (fVar11 - fVar12) * (fVar11 - fVar12)
                        );
          }
          uStack000000000000009c = in_stack_000000b0;
          fStack0000000000000094 = (float)in_stack_000000a8;
          fStack0000000000000098 = (float)((ulong)in_stack_000000a8 >> 0x20);
          in_stack_00000080 = uVar4;
          in_stack_00000088 = lVar7;
          fStack0000000000000090 = fVar9;
          FUN_0533eb84();
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(unaff_x20 + 0x18));
      }
      lVar7 = *(long *)(unaff_x19 + 0x38);
      if (lVar7 != 0) {
        iVar8 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) + 1 <= iVar8) {
            uVar6 = FUN_05340bc4();
            *(undefined8 *)(unaff_x19 + 0xb8) = uVar6;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xb8),uVar6);
            if (*(long *)(unaff_x27 + 0x28) == in_stack_000000b8) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          FUN_0533eb24(&stack0x00000080);
          fStack0000000000000094 = fStack0000000000000090 / *(float *)(unaff_x19 + 0xcc);
          fStack0000000000000098 = fStack0000000000000094;
          FUN_0533eb84();
          lVar7 = *(long *)(unaff_x19 + 0x38);
          iVar8 = iVar8 + 1;
        } while (lVar7 != 0);
      }
    }
  }
LAB_06d8bc00:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


