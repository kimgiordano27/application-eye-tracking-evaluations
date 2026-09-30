/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_sessiongroup_remove_session_t
ENTRY_POINT: 08488f84
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_sessiongroup_remove_session_t
               (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  iVar7 = (**(code **)(param_1 + 0x238))();
  if (iVar7 == 0xb) {
    lVar13 = 0;
  }
  else {
    plVar8 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    lVar13 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e9d0);
    System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              (lVar13,*(undefined8 *)PTR_DAT_0927e9c8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_091ae058 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_091ae058)) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(plVar8);
    }
    FUN_05a3a290(&stack0x00000008,plVar8,*(undefined8 *)PTR_DAT_091b40a8);
    puVar5 = PTR_DAT_0927e9c0;
    puVar4 = PTR_DAT_0927e750;
    puVar3 = PTR_DAT_091b4098;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar9 = FUN_06daab3c(&stack0x00000020,*(undefined8 *)puVar3), uVar6 = in_stack_00000030,
          (uVar9 & 1) != 0) {
      lVar10 = thunk_FUN_03d2ef40(*(undefined8 *)puVar4);
      FUN_071bc31c(lVar10,0);
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
      thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x10),uVar6);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar11 = *(long *)(lVar13 + 0x10);
      lVar12 = *(long *)puVar5;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar2 = *(uint *)(lVar13 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
        plVar8 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
        *plVar8 = lVar10;
        thunk_FUN_03d1023c(plVar8,lVar10);
      }
      else {
        FUN_05a39734(lVar13,lVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_091b4090);
  }
  return lVar13;
}


