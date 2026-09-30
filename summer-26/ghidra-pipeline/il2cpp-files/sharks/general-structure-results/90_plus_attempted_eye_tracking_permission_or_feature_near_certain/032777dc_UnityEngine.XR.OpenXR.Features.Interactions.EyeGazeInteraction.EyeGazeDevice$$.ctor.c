/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 032777dc
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


bool UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  int iVar10;
  undefined8 *unaff_x29;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  
  do {
    uVar5 = FUN_033e963c(param_1,0,0);
    if ((uVar5 & 1) == 0) {
LAB_03277878:
      do {
        lVar6 = FUN_032a70a4(0);
        if (lVar6 != 0) {
          lVar6 = FUN_032a70a4(0);
          if (lVar6 == 0) goto LAB_03277b08;
          if (0 < *(int *)(lVar6 + 0x18)) {
            lVar6 = FUN_032a70a4(0);
            if (lVar6 == 0) goto LAB_03277b08;
            iVar10 = 0;
            while (iVar10 < *(int *)(lVar6 + 0x18)) {
              lVar6 = FUN_032a70a4(0);
              if (lVar6 == 0) goto LAB_03277b08;
              uVar7 = FUN_0270a174(lVar6,iVar10,*unaff_x29);
              if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
              }
              uVar5 = FUN_033e963c(uVar7,0,0);
              if ((uVar5 & 1) == 0) break;
              lVar6 = FUN_032a70a4(0);
              if ((lVar6 == 0) || (lVar6 = FUN_0270a174(lVar6,iVar10,*unaff_x29), lVar6 == 0))
              goto LAB_03277b08;
              uVar3 = FUN_033ecde0(lVar6,0);
              lVar8 = *unaff_x19;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01843fdc(lVar8);
                lVar8 = *unaff_x19;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
              if (lVar8 == 0) goto LAB_03277b08;
              uVar5 = FUN_024cacf4(lVar8,uVar3,*unaff_x21);
              if (((uVar5 & 1) != 0) &&
                 (uVar5 = FUN_03277134(lVar6,unaff_w25,1,unaff_w20 & 1), (uVar5 & 1) != 0))
              goto LAB_03277a94;
              iVar10 = iVar10 + 1;
              lVar6 = FUN_032a70a4(0);
              if (lVar6 == 0) goto LAB_03277b08;
            }
          }
        }
        uVar7 = FUN_032a6f84(0);
        if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
        }
        uVar5 = FUN_033e963c(uVar7,0,0);
        if ((uVar5 & 1) == 0) goto LAB_03277a34;
        lVar6 = FUN_032a6f84(0);
        if (lVar6 == 0) goto LAB_03277b08;
        uVar3 = FUN_033ecde0(lVar6,0);
        lVar8 = *unaff_x19;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01843fdc(lVar8);
          lVar8 = *unaff_x19;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
        if (lVar8 == 0) goto LAB_03277b08;
        uVar5 = FUN_024cacf4(lVar8,uVar3,*unaff_x21);
        if ((uVar5 & 1) == 0) goto LAB_03277a34;
        uVar5 = FUN_03277134(lVar6,unaff_w25,1,unaff_w20 & 1);
        if ((uVar5 & 1) == 0) goto LAB_03277a34;
LAB_03277a94:
        do {
          unaff_w24 = unaff_w24 + 1;
          if (*(int *)(unaff_x22 + 0x10) <= unaff_w24) {
            lVar6 = *(long *)(unaff_x23 + 0x208);
            if (lVar6 != 0) {
              bVar1 = *(int *)(lVar6 + 0x18) < 1;
              if (!bVar1) {
                uVar7 = FUN_02778044(lVar6,*(undefined8 *)PTR_DAT_03830070);
                *in_stack_00000008 = uVar7;
                thunk_FUN_0188fd20(in_stack_00000008,uVar7);
              }
              return bVar1;
            }
            goto LAB_03277b08;
          }
          uVar2 = FUN_02a4b568();
          if (*(long *)(unaff_x23 + 200) == 0) goto LAB_03277b08;
          unaff_w25 = uVar2 & 0xffff;
          uVar5 = FUN_0223d9c4(*(long *)(unaff_x23 + 200),unaff_w25,*(undefined8 *)PTR_DAT_03830be8)
          ;
        } while (((uVar5 & 1) != 0) ||
                ((((unaff_w20 & 1) != 0 && (*(int *)(unaff_x23 + 0x48) == 1)) &&
                 (uVar5 = FUN_0327684c(), (uVar5 & 1) != 0))));
        if ((in_stack_00000010 & 0x100000000) == 0) {
LAB_03277a34:
          lVar6 = *(long *)(unaff_x23 + 0x208);
          if (lVar6 == 0) goto LAB_03277b08;
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar9 = *(long *)PTR_DAT_03830190;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_03277b08;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(uint *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = unaff_w25;
          }
          else {
            FUN_02776758(lVar6,unaff_w25,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_03277a94;
        }
        lVar6 = *unaff_x19;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar6 = *unaff_x19;
        }
        lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
        if (lVar8 == 0) {
          uVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f7468);
          FUN_024c9af0(uVar7,*(undefined8 *)PTR_DAT_037f7470);
          lVar6 = *unaff_x19;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar6 = *unaff_x19;
          }
          puVar4 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40);
          *puVar4 = uVar7;
          thunk_FUN_0188fd20(puVar4,uVar7);
        }
        else {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar8 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x40);
            if (lVar8 == 0) goto LAB_03277b08;
          }
          FUN_024ca184(lVar8,*(undefined8 *)PTR_DAT_037f7428);
        }
        lVar6 = *unaff_x19;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar6 = *unaff_x19;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
        uVar3 = FUN_033ecde0();
        if (lVar6 == 0) goto LAB_03277b08;
        FUN_024cacf4(lVar6,uVar3,*unaff_x21);
        lVar6 = *(long *)(unaff_x23 + 0x138);
      } while ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) < 1));
      unaff_w26 = 0;
    }
    else {
      if ((*(long *)(unaff_x23 + 0x138) == 0) ||
         (lVar6 = FUN_0270a174(*(long *)(unaff_x23 + 0x138),unaff_w26,*unaff_x29), lVar6 == 0)) {
LAB_03277b08:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar3 = FUN_033ecde0(lVar6,0);
      lVar8 = *unaff_x19;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01843fdc(lVar8);
        lVar8 = *unaff_x19;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
      if (lVar8 == 0) goto LAB_03277b08;
      uVar5 = FUN_024cacf4(lVar8,uVar3,*unaff_x21);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_03277134(lVar6,unaff_w25,1,unaff_w20 & 1), (uVar5 & 1) != 0))
      goto LAB_03277a94;
      lVar6 = *(long *)(unaff_x23 + 0x138);
      if (lVar6 == 0) goto LAB_03277b08;
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(lVar6 + 0x18) <= unaff_w26) goto LAB_03277878;
    }
    param_1 = FUN_0270a174(lVar6,unaff_w26,*unaff_x29);
    if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2b10);
    }
  } while( true );
}


