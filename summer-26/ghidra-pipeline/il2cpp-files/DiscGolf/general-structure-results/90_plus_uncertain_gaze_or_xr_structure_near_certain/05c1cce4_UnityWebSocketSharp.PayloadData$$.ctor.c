/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData$$.ctor
ENTRY_POINT: 05c1cce4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c1cd3c) */

void UnityWebSocketSharp_PayloadData___ctor(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char *in_stack_00000070;
  undefined8 *in_stack_00000078;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_05c1ca1c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_02dd004c();
LAB_05c1ca1c:
  uVar6 = (*(code *)*puVar5)();
  if (*(char *)(unaff_x19 + 0x12) == '\0') {
    bVar2 = (uVar6 & 1) == 0;
    lVar7 = 0x171;
    if (bVar2) {
      lVar7 = 0x181;
    }
    lVar1 = 0x174;
    if (bVar2) {
      lVar1 = 0x184;
    }
    if (*(char *)(unaff_x21 + lVar7) != '\0' && *(int *)(unaff_x21 + lVar1) != 0) {
      plVar4 = *(long **)(unaff_x19 + 0xe);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      if (iVar3 < 400) {
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 10) + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined1 *)(lVar7 + 0x18) = 1;
      }
    }
    if (*(long *)(unaff_x21 + 0xf8) != 0) {
      FUN_05c310d4(*(long *)(unaff_x21 + 0xf8),0);
    }
    FUN_04a88530();
    iVar3 = 0x14;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    in_stack_00000078 = (undefined8 *)0x0;
    in_stack_00000070 = (char *)0x0;
  }
  else {
    if (*(char *)(unaff_x21 + 0xe0) != '\0') {
      *(undefined1 *)(unaff_x21 + 0xe0) = 0;
      if (*(long *)(unaff_x21 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05ced5b8(*(long *)(unaff_x21 + 0x90),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,0);
    }
    FUN_05c1a630();
    iVar3 = 0x16;
  }
  if ((in_stack_00000088 < 0) && (*in_stack_000000a0 != '\0')) {
    thunk_FUN_02da42ec(*in_stack_000000a8,0);
  }
  if (iVar3 != 0x16) {
    if (iVar3 == 0x14) goto LAB_05c1cba8;
    if (iVar3 != 0) {
      return;
    }
  }
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = (undefined8 *)0x0;
  in_stack_000000a0 = (char *)0x0;
  FUN_04a88530(&stack0x00000090,*(undefined8 *)(unaff_x19 + 0xe),1,
               *(undefined1 *)((long)unaff_x19 + 0x49));
  in_stack_00000068 = in_stack_00000098;
  in_stack_00000060 = in_stack_00000090;
  in_stack_00000078 = in_stack_000000a8;
  in_stack_00000070 = in_stack_000000a0;
LAB_05c1cba8:
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  LeanTween__value(unaff_x19 + 0xe,0);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  LeanTween__value(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_Dictionary<string,_ZipArchiveEntry>_Remove__ +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  in_stack_00000098 = in_stack_00000068;
  in_stack_00000090 = in_stack_00000060;
  in_stack_000000a8 = in_stack_00000078;
  in_stack_000000a0 = in_stack_00000070;
  FUN_03fa1828(unaff_x19 + 2,&stack0x00000090,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolume_CellData_PerScenarioData>_TryGetValue__
              );
  return;
}


