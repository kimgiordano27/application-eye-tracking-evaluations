/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ToEnvRaycastHit
ENTRY_POINT: 04c2fadc
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__ToEnvRaycastHit(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xffffffff;
LAB_04c2fe10:
    thunk_FUN_02c7737c(PTR_DAT_065e18a0);
    uVar4 = FUN_044a9014();
    uVar13 = thunk_FUN_02c7737c(PTR_DAT_065e62b8);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,uVar13);
  }
  if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 04c2fae8 to 04d2fb77 has its CatchHandler @ 04c2f6c0 */
  lVar10 = *(long *)(unaff_x19 + 10);
  uVar3 = FUN_054df770(*(long *)(unaff_x19 + 8),0);
  puVar1 = PTR_DAT_065ce810;
  lVar7 = *(long *)(unaff_x19 + 8);
  if ((uVar3 & 1) == 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(int *)(lVar7 + 0x20) != 0x134) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar7 = FUN_04c2d5f8(lVar10,lVar7);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar14 = FUN_0404bcb8(lVar7,0,*(undefined8 *)PTR_DAT_065e1898);
      uVar8 = FUN_044a8fc8();
      if ((uVar8 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar14;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_0309f664(unaff_x19 + 2);
        return;
      }
      goto LAB_04c2fe10;
    }
    uVar4 = FUN_054d8134(lVar7,0);
    puVar2 = PTR_DAT_065e6238;
    lVar7 = *(long *)PTR_DAT_065e6238;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar7);
      lVar7 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar7);
        lVar7 = *(long *)puVar2;
      }
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      lVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e62a0);
      FUN_04a4cc10(lVar12,uVar13,*(undefined8 *)PTR_DAT_065e62a8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar12;
    }
    auVar14 = FUN_033df434(uVar4,lVar12,*(undefined8 *)PTR_DAT_065e6290);
    uVar13 = auVar14._0_8_;
    uVar4 = 0;
    if (auVar14._8_8_ != 0) {
      uVar13 = FUN_033dbf6c(auVar14._8_8_,*(undefined8 *)PTR_DAT_065e6298);
      uVar4 = uVar13;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar13,uVar4);
    }
    uVar4 = FUN_04c2da10();
    *(undefined8 *)(lVar10 + 0x48) = uVar4;
    puVar2 = PTR_DAT_065dfdc0;
    lVar7 = *(long *)PTR_DAT_065dfdc0;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *(long *)puVar2;
    }
    plVar11 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = *(long *)(lVar10 + 0x40);
    if ((lVar7 != 0) &&
       (lVar12 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
      uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar4,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar5[4] = lVar7;
    in_stack_00000018 = *(undefined8 *)(lVar10 + 0x48);
    lVar7 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065da1a8,&stack0x00000018);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
      uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar4,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar5[5] = lVar7;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar4 = *(undefined8 *)PTR_DAT_065e62b0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_04c2fd9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065e39d8,3);
LAB_04c2fd9c:
    (*(code *)*puVar6)(plVar11,uVar4,plVar5,puVar6[1]);
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04c2d6e4(lVar10,lVar7);
  }
  *unaff_x19 = 0xfffffffe;
  puVar2 = PTR_DAT_065ce848;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,uVar3 & 1,*(undefined8 *)puVar2);
  return;
}


