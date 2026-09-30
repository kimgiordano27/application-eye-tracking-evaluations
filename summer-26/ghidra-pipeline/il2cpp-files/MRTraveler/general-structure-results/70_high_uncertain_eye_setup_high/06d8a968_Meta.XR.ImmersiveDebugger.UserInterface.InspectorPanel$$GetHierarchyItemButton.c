/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$GetHierarchyItemButton
ENTRY_POINT: 06d8a968
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__GetHierarchyItemButton
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  puVar1 = PTR_DAT_08e68f00;
  if ((DAT_09419a4c & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68f00);
    DAT_09419a4c = 1;
  }
  lVar2 = FUN_06d8a454(param_4,8);
  uVar3 = FUN_06d8a454(param_4,10);
  lVar4 = FUN_06d8a454(param_4,0xb);
  lVar5 = FUN_06d8a454(param_4,0x13);
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  in_stack_00000008 = lVar2;
  thunk_FUN_03d233cc(&stack0x00000008,lVar2);
  in_stack_00000010 = uVar3;
  thunk_FUN_03d233cc(&stack0x00000010,uVar3);
  in_stack_00000018 = lVar4;
  thunk_FUN_03d233cc(&stack0x00000018,lVar4);
  in_stack_00000020 = lVar5;
  thunk_FUN_03d233cc(&stack0x00000020,lVar5);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar6 = FUN_085decd4(lVar2,0,0);
  if ((uVar6 & 1) == 0) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    puVar7 = *(undefined4 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    uVar9 = *puVar7;
    param_2 = (float)puVar7[1];
    param_3 = (float)puVar7[2];
  }
  else {
    if (lVar2 == 0) goto LAB_06d8abf0;
    uVar9 = FUN_085ea65c(lVar2,0);
  }
  in_stack_00000028 = CONCAT44(param_2,uVar9);
  _uStack0000000000000030 = CONCAT44(uStack0000000000000034,param_3);
  if ((lVar5 != 0) && (fVar10 = (float)FUN_085eb198(lVar5,0), lVar4 != 0)) {
    fVar13 = param_2;
    fVar12 = param_3;
    fVar11 = (float)FUN_085eb198(lVar4,0);
    param_2 = param_2 - fVar13;
    param_3 = param_3 - fVar12;
    fVar10 = (float)FUN_085ec73c(fVar10 - fVar11,lVar4,0);
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar13 = SQRT(param_3 * param_3 + fVar10 * fVar10 + param_2 * param_2);
    if (fVar13 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar8 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar10 = *pfVar8;
      param_2 = pfVar8[1];
      param_3 = pfVar8[2];
    }
    else {
      fVar10 = fVar10 / fVar13;
      param_2 = param_2 / fVar13;
      param_3 = param_3 / fVar13;
    }
    _uStack0000000000000030 = CONCAT44(fVar10,uStack0000000000000030);
    in_stack_00000038 = CONCAT44(param_3,param_2);
    *(long *)(param_4 + 0x60) = in_stack_00000020;
    *(long *)(param_4 + 0x58) = in_stack_00000018;
    *(undefined8 *)(param_4 + 0x78) = in_stack_00000038;
    *(undefined8 *)(param_4 + 0x70) = _uStack0000000000000030;
    *(undefined8 *)(param_4 + 0x68) = in_stack_00000028;
    *(undefined8 *)(param_4 + 0x50) = in_stack_00000010;
    *(long *)(param_4 + 0x48) = in_stack_00000008;
    thunk_FUN_03d233cc(param_4 + 0x48,0);
    return;
  }
LAB_06d8abf0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


