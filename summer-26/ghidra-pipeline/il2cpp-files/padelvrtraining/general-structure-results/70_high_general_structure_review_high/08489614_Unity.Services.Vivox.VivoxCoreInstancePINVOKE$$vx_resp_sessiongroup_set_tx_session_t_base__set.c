/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_tx_session_t_base__set
ENTRY_POINT: 08489614
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long * Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_tx_session_t_base__set
                 (void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0927e9e0);
  FUN_03d2d2b0(PTR_DAT_091b40a8);
  FUN_03d2d2b0(PTR_DAT_0927e9d8);
  FUN_03d2d2b0(PTR_DAT_0927e9a8);
  *(undefined1 *)(unaff_x21 + 99) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  plVar8 = (long *)thunk_FUN_03d2ef40(*unaff_x22);
  System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (plVar8,*unaff_x19);
  puVar6 = PTR_DAT_0927e9e0;
  puVar5 = PTR_DAT_0927e750;
  puVar4 = PTR_DAT_091b4098;
  puVar3 = PTR_DAT_091b4090;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_05a3a290(&stack0x00000008);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while( true ) {
    uVar9 = FUN_06daab3c(&stack0x00000020,*(undefined8 *)puVar4);
    uVar7 = in_stack_00000030;
    if ((uVar9 & 1) == 0) {
      FUN_06daab38(&stack0x00000020,*(undefined8 *)puVar3);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x22 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar8);
        }
      }
      return plVar8;
    }
    lVar10 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
    FUN_071bc31c(lVar10,0);
    *(undefined8 *)(lVar10 + 0x10) = uVar7;
    thunk_FUN_03d1023c((undefined8 *)(lVar10 + 0x10),uVar7);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar12 = plVar8[2];
    lVar13 = *(long *)puVar6;
    *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar2 = *(uint *)(plVar8 + 3);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(plVar8 + 3) = uVar2 + 1;
      plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      *plVar11 = lVar10;
      thunk_FUN_03d1023c(plVar11,lVar10);
    }
    else {
      FUN_05a39734(plVar8,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


