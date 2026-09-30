/*
FUNCTION_NAME: FUN_0550390c
ENTRY_POINT: 0550390c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0550390c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  
  if ((DAT_06bbf55f & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(PTR_DAT_067cbc80);
    FUN_02f08768(PTR_DAT_067cbc88);
    FUN_02f08768(PTR_DAT_067ca3c0);
    DAT_06bbf55f = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_05503f00;
  if (*param_2 != *(long *)PTR_DAT_067ca3c0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_2);
  }
  uVar5 = FUN_05016eec(param_2[5],0,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    lVar6 = *(long *)(PTR_DAT_067c9338 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    uVar13 = FUN_050e4454(lVar6 + 0x20,0);
    uVar5 = FUN_050ed374(uVar11,uVar13,0);
    if ((uVar5 & 1) != 0) {
      FUN_05501c04(param_1);
      return;
    }
    FUN_05500c08(param_1,param_2[4]);
    plVar9 = (long *)param_2[4];
    if (plVar9 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      uVar13 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      iVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      uVar4 = FUN_054e6824(param_2,0);
      FUN_05504894(param_1,uVar11,uVar13,iVar3 == 0xb,uVar4 & 1);
      return;
    }
    goto LAB_05503f00;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05503f00;
  lVar6 = FUN_054fb910();
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05503f00;
  lVar7 = FUN_054fb910(*(long *)(param_1 + 0x10));
  lVar15 = param_2[5];
  if (*(int *)(*(long *)PTR_DAT_067cbc80 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc80);
  }
  lVar8 = FUN_0552a738(lVar15,0);
  if (lVar8 == 0) goto LAB_05503f00;
  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05503f0c;
  plVar9 = (long *)param_2[4];
  if (plVar9 == (long *)0x0) goto LAB_05503f00;
  plVar17 = *(long **)(lVar8 + 0x20);
  lVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
  lVar14 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
  }
  uVar11 = FUN_054d2524(lVar10,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05503f00;
  uVar2 = FUN_054f6fe4(*(long *)(param_1 + 0x10));
  if ((lVar14 == 0) ||
     (auVar18 = FUN_05512e44(lVar14,uVar11,uVar2,0), uVar5 = auVar18._0_8_, plVar17 == (long *)0x0))
  goto LAB_05503f00;
  plVar9 = (long *)(**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
  if (plVar9 == (long *)0x0) goto LAB_05503f00;
  uVar12 = FUN_050eed58(plVar9,0);
  if ((uVar12 & 1) == 0) {
    lVar14 = param_2[4];
LAB_05503c04:
    FUN_05500c08(param_1,lVar14);
    plVar17 = (long *)0x0;
  }
  else {
    uVar12 = FUN_054e6604(param_2,0);
    lVar14 = param_2[4];
    if ((uVar12 & 1) != 0) goto LAB_05503c04;
    plVar17 = (long *)FUN_05503f1c(param_1,lVar14,0);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x418))(plVar9,*(undefined8 *)(*plVar9 + 0x420));
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (FUN_054f85b0(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff), lVar10 == 0)) goto LAB_05503f00;
  uVar12 = FUN_050ef21c(lVar10,0);
  if ((uVar12 & 1) == 0) {
LAB_05503c6c:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05503f00;
    FUN_054f7c08(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff);
    puVar1 = PTR_DAT_067c9338;
    lVar16 = *(long *)(param_1 + 0x10);
    lVar14 = *(long *)(PTR_DAT_067c9338 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_050e4454(lVar14 + 0x20,0);
    if (lVar16 == 0) goto LAB_05503f00;
    FUN_054f73b4(lVar16,0,uVar11);
    lVar14 = *(long *)(param_1 + 0x10);
    uVar11 = FUN_050e4454(*(long *)(puVar1 + 0x10) + 0x20,0);
    if (lVar14 == 0) goto LAB_05503f00;
    uVar11 = FUN_054f0494(uVar11,0,0);
    FUN_054f6d80(lVar14,uVar11);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05503f00;
    FUN_054fbdec(*(long *)(param_1 + 0x10),lVar7);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_0552b3f4(lVar10,0);
    if (((uVar12 & 1) != 0) && (uVar12 = FUN_054e6824(param_2,0), (uVar12 & 1) != 0))
    goto LAB_05503c6c;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_054f7c08(*(long *)(param_1 + 0x10),uVar5 & 0xffffffff);
    puVar1 = PTR_DAT_067cbc88;
    if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_0552b3f4(lVar10,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_0552b364(lVar10,0);
      if (plVar9 == (long *)0x0) goto LAB_05503f00;
      uVar12 = (**(code **)(*plVar9 + 0x958))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x960));
      if ((uVar12 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x10);
        uVar11 = FUN_0551fde0(0);
        if (lVar10 == 0) goto LAB_05503f00;
        FUN_054f6d80(lVar10,uVar11);
      }
    }
    lVar10 = *(long *)(param_1 + 0x10);
    if (plVar17 == (long *)0x0) {
      if (lVar10 == 0) goto LAB_05503f00;
      FUN_054fb764(lVar10,lVar15);
    }
    else {
      plVar9 = (long *)FUN_02f0880c(*(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo,1);
      if (plVar9 == (long *)0x0) goto LAB_05503f00;
      lVar14 = thunk_FUN_02f45174(plVar17,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar14 == 0) {
        uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar11,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_05503f0c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar9[4] = (long)plVar17;
      if (lVar10 == 0) goto LAB_05503f00;
      FUN_054fb80c(lVar10,lVar15,lVar8,plVar9);
      (**(code **)(*plVar17 + 0x188))
                (plVar17,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(*plVar17 + 400));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_054fbcfc(*(long *)(param_1 + 0x10),lVar6,0,1);
      if ((*(long *)(param_1 + 0x10) != 0) && (lVar7 != 0)) {
        FUN_054eb158(lVar7,*(long *)(param_1 + 0x10),0);
        lVar7 = *(long *)(param_1 + 0x10);
        lVar15 = *(long *)(PTR_DAT_067c9338 + 0x10);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_050e4454(lVar15 + 0x20,0);
        if (lVar7 != 0) {
          FUN_054f73b4(lVar7,0,uVar11);
          if ((*(long *)(param_1 + 0x10) != 0) && (lVar6 != 0)) {
            FUN_054eb158(lVar6,*(long *)(param_1 + 0x10),0);
            if (*(long *)(param_1 + 0x10) != 0) {
              lVar6 = *(long *)(param_1 + 0x18);
              uVar2 = FUN_054f6fe4();
              if (lVar6 != 0) {
                FUN_0550dba0(lVar6,uVar5,auVar18._8_8_,uVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05503f00:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


