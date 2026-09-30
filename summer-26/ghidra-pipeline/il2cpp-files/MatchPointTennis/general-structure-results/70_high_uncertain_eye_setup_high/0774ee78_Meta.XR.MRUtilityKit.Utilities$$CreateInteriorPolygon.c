/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$CreateInteriorPolygon
ENTRY_POINT: 0774ee78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Utilities__CreateInteriorPolygon(undefined1 param_1 [16])

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  uint unaff_w27;
  uint uVar7;
  long unaff_x28;
  undefined8 *unaff_x29;
  int in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  
  *(long *)(unaff_x19 + 0x98) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x90) = param_1._0_8_;
  if (in_w8 == 0) {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27068;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = unaff_w27;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000010 = unaff_w27 | 8;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    uVar7 = unaff_w27 | 0xc;
    *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
  }
  else {
    uVar7 = unaff_w27 | 8;
  }
  if ((*(byte *)(unaff_x19 + 8) >> 6 & 1) != 0) {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27048;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 == (long *)0x0) goto LAB_07750b0c;
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = uVar7;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 0xa8) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar6;
    if (in_stack_00000008 == 1) {
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      uVar6 = *(undefined8 *)PTR_DAT_09f27068;
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
      }
      lVar2 = FUN_07a4ce38(uVar6,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000010 = uVar7 + 8;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      uVar7 = uVar7 + 0xc;
      *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    }
    else {
      uVar7 = uVar7 + 8;
    }
  }
  if (*(char *)(unaff_x19 + 8) < '\0') {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27048;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 == (long *)0x0) goto LAB_07750b0c;
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = uVar7;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 0xb8) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar6;
    if (in_stack_00000008 == 2) {
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      uVar6 = *(undefined8 *)PTR_DAT_09f27068;
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
      }
      lVar2 = FUN_07a4ce38(uVar6,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000010 = uVar7 + 8;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      uVar7 = uVar7 + 0xc;
      *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    }
    else {
      uVar7 = uVar7 + 8;
    }
  }
  if ((*(byte *)(unaff_x19 + 9) & 1) != 0) {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27048;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 == (long *)0x0) goto LAB_07750b0c;
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = uVar7;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 200) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar6;
    if (in_stack_00000008 == 3) {
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      uVar6 = *(undefined8 *)PTR_DAT_09f27068;
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
      }
      lVar2 = FUN_07a4ce38(uVar6,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000010 = uVar7 + 8;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      uVar7 = uVar7 + 0xc;
      *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    }
    else {
      uVar7 = uVar7 + 8;
    }
  }
  if ((*(byte *)(unaff_x19 + 9) >> 1 & 1) != 0) {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27048;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 == (long *)0x0) goto LAB_07750b0c;
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = uVar7;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 0xd8) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar6;
    if (in_stack_00000008 == 4) {
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      uVar6 = *(undefined8 *)PTR_DAT_09f27068;
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
      }
      lVar2 = FUN_07a4ce38(uVar6,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000010 = uVar7 + 8;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      uVar7 = uVar7 + 0xc;
      *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    }
    else {
      uVar7 = uVar7 + 8;
    }
  }
  if ((*(byte *)(unaff_x19 + 9) >> 2 & 1) != 0) {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27048;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 == (long *)0x0) goto LAB_07750b0c;
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = uVar7;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 0xe8) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar6;
    if (in_stack_00000008 == 5) {
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      uVar6 = *(undefined8 *)PTR_DAT_09f27068;
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
      }
      lVar2 = FUN_07a4ce38(uVar6,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000010 = uVar7 + 8;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      uVar7 = uVar7 + 0xc;
      *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    }
    else {
      uVar7 = uVar7 + 8;
    }
  }
  if ((*(byte *)(unaff_x19 + 9) >> 3 & 1) != 0) {
    plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
    uVar6 = *(undefined8 *)PTR_DAT_09f27048;
    if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
    }
    lVar2 = FUN_07a4ce38(uVar6,0);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 == (long *)0x0) goto LAB_07750b0c;
    lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar6 = *unaff_x21;
    plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000018 = uVar7;
    lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    if (plVar1 == (long *)0x0) goto LAB_07750b0c;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar3;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0)
       ) goto LAB_07750b0c;
    if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40)) goto LAB_07750b20;
    puVar5 = (undefined8 *)thunk_FUN_04485360();
    uVar6 = *puVar5;
    *(undefined8 *)(unaff_x19 + 0xf8) = puVar5[1];
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar6;
    if (in_stack_00000008 == 6) {
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      uVar6 = *(undefined8 *)PTR_DAT_09f27068;
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
      }
      lVar2 = FUN_07a4ce38(uVar6,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
      plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
      lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_07750b14;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar2;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000010 = uVar7 + 8;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      if (plVar1 == (long *)0x0) goto LAB_07750b0c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
      goto LAB_07750b14;
      unaff_x20 = (undefined8 *)PTR_DAT_09f20d20;
      if ((int)plVar1[3] == 0) goto LAB_07750b10;
      plVar1[4] = lVar3;
      thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
      if ((lVar2 == 0) ||
         (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 == (long *)0x0))
      goto LAB_07750b0c;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
      goto LAB_07750b20;
      puVar5 = (undefined8 *)thunk_FUN_04485360();
      uVar6 = *puVar5;
      uVar7 = uVar7 + 0xc;
      *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
      *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
    }
    else {
      uVar7 = uVar7 + 8;
    }
  }
  if ((*(byte *)(unaff_x19 + 9) >> 4 & 1) == 0) {
    return;
  }
  plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
  uVar6 = *(undefined8 *)PTR_DAT_09f27048;
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
  }
  lVar2 = FUN_07a4ce38(uVar6,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_07750b14;
    if ((int)plVar1[3] == 0) goto LAB_07750b10;
    plVar1[4] = lVar2;
    thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
    if (unaff_x22 != (long *)0x0) {
      lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
      uVar6 = *unaff_x21;
      plVar1 = (long *)FUN_04447c90(*unaff_x20,1);
      in_stack_00000018 = uVar7;
      lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
      if (plVar1 != (long *)0x0) {
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
        goto LAB_07750b14;
        if ((int)plVar1[3] == 0) goto LAB_07750b10;
        plVar1[4] = lVar3;
        thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
        if ((lVar2 != 0) &&
           (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 != (long *)0x0)) {
          if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40))
          goto LAB_07750b20;
          puVar5 = (undefined8 *)thunk_FUN_04485360();
          uVar6 = *puVar5;
          *(undefined8 *)(unaff_x19 + 0x108) = puVar5[1];
          *(undefined8 *)(unaff_x19 + 0x100) = uVar6;
          if (in_stack_00000008 != 7) {
            return;
          }
          plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
          uVar6 = *(undefined8 *)PTR_DAT_09f27068;
          if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
          }
          lVar2 = FUN_07a4ce38(uVar6,0);
          if (plVar1 != (long *)0x0) {
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_07750b14:
              uVar6 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar6,0);
            }
            if ((int)plVar1[3] == 0) {
LAB_07750b10:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar1[4] = lVar2;
            thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
            lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
            uVar6 = *unaff_x21;
            plVar1 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
            in_stack_00000018 = uVar7;
            lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
            if (plVar1 != (long *)0x0) {
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
              goto LAB_07750b14;
              if ((int)plVar1[3] == 0) goto LAB_07750b10;
              plVar1[4] = lVar3;
              thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
              if ((lVar2 != 0) &&
                 (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 != (long *)0x0)) {
                if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40)) {
LAB_07750b20:
                    /* WARNING: Subroutine does not return */
                  FUN_044481e4();
                }
                puVar5 = (undefined8 *)thunk_FUN_04485360();
                uVar6 = *puVar5;
                *(undefined8 *)(unaff_x19 + 0x128) = puVar5[1];
                *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
                plVar1 = (long *)FUN_04447c90(*unaff_x29,1);
                lVar2 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
                if (plVar1 != (long *)0x0) {
                  if ((lVar2 != 0) &&
                     (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)
                     ) goto LAB_07750b14;
                  if ((int)plVar1[3] == 0) goto LAB_07750b10;
                  plVar1[4] = lVar2;
                  thunk_FUN_044bb4b4(plVar1 + 4,lVar2);
                  lVar2 = (**(code **)(*unaff_x22 + 0x3f8))();
                  uVar6 = *unaff_x21;
                  plVar1 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                  in_stack_00000010 = uVar7 + 8;
                  lVar3 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
                  if (plVar1 != (long *)0x0) {
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar1 + 0x40)),
                       lVar4 == 0)) goto LAB_07750b14;
                    if ((int)plVar1[3] == 0) goto LAB_07750b10;
                    plVar1[4] = lVar3;
                    thunk_FUN_044bb4b4(plVar1 + 4,lVar3);
                    if ((lVar2 != 0) &&
                       (plVar1 = (long *)FUN_0796aedc(lVar2,uVar6,plVar1,0), plVar1 != (long *)0x0))
                    {
                      if (*(long *)(*plVar1 + 0x40) == *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
                      {
                        puVar5 = (undefined8 *)thunk_FUN_04485360();
                        uVar6 = *puVar5;
                        *(undefined8 *)(unaff_x19 + 0x118) = puVar5[1];
                        *(undefined8 *)(unaff_x19 + 0x110) = uVar6;
                        return;
                      }
                      goto LAB_07750b20;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07750b0c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


