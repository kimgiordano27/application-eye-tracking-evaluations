/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 0566add8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566af60) */
/* WARNING: Removing unreachable block (ram,0x0566b014) */
/* WARNING: Removing unreachable block (ram,0x0566b004) */

void OVRPlugin__EnqueueSubmitLayer(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xba8));
  *(undefined1 *)(unaff_x21 + 0x659) = 1;
  in_stack_00000078 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  in_stack_00000078 = FUN_0564de84(0x11,0);
  puVar1 = System_Collections_Generic_List<ERTerrainChange>_TypeInfo;
  in_stack_00000038 = &stack0x00000078;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04e93a24(&stack0x00000008,*(long *)(unaff_x19 + 0x170),
               *(undefined8 *)System_Collections_Generic_List<ERTerrainChange>_TypeInfo);
  puVar3 = System_Collections_Generic_List<ERTexture>_TypeInfo;
  puVar2 = System_Collections_Generic_List<ERTerrainData>_TypeInfo;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000060 = in_stack_00000028;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000040;
  while (uVar4 = FUN_05232904(&stack0x00000040,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(in_stack_00000058 + 0x80) == 0) {
      FUN_05640198(in_stack_00000058,*(undefined1 *)(unaff_x19 + 0x178),0);
    }
  }
  FUN_05232a24(&stack0x00000040,*(undefined8 *)puVar2);
  if ((*(char *)(unaff_x19 + 0x178) != '\0') &&
     ((uVar4 = FUN_05670cec(), (uVar4 & 1) != 0 || (*(char *)(unaff_x19 + 0x179) != '\0')))) {
    lVar5 = FUN_05640754(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_056422d0(lVar5,*(undefined4 *)(unaff_x19 + 0xc0),0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04e93a24(&stack0x00000008,*(long *)(unaff_x19 + 0x170),*(undefined8 *)puVar1);
      in_stack_00000060 = in_stack_00000028;
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000040;
      while (uVar4 = FUN_05232904(&stack0x00000040,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_056406c8(in_stack_00000058,0);
      }
      FUN_05232a24(&stack0x00000040,*(undefined8 *)puVar2);
      *(undefined1 *)(unaff_x19 + 0x179) = 0;
    }
  }
  plVar8 = (long *)*in_stack_00000038;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0566afc8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_0566afc8:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


