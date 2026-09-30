/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_added_t_alias_username_get
ENTRY_POINT: 0811e194
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0811e45c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_added_t_alias_username_get
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  thunk_FUN_03cd7500(param_1);
  uVar11 = **(undefined8 **)(*unaff_x24 + 0xb8);
  uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f027d8);
  FUN_04d5364c(uVar5,uVar11,*(undefined8 *)PTR_DAT_08f027f8,0);
  puVar6 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
  *puVar6 = uVar5;
  thunk_FUN_03d233cc(puVar6,uVar5);
  plVar7 = (long *)FUN_046238e4();
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f027e0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0811e254;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08f027e0,0);
LAB_0811e254:
    puVar2 = PTR_DAT_08e6a288;
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar4 = PTR_DAT_08f027e8;
    puVar3 = PTR_DAT_08e6a290;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0811e2cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar3,0);
LAB_0811e2cc:
      uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar9 & 1) == 0) goto LAB_0811e364;
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0811e328;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar4,0);
LAB_0811e328:
      (*(code *)*puVar6)(&stack0x00000030,plVar7,puVar6[1]);
      (**(code **)(unaff_x20 + 0x18))
                (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000030,
                 *(undefined8 *)(unaff_x20 + 0x28));
    } while( true );
  }
  goto 
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
  ;
LAB_0811e364:
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0811e3b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_0811e3b8:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  lVar8 = *(long *)(unaff_x19 + 0x28);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_071245a8(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
    }
    return;
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
  :
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


