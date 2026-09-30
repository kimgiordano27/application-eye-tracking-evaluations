/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_session_handle_set
ENTRY_POINT: 0843dbf8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_session_handle_set
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x24;
  long *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0927ccf0);
    FUN_03d2d2b0(PTR_DAT_091a4818);
    FUN_03d2d2b0(PTR_DAT_091a0f40);
    FUN_03d2d2b0(PTR_DAT_091a4838);
    FUN_03d2d2b0(PTR_DAT_091a0a80);
    FUN_03d2d2b0(PTR_DAT_091a1df8);
    FUN_03d2d2b0(PTR_DAT_091a0a78);
    FUN_03d2d2b0(PTR_DAT_091a2770);
    FUN_03d2d2b0(PTR_DAT_0927cd90);
    FUN_03d2d2b0(PTR_DAT_0927cd98);
    FUN_03d2d2b0(PTR_DAT_091fd950);
    FUN_03d2d2b0(PTR_DAT_091f92e0);
    FUN_03d2d2b0(PTR_DAT_091b0398);
    FUN_03d2d2b0(PTR_DAT_0927ccb0);
    FUN_03d2d2b0(PTR_DAT_0923bef0);
    FUN_03d2d2b0(PTR_DAT_091af1e8);
    FUN_03d2d2b0(PTR_DAT_0927cd30);
    FUN_03d2d2b0(PTR_DAT_0927cd00);
    *(undefined1 *)(unaff_x24 + 0xd9f) = 1;
  }
  puVar1 = PTR_DAT_091a2770;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_071bc31c(param_2,0);
  *(undefined8 *)(param_2 + 0x10) = param_3;
  thunk_FUN_03d1023c((undefined8 *)(param_2 + 0x10),param_3);
  *(undefined8 *)(param_2 + 0x18) = param_4;
  thunk_FUN_03d1023c((undefined8 *)(param_2 + 0x18),param_4);
  *(undefined8 *)(param_2 + 0x20) = param_5;
  thunk_FUN_03d1023c((undefined8 *)(param_2 + 0x20),param_5);
  puVar11 = (undefined8 *)(param_2 + 0x28);
  *puVar11 = param_6;
  thunk_FUN_03d1023c(puVar11,param_6);
  lVar4 = FUN_03d2d394(*(undefined8 *)puVar1,5);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_0927cd00;
      thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x20));
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x28) = param_3;
        thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x28),param_3);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_0927ccb0;
          thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x30));
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x38) = param_4;
            thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x38),param_4);
            puVar2 = PTR_DAT_091a0a80;
            puVar1 = PTR_DAT_091a0a78;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_0927cd30;
              thunk_FUN_03d1023c();
              uVar5 = FUN_06fd2590(lVar4,0);
              puVar10 = (undefined8 *)(param_2 + 0x30);
              *puVar10 = uVar5;
              thunk_FUN_03d1023c(puVar10,uVar5);
              lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
              System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                        (lVar4,*(undefined8 *)puVar2);
              puVar1 = PTR_DAT_0927cd98;
              lVar12 = *(long *)(param_2 + 0x20);
              if (lVar12 != 0) {
                lVar6 = *(long *)PTR_DAT_0927cd98;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                  lVar6 = *(long *)puVar1;
                }
                puVar3 = PTR_DAT_091a4818;
                puVar2 = PTR_DAT_091a0f40;
                lVar13 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar13 == 0) {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_03db619c();
                    lVar6 = *(long *)puVar1;
                  }
                  uVar5 = **(undefined8 **)(lVar6 + 0xb8);
                  lVar13 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a4838);
                  FUN_054bec28(lVar13,uVar5,*(undefined8 *)PTR_DAT_0927cd90,0);
                  plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar7 = lVar13;
                  thunk_FUN_03d1023c(plVar7,lVar13);
                }
                puVar1 = PTR_DAT_091f92e0;
                uVar5 = FUN_04f133b8(lVar12,lVar13,*(undefined8 *)puVar3);
                uVar8 = FUN_04f22458(uVar5,*(undefined8 *)puVar2);
                uVar5 = uVar8;
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  uVar5 = thunk_FUN_03db619c(*unaff_x25);
                }
                FUN_08431638(uVar5,lVar4,*(undefined8 *)puVar1,uVar8);
              }
              uVar9 = FUN_06fd246c(*puVar11,0);
              if ((uVar9 & 1) == 0) {
                lVar12 = *unaff_x25;
                uVar5 = *puVar11;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  lVar12 = thunk_FUN_03db619c();
                }
                FUN_08431540(lVar12,lVar4,*(undefined8 *)PTR_DAT_091fd950,uVar5);
              }
              puVar1 = PTR_DAT_091b0398;
              if (lVar4 != 0) {
                if (0 < *(int *)(lVar4 + 0x18)) {
                  uVar8 = *puVar10;
                  uVar5 = FUN_06fd3398(*(undefined8 *)PTR_DAT_091af1e8,lVar4,0);
                  uVar5 = FUN_06fd2168(uVar8,*(undefined8 *)puVar1,uVar5,0);
                  *puVar10 = uVar5;
                  thunk_FUN_03d1023c(puVar10,uVar5);
                  return;
                }
                return;
              }
              goto LAB_0843e00c;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
LAB_0843e00c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


