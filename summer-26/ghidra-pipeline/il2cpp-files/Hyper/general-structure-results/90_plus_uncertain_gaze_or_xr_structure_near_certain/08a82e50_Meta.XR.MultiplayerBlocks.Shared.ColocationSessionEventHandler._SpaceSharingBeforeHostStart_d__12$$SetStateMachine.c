/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$SetStateMachine
ENTRY_POINT: 08a82e50
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__SetStateMachine
               (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int in_w8;
  int *piVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x22;
  undefined4 uStack0000000000000008;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = 0;
  if (in_w8 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (unaff_x20[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = FUN_08a3d71c(unaff_x20[0x28],*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = FUN_07764808(lVar2,*(undefined8 *)PTR_DAT_0ac54988);
    uVar3 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac54980);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a26aac(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar2 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac54978);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  unaff_x20[0x2e] = lVar2;
  thunk_FUN_049ee3d8(unaff_x20 + 0x2e);
  (**(code **)(*unaff_x20 + 0x188))();
  FUN_089950c8();
  puVar1 = PTR_DAT_0ac46eb8;
  *(undefined4 *)(unaff_x20 + 0x22) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *(long *)puVar1;
  }
  plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *plVar6;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar7 = *(undefined8 *)PTR_DAT_0ac54990;
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_08a83000;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a83000:
  (*(code *)*puVar4)(plVar6,uVar7,puVar4[1]);
  lVar2 = *unaff_x22;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


