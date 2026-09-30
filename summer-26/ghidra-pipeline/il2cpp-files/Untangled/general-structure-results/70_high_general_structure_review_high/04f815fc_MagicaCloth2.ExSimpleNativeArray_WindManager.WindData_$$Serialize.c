/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<WindManager.WindData>$$Serialize
ENTRY_POINT: 04f815fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ExSimpleNativeArray<WindManager_WindData>__Serialize
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  if (*(long *)(param_1 + -8) != param_3) goto LAB_04f81ac4;
  FUN_056109c0(*(undefined8 *)PTR_DAT_06d04060,0);
  uVar3 = FUN_05619d34();
  if ((uVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_06d02548;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_056109c0(uVar9,0);
    uVar3 = FUN_05619d34();
    if ((uVar3 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba20);
      FUN_055de400(unaff_x20,0);
      goto LAB_04f816a8;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x25);
    }
    plVar7 = (long *)FUN_056109c0(uVar9,0);
    if (plVar7 == (long *)0x0) {
LAB_04f81acc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = (**(code **)(*plVar7 + 0x298))();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_04f81acc;
      uVar3 = (**(code **)(*unaff_x20 + 0x3b8))();
      if ((uVar3 & 1) == 0) {
LAB_04f819a8:
        uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
        if ((uVar3 & 1) == 0) {
switchD_04f81a28_default:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          plVar7 = (long *)thunk_FUN_02ef1808();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768(lVar4);
          }
          FUN_043e0408(plVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar7;
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar9 = FUN_05636770();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x25);
        }
        uVar2 = FUN_0561c944(uVar9,0);
        switch(uVar2) {
        case 5:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06d3ba38;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06d3ba08;
          break;
        case 7:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06d3ba40;
          break;
        case 0xb:
        case 0xc:
          lVar4 = *unaff_x25;
          puVar8 = (undefined8 *)PTR_DAT_06d3ba28;
          break;
        default:
          goto switchD_04f81a28_default;
        }
        goto LAB_04f81720;
      }
      uVar9 = (**(code **)(*unaff_x20 + 0x448))();
      uVar10 = *(undefined8 *)PTR_DAT_06d04008;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x25);
      }
      uVar10 = FUN_056109c0(uVar10,0);
      uVar3 = FUN_05619d34(uVar9,uVar10,0);
      if ((uVar3 & 1) == 0) goto LAB_04f819a8;
      lVar4 = (**(code **)(*unaff_x20 + 0x468))();
      if (lVar4 == 0) goto LAB_04f81acc;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04f81ad0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar7);
        }
      }
      uVar9 = *(undefined8 *)PTR_DAT_06d3ba18;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar5 = (long *)FUN_056109c0(uVar9,0);
      plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
      if (plVar6 == (long *)0x0) goto LAB_04f81acc;
      if ((plVar7 != (long *)0x0) &&
         (lVar4 = thunk_FUN_02ef170c(plVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar9,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_04f81ad0;
      plVar6[4] = (long)plVar7;
      thunk_FUN_02f411dc(plVar6 + 4,plVar7);
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x968))
                                     (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x970)),
         plVar5 == (long *)0x0)) goto LAB_04f81acc;
      uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x2a0));
      if ((uVar3 & 1) == 0) goto LAB_04f819a8;
      uVar9 = *(undefined8 *)PTR_DAT_06d3ba30;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_056109c0(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x24);
      }
    }
    else {
      lVar4 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06d3ba10;
LAB_04f81720:
      uVar9 = *puVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_056109c0(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x24);
      }
    }
    unaff_x20 = (long *)FUN_056448d4(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba00);
    FUN_055de300(unaff_x20,0);
LAB_04f816a8:
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    plVar7 = *(long **)(lVar4 + 0xc0);
  }
  lVar4 = *plVar7;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768(lVar4);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
    {
LAB_04f81ac4:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x20);
    }
  }
  return unaff_x20;
}


