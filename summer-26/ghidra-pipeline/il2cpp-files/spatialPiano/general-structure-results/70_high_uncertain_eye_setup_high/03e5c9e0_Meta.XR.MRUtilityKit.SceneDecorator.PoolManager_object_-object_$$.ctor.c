/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManager<object,-object>$$.ctor
ENTRY_POINT: 03e5c9e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03e5cec0) */
/* WARNING: Removing unreachable block (ram,0x03e5cdbc) */

void Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<object,_object>___ctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  undefined1 uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  long in_stack_00000098;
  
  lVar6 = FUN_02f41e9c();
  if (**(long **)(lVar6 + 0xb8) != 0) {
    uVar5 = FUN_0371fc90(**(long **)(lVar6 + 0xb8),*unaff_x20,unaff_x20[1],
                         *(undefined8 *)PTR_DAT_067cc128);
    if (((unaff_w21 | uVar5) & 1) == 0) {
      in_stack_00000028 = (undefined8 *)unaff_x20[1];
      in_stack_00000020 = *unaff_x20;
      uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067caa20);
      uVar10 = thunk_FUN_02f44ec4(uVar10,&stack0x00000020);
      puVar11 = PTR_DAT_067cc188;
    }
    else {
      lVar6 = *(long *)(in_stack_00000098 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar6 = *(long *)(in_stack_00000098 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
      if (lVar6 == 0) goto LAB_03e5cdfc;
      uVar7 = FUN_047fb800(lVar6,*unaff_x20,unaff_x20[1],*(undefined8 *)PTR_DAT_067cc180);
      if ((uVar7 & 1) == 0) {
        lVar6 = *(long *)(in_stack_00000098 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar6 = *(long *)(in_stack_00000098 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar6 == 0) goto LAB_03e5cdfc;
        uVar10 = *unaff_x20;
        uVar14 = unaff_x20[1];
        lVar8 = *(long *)(in_stack_00000098 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02f41e9c();
        }
        uVar7 = FUN_047fb800(lVar6,uVar10,uVar14,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x1f0));
        if ((uVar7 & 1) == 0) {
          in_stack_00000068 = unaff_x20[1];
          in_stack_00000060 = *unaff_x20;
          in_stack_00000030 = &stack0x00000098;
          lVar6 = *(long *)(in_stack_00000098 + 0x20);
          in_stack_00000028 = &stack0x00000060;
          in_stack_00000020 = 0;
          if ((unaff_w21 & 1) == 0) {
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02f41e9c();
            }
            lVar6 = FUN_0348fb5c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x210));
            lVar8 = *(long *)(in_stack_00000098 + 0x20);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02f41e9c();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02f41e9c();
            }
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            lVar8 = *(long *)(in_stack_00000098 + 0x20);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02f41e9c();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02f41e9c();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar10 = *unaff_x20;
            uVar14 = unaff_x20[1];
            lVar9 = *(long *)(in_stack_00000098 + 0x20);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02f41e9c();
            }
            FUN_047fb5f4(lVar8,uVar10,uVar14,lVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x218))
            ;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if ((*(ushort *)(*(long *)(in_stack_00000098 + 0x20) + 0x135) & 1) == 0) {
              FUN_02f41e9c();
            }
            in_stack_00000040 = *(undefined8 *)(lVar6 + 0x68);
            uStack0000000000000084 = *(undefined8 *)(lVar6 + 0x7c);
            uVar10 = *(undefined8 *)(lVar6 + 0x74);
            uVar14 = *(undefined8 *)(lVar6 + 0x60);
            uVar13 = *(undefined2 *)(lVar6 + 0x84);
            uVar15 = *(undefined1 *)(lVar6 + 0x86);
            uVar12 = *(undefined1 *)(lVar6 + 0x87);
            in_stack_00000048 = (undefined4)*(undefined8 *)(lVar6 + 0x70);
          }
          else {
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02f41e9c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02f41e9c();
            }
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            lVar6 = *(long *)(in_stack_00000098 + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02f41e9c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02f41e9c();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar10 = *unaff_x20;
            uVar14 = unaff_x20[1];
            lVar8 = *(long *)(in_stack_00000098 + 0x20);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02f41e9c();
            }
            FUN_047e5ce0(lVar6,uVar10,uVar14,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x1f8));
            uVar4 = uStack0000000000000080;
            uVar3 = uStack0000000000000078;
            uVar2 = in_stack_00000070;
            if ((*(byte *)(*(long *)(in_stack_00000098 + 0x20) + 0x135) & 1) == 0) {
              FUN_02f41e9c();
            }
            uVar10 = CONCAT44(uVar4,uStack000000000000007c);
            uVar12 = 0;
            uVar13 = 0;
            uVar14 = 0;
            in_stack_00000048 = uVar3;
            in_stack_00000040 = uVar2;
            uVar15 = 1;
          }
          uStack000000000000004c = (undefined4)uVar10;
          in_stack_00000050 = (undefined4)((ulong)uVar10 >> 0x20);
          uStack0000000000000054 = uStack0000000000000084;
          if (*(int *)(*(long *)PTR_DAT_067c98e0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          puVar1 = in_stack_00000028;
          lVar6 = *(long *)(*in_stack_00000030 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          FUN_03e5dbf8(puVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x228));
          *unaff_x19 = uVar14;
          *(undefined2 *)((long)unaff_x19 + 0x24) = uVar13;
          unaff_x19[2] = CONCAT44(uStack000000000000004c,in_stack_00000048);
          unaff_x19[1] = in_stack_00000040;
          *(undefined8 *)((long)unaff_x19 + 0x1c) = uStack0000000000000054;
          *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(in_stack_00000050,uStack000000000000004c);
          *(undefined1 *)((long)unaff_x19 + 0x26) = uVar15;
          *(undefined1 *)((long)unaff_x19 + 0x27) = uVar12;
          return;
        }
        in_stack_00000028 = (undefined8 *)unaff_x20[1];
        in_stack_00000020 = *unaff_x20;
        uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067caa20);
        uVar10 = thunk_FUN_02f44ec4(uVar10,&stack0x00000020);
        puVar11 = PTR_DAT_067cc198;
      }
      else {
        in_stack_00000028 = (undefined8 *)unaff_x20[1];
        in_stack_00000020 = *unaff_x20;
        uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067caa20);
        uVar10 = thunk_FUN_02f44ec4(uVar10,&stack0x00000020);
        puVar11 = PTR_DAT_067cc190;
      }
    }
    uVar14 = thunk_FUN_02f6ef30(puVar11);
    uVar10 = FUN_04f65e2c(uVar14,uVar10,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar14 = thunk_FUN_02f45270();
    FUN_050d5404(uVar14,uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar14,in_stack_00000098);
  }
LAB_03e5cdfc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


