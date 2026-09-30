/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_added_t_type_get
ENTRY_POINT: 0811e080
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0811e45c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_added_t_type_get(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_03c8f898(PTR_DAT_08f027d0);
  FUN_03c8f898(PTR_DAT_08f027d8);
  FUN_03c8f898(PTR_DAT_08e6a288);
  FUN_03c8f898(PTR_DAT_08f027e0);
  FUN_03c8f898(PTR_DAT_08f027e8);
  FUN_03c8f898(PTR_DAT_08e6a290);
  FUN_03c8f898(PTR_DAT_08f027f0);
  FUN_03c8f898(PTR_DAT_08f027f8);
  FUN_03c8f898(PTR_DAT_08f02800);
  *(undefined1 *)(unaff_x21 + 0xcbb) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar5 = thunk_FUN_03cf5234();
    uVar11 = thunk_FUN_03ce5214(PTR_DAT_08e85e00);
    FUN_0705a2f8(uVar5,uVar11,0);
    uVar11 = thunk_FUN_03ce5214(PTR_DAT_08f02808);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar5,uVar11);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06815a08();
    puVar3 = PTR_DAT_08f02800;
    puVar2 = PTR_DAT_08f027c8;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar5 = FUN_069418d8(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f027c0);
      uVar5 = FUN_04611264(uVar11,uVar5,*(undefined8 *)puVar2);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar8);
        lVar8 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_08f027d0;
      lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar12 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar8);
          lVar8 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar8 + 0xb8);
        lVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f027d8);
        FUN_04d5364c(lVar12,uVar11,*(undefined8 *)PTR_DAT_08f027f8,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar6 = lVar12;
        thunk_FUN_03d233cc(plVar6,lVar12);
      }
      plVar6 = (long *)FUN_046238e4(uVar5,lVar12,*(undefined8 *)puVar2);
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f027e0) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0811e254;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08f027e0,0);
LAB_0811e254:
        puVar2 = PTR_DAT_08e6a288;
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        puVar4 = PTR_DAT_08f027e8;
        puVar3 = PTR_DAT_08e6a290;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0811e2cc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_0811e2cc:
          uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar9 & 1) == 0) goto LAB_0811e364;
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0811e328;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar4,0);
LAB_0811e328:
          (*(code *)*puVar7)(&stack0x00000030,plVar6,puVar7[1]);
          (**(code **)(unaff_x20 + 0x18))
                    (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000030,
                     *(undefined8 *)(unaff_x20 + 0x28));
        } while( true );
      }
    }
  }
  goto 
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
  ;
LAB_0811e364:
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0811e3b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_0811e3b8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
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


