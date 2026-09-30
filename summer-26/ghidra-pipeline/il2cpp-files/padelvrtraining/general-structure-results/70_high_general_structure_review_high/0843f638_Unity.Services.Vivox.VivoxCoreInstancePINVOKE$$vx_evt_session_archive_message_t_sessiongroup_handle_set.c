/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_sessiongroup_handle_set
ENTRY_POINT: 0843f638
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0843f930) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_sessiongroup_handle_set
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  undefined8 *unaff_x25;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_03d1023c();
  lVar3 = FUN_03d2d394(*unaff_x22,2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *unaff_x25;
    thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x20));
    puVar1 = PTR_DAT_091a5a20;
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_091a85f0;
      uVar4 = thunk_FUN_03d1023c();
      uVar4 = FUN_08432024(uVar4,lVar3);
      uVar5 = FUN_06fd246c(uVar4,0);
      if ((uVar5 & 1) == 0) {
        FUN_06b6dddc();
      }
      uVar9 = *(undefined8 *)puVar1;
      uVar4 = FUN_084320fc();
      uVar5 = FUN_06fd246c(uVar4,0);
      if ((((uVar5 & 1) == 0) ||
          (uVar5 = thunk_FUN_06fd18b4(uVar9,*(undefined8 *)puVar1,0), (uVar5 & 1) != 0)) ||
         (uVar5 = thunk_FUN_06fd18b4(uVar9,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar5 & 1) != 0)) {
        FUN_06b6dddc();
      }
      if (unaff_x20 == 0) {
        return;
      }
      plVar8 = *(long **)(unaff_x20 + 0x28);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091af380) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0843f79c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091af380,0);
LAB_0843f79c:
      plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      puVar2 = PTR_DAT_091af388;
      puVar1 = PTR_DAT_091a1508;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0843f814;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)puVar1,0);
LAB_0843f814:
        uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar5 & 1) == 0) goto LAB_0843f89c;
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0843f870;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)puVar2,0);
LAB_0843f870:
        (*(code *)*puVar6)(plVar8,puVar6[1]);
        FUN_06b6ddc8();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
LAB_0843f89c:
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0843f8f8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091a14e0,0);
LAB_0843f8f8:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}


