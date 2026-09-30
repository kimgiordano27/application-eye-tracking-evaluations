/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 05ea02f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          uint param_6)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *__ptr;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x25;
  long unaff_x26;
  long *plVar9;
  long unaff_x27;
  long *plVar10;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000060;
  uint in_stack_00000068;
  undefined8 in_stack_000000b8;
  uint in_stack_000000c0;
  undefined8 in_stack_00000110;
  uint in_stack_00000118;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  plVar9 = *(long **)(unaff_x26 + 0x150);
  plVar10 = *(long **)(unaff_x27 + 0x730);
  if ((*(byte *)(unaff_x29 + 0x1ff) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a18170);
    FUN_03642964(PTR_DAT_07a18178);
    FUN_03642964(PTR_DAT_07a18180);
    FUN_03642964(PTR_DAT_07a18148);
    FUN_03642964(PTR_DAT_07a18150);
    FUN_03642964(PTR_DAT_07a18158);
    FUN_03642964(PTR_DAT_079f8730);
    FUN_03642964(PTR_DAT_07a18188);
    FUN_03642964(PTR_DAT_07a18190);
    *(undefined1 *)(unaff_x29 + 0x1ff) = 1;
  }
  puVar2 = PTR_DAT_07a18158;
  uVar4 = thunk_FUN_0367fa58(*plVar9,&stack0x00000240);
  lVar8 = *plVar10;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar8);
  }
  uVar4 = FUN_05d35708(uVar4,0);
  __ptr = (void *)thunk_FUN_0364eb70(uVar4,0);
  uVar4 = thunk_FUN_0367fa58(*(undefined8 *)puVar2,&stack0x00000220);
  FUN_05d35708(uVar4,0);
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  uVar4 = thunk_FUN_0367fa58(*plVar9,&stack0x000001c0);
  FUN_05d35708(uVar4,0);
  iVar3 = FUN_05ea0234(param_2,&stack0x000002a0,param_6 | 1);
  if (iVar3 != 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079f8730);
    FUN_03156be4();
    free(__ptr);
    thunk_FUN_036aa1c8(PTR_DAT_07a18070);
    uVar7 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a18160);
    FUN_05e9ec0c(uVar7,iVar3,uVar4);
LAB_05ea07c0:
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a18198);
    if (*(long *)(unaff_x25 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar7,uVar4);
    }
    goto LAB_05ea0810;
  }
  uVar4 = *(undefined8 *)PTR_DAT_07a18148;
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e26f18(uVar4,0);
  lVar8 = *plVar10;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar8);
  }
  plVar10 = (long *)thunk_FUN_0364ec38(__ptr,uVar4,0);
  if (plVar10 == (long *)0x0) {
    if (*(long *)(unaff_x25 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    goto LAB_05ea0810;
  }
  if (*(long *)(*plVar10 + 0x40) != *(long *)(*plVar9 + 0x40)) {
    if (*(long *)(unaff_x25 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    goto LAB_05ea0810;
  }
  puVar5 = (undefined8 *)thunk_FUN_0367ff68();
  uVar4 = *puVar5;
  uVar1 = *(uint *)(puVar5 + 1);
  memcpy(&stack0x000002c0,(void *)((long)puVar5 + 0xc),0x4c);
  free(__ptr);
  uVar6 = FUN_05ea0870(uVar1);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_05ea08d0(uVar1);
    if ((uVar6 & 1) == 0) {
      if ((int)uVar1 < 0x30050001) {
        if (((uVar1 == 0x10030000) || (uVar1 == 0x30030000)) || (uVar1 == 0x30050000))
        goto LAB_05ea0654;
LAB_05ea069c:
        if (uVar1 >> 1 == 0x38808000) goto LAB_05ea06ac;
        if (uVar1 != 0) {
          uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a181a0);
          uVar4 = thunk_FUN_0367fa58(uVar4,&stack0x00000240);
          uVar7 = thunk_FUN_036aa1c8(PTR_DAT_07a181a8);
          uVar4 = FUN_05c8e390(uVar7,uVar4,0);
          thunk_FUN_036aa1c8(PTR_DAT_079f7680);
          uVar7 = thunk_FUN_0367fe20();
          FUN_05e177c8(uVar7,uVar4,0);
          goto LAB_05ea07c0;
        }
        memcpy(&stack0x00000014,&stack0x000002c0,0x4c);
        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18178);
        in_stack_00000010 = 0;
        in_stack_00000008 = uVar4;
        FUN_05e9f3b8(uVar7,&stack0x00000008,param_2,param_6,param_5);
      }
      else if ((uVar1 + 0xaffd0000 < 5) || ((uVar1 & 0x7effffff) == 0x60030000)) {
LAB_05ea0654:
        memcpy(&stack0x000000c4,&stack0x000002c0,0x4c);
        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18190);
        in_stack_000000b8 = uVar4;
        in_stack_000000c0 = uVar1;
        FUN_05ea09f4(uVar7,&stack0x000000b8,param_2,param_6,param_5);
      }
      else {
        if ((1 < uVar1 + 0x8fff0000) && (uVar1 != 0x50030004)) goto LAB_05ea069c;
LAB_05ea06ac:
        memcpy(&stack0x0000006c,&stack0x000002c0,0x4c);
        uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18180);
        in_stack_00000060 = uVar4;
        in_stack_00000068 = uVar1;
        FUN_05e9f428(uVar7,&stack0x00000060,param_2,param_6,param_5);
      }
    }
    else {
      memcpy(&stack0x0000011c,&stack0x000002c0,0x4c);
      uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18188);
      in_stack_00000110 = uVar4;
      in_stack_00000118 = uVar1;
      FUN_05ea0924(uVar7,&stack0x00000110,param_2,param_6,param_5);
    }
  }
  else {
    memcpy(&stack0x00000174,&stack0x000002c0,0x4c);
    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a18170);
    in_stack_00000168 = uVar4;
    in_stack_00000170 = uVar1;
    FUN_05e9ed8c(uVar7,&stack0x00000168,param_2,param_6,param_5);
  }
  if (*(long *)(unaff_x25 + 0x28) == param_1) {
    return uVar7;
  }
LAB_05ea0810:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


