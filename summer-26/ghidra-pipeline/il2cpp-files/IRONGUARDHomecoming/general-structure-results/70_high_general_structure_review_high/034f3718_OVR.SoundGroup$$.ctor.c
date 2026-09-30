/*
FUNCTION_NAME: OVR.SoundGroup$$.ctor
ENTRY_POINT: 034f3718
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long OVR_SoundGroup___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined8 *unaff_x19;
  undefined8 uVar18;
  undefined4 unaff_w21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  undefined1 uStack0000000000000020;
  undefined1 uStack0000000000000021;
  undefined1 uStack0000000000000022;
  undefined1 uStack0000000000000023;
  undefined4 uStack0000000000000024;
  undefined1 uStack0000000000000028;
  undefined4 uStack0000000000000029;
  undefined3 uStack000000000000002d;
  undefined8 in_stack_00000030;
  undefined1 uStack0000000000000038;
  undefined1 uStack0000000000000039;
  undefined1 uStack000000000000003a;
  undefined1 uStack000000000000003b;
  undefined4 uStack000000000000003c;
  undefined1 uStack0000000000000040;
  undefined4 uStack0000000000000041;
  undefined3 uStack0000000000000045;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 uStack0000000000000068;
  undefined1 uStack0000000000000069;
  undefined1 uStack000000000000006a;
  undefined1 uStack000000000000006b;
  undefined4 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined4 uStack0000000000000071;
  undefined3 uStack0000000000000075;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined1 uStack0000000000000088;
  undefined4 uStack0000000000000089;
  undefined3 uStack000000000000008d;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined1 uStack00000000000000a8;
  undefined1 uStack00000000000000a9;
  undefined1 uStack00000000000000aa;
  undefined1 uStack00000000000000ab;
  undefined4 uStack00000000000000ac;
  undefined1 uStack00000000000000b0;
  undefined4 uStack00000000000000b1;
  undefined3 uStack00000000000000b5;
  undefined8 in_stack_000000b8;
  undefined1 uStack00000000000000c0;
  undefined1 uStack00000000000000c1;
  undefined1 uStack00000000000000c2;
  undefined1 uStack00000000000000c3;
  undefined4 uStack00000000000000c4;
  undefined1 uStack00000000000000c8;
  undefined4 uStack00000000000000c9;
  undefined3 uStack00000000000000cd;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined3 uStack00000000000000e4;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  char cStack000000000000011c;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_ContentLength__);
  thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_CheckBadChars__);
  thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_GetAsString__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                    );
  *(undefined1 *)(unaff_x24 + 0xe5b) = 1;
  cStack000000000000011c = '\0';
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  lVar10 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_030f2380(lVar10,*unaff_x19);
  uVar11 = thunk_FUN_01ecad80(unaff_w21);
  puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if ((uVar11 & 1) == 0) {
    return lVar10;
  }
  lVar15 = *unaff_x22;
  if (lVar15 == 0) goto LAB_034f3eb8;
  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_034f3ebc;
  uVar18 = *(undefined8 *)(lVar15 + 0x20);
  if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  FUN_0354c030(&stack0x00000110,uVar18,0);
  lVar15 = *unaff_x22;
  if (lVar15 == 0) goto LAB_034f3eb8;
  if (*(uint *)(lVar15 + 0x18) < 2) goto LAB_034f3ebc;
  FUN_0354c030(&stack0x00000108,*(undefined8 *)(lVar15 + 0x28),0);
  lVar15 = *unaff_x22;
  if (lVar15 == 0) goto LAB_034f3eb8;
  if (*(uint *)(lVar15 + 0x18) < 4) {
LAB_034f3ebc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar18 = *(undefined8 *)(lVar15 + 0x38);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar15 = *unaff_x22;
    if (lVar15 == 0) goto LAB_034f3eb8;
  }
  uVar13 = in_stack_00000108;
  if (*(uint *)(lVar15 + 0x18) < 4) goto LAB_034f3ebc;
  if (*(long *)(lVar15 + 0x38) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_0354da20(&stack0x00000110,uVar13,0);
    if ((uVar11 & 1) != 0) {
      return lVar10;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0354c5fc(&stack0x00000100,unaff_w21,1,1,0,0,0,0);
    uVar3 = FUN_0354d470(unaff_w21,0xc,0);
    FUN_0354c244(&stack0x000000f8,unaff_w21,0xc,uVar3,0);
    uVar3 = FUN_0354d470(unaff_w21,0xc,0);
    FUN_0354c5fc(&stack0x000000f0,unaff_w21,0xc,uVar3,0x17,0x3b,0x3b,999);
    if (cStack000000000000011c == '\0') {
      in_stack_000000d8 = 0;
      FUN_0354c244(&stack0x000000d8,1,1,1,0);
      in_stack_000000e8 = in_stack_000000d8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_0354e8f0(&stack0x00000110,0);
      uVar13 = FUN_0354ccd0(&stack0x000000e8,uVar13,0);
      uVar3 = FUN_0354e68c(&stack0x00000110,0);
      uVar4 = FUN_0354e33c(&stack0x00000110,0);
      FUN_034f522c(uVar13,uVar3,1,uVar4,0);
      in_stack_000000d0 = 0;
      FUN_0354c244(&stack0x000000d0,1,1,1,0);
      in_stack_000000e8 = in_stack_000000d0;
      uVar12 = FUN_0354e8f0(&stack0x00000108,0);
      uVar12 = FUN_0354ccd0(&stack0x000000e8,uVar12,0);
      uVar5 = FUN_0354e68c(&stack0x00000108,0);
      uVar6 = FUN_0354e33c(&stack0x00000108,0);
      FUN_034f522c(uVar12,uVar5,1,uVar6,0);
      uStack00000000000000c0 = (undefined1)uVar3;
      uStack00000000000000c1 = 1;
      uStack00000000000000c2 = (undefined1)uVar4;
      uStack00000000000000c3 = 0;
      uStack00000000000000c4 = 0;
      uStack00000000000000c8 = 1;
      uStack00000000000000c9 = 0;
      uStack00000000000000cd = 0;
      uStack00000000000000a8 = (undefined1)uVar5;
      uStack00000000000000a9 = 1;
      uStack00000000000000aa = (undefined1)uVar6;
      uStack00000000000000ab = 0;
      uStack00000000000000ac = 0;
      uStack00000000000000b0 = 1;
      uStack00000000000000b5 = 0;
      uStack00000000000000b1 = 0;
      in_stack_000000a0 = uVar12;
      in_stack_000000b8 = uVar13;
      uVar18 = FUN_034f3ec0(in_stack_00000100,in_stack_000000f8,uVar18,&stack0x000000b8,
                            &stack0x000000a0);
      if (lVar10 == 0) goto LAB_034f3eb8;
      iVar17 = *(int *)(lVar10 + 0x1c);
      lVar15 = *(long *)(lVar10 + 0x10);
    }
    else {
      in_stack_000000d8 = 0;
      FUN_0354c244(&stack0x000000d8,1,1,1,0);
      uVar13 = in_stack_000000d8;
      uStack00000000000000e0 = 0;
      uStack00000000000000e4 = 0;
      FUN_034f522c(in_stack_000000d8,1,1,1,0);
      in_stack_000000d0 = 0;
      FUN_0354c244(&stack0x000000d0,1,1,1,0);
      in_stack_000000e8 = in_stack_000000d0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_0354e8f0(&stack0x00000110,0);
      uVar12 = FUN_0354ccd0(&stack0x000000e8,uVar12,0);
      uVar3 = FUN_0354e68c(&stack0x00000110,0);
      uVar4 = FUN_0354e33c(&stack0x00000110,0);
      FUN_034f522c(uVar12,uVar3,1,uVar4,0);
      in_stack_00000098 = 0;
      FUN_0354c244(&stack0x00000098,unaff_w21,1,1,0);
      uVar5 = FUN_0354e970(&stack0x00000110,0);
      uVar6 = FUN_0354e68c(&stack0x00000110,0);
      uVar7 = FUN_0354e33c(&stack0x00000110,0);
      in_stack_00000090 = 0;
      FUN_0354c244(&stack0x00000090,uVar5,uVar6,uVar7,0);
      uStack0000000000000088 = 1;
      uStack0000000000000068 = (undefined1)uVar3;
      uStack0000000000000069 = 1;
      uStack000000000000006a = (undefined1)uVar4;
      uStack000000000000006b = 0;
      uStack000000000000006c = 0;
      uStack0000000000000070 = 1;
      in_stack_00000078 = uVar13;
      in_stack_00000080 = 0x10101;
      uStack0000000000000089 = uStack00000000000000e0;
      uStack000000000000008d = uStack00000000000000e4;
      uStack0000000000000071 = 0;
      uStack0000000000000075 = 0;
      in_stack_00000060 = uVar12;
      uVar13 = FUN_034f3ec0(in_stack_00000098,in_stack_00000090,uVar18,&stack0x00000078,
                            &stack0x00000060);
      if (lVar10 == 0) goto LAB_034f3eb8;
      lVar15 = *(long *)(lVar10 + 0x10);
      lVar16 = *(long *)Method_System_Net_WebRequest_get_ContentLength__;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_034f3eb8;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar10,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      in_stack_00000058 = 0;
      FUN_0354c244(&stack0x00000058,1,1,1,0);
      in_stack_000000e8 = in_stack_00000058;
      uVar13 = FUN_0354e8f0(&stack0x00000108,0);
      uVar13 = FUN_0354ccd0(&stack0x000000e8,uVar13,0);
      uVar3 = FUN_0354e68c(&stack0x00000108,0);
      uVar4 = FUN_0354e33c(&stack0x00000108,0);
      FUN_034f522c(uVar13,uVar3,1,uVar4,0);
      in_stack_00000050 = 0;
      FUN_0354c244(&stack0x00000050,1,1,1,0);
      in_stack_000000e8 = in_stack_00000050;
      uVar12 = FUN_0354e8f0(&stack0x000000f0,0);
      uVar12 = FUN_0354ccd0(&stack0x000000e8,uVar12,0);
      uVar5 = FUN_0354e68c(&stack0x000000f0,0);
      uVar6 = FUN_0354e33c(&stack0x000000f0,0);
      FUN_034f522c(uVar12,uVar5,1,uVar6,0);
      uVar7 = FUN_0354e970(&stack0x00000110,0);
      uVar8 = FUN_0354e68c(&stack0x00000110,0);
      uVar9 = FUN_0354e33c(&stack0x00000110,0);
      in_stack_00000048 = 0;
      FUN_0354c244(&stack0x00000048,uVar7,uVar8,uVar9,0);
      in_stack_000000e8 = in_stack_00000048;
      uVar14 = FUN_0354cf64(0x3ff0000000000000,&stack0x000000e8,0);
      uStack0000000000000038 = (undefined1)uVar3;
      uStack0000000000000039 = 1;
      uStack000000000000003a = (undefined1)uVar4;
      uStack000000000000003b = 0;
      uStack000000000000003c = 0;
      uStack0000000000000040 = 1;
      uStack0000000000000041 = 0;
      uStack0000000000000045 = 0;
      uStack0000000000000020 = (undefined1)uVar5;
      uStack0000000000000021 = 1;
      uStack0000000000000022 = (undefined1)uVar6;
      uStack0000000000000023 = 0;
      uStack0000000000000024 = 0;
      uStack0000000000000028 = 1;
      uStack0000000000000029 = 0;
      uStack000000000000002d = 0;
      in_stack_00000018 = uVar12;
      in_stack_00000030 = uVar13;
      uVar18 = FUN_034f3ec0(uVar14,in_stack_000000f8,uVar18,&stack0x00000030,&stack0x00000018);
      iVar17 = *(int *)(lVar10 + 0x1c);
      lVar15 = *(long *)(lVar10 + 0x10);
    }
    lVar16 = *(long *)Method_System_Net_WebRequest_get_ContentLength__;
    *(int *)(lVar10 + 0x1c) = iVar17 + 1;
    if (lVar15 == 0) {
LAB_034f3eb8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4(lVar10,uVar18,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  return lVar10;
}


