/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TrySerialize
ENTRY_POINT: 04d5b728
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


long * Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TrySerialize(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_07284f90);
  thunk_FUN_032e1da0(PTR_DAT_07281320);
  thunk_FUN_032e1da0(PTR_DAT_0727f888);
  thunk_FUN_032e1da0(PTR_DAT_07279510);
  *(undefined1 *)(unaff_x20 + 0x3a6) = 1;
  puVar2 = PTR_DAT_07279510;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_07281320;
  plVar5 = (long *)FUN_059324dc(uVar10,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_04d5bad4;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  plVar6 = (long *)FUN_059324dc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),0);
  if (plVar6 == (long *)0x0) goto LAB_04d5bad0;
  uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
  if ((uVar7 & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_04d5bad0;
    uVar7 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
    if ((uVar7 & 1) != 0) {
      uVar10 = (**(code **)(*plVar5 + 0x468))(plVar5,*(undefined8 *)(*plVar5 + 0x470));
      uVar11 = *(undefined8 *)PTR_DAT_07284f90;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar2);
      }
      uVar11 = FUN_059324dc(uVar11,0);
      uVar7 = FUN_0593b434(uVar10,uVar11,0);
      if ((uVar7 & 1) != 0) {
        lVar4 = (**(code **)(*plVar5 + 0x488))(plVar5,*(undefined8 *)(*plVar5 + 0x490));
        if (lVar4 == 0) goto LAB_04d5bad0;
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04d5badc:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_04d5bad4:
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar5);
          }
        }
        uVar10 = *(undefined8 *)PTR_DAT_07284f80;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        plVar6 = (long *)FUN_059324dc(uVar10,0);
        plVar8 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727f888,1);
        if (plVar8 == (long *)0x0) goto LAB_04d5bad0;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_032a55a4(plVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
          uVar10 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar10,0);
        }
        if ((int)plVar8[3] == 0) goto LAB_04d5badc;
        plVar8[4] = (long)plVar5;
        thunk_FUN_0333a630(plVar8 + 4,plVar5);
        if (plVar6 == (long *)0x0) {
LAB_04d5bad0:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x958))
                                   (plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x960));
        if (plVar6 == (long *)0x0) goto LAB_04d5bad0;
        uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
        if ((uVar7 & 1) != 0) {
          lVar4 = *(long *)puVar2;
          puVar9 = (undefined8 *)PTR_DAT_07284f88;
          goto LAB_04d5b828;
        }
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    plVar5 = (long *)thunk_FUN_032a56a0();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8(lVar4);
    }
    FUN_046b51b4(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    lVar4 = *(long *)puVar2;
    puVar9 = (undefined8 *)PTR_DAT_07284f78;
LAB_04d5b828:
    uVar10 = *puVar9;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar10 = FUN_059324dc(uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_05965238(uVar10,plVar5,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8(lVar4);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar5);
      }
    }
  }
  return plVar5;
}


