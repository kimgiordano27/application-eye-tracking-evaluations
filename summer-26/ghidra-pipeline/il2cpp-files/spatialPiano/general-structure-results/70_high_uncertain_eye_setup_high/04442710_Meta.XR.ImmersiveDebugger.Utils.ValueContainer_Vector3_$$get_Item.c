/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$get_Item
ENTRY_POINT: 04442710
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04442c58) */
/* WARNING: Removing unreachable block (ram,0x04442d34) */

void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__get_Item(undefined1 param_1 [16])

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 (*unaff_x19) [16];
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long unaff_x27;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000138;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  
  uVar10 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  uStack0000000000000100 = 0;
  uStack0000000000000108 = 0;
  unaff_x25[0xb] = uVar10;
  unaff_x25[10] = uVar7;
  unaff_x25[0xd] = uVar10;
  unaff_x25[0xc] = uVar7;
  unaff_x25[0x11] = uVar10;
  unaff_x25[0x10] = uVar7;
  unaff_x25[0x13] = uVar10;
  unaff_x25[0x12] = uVar7;
  unaff_x25[0x15] = uVar10;
  unaff_x25[0x14] = uVar7;
  unaff_x25[0x17] = uVar10;
  unaff_x25[0x16] = uVar7;
  unaff_x25[0x19] = uVar10;
  unaff_x25[0x18] = uVar7;
  unaff_x25[0x1b] = uVar10;
  unaff_x25[0x1a] = uVar7;
  unaff_x25[0x1d] = uVar10;
  unaff_x25[0x1c] = uVar7;
  unaff_x25[0x1f] = uVar10;
  unaff_x25[0x1e] = uVar7;
  unaff_x25[7] = uVar10;
  unaff_x25[6] = uVar7;
  puVar12 = *(undefined8 **)(unaff_x27 + 0xe10);
  unaff_x25[5] = uVar10;
  unaff_x25[4] = uVar7;
  puVar4 = PTR_DAT_067cd408;
  unaff_x25[1] = uVar10;
  *unaff_x25 = uVar7;
  unaff_x25[3] = uVar10;
  unaff_x25[2] = uVar7;
  auVar13 = FUN_050cd784(0);
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  auVar13 = FUN_0349516c(auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x60)
                        );
  *unaff_x19 = auVar13;
  uVar7 = FUN_0348fd34(*puVar12);
  uVar10 = *(undefined8 *)puVar4;
  *(undefined8 *)unaff_x19[1] = uVar7;
  uVar7 = FUN_03490090(uVar10);
  *(undefined8 *)(unaff_x19[1] + 8) = uVar7;
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  uVar7 = FUN_0348f9cc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x68));
  *(undefined8 *)unaff_x19[2] = uVar7;
  *(long *)(unaff_x19[2] + 8) = unaff_x22;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar1 = *(int *)(unaff_x22 + 0x18);
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  if (0 < iVar1) {
    Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(unaff_x22 + 0x10),0,iVar1,0);
  }
  lVar6 = *(long *)(unaff_x21 + 0x20);
  in_stack_00000020 = 0;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  FUN_0395ea14(&stack0x00000020,&stack0x000001d0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x78));
  in_stack_000001c8 = in_stack_00000020;
  in_stack_000000b0 = &stack0x000001c8;
  in_stack_000000a8 = 0;
  in_stack_000000b8 = &stack0x000001d8;
  if ((*(byte *)(*(long *)(in_stack_000001d8 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  in_stack_00000138 = FUN_0348e660();
  lVar6 = *(long *)(in_stack_000001d8 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  FUN_03e38404(&stack0x00000020,&stack0x00000138,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xa0));
  puVar5 = PTR_DAT_067cd400;
  puVar4 = PTR_DAT_067cbe20;
  memcpy(&stack0x00000140,&stack0x00000020,0x80);
  in_stack_00000030 = &stack0x000001d8;
  in_stack_00000020 = 0;
  in_stack_00000028 = &stack0x00000140;
  do {
    lVar6 = *(long *)(in_stack_000001d8 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c();
    }
    uVar8 = FUN_034a03a0(&stack0x00000140,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xe0));
    if ((uVar8 & 1) == 0) {
      lVar6 = *(long *)(in_stack_000001d8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      FUN_04ac8428(&stack0x00000140,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xe8));
      lVar6 = in_stack_000001d0;
      if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((*(ushort *)(*(long *)(in_stack_000001d8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      lVar9 = in_stack_000001d0;
      if (*(int *)(lVar6 + 0x18) == 0) {
        lVar6 = *(long *)(in_stack_000001d8 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x50);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
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
        lVar6 = *(long *)(in_stack_000001d8 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        FUN_039a31d8(&stack0x00000020,lVar9,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xf8));
        unaff_x25[0xb] = in_stack_00000028;
        unaff_x25[10] = in_stack_00000020;
        unaff_x25[0xd] = in_stack_00000038;
        unaff_x25[0xc] = in_stack_00000030;
        while( true ) {
          lVar6 = *(long *)(in_stack_000001d8 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          uVar8 = FUN_04ac78bc(&stack0x00000110,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x140));
          if ((uVar8 & 1) == 0) break;
          lVar6 = *(long *)(in_stack_000001d8 + 0x20);
          uVar2 = *(ushort *)(lVar6 + 0x135);
          if ((uVar2 & 1) == 0) {
            FUN_02f41e9c();
            lVar6 = *(long *)(in_stack_000001d8 + 0x20);
            uVar2 = *(ushort *)(lVar6 + 0x135);
          }
          unaff_x25[9] = unaff_x25[0xd];
          unaff_x25[8] = unaff_x25[0xc];
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x120);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar6 = *(long *)(in_stack_000001d8 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x120);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          puVar12 = *(undefined8 **)(lVar6 + 0xb8);
          in_stack_000000f8 = *(undefined8 *)(unaff_x19[2] + 8);
          in_stack_000000f0 = *(undefined8 *)unaff_x19[2];
          lVar6 = *(long *)(in_stack_000001d8 + 0x20);
          unaff_x25[1] = unaff_x25[9];
          *unaff_x25 = unaff_x25[8];
          uVar7 = *puVar12;
          in_stack_000000d8 = *(undefined8 *)(*unaff_x19 + 8);
          in_stack_000000d0 = *(undefined8 *)*unaff_x19;
          in_stack_000000e8 = *(undefined8 *)(unaff_x19[1] + 8);
          in_stack_000000e0 = *(undefined8 *)unaff_x19[1];
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c(lVar6);
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x138);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar6 = *(long *)(in_stack_000001d8 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          in_stack_00000028 = (undefined1 *)unaff_x25[1];
          in_stack_00000020 = *unaff_x25;
          in_stack_00000038 = unaff_x25[3];
          in_stack_00000030 = (undefined8 *)unaff_x25[2];
          in_stack_00000048 = unaff_x25[5];
          in_stack_00000040 = unaff_x25[4];
          in_stack_00000058 = unaff_x25[7];
          in_stack_00000050 = unaff_x25[6];
          FUN_03045670(&stack0x00000100,uVar7,&stack0x00000020,
                       *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x130));
        }
        lVar6 = *(long *)(in_stack_000001d8 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        FUN_04ac78b8(&stack0x00000110,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x148));
      }
      puVar12 = in_stack_000000b0;
      lVar6 = *(long *)(*in_stack_000000b8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      FUN_0395eab4(puVar12,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x150));
      if (in_stack_000000a8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0();
      }
      return;
    }
    lVar6 = *(long *)(in_stack_000001d8 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c();
    }
    auVar13 = FUN_034a0138(&stack0x00000140,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xb8));
    lVar6 = in_stack_000001d0;
    uVar10 = auVar13._8_8_;
    uVar7 = auVar13._0_8_;
    if (in_stack_000001d0 == 0) {
LAB_04442d20:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *(long *)(in_stack_000001d8 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02f41e9c();
    }
    lVar11 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0xd8);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_04442d20;
    uVar3 = *(uint *)(lVar6 + 0x18);
    if (uVar3 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar3 + 1;
      *(undefined1 (*) [16])(lVar11 + (long)(int)uVar3 * 0x10 + 0x20) = auVar13;
    }
    else {
      FUN_039a2718(lVar6,uVar7,uVar10,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)unaff_x19[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_03720778(*(long *)unaff_x19[1],uVar7,uVar10,*(undefined8 *)puVar4);
    lVar6 = *(long *)(unaff_x19[1] + 8);
    if (lVar6 == 0) {
LAB_04442d24:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar11 = *(long *)puVar5;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_04442d24;
    uVar3 = *(uint *)(lVar6 + 0x18);
    if (uVar3 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar3 + 1;
      *(undefined1 (*) [16])(lVar9 + (long)(int)uVar3 * 0x10 + 0x20) = auVar13;
    }
    else {
      FUN_03a5466c(lVar6,uVar7,uVar10,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}


