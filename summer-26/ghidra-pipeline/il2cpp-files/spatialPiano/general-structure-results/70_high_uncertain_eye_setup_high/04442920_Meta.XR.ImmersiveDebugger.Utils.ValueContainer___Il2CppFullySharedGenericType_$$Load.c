/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<__Il2CppFullySharedGenericType>$$Load
ENTRY_POINT: 04442920
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04442c58) */
/* WARNING: Removing unreachable block (ram,0x04442d34) */

void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<__Il2CppFullySharedGenericType>__Load
               (undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  do {
    uVar5 = auVar10._8_8_;
    uVar9 = auVar10._0_8_;
    lVar4 = *(long *)(in_stack_000001d8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    lVar6 = *(long *)(unaff_x22 + 0x10);
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xd8);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar6 + (long)(int)uVar2 * 0x10 + 0x20) = auVar10;
    }
    else {
      FUN_039a2718(unaff_x22,uVar9,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_03720778(unaff_x19[2],uVar9,uVar5,*unaff_x23);
    lVar4 = unaff_x19[3];
    if (lVar4 == 0) {
LAB_04442d24:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *unaff_x24;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_04442d24;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      *(undefined1 (*) [16])(lVar6 + (long)(int)uVar2 * 0x10 + 0x20) = auVar10;
    }
    else {
      FUN_03a5466c(lVar4,uVar9,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = *(long *)(in_stack_000001d8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    uVar3 = FUN_034a03a0(&stack0x00000140,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xe0));
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(in_stack_000001d8 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      FUN_04ac8428(&stack0x00000140,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xe8));
      lVar4 = in_stack_000001d0;
      if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((*(ushort *)(*(long *)(in_stack_000001d8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      lVar6 = in_stack_000001d0;
      if (*(int *)(lVar4 + 0x18) == 0) {
        lVar4 = *(long *)(in_stack_000001d8 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if ((*(ushort *)(*(long *)(in_stack_000001d8 + 0x20) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        FUN_03e76a2c();
      }
      else {
        if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar4 = *(long *)(in_stack_000001d8 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        FUN_039a31d8(&stack0x00000020,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
        unaff_x25[0xb] = in_stack_00000028;
        unaff_x25[10] = in_stack_00000020;
        unaff_x25[0xd] = in_stack_00000038;
        unaff_x25[0xc] = in_stack_00000030;
        while( true ) {
          lVar4 = *(long *)(in_stack_000001d8 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          uVar3 = FUN_04ac78bc(&stack0x00000110,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x140));
          if ((uVar3 & 1) == 0) break;
          lVar4 = *(long *)(in_stack_000001d8 + 0x20);
          uVar1 = *(ushort *)(lVar4 + 0x135);
          if ((uVar1 & 1) == 0) {
            FUN_02f41e9c();
            lVar4 = *(long *)(in_stack_000001d8 + 0x20);
            uVar1 = *(ushort *)(lVar4 + 0x135);
          }
          unaff_x25[9] = unaff_x25[0xd];
          unaff_x25[8] = unaff_x25[0xc];
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x120);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar4 = *(long *)(in_stack_000001d8 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x120);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          puVar8 = *(undefined8 **)(lVar4 + 0xb8);
          in_stack_000000f8 = unaff_x19[5];
          in_stack_000000f0 = unaff_x19[4];
          lVar4 = *(long *)(in_stack_000001d8 + 0x20);
          unaff_x25[1] = unaff_x25[9];
          *unaff_x25 = unaff_x25[8];
          uVar9 = *puVar8;
          in_stack_000000d8 = unaff_x19[1];
          in_stack_000000d0 = *unaff_x19;
          in_stack_000000e8 = unaff_x19[3];
          in_stack_000000e0 = unaff_x19[2];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c(lVar4);
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x138);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar4 = *(long *)(in_stack_000001d8 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          in_stack_00000028 = unaff_x25[1];
          in_stack_00000020 = *unaff_x25;
          in_stack_00000038 = unaff_x25[3];
          in_stack_00000030 = unaff_x25[2];
          in_stack_00000048 = unaff_x25[5];
          in_stack_00000040 = unaff_x25[4];
          in_stack_00000058 = unaff_x25[7];
          in_stack_00000050 = unaff_x25[6];
          FUN_03045670(&stack0x00000100,uVar9,&stack0x00000020,
                       *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x130));
        }
        lVar4 = *(long *)(in_stack_000001d8 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        FUN_04ac78b8(&stack0x00000110,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x148));
      }
      uVar9 = in_stack_000000b0;
      lVar4 = *(long *)(*in_stack_000000b8 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      FUN_0395eab4(uVar9,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x150));
      if (in_stack_000000a8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0();
      }
      return;
    }
    lVar4 = *(long *)(in_stack_000001d8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    auVar10 = FUN_034a0138(&stack0x00000140,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xb8));
    unaff_x22 = in_stack_000001d0;
  } while (in_stack_000001d0 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


