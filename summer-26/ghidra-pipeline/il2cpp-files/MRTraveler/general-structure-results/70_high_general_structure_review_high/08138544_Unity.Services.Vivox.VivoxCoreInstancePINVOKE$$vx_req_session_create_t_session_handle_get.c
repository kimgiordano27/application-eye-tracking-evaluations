/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_session_handle_get
ENTRY_POINT: 08138544
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_session_handle_get(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_DAT_08e782c8;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar2 = FUN_0555e280(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08e782c8,
                       *(undefined8 *)PTR_DAT_08f03450);
  if ((uVar2 & 1) == 0) {
    plVar8 = *(long **)(unaff_x24 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar8;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_081385c4;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar8,*unaff_x23,0);
LAB_081385c4:
    uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    uVar4 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar4,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0555e3a8(lVar7,*(undefined8 *)puVar1,uVar4,*(undefined8 *)PTR_DAT_08f033d0);
  }
  plVar8 = *(long **)(unaff_x24 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *plVar8;
  lVar7 = *(long *)PTR_DAT_08f03440;
  uVar4 = *(undefined8 *)PTR_DAT_08f03458;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
        goto LAB_08138680;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  lVar5 = FUN_03cf1348(plVar8);
LAB_08138680:
  lVar5 = thunk_FUN_03c86018(*(undefined8 *)(lVar5 + 8),lVar7);
  lVar5 = (**(code **)(lVar5 + 8))(plVar8,uVar4);
  if (lVar5 != 0) {
    in_stack_00000018 = FUN_05c0b91c(lVar5,*(undefined8 *)PTR_DAT_08f02d70);
    uVar2 = FUN_05ac7d38(&stack0x00000018,*(undefined8 *)PTR_DAT_08f02d68);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417d6e0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar4 = FUN_05ac7d7c(&stack0x00000018,*(undefined8 *)PTR_DAT_08f02d60);
      *unaff_x19 = 0xfffffffe;
      puVar1 = PTR_DAT_08f03438;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


