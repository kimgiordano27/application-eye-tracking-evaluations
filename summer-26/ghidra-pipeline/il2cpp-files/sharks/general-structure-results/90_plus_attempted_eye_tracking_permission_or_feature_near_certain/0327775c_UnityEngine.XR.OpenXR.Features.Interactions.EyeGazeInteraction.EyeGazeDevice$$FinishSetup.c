/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 0327775c
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup
               (long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int iVar9;
  long lVar10;
  undefined8 *unaff_x29;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      param_1 = *unaff_x19;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0xb8) + 0x40);
    uVar3 = FUN_033ecde0();
    if (lVar10 == 0) goto LAB_03277b08;
    FUN_024cacf4(lVar10,uVar3,*unaff_x21);
    lVar10 = *(long *)(unaff_x23 + 0x138);
    if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x18))) {
      iVar9 = 0;
      do {
        uVar5 = FUN_0270a174(lVar10,iVar9,*unaff_x29);
        if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
        }
        uVar6 = FUN_033e963c(uVar5,0,0);
        if ((uVar6 & 1) == 0) break;
        if ((*(long *)(unaff_x23 + 0x138) == 0) ||
           (lVar10 = FUN_0270a174(*(long *)(unaff_x23 + 0x138),iVar9,*unaff_x29), lVar10 == 0))
        goto LAB_03277b08;
        uVar3 = FUN_033ecde0(lVar10,0);
        lVar7 = *unaff_x19;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01843fdc(lVar7);
          lVar7 = *unaff_x19;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
        if (lVar7 == 0) goto LAB_03277b08;
        uVar6 = FUN_024cacf4(lVar7,uVar3,*unaff_x21);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = FUN_03277134(lVar10,unaff_w25,1,unaff_w20 & 1), (uVar6 & 1) != 0))
        goto LAB_03277a94;
        lVar10 = *(long *)(unaff_x23 + 0x138);
        if (lVar10 == 0) goto LAB_03277b08;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar10 + 0x18));
    }
    lVar10 = FUN_032a70a4(0);
    if (lVar10 != 0) {
      lVar10 = FUN_032a70a4(0);
      if (lVar10 == 0) goto LAB_03277b08;
      if (0 < *(int *)(lVar10 + 0x18)) {
        lVar10 = FUN_032a70a4(0);
        if (lVar10 == 0) {
LAB_03277b08:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        iVar9 = 0;
        while (iVar9 < *(int *)(lVar10 + 0x18)) {
          lVar10 = FUN_032a70a4(0);
          if (lVar10 == 0) goto LAB_03277b08;
          uVar5 = FUN_0270a174(lVar10,iVar9,*unaff_x29);
          if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
          }
          uVar6 = FUN_033e963c(uVar5,0,0);
          if ((uVar6 & 1) == 0) break;
          lVar10 = FUN_032a70a4(0);
          if ((lVar10 == 0) || (lVar10 = FUN_0270a174(lVar10,iVar9,*unaff_x29), lVar10 == 0))
          goto LAB_03277b08;
          uVar3 = FUN_033ecde0(lVar10,0);
          lVar7 = *unaff_x19;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01843fdc(lVar7);
            lVar7 = *unaff_x19;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
          if (lVar7 == 0) goto LAB_03277b08;
          uVar6 = FUN_024cacf4(lVar7,uVar3,*unaff_x21);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = FUN_03277134(lVar10,unaff_w25,1,unaff_w20 & 1), (uVar6 & 1) != 0))
          goto LAB_03277a94;
          iVar9 = iVar9 + 1;
          lVar10 = FUN_032a70a4(0);
          if (lVar10 == 0) goto LAB_03277b08;
        }
      }
    }
    uVar5 = FUN_032a6f84(0);
    if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
    }
    uVar6 = FUN_033e963c(uVar5,0,0);
    if ((uVar6 & 1) == 0) goto LAB_03277a34;
    lVar10 = FUN_032a6f84(0);
    if (lVar10 == 0) goto LAB_03277b08;
    uVar3 = FUN_033ecde0(lVar10,0);
    lVar7 = *unaff_x19;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc(lVar7);
      lVar7 = *unaff_x19;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
    if (lVar7 == 0) goto LAB_03277b08;
    uVar6 = FUN_024cacf4(lVar7,uVar3,*unaff_x21);
    if ((uVar6 & 1) == 0) goto LAB_03277a34;
    uVar6 = FUN_03277134(lVar10,unaff_w25,1,unaff_w20 & 1);
    if ((uVar6 & 1) == 0) goto LAB_03277a34;
LAB_03277a94:
    do {
      unaff_w24 = unaff_w24 + 1;
      if (*(int *)(unaff_x22 + 0x10) <= unaff_w24) {
        lVar10 = *(long *)(unaff_x23 + 0x208);
        if (lVar10 != 0) {
          bVar1 = *(int *)(lVar10 + 0x18) < 1;
          if (!bVar1) {
            uVar5 = FUN_02778044(lVar10,*(undefined8 *)PTR_DAT_03830070);
            *in_stack_00000008 = uVar5;
            thunk_FUN_0188fd20(in_stack_00000008,uVar5);
          }
          return bVar1;
        }
        goto LAB_03277b08;
      }
      uVar2 = FUN_02a4b568();
      if (*(long *)(unaff_x23 + 200) == 0) goto LAB_03277b08;
      unaff_w25 = uVar2 & 0xffff;
      uVar6 = FUN_0223d9c4(*(long *)(unaff_x23 + 200),unaff_w25,*(undefined8 *)PTR_DAT_03830be8);
    } while (((uVar6 & 1) != 0) ||
            ((((unaff_w20 & 1) != 0 && (*(int *)(unaff_x23 + 0x48) == 1)) &&
             (uVar6 = FUN_0327684c(), (uVar6 & 1) != 0))));
    if ((in_stack_00000010 & 0x100000000) == 0) {
LAB_03277a34:
      lVar10 = *(long *)(unaff_x23 + 0x208);
      if (lVar10 == 0) goto LAB_03277b08;
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *(long *)PTR_DAT_03830190;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_03277b08;
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
        *(uint *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = unaff_w25;
      }
      else {
        FUN_02776758(lVar10,unaff_w25,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_03277a94;
    }
    lVar10 = *unaff_x19;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar10 = *unaff_x19;
    }
    lVar7 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
    if (lVar7 == 0) {
      uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f7468);
      FUN_024c9af0(uVar5,*(undefined8 *)PTR_DAT_037f7470);
      lVar10 = *unaff_x19;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar10 = *unaff_x19;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x40);
      *puVar4 = uVar5;
      thunk_FUN_0188fd20(puVar4,uVar5);
    }
    else {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar7 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x40);
        if (lVar7 == 0) goto LAB_03277b08;
      }
      FUN_024ca184(lVar7,*(undefined8 *)PTR_DAT_037f7428);
    }
    param_1 = *unaff_x19;
  } while( true );
}


