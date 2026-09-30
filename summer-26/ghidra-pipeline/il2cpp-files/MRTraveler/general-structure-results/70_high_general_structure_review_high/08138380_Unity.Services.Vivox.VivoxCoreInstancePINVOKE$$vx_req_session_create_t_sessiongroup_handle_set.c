/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_sessiongroup_handle_set
ENTRY_POINT: 08138380
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  thunk_FUN_03cd7500();
  FUN_081371c4();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_06a4e380();
  if (*(char *)(unaff_x19 + 0xc) != '\0') {
    lVar7 = *(long *)(unaff_x20 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x24 + 0x18);
    uStack000000000000000c = *(undefined2 *)(unaff_x19 + 0xc);
    uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e98298,(long)&stack0x00000008 + 4);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar3 = FUN_0813669c(uVar10,*(undefined8 *)PTR_DAT_08e69460,*(undefined8 *)PTR_DAT_08f03460,
                         uVar3);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar3,uVar3);
    }
    FUN_0555da18(lVar7,uVar3,*(undefined8 *)PTR_DAT_08f03448);
  }
  if (*(char *)((long)unaff_x19 + 0x32) != '\0') {
    lVar7 = *(long *)(unaff_x20 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x24 + 0x18);
    uStack0000000000000008 = *(undefined2 *)((long)unaff_x19 + 0x32);
    uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e98298,&stack0x00000008);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar3 = FUN_0813669c(uVar10,*(undefined8 *)PTR_DAT_08e69460,*(undefined8 *)PTR_DAT_08f03470,
                         uVar3);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar3,uVar3);
    }
    FUN_0555da18(lVar7,uVar3,*(undefined8 *)PTR_DAT_08f03448);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)PTR_DAT_08f03478;
  thunk_FUN_03d233cc();
  puVar2 = PTR_DAT_08f02d50;
  plVar8 = *(long **)(unaff_x24 + 0x18);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f02d50) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0813852c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08f02d50,0);
LAB_0813852c:
  uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
  uVar5 = FUN_06f74e14(uVar3,0);
  puVar1 = PTR_DAT_08e782c8;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar5 = FUN_0555e280(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08e782c8,
                         *(undefined8 *)PTR_DAT_08f03450);
    if ((uVar5 & 1) == 0) {
      plVar8 = *(long **)(unaff_x24 + 0x18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *plVar8;
      lVar9 = *(long *)(unaff_x20 + 0x20);
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_081385c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar2,0);
LAB_081385c4:
      uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      uVar3 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar3,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8(lVar9,*(undefined8 *)puVar1,uVar3,*(undefined8 *)PTR_DAT_08f033d0);
    }
  }
  plVar8 = *(long **)(unaff_x24 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *plVar8;
  lVar9 = *(long *)PTR_DAT_08f03440;
  uVar3 = *(undefined8 *)PTR_DAT_08f03458;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_08138680;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  lVar7 = FUN_03cf1348(plVar8);
LAB_08138680:
  lVar7 = thunk_FUN_03c86018(*(undefined8 *)(lVar7 + 8),lVar9);
  lVar7 = (**(code **)(lVar7 + 8))(plVar8,uVar3);
  if (lVar7 != 0) {
    in_stack_00000018 = FUN_05c0b91c(lVar7,*(undefined8 *)PTR_DAT_08f02d70);
    uVar5 = FUN_05ac7d38(&stack0x00000018,*(undefined8 *)PTR_DAT_08f02d68);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417d6e0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar3 = FUN_05ac7d7c(&stack0x00000018,*(undefined8 *)PTR_DAT_08f02d60);
      *unaff_x19 = 0xfffffffe;
      puVar2 = PTR_DAT_08f03438;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


