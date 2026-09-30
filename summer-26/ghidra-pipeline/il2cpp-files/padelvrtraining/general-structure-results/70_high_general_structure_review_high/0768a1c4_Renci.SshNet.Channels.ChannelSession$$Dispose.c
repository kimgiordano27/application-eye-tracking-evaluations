/*
FUNCTION_NAME: Renci.SshNet.Channels.ChannelSession$$Dispose
ENTRY_POINT: 0768a1c4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Renci_SshNet_Channels_ChannelSession__Dispose(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 in_w8;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 uStack000000000000000c;
  undefined1 in_stack_00000010;
  undefined1 uStack0000000000000014;
  undefined1 in_stack_00000018;
  undefined1 uStack000000000000001c;
  undefined1 in_stack_00000020;
  undefined1 uStack0000000000000024;
  undefined1 in_stack_00000028;
  undefined1 uStack000000000000002c;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x10) = in_w8;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2c) = param_1;
  *(undefined4 *)(param_2 + 0x34) = 0x3c23d70a;
  *(undefined1 *)(param_2 + 0x38) = 0;
  thunk_FUN_03d1023c();
  uVar4 = DAT_01911518;
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined1 *)(lVar6 + 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x4c) = uVar4;
  *(undefined1 *)(lVar6 + 0x54) = 1;
  *(undefined4 *)(lVar6 + 0x70) = 0xbf800000;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  uVar4 = thunk_FUN_03d2ef40(*unaff_x28);
  FUN_055dbae8(uVar4,*unaff_x19);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x22);
  FUN_07613b7c(uVar4,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x21);
  FUN_07679894(uVar4,0);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x24);
  FUN_0559a838(uVar4,*unaff_x23);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x98);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x24);
  FUN_0559a838(uVar4,*unaff_x23);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xa0);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x29);
  FUN_055dbae8(uVar4,*(undefined8 *)PTR_DAT_0922e858);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xa8);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0922e878);
  FUN_05ebdd84(uVar4,0x1d,*(undefined8 *)PTR_DAT_0922e870);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xb0);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 0xd0) = 0;
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0922e850);
  FUN_06b6d004(uVar4,*(undefined8 *)PTR_DAT_0922e840);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xe8);
  *puVar5 = uVar4;
  thunk_FUN_03d1023c(puVar5,uVar4);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined1 *)(lVar6 + 0xf8) = 1;
  *(undefined4 *)(lVar6 + 0x108) = 0;
  uVar4 = *(undefined8 *)PTR_StringLiteral_50595_0922e890;
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar4 = FUN_07186ef4(uVar4,0);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x110) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x110);
  uVar4 = FUN_07186ef4(*unaff_x26,0);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x118) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x118);
  uStack000000000000002c = 0;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x0000002c);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x120) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x120);
  in_stack_00000028 = 1;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x00000028);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x128) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x128);
  uStack0000000000000024 = 2;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x00000024);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x130) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x130);
  in_stack_00000020 = 3;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x00000020);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x138) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x138);
  uStack000000000000001c = 4;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x0000001c);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x140) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x140);
  in_stack_00000018 = 5;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x00000018);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x148) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x148);
  uStack0000000000000014 = 6;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x00000014);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x150) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x150);
  in_stack_00000010 = 7;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x00000010);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x158) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x158);
  uStack000000000000000c = 8;
  uVar4 = thunk_FUN_03d2eb70(*unaff_x27,&stack0x0000000c);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x160) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x160);
  uVar4 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0c18,0);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x168) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x168);
  uVar4 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091ab540,0);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x170) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x170);
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0922e868);
  System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar4,*(undefined8 *)PTR_DAT_0922e860);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x178) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x178,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x22);
  FUN_07613b7c(uVar4,0);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x180) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x180,uVar4);
  uVar4 = thunk_FUN_03d2ef40(*unaff_x22);
  FUN_07613b7c(uVar4,0);
  lVar6 = *(long *)(*unaff_x20 + 0xb8);
  *(undefined8 *)(lVar6 + 0x188) = uVar4;
  thunk_FUN_03d1023c(lVar6 + 0x188,uVar4);
  lVar6 = thunk_FUN_03d2ef40(*unaff_x21);
  FUN_07679894(lVar6,0);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x10) = 6;
    lVar7 = *(long *)(*unaff_x20 + 0xb8);
    *(long *)(lVar7 + 400) = lVar6;
    thunk_FUN_03d1023c(lVar7 + 400,lVar6);
    lVar6 = thunk_FUN_03d2ef40(*unaff_x21);
    FUN_07679894(lVar6,0);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x20) = 1;
      lVar7 = *(long *)(*unaff_x20 + 0xb8);
      *(long *)(lVar7 + 0x198) = lVar6;
      thunk_FUN_03d1023c(lVar7 + 0x198,lVar6);
      lVar6 = thunk_FUN_03d2ef40(*unaff_x21);
      FUN_07679894(lVar6,0);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x20) = 0;
        puVar1 = PTR_DAT_091a0fc8;
        lVar7 = *(long *)(*unaff_x20 + 0xb8);
        *(long *)(lVar7 + 0x1a0) = lVar6;
        thunk_FUN_03d1023c(lVar7 + 0x1a0,lVar6);
        lVar6 = thunk_FUN_03d2ef40(*unaff_x21);
        FUN_07679894(lVar6,0);
        uVar4 = FUN_03d2d394(*(undefined8 *)puVar1,1);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x18) = uVar4;
          thunk_FUN_03d1023c();
          lVar7 = *(long *)(*unaff_x20 + 0xb8);
          *(long *)(lVar7 + 0x1a8) = lVar6;
          thunk_FUN_03d1023c(lVar7 + 0x1a8,lVar6);
          uVar4 = thunk_FUN_03d2ef40(*unaff_x22);
          FUN_07613b7c(uVar4,0);
          lVar6 = *(long *)(*unaff_x20 + 0xb8);
          *(undefined8 *)(lVar6 + 0x1b0) = uVar4;
          thunk_FUN_03d1023c(lVar6 + 0x1b0,uVar4);
          lVar6 = thunk_FUN_03d2ef40(*unaff_x21);
          FUN_07679894(lVar6,0);
          if (lVar6 != 0) {
            *(undefined1 *)(lVar6 + 0x10) = 6;
            puVar3 = PTR_DAT_0922e888;
            puVar2 = PTR_DAT_0922e848;
            puVar1 = PTR_DAT_0922e838;
            lVar7 = *(long *)(*unaff_x20 + 0xb8);
            *(long *)(lVar7 + 0x1b8) = lVar6;
            thunk_FUN_03d1023c(lVar7 + 0x1b8,lVar6);
            uVar4 = thunk_FUN_03d2ef40(*unaff_x22);
            FUN_07613b7c(uVar4,0);
            lVar6 = *(long *)(*unaff_x20 + 0xb8);
            *(undefined8 *)(lVar6 + 0x1c0) = uVar4;
            thunk_FUN_03d1023c(lVar6 + 0x1c0,uVar4);
            uVar4 = thunk_FUN_03d2ef40(*unaff_x21);
            FUN_07679894(uVar4,0);
            lVar6 = *(long *)(*unaff_x20 + 0xb8);
            *(undefined8 *)(lVar6 + 0x1c8) = uVar4;
            thunk_FUN_03d1023c(lVar6 + 0x1c8,uVar4);
            *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x1d0) = 0x14;
            lVar6 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
            FUN_071bc31c(lVar6,0);
            *(undefined1 *)(lVar6 + 0x24) = 1;
            lVar7 = *(long *)(*unaff_x20 + 0xb8);
            *(long *)(lVar7 + 0x1d8) = lVar6;
            thunk_FUN_03d1023c(lVar7 + 0x1d8,lVar6);
            lVar6 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
            FUN_071bc31c(lVar6,0);
            *(undefined1 *)(lVar6 + 0x24) = 0;
            lVar7 = *(long *)(*unaff_x20 + 0xb8);
            *(long *)(lVar7 + 0x1e0) = lVar6;
            thunk_FUN_03d1023c(lVar7 + 0x1e0,lVar6);
            uVar4 = thunk_FUN_03d2ef40(*unaff_x21);
            FUN_07679894(uVar4,0);
            lVar6 = *(long *)(*unaff_x20 + 0xb8);
            *(undefined8 *)(lVar6 + 0x1e8) = uVar4;
            thunk_FUN_03d1023c(lVar6 + 0x1e8,uVar4);
            uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
            FUN_06c8c858(uVar4,*(undefined8 *)puVar1);
            lVar6 = *(long *)(*unaff_x20 + 0xb8);
            *(undefined8 *)(lVar6 + 0x1f0) = uVar4;
            thunk_FUN_03d1023c(lVar6 + 0x1f0,uVar4);
            FUN_0768a988();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


