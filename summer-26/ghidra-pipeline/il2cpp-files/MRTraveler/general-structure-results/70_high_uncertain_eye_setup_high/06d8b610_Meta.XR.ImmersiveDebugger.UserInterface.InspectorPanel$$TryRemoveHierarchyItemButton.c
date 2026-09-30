/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$TryRemoveHierarchyItemButton
ENTRY_POINT: 06d8b610
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__TryRemoveHierarchyItemButton
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x27;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong uStack0000000000000060;
  long lStack0000000000000068;
  ulong uStack0000000000000070;
  undefined8 uStack0000000000000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  long in_stack_000000b8;
  
  uStack0000000000000078 = param_2._8_8_;
  uStack0000000000000070 = param_2._0_8_;
  lStack0000000000000068 = param_1._8_8_;
  uStack0000000000000060 = param_1._0_8_;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
      *(long *)(lVar8 + 0x28) = lStack0000000000000068;
      *(ulong *)(lVar8 + 0x20) = uStack0000000000000060;
      *(undefined8 *)(lVar8 + 0x38) = uStack0000000000000078;
      *(ulong *)(lVar8 + 0x30) = uStack0000000000000070;
      thunk_FUN_03d233cc(lVar8 + 0x20,0);
    }
    else {
      fStack0000000000000098 = param_2._8_4_;
      uStack000000000000009c = param_2._12_4_;
      fStack0000000000000090 = param_2._0_4_;
      fStack0000000000000094 = param_2._4_4_;
      in_stack_00000080 = uStack0000000000000060;
      in_stack_00000088 = lStack0000000000000068;
      FUN_0533ee94();
    }
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_085decd4();
    in_stack_00000040 = unaff_x23;
    if ((uVar5 & 1) == 0) {
      in_stack_00000040 = unaff_x22;
    }
    thunk_FUN_03d233cc(&stack0x00000040);
    in_stack_00000048 = *(long *)(unaff_x19 + 0x88);
    thunk_FUN_03d233cc();
    lStack0000000000000068 = in_stack_00000048;
    uStack0000000000000060 = in_stack_00000040;
    uStack0000000000000078 = in_stack_00000058;
    uStack0000000000000070 = in_stack_00000050;
    lVar8 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
        *(long *)(lVar8 + 0x28) = in_stack_00000048;
        *(ulong *)(lVar8 + 0x20) = in_stack_00000040;
        *(undefined8 *)(lVar8 + 0x38) = in_stack_00000058;
        *(ulong *)(lVar8 + 0x30) = in_stack_00000050;
        thunk_FUN_03d233cc(lVar8 + 0x20,0);
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
      in_stack_00000040 = *(ulong *)(unaff_x19 + 0x50);
      in_stack_00000048 = 0;
      thunk_FUN_03d233cc(&stack0x00000040);
      in_stack_00000048 = *(long *)(unaff_x19 + 0x58);
      thunk_FUN_03d233cc();
      lStack0000000000000068 = in_stack_00000048;
      uStack0000000000000060 = in_stack_00000040;
      uStack0000000000000078 = in_stack_00000058;
      uStack0000000000000070 = in_stack_00000050;
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
          *(long *)(lVar8 + 0x28) = in_stack_00000048;
          *(ulong *)(lVar8 + 0x20) = in_stack_00000040;
          *(undefined8 *)(lVar8 + 0x38) = in_stack_00000058;
          *(ulong *)(lVar8 + 0x30) = in_stack_00000050;
          thunk_FUN_03d233cc(lVar8 + 0x20,0);
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
        in_stack_00000040 = *(ulong *)(unaff_x19 + 0x88);
        in_stack_00000048 = 0;
        thunk_FUN_03d233cc(&stack0x00000040);
        in_stack_00000048 = *(long *)(unaff_x19 + 0x90);
        thunk_FUN_03d233cc();
        lStack0000000000000068 = in_stack_00000048;
        uStack0000000000000060 = in_stack_00000040;
        uStack0000000000000078 = in_stack_00000058;
        uStack0000000000000070 = in_stack_00000050;
        lVar8 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
            *(long *)(lVar8 + 0x28) = in_stack_00000048;
            *(ulong *)(lVar8 + 0x20) = in_stack_00000040;
            *(undefined8 *)(lVar8 + 0x38) = in_stack_00000058;
            *(ulong *)(lVar8 + 0x30) = in_stack_00000050;
            thunk_FUN_03d233cc(lVar8 + 0x20,0);
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
          in_stack_00000040 = *(ulong *)(unaff_x19 + 0x58);
          in_stack_00000048 = 0;
          thunk_FUN_03d233cc(&stack0x00000040);
          in_stack_00000048 = *(long *)(unaff_x19 + 0x60);
          thunk_FUN_03d233cc();
          lStack0000000000000068 = in_stack_00000048;
          uStack0000000000000060 = in_stack_00000040;
          uStack0000000000000078 = in_stack_00000058;
          uStack0000000000000070 = in_stack_00000050;
          lVar8 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
              *(long *)(lVar8 + 0x28) = in_stack_00000048;
              *(ulong *)(lVar8 + 0x20) = in_stack_00000040;
              *(undefined8 *)(lVar8 + 0x38) = in_stack_00000058;
              *(ulong *)(lVar8 + 0x30) = in_stack_00000050;
              thunk_FUN_03d233cc(lVar8 + 0x20,0);
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
            lStack0000000000000068 = in_stack_00000048;
            uStack0000000000000060 = in_stack_00000040;
            uStack0000000000000078 = in_stack_00000058;
            uStack0000000000000070 = in_stack_00000050;
            lVar8 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
                *(long *)(lVar8 + 0x28) = in_stack_00000048;
                *(ulong *)(lVar8 + 0x20) = in_stack_00000040;
                *(undefined8 *)(lVar8 + 0x38) = in_stack_00000058;
                *(ulong *)(lVar8 + 0x30) = in_stack_00000050;
                uVar5 = in_stack_00000040;
                thunk_FUN_03d233cc(lVar8 + 0x20,0);
              }
              else {
                in_stack_00000088 = in_stack_00000048;
                in_stack_00000080 = in_stack_00000040;
                fStack0000000000000098 = (float)in_stack_00000058;
                uStack000000000000009c = (undefined4)((ulong)in_stack_00000058 >> 0x20);
                fStack0000000000000090 = (float)in_stack_00000050;
                fStack0000000000000094 = (float)(in_stack_00000050 >> 0x20);
                uVar5 = in_stack_00000050;
                FUN_0533ee94();
              }
              puVar3 = PTR_DAT_08e8ee40;
              puVar2 = PTR_DAT_08e69670;
              if (0 < *(int *)(unaff_x20 + 0x18)) {
                iVar9 = 0;
                do {
                  FUN_0533eb24(&stack0x00000080);
                  fVar10 = fStack0000000000000090;
                  lVar8 = in_stack_00000088;
                  uVar4 = in_stack_00000080;
                  in_stack_000000a8 = CONCAT44(fStack0000000000000098,fStack0000000000000094);
                  in_stack_000000b0 = uStack000000000000009c;
                  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  uVar6 = FUN_085decd4(uVar4,0,0);
                  if ((uVar6 & 1) == 0) {
LAB_06d8bb00:
                    uVar7 = FUN_06f75240(*(undefined8 *)puVar3,uVar4,lVar8,0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(*(long *)puVar2);
                    }
                    FUN_085a48e4(uVar7,0);
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    uVar6 = FUN_085decd4(lVar8,0,0);
                    fVar12 = (float)uVar5;
                    if ((uVar6 & 1) == 0) goto LAB_06d8bb00;
                    if ((lVar8 == 0) || (fVar10 = (float)FUN_085eb198(lVar8,0), uVar4 == 0))
                    goto LAB_06d8bc00;
                    fVar14 = param_3;
                    fVar13 = fVar12;
                    fVar11 = (float)FUN_085eb198(uVar4,0);
                    if (DAT_09410538 == '\0') {
                      FUN_03c8f898(PTR_DAT_08e6a6b8);
                      DAT_09410538 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    param_3 = param_3 - fVar14;
                    uVar5 = (ulong)(uint)(param_3 * param_3);
                    fVar10 = SQRT(param_3 * param_3 +
                                  (fVar10 - fVar11) * (fVar10 - fVar11) +
                                  (fVar12 - fVar13) * (fVar12 - fVar13));
                  }
                  uStack000000000000009c = in_stack_000000b0;
                  fStack0000000000000094 = (float)in_stack_000000a8;
                  fStack0000000000000098 = (float)((ulong)in_stack_000000a8 >> 0x20);
                  in_stack_00000080 = uVar4;
                  in_stack_00000088 = lVar8;
                  fStack0000000000000090 = fVar10;
                  FUN_0533eb84();
                  iVar9 = iVar9 + 1;
                } while (iVar9 < *(int *)(unaff_x20 + 0x18));
              }
              lVar8 = *(long *)(unaff_x19 + 0x38);
              if (lVar8 != 0) {
                iVar9 = 0;
                do {
                  if (*(int *)(lVar8 + 0x18) + 1 <= iVar9) {
                    uVar7 = FUN_05340bc4();
                    *(undefined8 *)(unaff_x19 + 0xb8) = uVar7;
                    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xb8),uVar7);
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
                  lVar8 = *(long *)(unaff_x19 + 0x38);
                  iVar9 = iVar9 + 1;
                } while (lVar8 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_06d8bc00:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


