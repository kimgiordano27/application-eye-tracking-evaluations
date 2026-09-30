/*
FUNCTION_NAME: OVRRaycaster$$IsFocussed
ENTRY_POINT: 07ac0d80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07ac11f4) */
/* WARNING: Removing unreachable block (ram,0x07ac12a8) */
/* WARNING: Removing unreachable block (ram,0x07ac1344) */

void OVRRaycaster__IsFocussed(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int in_w8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *unaff_x24;
  undefined1 auVar15 [16];
  long in_stack_00000000;
  int *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  int *in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  int *in_stack_00000050;
  long *plStack0000000000000058;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  int *in_stack_000000f8;
  long *in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  int *in_stack_00000118;
  long *in_stack_00000120;
  undefined4 *in_stack_00000138;
  
  uVar8 = in_stack_000000e8;
  lVar7 = in_stack_000000e0;
  puVar2 = PTR_DAT_092b7100;
  plStack0000000000000058 = (long *)&stack0x00000138;
  if (in_w8 == 0) {
LAB_07ac0f3c:
    in_stack_00000040 = (long *)&stack0x00000138;
    in_stack_00000038 = (int *)((long)&stack0x00000108 + 4);
    in_stack_00000030 = 0;
    in_stack_00000108._4_4_ = -1;
    _in_stack_00000080 = *(undefined1 (*) [16])(in_stack_00000138 + 0x18);
    *(undefined8 *)(in_stack_00000138 + 0x18) = 0;
    *(undefined8 *)(in_stack_00000138 + 0x1a) = 0;
    *in_stack_00000138 = 0xffffffff;
  }
  else {
    uVar11 = *(undefined8 *)(in_stack_00000138 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_092b7100 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07abbfb4(uVar11,uVar8,lVar7,0);
    in_stack_00000030 = 0;
    in_stack_00000038 = (int *)0x0;
    FUN_06627844(&stack0x00000030,&stack0x000000d8,&stack0x000000d0,*(undefined8 *)PTR_DAT_092f2f70)
    ;
    *(int **)(in_stack_00000138 + 0x16) = in_stack_00000038;
    *(long *)(in_stack_00000138 + 0x14) = in_stack_00000030;
    thunk_FUN_040ec700(in_stack_00000138 + 0x14,0);
    in_stack_00000038 = (int *)((long)&stack0x00000108 + 4);
    in_stack_00000030 = 0;
    in_stack_00000040 = (long *)&stack0x00000138;
    if (in_stack_00000108._4_4_ == 0) goto LAB_07ac0f3c;
    if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_05798b1c(&stack0x00000018,in_stack_000000e0,*(undefined8 *)PTR_DAT_092f3080);
    puVar4 = PTR_DAT_092f3050;
    puVar3 = PTR_DAT_092f2f10;
    in_stack_000000c0 = in_stack_00000028;
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000028 = &stack0x000000b0;
    in_stack_00000020 = (long)&stack0x00000108 + 4;
    while (uVar6 = FUN_0712a164(&stack0x000000b0,*(undefined8 *)puVar4), uVar8 = in_stack_000000e8,
          lVar7 = in_stack_000000d8, puVar5 = in_stack_000000c0, (uVar6 & 1) != 0) {
      uVar14 = *(undefined8 *)(in_stack_00000138 + 10);
      uVar11 = *(undefined8 *)(in_stack_00000138 + 0xe);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      auVar15 = FUN_07abc758(uVar14,uVar8,(ulong)puVar5 & 0xffffffff,uVar11,0);
      if (lVar7 == 0) {
LAB_07ac1294:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_07ac1294;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20) = auVar15;
      }
      else {
        FUN_05ac0830(lVar7,auVar15._0_8_,auVar15._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (in_stack_00000108._4_4_ < 0) {
      FUN_0712a160(in_stack_00000028,*(undefined8 *)PTR_DAT_092f3048);
    }
    _in_stack_00000070 =
         FUN_050eee1c(in_stack_000000d8,in_stack_000000d0,*(undefined8 *)PTR_DAT_092f2f58);
    if (*(int *)(*(long *)PTR_DAT_092f2f50 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092f2f50);
    }
    _in_stack_00000080 = FUN_06097a0c(&stack0x00000070,*(undefined8 *)PTR_DAT_092f2f48);
    uVar6 = FUN_06722d9c(&stack0x00000080,*(undefined8 *)PTR_DAT_092f2ee8);
    if ((uVar6 & 1) == 0) {
      in_stack_00000108._4_4_ = 0;
      *in_stack_00000138 = 0;
      uVar8 = *(undefined8 *)PTR_DAT_092f3088;
      *(undefined1 (*) [16])(in_stack_00000138 + 0x18) = _in_stack_00000080;
      FUN_051dde7c(in_stack_00000138 + 2,&stack0x00000080,in_stack_00000138,uVar8);
      iVar13 = 0x10;
      goto LAB_07ac1058;
    }
  }
  lVar7 = FUN_06722e9c(&stack0x00000080,*(undefined8 *)PTR_DAT_092f2ee0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_05bcd750(&stack0x00000018,lVar7,*(undefined8 *)PTR_DAT_092f2f18);
  puVar3 = PTR_DAT_092f2f00;
  puVar2 = PTR_DAT_09288fb8;
  in_stack_00000098 = in_stack_00000020;
  in_stack_00000090 = in_stack_00000018;
  in_stack_000000a0 = in_stack_00000028;
  in_stack_00000020 = (long)&stack0x00000108 + 4;
  in_stack_00000018 = 0;
  in_stack_00000028 = &stack0x00000090;
  do {
    uVar6 = FUN_0712a3e4(&stack0x00000090,*(undefined8 *)puVar3);
    puVar5 = in_stack_000000a0;
    if ((uVar6 & 1) == 0) {
      iVar13 = 0x14;
      goto LAB_07ac1024;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_07b323c4((ulong)puVar5 & 0xffffffff,0);
  } while ((uVar6 & 1) != 0);
  FUN_050ebd08(*(undefined8 *)(in_stack_00000138 + 10),(ulong)puVar5 & 0xffffffff,*unaff_x24);
  iVar13 = 0x13;
  in_stack_000000f8 = in_stack_00000008;
  in_stack_000000f0 = in_stack_00000000;
  in_stack_00000100 = in_stack_00000010;
LAB_07ac1024:
  if (in_stack_00000108._4_4_ < 0) {
    GLTFast_Jobs_CachedFunction_GetFloat3Int8Normalized_00000305_PostfixBurstDelegate__BeginInvoke
              (in_stack_00000028,*(undefined8 *)PTR_DAT_092f2ef8);
  }
  if ((iVar13 == 0x14) || (iVar13 == 0)) {
    iVar13 = 0x15;
  }
LAB_07ac1058:
  if (*in_stack_00000038 < 0) {
    FUN_066278f4(*in_stack_00000040 + 0x50,*(undefined8 *)PTR_DAT_092f2f68);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar13 == 0x15) || (iVar13 == 0)) {
    uVar8 = *unaff_x24;
    *(undefined8 *)(in_stack_00000138 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000138 + 0x16) = 0;
    FUN_050ebd08(&stack0x00000030,*(undefined8 *)(in_stack_00000138 + 10),0,uVar8);
    iVar13 = 0x13;
    in_stack_000000f8 = in_stack_00000038;
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000100 = in_stack_00000040;
  }
  if (*in_stack_00000050 < 0) {
    FUN_05733c18(*plStack0000000000000058 + 0x48,*(undefined8 *)PTR_DAT_092f3068);
  }
  if (in_stack_00000048 == 0) {
    if (*in_stack_00000118 < 0) {
      FUN_05733c18(*in_stack_00000120 + 0x40,*(undefined8 *)PTR_DAT_092f3060);
    }
    puVar2 = PTR_DAT_092f3008;
    if (in_stack_00000110 == 0) {
      if (iVar13 == 0x13) {
        *in_stack_00000138 = 0xfffffffe;
        in_stack_00000118 = in_stack_000000f8;
        in_stack_00000110 = in_stack_000000f0;
        in_stack_00000120 = in_stack_00000100;
        FUN_060727bc(in_stack_00000138 + 2,&stack0x00000110,*(undefined8 *)puVar2);
      }
      else if (iVar13 == 0) {
        uVar11 = *(undefined8 *)(&stack0x00000060 + (long)(in_stack_00000068 + -1) * 8);
        puVar12 = in_stack_00000138 + 2;
        *in_stack_00000138 = 0xfffffffe;
        uVar8 = thunk_FUN_040dedf8(PTR_DAT_092f3028);
        FUN_06072670(puVar12,uVar11,uVar8);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


