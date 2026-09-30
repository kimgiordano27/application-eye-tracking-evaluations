/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float4>$$AddRange
ENTRY_POINT: 04f75e78
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


long * MagicaCloth2_ExSimpleNativeArray<float4>__AddRange(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_071c06b7 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3ba00);
    FUN_02f07e70(PTR_DAT_06d04060);
    FUN_02f07e70(PTR_DAT_06d3ba08);
    FUN_02f07e70(PTR_DAT_06d04128);
    FUN_02f07e70(PTR_DAT_06d3ba10);
    FUN_02f07e70(PTR_DAT_06d3ba18);
    FUN_02f07e70(PTR_DAT_06d3ba20);
    FUN_02f07e70(PTR_DAT_06d3ba28);
    FUN_02f07e70(PTR_DAT_06d3ba30);
    FUN_02f07e70(PTR_DAT_06d04008);
    FUN_02f07e70(PTR_DAT_06d36e98);
    FUN_02f07e70(PTR_DAT_06d3ba38);
    FUN_02f07e70(PTR_DAT_06d3ba40);
    FUN_02f07e70(PTR_DAT_06d02548);
    FUN_02f07e70(PTR_DAT_06d06088);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    DAT_071c06b7 = 1;
  }
  puVar2 = PTR_DAT_06d01eb0;
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_06d36e98;
  plVar6 = (long *)FUN_056109c0(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_04f76490;
  }
  uVar12 = FUN_056109c0(*(undefined8 *)PTR_DAT_06d04060,0);
  uVar7 = FUN_05619d34(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_DAT_06d02548;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar12 = FUN_056109c0(uVar12,0);
    uVar7 = FUN_05619d34(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba20);
      FUN_055de400(plVar6,0);
      goto LAB_04f76074;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_056109c0(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_04f76498:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_04f76498;
      uVar7 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      if ((uVar7 & 1) == 0) {
LAB_04f76374:
        uVar7 = (**(code **)(*plVar6 + 0x5a8))(plVar6,*(undefined8 *)(*plVar6 + 0x5b0));
        if ((uVar7 & 1) == 0) {
MagicaCloth2_ExSimpleNativeArray<float4>__Serialize:
          lVar5 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02eea768();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          plVar6 = (long *)thunk_FUN_02ef1808();
          lVar5 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02eea768(lVar5);
          }
          FUN_043dcc34(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar12 = FUN_05636770(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar2);
        }
        uVar4 = FUN_0561c944(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba38;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba08;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba40;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_06d3ba28;
          break;
        default:
          goto MagicaCloth2_ExSimpleNativeArray<float4>__Serialize;
        }
        goto LAB_04f760ec;
      }
      uVar12 = (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
      uVar13 = *(undefined8 *)PTR_DAT_06d04008;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
      uVar13 = FUN_056109c0(uVar13,0);
      uVar7 = FUN_05619d34(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_04f76374;
      lVar5 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
      if (lVar5 == 0) goto LAB_04f76498;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_04f7649c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_DAT_06d3ba18;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      plVar8 = (long *)FUN_056109c0(uVar12,0);
      plVar9 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
      if (plVar9 == (long *)0x0) goto LAB_04f76498;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_02ef170c(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_04f7649c;
      plVar9[4] = (long)plVar10;
      thunk_FUN_02f411dc(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x968))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x970)),
         plVar8 == (long *)0x0)) goto LAB_04f76498;
      uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar7 & 1) == 0) goto LAB_04f76374;
      uVar12 = *(undefined8 *)PTR_DAT_06d3ba30;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_056109c0(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)PTR_DAT_06d3ba10;
LAB_04f760ec:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar12 = FUN_056109c0(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_056448d4(uVar12,plVar6,0);
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba00);
    FUN_055de300(plVar6,0);
LAB_04f76074:
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_04f76490:
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar6);
    }
  }
  return plVar6;
}


