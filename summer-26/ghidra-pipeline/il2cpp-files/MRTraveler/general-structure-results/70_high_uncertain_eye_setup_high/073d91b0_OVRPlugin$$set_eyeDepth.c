/*
FUNCTION_NAME: OVRPlugin$$set_eyeDepth
ENTRY_POINT: 073d91b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4
OVRPlugin__set_eyeDepth
          (ulong param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined8 *param_5,
          undefined4 *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *unaff_x21;
  undefined8 *puVar11;
  int iVar12;
  long unaff_x25;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined4 in_stack_00000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined4 uStack000000000000011c;
  undefined4 in_stack_00000120;
  undefined8 uStack0000000000000124;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000013c;
  undefined4 in_stack_00000140;
  undefined4 uStack0000000000000144;
  undefined4 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 uStack0000000000000160;
  undefined8 uStack0000000000000164;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb3460);
    FUN_03c8f898(PTR_DAT_08eb5b98);
    FUN_03c8f898(PTR_DAT_08eb5ba0);
    FUN_03c8f898(PTR_DAT_08eb5ba8);
    FUN_03c8f898(PTR_DAT_08e78410);
    FUN_03c8f898(PTR_DAT_08eb5bb0);
    FUN_03c8f898(PTR_DAT_08eb5bb8);
    FUN_03c8f898(PTR_DAT_08eb5bc0);
    *(undefined1 *)(unaff_x25 + 0x727) = 1;
  }
  puVar3 = PTR_DAT_08eb3460;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  uStack000000000000013c = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  uStack0000000000000144 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  _uStack00000000000000c0 = 0;
  uStack0000000000000124 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  uStack000000000000010c = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  uStack000000000000011c = 0;
  in_stack_00000110 = 0;
  uStack0000000000000114 = 0;
  in_stack_000000d8 = 0;
  uStack00000000000000dc = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  uStack00000000000000ec = 0;
  in_stack_000000e0 = 0;
  uStack00000000000000e4 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_085e99cc(&stack0x00000070,0);
  in_stack_00000138 = uStack0000000000000078;
  in_stack_00000130 = in_stack_00000070;
  in_stack_00000148 = uStack0000000000000088;
  in_stack_00000140 = uStack0000000000000080;
  FUN_085e99cc(&stack0x00000070,0);
  uVar10 = param_3[2];
  uVar15 = param_3[1];
  uVar6 = *param_3;
  *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_3 + 3);
  param_5[2] = uVar10;
  param_5[1] = uVar15;
  *param_5 = uVar6;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar8);
    lVar8 = *(long *)puVar3;
  }
  lVar5 = *(long *)(param_2 + 0x20);
  if (lVar5 != 0) {
    puVar9 = *(undefined4 **)(lVar8 + 0xb8);
    iVar12 = 0;
    uVar18 = puVar9[1];
    uVar17 = puVar9[2];
    uVar19 = *puVar9;
    puVar11 = (undefined8 *)PTR_DAT_08eb5ba0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar12) {
        return uVar19;
      }
      FUN_0516b218(&stack0x00000070,lVar5,iVar12,*puVar11);
      uStack0000000000000124 = CONCAT44(in_stack_00000098,uStack0000000000000094);
      in_stack_00000108 = uStack0000000000000078;
      uStack000000000000010c = uStack000000000000007c;
      in_stack_00000100 = in_stack_00000070;
      in_stack_00000118 = uStack0000000000000088;
      in_stack_00000110 = uStack0000000000000080;
      uStack0000000000000114 = uStack0000000000000084;
      uStack000000000000011c = uStack000000000000008c;
      in_stack_00000120 = uStack0000000000000090;
      lVar8 = *(long *)(param_2 + 0x20);
      if (lVar8 == 0) break;
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar12 = iVar12 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar12 / iVar1;
      }
      uVar14 = uStack000000000000008c;
      FUN_0516b218(&stack0x00000070,lVar8,iVar12 - iVar2 * iVar1,*puVar11);
      in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      in_stack_000000d8 = uStack0000000000000078;
      uStack00000000000000dc = uStack000000000000007c;
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = uStack0000000000000088;
      uStack00000000000000ec = uStack000000000000008c;
      in_stack_000000e0 = uStack0000000000000080;
      uStack00000000000000e4 = uStack0000000000000084;
      if (uStack0000000000000124._4_1_ == '\0') {
        if ((in_stack_00000098 & 0xff) == 0) goto LAB_073d9374;
      }
      else {
        if ((in_stack_00000098 & 0xff) == 0) {
LAB_073d9374:
          if (*(long *)(param_2 + 0x20) == 0) break;
          if (*(int *)(*(long *)(param_2 + 0x20) + 0x18) == 1) goto LAB_073d9388;
          lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5bc0);
          FUN_07145224(lVar8,0);
          uStack0000000000000164 = CONCAT44(in_stack_00000118,uStack0000000000000114);
          in_stack_00000158 = in_stack_00000108;
          in_stack_00000150 = in_stack_00000100;
          uStack0000000000000160 = in_stack_00000110;
          FUN_0737f84c(&stack0x00000070,param_7,&stack0x00000150,0);
          if (lVar8 == 0) break;
          *(ulong *)(lVar8 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          *(ulong *)(lVar8 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar8 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar8 + 0x10) = in_stack_00000070;
          uStack0000000000000164 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
          in_stack_00000158 = in_stack_000000d8;
          in_stack_00000150 = in_stack_000000d0;
          uStack0000000000000160 = in_stack_000000e0;
          FUN_0737f84c(&stack0x00000070,param_7,&stack0x00000150,0);
          uVar10 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
          *(ulong *)(lVar8 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *(undefined8 *)(lVar8 + 0x38) = in_stack_00000070;
          *(ulong *)(lVar8 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
          *(undefined8 *)(lVar8 + 0x44) = uVar10;
          uVar13 = FUN_073d9690(&stack0x00000100,param_7);
          *(undefined4 *)(lVar8 + 0x2c) = uVar13;
          *(int *)(lVar8 + 0x30) = (int)uVar10;
          *(undefined4 *)(lVar8 + 0x34) = uVar14;
          FUN_073d96b4(*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4),
                       *(undefined4 *)(param_3 + 1),*(undefined4 *)(lVar8 + 0x10),
                       *(undefined4 *)(lVar8 + 0x14),*(undefined4 *)(lVar8 + 0x18),param_2,
                       lVar8 + 0x54);
          uVar13 = *(undefined4 *)(param_3 + 2);
          uVar16 = *(undefined4 *)((long)param_3 + 0x14);
          uVar14 = OVRPlugin__set_ipd(*(undefined4 *)((long)param_3 + 0xc),uVar13,uVar16,
                                      *(undefined4 *)(param_3 + 3),*(undefined4 *)(lVar8 + 0x1c),
                                      *(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                                      *(undefined4 *)(lVar8 + 0x28));
          *(undefined4 *)(lVar8 + 0x58) = uVar14;
          puVar4 = PTR_DAT_08eb5ba8;
          uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5ba8);
          FUN_073d8a38(uVar10,lVar8,*(undefined8 *)PTR_DAT_08eb5bb0);
          uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
          FUN_073d8a38(uVar6,lVar8,*(undefined8 *)PTR_DAT_08eb5bb8);
          uVar14 = FUN_073d8608(param_3,param_4,&stack0x00000130,param_6,param_7,uVar10,uVar6);
          _uStack00000000000000c0 = CONCAT44(uVar13,uVar14);
          puVar11 = (undefined8 *)PTR_DAT_08eb5ba0;
          in_stack_000000c8 = uVar16;
        }
        else {
LAB_073d9388:
          uStack0000000000000164 = CONCAT44(in_stack_00000118,uStack0000000000000114);
          in_stack_00000158 = in_stack_00000108;
          in_stack_00000150 = in_stack_00000100;
          uStack0000000000000160 = in_stack_00000110;
          FUN_0737f84c(&stack0x00000070,param_7,&stack0x00000150,0);
          in_stack_000000a8 = uStack0000000000000078;
          in_stack_000000a0 = in_stack_00000070;
          uStack00000000000000b4 = uStack0000000000000084;
          in_stack_000000b8 = uStack0000000000000088;
          uStack00000000000000ac = uStack000000000000007c;
          in_stack_000000b0 = uStack0000000000000080;
          FUN_0737f108(&stack0x00000130,&stack0x000000a0,0);
          uStack0000000000000078 = 0;
          in_stack_00000070 = 0;
          FUN_073d40f4(*param_6,&stack0x00000070,param_3,&stack0x00000130,param_4);
          _uStack00000000000000c0 = in_stack_00000070;
          in_stack_000000c8 = uStack0000000000000078;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar7 = FUN_073d2688(uVar19,uVar18,uVar17,&stack0x000000c0);
        uVar14 = in_stack_000000c8;
        if ((uVar7 & 1) != 0) {
          uVar19 = uStack00000000000000c0;
          uVar18 = uStack00000000000000c4;
          FUN_0737f108(param_5,&stack0x00000130,0);
          uVar17 = uVar14;
        }
      }
      lVar5 = *(long *)(param_2 + 0x20);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


