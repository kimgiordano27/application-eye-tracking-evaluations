/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float4>$$Add
ENTRY_POINT: 04f75f8c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ExSimpleNativeArray<float4>__Add(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 uVar12;
  long *unaff_x25;
  
  puVar2 = PTR_DAT_06d36e98;
  plVar4 = (long *)FUN_056109c0();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_04f76490;
  }
  uVar5 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04060,0);
  uVar6 = FUN_05619d34(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)PTR_DAT_06d02548;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_056109c0(uVar5,0);
    uVar6 = FUN_05619d34(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba20);
      FUN_055de400(plVar4,0);
      goto LAB_04f76074;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x25);
    }
    plVar10 = (long *)FUN_056109c0(uVar5,0);
    if (plVar10 == (long *)0x0) {
LAB_04f76498:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar6 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_04f76498;
      uVar6 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
      if ((uVar6 & 1) == 0) {
LAB_04f76374:
        uVar6 = (**(code **)(*plVar4 + 0x5a8))(plVar4,*(undefined8 *)(*plVar4 + 0x5b0));
        if ((uVar6 & 1) == 0) {
MagicaCloth2_ExSimpleNativeArray<float4>__Serialize:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02eea768();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          plVar4 = (long *)thunk_FUN_02ef1808();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02eea768(lVar7);
          }
          FUN_043dcc34(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar5 = FUN_05636770(plVar4,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x25);
        }
        uVar3 = FUN_0561c944(uVar5,0);
        switch(uVar3) {
        case 5:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba38;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba08;
          break;
        case 7:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba40;
          break;
        case 0xb:
        case 0xc:
          lVar7 = *unaff_x25;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba28;
          break;
        default:
          goto MagicaCloth2_ExSimpleNativeArray<float4>__Serialize;
        }
        goto LAB_04f760ec;
      }
      uVar5 = (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
      uVar12 = *(undefined8 *)PTR_DAT_06d04008;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x25);
      }
      uVar12 = FUN_056109c0(uVar12,0);
      uVar6 = FUN_05619d34(uVar5,uVar12,0);
      if ((uVar6 & 1) == 0) goto LAB_04f76374;
      lVar7 = (**(code **)(*plVar4 + 0x468))(plVar4,*(undefined8 *)(*plVar4 + 0x470));
      if (lVar7 == 0) goto LAB_04f76498;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_04f7649c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar10 = *(long **)(lVar7 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar10);
        }
      }
      uVar5 = *(undefined8 *)PTR_DAT_06d3ba18;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar8 = (long *)FUN_056109c0(uVar5,0);
      plVar9 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
      if (plVar9 == (long *)0x0) goto LAB_04f76498;
      if ((plVar10 != (long *)0x0) &&
         (lVar7 = thunk_FUN_02ef170c(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_04f7649c;
      plVar9[4] = (long)plVar10;
      thunk_FUN_02f411dc(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x968))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x970)),
         plVar8 == (long *)0x0)) goto LAB_04f76498;
      uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar6 & 1) == 0) goto LAB_04f76374;
      uVar5 = *(undefined8 *)PTR_DAT_06d3ba30;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_056109c0(uVar5,0);
      plVar4 = plVar10;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
    }
    else {
      lVar7 = *unaff_x25;
      puVar11 = (undefined8 *)PTR_DAT_06d3ba10;
LAB_04f760ec:
      uVar5 = *puVar11;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_056109c0(uVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_056448d4(uVar5,plVar4,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768(lVar7);
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba00);
    FUN_055de300(plVar4,0);
LAB_04f76074:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768();
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar10;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02eea768(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_04f76490:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar4);
    }
  }
  return plVar4;
}


