/*
FUNCTION_NAME: PlayFab.PlayFabCloudScriptAPI$$ListFunctions
ENTRY_POINT: 051af364
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x051af718) */
/* WARNING: Removing unreachable block (ram,0x051af5ec) */
/* WARNING: Removing unreachable block (ram,0x051af7f8) */
/* WARNING: Removing unreachable block (ram,0x051af7d8) */
/* WARNING: Removing unreachable block (ram,0x051af634) */

void PlayFab_PlayFabCloudScriptAPI__ListFunctions(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
                    /* try { // try from 051af364 to 052af36f has its CatchHandler @ 051af628 */
                    /* try { // try from 051af380 to 052af387 has its CatchHandler @ 051af624 */
  bVar1 = param_2 & 1;
  if ((DAT_06a51e38 & 1) == 0) {
    FUN_02d4dc40(PlayFab_EventsModels_SetDataConnectionActiveResponse_var);
                    /* try { // try from 051af394 to 052af397 has its CatchHandler @ 051af604 */
    FUN_02d4dc40(PlayFab_EventsModels_SetDataConnectionRequest_var);
                    /* try { // try from 051af3a4 to 052af3ab has its CatchHandler @ 051af600 */
    FUN_02d4dc40(PlayFab_EventsModels_SetDataConnectionResponse_var);
                    /* try { // try from 051af3ac to 052af3ef has its CatchHandler @ 051af124 */
    FUN_02d4dc40(ExitGames_Client_Photon_SerializationProtocol_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetDisplayNameRequest_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetDisplayNameResponse_var);
    FUN_02d4dc40(PTR_DAT_0664c118);
    FUN_02d4dc40(PTR_DAT_0664c120);
                    /* try { // try from 051af3f0 to 052af3fb has its CatchHandler @ 051af5b4 */
    FUN_02d4dc40(PlayFab_ProfilesModels_SetEntityProfilePolicyRequest_var);
    DAT_06a51e38 = 1;
  }
  in_stack_000000b8 = *(undefined8 *)(param_1 + 0x40);
  in_stack_000000b0 = 0;
  in_stack_000000a0 = 0;
                    /* try { // try from 051af410 to 052af42f has its CatchHandler @ 051af5cc */
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000088 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  thunk_FUN_02d5b8bc(in_stack_000000b8,0);
  in_stack_00000048 = &stack0x000000b8;
  in_stack_00000040 = 0;
  if (*(byte *)(param_1 + 0x10) != bVar1) {
    if ((param_2 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      in_stack_000000b0 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x108);
      thunk_FUN_02d5b8bc(in_stack_000000b0,0);
      in_stack_00000038 = &stack0x000000b0;
      in_stack_00000030 = 0;
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x108);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035abd4c(&stack0x00000008,lVar4,
                   *(undefined8 *)PlayFab_ProfilesModels_SetDisplayNameRequest_var);
      puVar2 = PlayFab_EventsModels_SetDataConnectionRequest_var;
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      in_stack_00000098 = in_stack_00000020;
      in_stack_00000090 = in_stack_00000018;
      in_stack_000000a0 = in_stack_00000028;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000080;
      while (uVar5 = FUN_049c66dc(&stack0x00000080,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x30);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if ((plVar6[5] != 0) && (*(int *)(plVar6[5] + 0x1c) == 2)) {
          if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar4 = *(long *)(in_stack_00000098 + 0x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          (**(code **)(*plVar6 + 600))
                    (plVar6,lVar4,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar6 + 0x260));
        }
      }
      FUN_049c687c(&stack0x00000080,
                   *(undefined8 *)PlayFab_EventsModels_SetDataConnectionActiveResponse_var);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x108);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035aba30(lVar4,*(undefined8 *)ExitGames_Client_Photon_SerializationProtocol_var);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*in_stack_00000038,0);
      if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0();
      }
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      in_stack_00000078 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100);
      thunk_FUN_02d5b8bc(in_stack_00000078,0);
      in_stack_00000038 = &stack0x00000078;
      in_stack_00000030 = 0;
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x100);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035abd4c(&stack0x00000008,lVar4,
                   *(undefined8 *)PlayFab_ProfilesModels_SetDisplayNameRequest_var);
      puVar2 = PlayFab_EventsModels_SetDataConnectionRequest_var;
      in_stack_00000058 = in_stack_00000010;
      in_stack_00000050 = in_stack_00000008;
      in_stack_00000068 = in_stack_00000020;
      in_stack_00000060 = in_stack_00000018;
      in_stack_00000070 = in_stack_00000028;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000050;
      while (uVar5 = FUN_049c66dc(&stack0x00000050,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
        if ((plVar6 != (long *)0x0) && (*(int *)((long)plVar6 + 0x1c) == 2)) {
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar4 = *(long *)(in_stack_00000068 + 0x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          (**(code **)(*plVar6 + 0x198))
                    (plVar6,lVar4,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar6 + 0x1a0));
        }
      }
      FUN_049c687c(&stack0x00000050,
                   *(undefined8 *)PlayFab_EventsModels_SetDataConnectionActiveResponse_var);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x100);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035aba30(lVar4,*(undefined8 *)ExitGames_Client_Photon_SerializationProtocol_var);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*in_stack_00000038,0);
      if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0();
      }
      *(byte *)(param_1 + 0x10) = bVar1;
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05069b90(*(long *)(param_1 + 0x40),0);
    }
    else {
                    /* try { // try from 051af444 to 052af44f has its CatchHandler @ 051af5b0 */
      plVar6 = (long *)(param_1 + 0x38);
      *(byte *)(param_1 + 0x10) = bVar1;
      if (*plVar6 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664c118);
                    /* try { // try from 051af464 to 052af483 has its CatchHandler @ 051af5c4 */
        FUN_050645dc(uVar3,uVar7,*(undefined8 *)PlayFab_ProfilesModels_SetDisplayNameResponse_var,0)
        ;
        lVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664c120);
                    /* try { // try from 051af494 to 052af49f has its CatchHandler @ 051af5a8 */
        FUN_0506ee38(lVar4,uVar3,0);
        *plVar6 = lVar4;
        thunk_FUN_02dc1ef0(plVar6,lVar4);
                    /* try { // try from 051af4b4 to 052af4d3 has its CatchHandler @ 051af5ac */
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0506f658(*plVar6,1,0);
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0506f76c(*plVar6,*(undefined8 *)PlayFab_ProfilesModels_SetEntityProfilePolicyRequest_var
                     ,0);
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
                    /* try { // try from 051af4e8 to 052af4ff has its CatchHandler @ 051af62c */
        FUN_0506f0c0(*plVar6,0);
      }
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05065df4(*(long *)(param_1 + 0x40),0);
    }
  }
  lVar4 = in_stack_00000040;
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*in_stack_00000048,0);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee0(lVar4);
}


