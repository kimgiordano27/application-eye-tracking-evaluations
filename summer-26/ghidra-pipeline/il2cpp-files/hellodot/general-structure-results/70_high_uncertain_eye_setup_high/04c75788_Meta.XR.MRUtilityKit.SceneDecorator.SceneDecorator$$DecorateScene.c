/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$DecorateScene
ENTRY_POINT: 04c75788
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__DecorateScene(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x27;
  int unaff_w28;
  undefined1 auVar13 [16];
  
  lVar3 = thunk_FUN_02cea894(*param_1);
                    /* try { // try from 04c75790 to 04d757a7 has its CatchHandler @ 04c75ac4 */
  FUN_04f7383c(lVar3,0);
  lVar8 = *(long *)(unaff_x19 + 10);
  if (lVar8 == 0) {
    uVar10 = 0;
    uVar11 = uVar10;
  }
  else {
    uVar11 = *(undefined8 *)(lVar8 + 0x18);
    uVar10 = *(undefined8 *)(lVar8 + 0x10);
                    /* try { // try from 04c757a8 to 04d75833 has its CatchHandler @ 04c75650 */
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar3 + 0x18) = uVar11;
  *(undefined8 *)(lVar3 + 0x10) = uVar10;
  *(long *)(unaff_x19 + 0x12) = lVar3;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = (**(code **)(*unaff_x20 + 0x2e8))();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar13 = FUN_0404bcb8(lVar3,0,*unaff_x22);
  uVar4 = FUN_044a8fc8();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar13;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030b8348(unaff_x19 + 2);
    return;
  }
  plVar5 = (long *)FUN_044a9014();
  if (unaff_w28 == 1) {
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *unaff_x19 = 0xffffffff;
LAB_04c7582c:
                    /* try { // try from 04c75834 to 04d75847 has its CatchHandler @ 04c75b30 */
    FUN_044a9014();
    uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  }
  else {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar6 = (long *)(**(code **)(*plVar5 + 0x338))(plVar5,*(undefined8 *)(*plVar5 + 0x340));
                    /* try { // try from 04c7585c to 04d7585f has its CatchHandler @ 04c75ac0 */
    *(long **)(unaff_x19 + 0x18) = plVar6;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
                    /* try { // try from 04c75874 to 04d7589f has its CatchHandler @ 04c75b28 */
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e4308) {
                    /* try { // try from 04c758bc to 04d758cf has its CatchHandler @ 04c759d8 */
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04c758c8;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e4308,0);
LAB_04c758c8:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar2 != 0) {
                    /* try { // try from 04c758e4 to 04d758e7 has its CatchHandler @ 04c759d0 */
        lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7e18);
        FUN_04f7383c(lVar3,0);
                    /* try { // try from 04c758fc to 04d75977 has its CatchHandler @ 04c759dc */
        auVar13 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        *(undefined1 (*) [16])(lVar3 + 0x10) = auVar13;
        plVar6 = *(long **)(unaff_x19 + 0x18);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e53a8) {
              puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_04c759ec;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e53a8,2);
LAB_04c759ec:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        plVar6 = (long *)PTR_DAT_065e7e40;
        lVar3 = *(long *)PTR_DAT_065e7e40;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar3);
          lVar3 = *plVar6;
        }
        lVar8 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
        if (lVar8 == 0) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar3);
            lVar3 = *plVar6;
          }
          uVar11 = **(undefined8 **)(lVar3 + 0xb8);
          lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
          FUN_04a5701c(lVar8,uVar11,*(undefined8 *)PTR_DAT_065e80f0,0);
          plVar6 = (long *)PTR_DAT_065e7e40;
          lVar3 = *(long *)PTR_DAT_065e7e40;
          *(long *)(*(long *)(lVar3 + 0xb8) + 0x18) = lVar8;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar3);
          lVar3 = *plVar6;
        }
        lVar12 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
        if (lVar12 == 0) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar3);
            lVar3 = *(long *)PTR_DAT_065e7e40;
          }
          uVar11 = **(undefined8 **)(lVar3 + 0xb8);
          lVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
          FUN_04a5701c(lVar12,uVar11,*(undefined8 *)PTR_DAT_065e80f8,0);
          *(long *)(*(long *)(*(long *)PTR_DAT_065e7e40 + 0xb8) + 0x20) = lVar12;
          unaff_x27 = (long *)PTR_DAT_065e7e50;
        }
        uVar10 = FUN_033f7aa4(uVar10,lVar8,lVar12,*(undefined8 *)PTR_DAT_065e4d98);
        plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
        FUN_04c5aa60(plVar6,0);
        uVar11 = (**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar11,uVar11);
        }
        (**(code **)(*plVar6 + 0x408))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x410));
        (**(code **)(*plVar6 + 0x348))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x350));
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = (**(code **)(*unaff_x20 + 0x568))();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar13 = FUN_0404bcb8(lVar3,0,*(undefined8 *)PTR_DAT_065e80e8);
        uVar4 = FUN_044a8fc8();
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar13;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030b8348(unaff_x19 + 2);
          return;
        }
        goto LAB_04c7582c;
      }
    }
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c86d8);
    FUN_04678954(uVar10,*(undefined8 *)PTR_DAT_065c86c0);
  }
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  puVar1 = PTR_DAT_065e80c8;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar10,*(undefined8 *)puVar1);
  return;
}


