/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float4>$$AddRange
ENTRY_POINT: 04f75f64
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


long * MagicaCloth2_ExSimpleNativeArray<float4>__AddRange(ulong param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x25;
  long *plVar13;
  
  plVar13 = *(long **)(unaff_x25 + 0xeb0);
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02eea768();
  }
  uVar11 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x20);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*plVar13);
  }
  puVar2 = PTR_DAT_06d36e98;
  plVar4 = (long *)FUN_056109c0(uVar11,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_04f76490;
  }
  uVar11 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04060,0);
  uVar5 = FUN_05619d34(plVar4,uVar11,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = *(undefined8 *)PTR_DAT_06d02548;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar11 = FUN_056109c0(uVar11,0);
    uVar5 = FUN_05619d34(plVar4,uVar11,0);
    if ((uVar5 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba20);
      FUN_055de400(plVar4,0);
      goto LAB_04f76074;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*plVar13);
    }
    plVar7 = (long *)FUN_056109c0(uVar11,0);
    if (plVar7 == (long *)0x0) {
LAB_04f76498:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2a0));
    if ((uVar5 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_04f76498;
      uVar5 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
      if ((uVar5 & 1) == 0) {
LAB_04f76374:
        uVar5 = (**(code **)(*plVar4 + 0x5a8))(plVar4,*(undefined8 *)(*plVar4 + 0x5b0));
        if ((uVar5 & 1) == 0) {
MagicaCloth2_ExSimpleNativeArray<float4>__Serialize:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02eea768();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          plVar13 = (long *)thunk_FUN_02ef1808();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02eea768(lVar6);
          }
          FUN_043dcc34(plVar13,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar13;
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar11 = FUN_05636770(plVar4,0);
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*plVar13);
        }
        uVar3 = FUN_0561c944(uVar11,0);
        switch(uVar3) {
        case 5:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_06d3ba38;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_06d3ba08;
          break;
        case 7:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_06d3ba40;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *plVar13;
          puVar10 = (undefined8 *)PTR_DAT_06d3ba28;
          break;
        default:
          goto MagicaCloth2_ExSimpleNativeArray<float4>__Serialize;
        }
        goto LAB_04f760ec;
      }
      uVar11 = (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
      uVar12 = *(undefined8 *)PTR_DAT_06d04008;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*plVar13);
      }
      uVar12 = FUN_056109c0(uVar12,0);
      uVar5 = FUN_05619d34(uVar11,uVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_04f76374;
      lVar6 = (**(code **)(*plVar4 + 0x468))(plVar4,*(undefined8 *)(*plVar4 + 0x470));
      if (lVar6 == 0) goto LAB_04f76498;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_04f7649c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar7 = *(long **)(lVar6 + 0x20);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar7);
        }
      }
      uVar11 = *(undefined8 *)PTR_DAT_06d3ba18;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar8 = (long *)FUN_056109c0(uVar11,0);
      plVar9 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
      if (plVar9 == (long *)0x0) goto LAB_04f76498;
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = thunk_FUN_02ef170c(plVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
        uVar11 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar11,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_04f7649c;
      plVar9[4] = (long)plVar7;
      thunk_FUN_02f411dc(plVar9 + 4,plVar7);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x968))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x970)),
         plVar8 == (long *)0x0)) goto LAB_04f76498;
      uVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar5 & 1) == 0) goto LAB_04f76374;
      uVar11 = *(undefined8 *)PTR_DAT_06d3ba30;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar11 = FUN_056109c0(uVar11,0);
      plVar4 = plVar7;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
    }
    else {
      lVar6 = *plVar13;
      puVar10 = (undefined8 *)PTR_DAT_06d3ba10;
LAB_04f760ec:
      uVar11 = *puVar10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar11 = FUN_056109c0(uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_056448d4(uVar11,plVar4,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768(lVar6);
    }
    plVar13 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba00);
    FUN_055de300(plVar4,0);
LAB_04f76074:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02eea768();
    }
    plVar13 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar13;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768(lVar6);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_04f76490:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar4);
    }
  }
  return plVar4;
}


