/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 05673ce4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05673ed8) */

void OVRPlugin__SetHeadPoseModifier(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  int iStack0000000000000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  FUN_02dcfd74();
  lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if (*(long *)(lVar10 + 0x38) == 0) {
    FUN_02dcfd74(lVar10);
  }
  if (((iStack0000000000000038 < 1) || (in_stack_00000030 == 0)) ||
     (lVar10 = FUN_036ec9f8(in_stack_00000030,
                            CONCAT44(uStack000000000000003c,iStack0000000000000038),
                            *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x28)), lVar10 == 0)) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)
             FUN_036ec90c(in_stack_00000030,CONCAT44(uStack000000000000003c,iStack0000000000000038),
                          *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
  }
  puVar4 = System_Collections_Generic_List<Match>_TypeInfo;
  puVar3 = System_Collections_Generic_IList<IMetricObserver>_TypeInfo;
  puVar2 = PTR_DAT_06a0f1a0;
  lVar10 = 0;
  puVar9 = puVar8;
  do {
    *puVar9 = (int)lVar10;
    lVar10 = lVar10 + 1;
    puVar9 = puVar9 + 1;
  } while (lVar10 != 0x40);
  uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  _in_stack_00000020 = FUN_0564cad8(uVar1,&stack0x00000030);
  iVar7 = iStack0000000000000038;
  iVar6 = FUN_0420f3fc(&stack0x00000020,*(undefined8 *)puVar4);
  if (iVar7 == iVar6) {
    lVar11 = *(long *)System_Collections_Generic_IList<JToken>_TypeInfo;
    lVar10 = *(long *)(lVar11 + 0x38);
    if (lVar10 == 0) {
      FUN_02dcfd74(lVar11);
      lVar10 = *(long *)(lVar11 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 8);
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    uVar5 = _iStack0000000000000028;
    if (((iStack0000000000000028 < 1) || (in_stack_00000020 == 0)) ||
       (lVar10 = FUN_036ec9f8(in_stack_00000020,uVar5,
                              *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x28)), lVar10 == 0)) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)
               FUN_036ec90c(in_stack_00000020,_iStack0000000000000028,
                            *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
    }
    puVar2 = System_Collections_Generic_List<MarkToMarkAdjustmentRecord>_TypeInfo;
    for (lVar10 = 0; iVar7 = FUN_0420f3fc(&stack0x00000020,*(undefined8 *)puVar4), lVar10 < iVar7;
        lVar10 = lVar10 + 1) {
      if (*(long *)(unaff_x19 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04df5020(*(long *)(unaff_x19 + 0x100),*puVar8,*puVar9,*(undefined8 *)puVar2);
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  FUN_0420f404(&stack0x00000020,*(undefined8 *)puVar3);
  FUN_0423f4f8(in_stack_00000018,*(undefined8 *)System_Collections_Generic_List<Material>_TypeInfo);
  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(in_stack_00000010);
  }
  return;
}


