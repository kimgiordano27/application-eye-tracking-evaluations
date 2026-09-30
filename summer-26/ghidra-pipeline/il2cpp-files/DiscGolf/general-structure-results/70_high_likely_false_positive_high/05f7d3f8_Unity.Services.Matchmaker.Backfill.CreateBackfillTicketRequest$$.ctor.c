/*
FUNCTION_NAME: Unity.Services.Matchmaker.Backfill.CreateBackfillTicketRequest$$.ctor
ENTRY_POINT: 05f7d3f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Matchmaker_Backfill_CreateBackfillTicketRequest___ctor(undefined4 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int in_w9;
  uint uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int iVar7;
  long *unaff_x29;
  double dVar8;
  float unaff_s8;
  undefined4 unaff_s12;
  float unaff_s13;
  undefined4 unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000354;
  undefined4 in_stack_00000360;
  undefined8 in_stack_00000390;
  
  uStack0000000000000024 = param_1;
  if (in_w9 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0636baa4(&stack0x00000278);
  FUN_0637e6f4();
  FUN_0636baa4(&stack0x00000228);
  FUN_0637e6f4();
  FUN_06374f58(unaff_s15,unaff_s12);
  FUN_06374f58(in_stack_00000040._4_4_,in_stack_00000354);
  FUN_06374f58(in_stack_00000360,uStack0000000000000014,in_stack_00000020,in_stack_00000018._4_4_);
  FUN_06374f58(fStack000000000000003c,unaff_s8 * unaff_s13,uStack000000000000002c,
               uStack0000000000000028);
  FUN_06374f58(uStack0000000000000030,uStack0000000000000024,uStack0000000000000038,
               uStack0000000000000034);
  FUN_0637501c(in_stack_00000048,in_stack_00000050._4_4_,in_stack_00000070,in_stack_00000078);
  puVar4 = PTR_DAT_06a0d0d0;
  if (0.0 < fStack000000000000003c) {
    if (*(int *)(*(long *)PTR_DAT_06a0d0d0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0636baa4(&stack0x00000278);
    if (*(int *)(*(long *)PTR_DAT_06a0d728 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05f9c9dc();
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) == 0)
    {
      thunk_FUN_02df485c();
    }
    FUN_05f97f18();
    if (fStack0000000000000010 <= in_stack_00000008._4_4_) {
      fStack0000000000000010 = in_stack_00000008._4_4_;
    }
    if (DAT_06dbc6d3 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06dbc6d3 = '\x01';
    }
    puVar3 = PTR_DAT_069fbb48;
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    dVar8 = (double)FUN_054e8f58((double)fStack0000000000000010,0x4000000000000000,0);
    if (DAT_06db4c78 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c78 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = (uint)dVar8;
    uVar6 = 0;
    if ((int)uVar5 < 2) {
      uVar5 = 1;
    }
    do {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar1 = uVar6 & 1;
      FUN_06374de0();
      uVar2 = unaff_x23;
      if (uVar1 != 0) {
        uVar2 = unaff_x22;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0636baa4(&stack0x00000278,uVar2,0);
      FUN_0637e6f4();
      uVar2 = unaff_x22;
      if (uVar1 != 0) {
        uVar2 = unaff_x23;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0636baa4(&stack0x00000278,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_06a0d728 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05f9c9dc();
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) ==
          0) {
        thunk_FUN_02df485c();
      }
      FUN_05f97f18();
      uVar6 = uVar6 + 1;
    } while (((float)(int)dVar8 != INFINITY) && (uVar6 < uVar5));
    iVar7 = 0;
    do {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = (uVar6 & 1) + iVar7;
      FUN_06374de0();
      uVar2 = unaff_x23;
      if ((uVar5 & 1) != 0) {
        uVar2 = unaff_x22;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0636baa4(&stack0x00000278,uVar2,0);
      FUN_0637e6f4();
      uVar2 = unaff_x22;
      if ((uVar5 & 1) != 0) {
        uVar2 = unaff_x23;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0636baa4(&stack0x00000278,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_06a0d728 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05f9c9dc();
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) ==
          0) {
        thunk_FUN_02df485c();
      }
      FUN_05f97f18();
      iVar7 = iVar7 + 1;
    } while ((uVar1 ^ iVar7 + (uVar6 & 1)) != 3);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar4);
    }
    FUN_0636baa4(&stack0x00000278,uVar2,0);
    FUN_0637e6f4();
  }
  if (*(int *)(*(long *)PTR_DAT_06a0d728 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05f99618();
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05f97f18();
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05f87d0c(&stack0x00000278,in_stack_00000390,0);
  FUN_0637e6f4();
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0636baa4(&stack0x00000228,in_stack_00000058,0);
  FUN_05f9c9dc();
  FUN_05f97f18();
  return;
}


