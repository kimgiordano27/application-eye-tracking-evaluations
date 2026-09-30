/*
FUNCTION_NAME: DG.Tweening.DOTweenModulePhysics2D.<>c__DisplayClass4_0$$.ctor
ENTRY_POINT: 00e4c544
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass4_0___ctor(void)

{
  undefined *puVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  float unaff_s8;
  float fVar8;
  float fVar9;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_0132138c();
  if (CONCAT44(uStack000000000000000c,fStack0000000000000008) != 0) {
    iVar6 = *(int *)(unaff_x19 + 0x4f8);
    fVar8 = unaff_s8 * *(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) + 0x5c);
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e4c7cc;
        sVar2 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar5,0);
        if ((sVar2 == 10) || (iVar5 == *(int *)(unaff_x19 + 0x4f8) + -1)) {
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_00e4c7cc;
          FUN_00ac1d04(fVar8,*(long *)(unaff_x19 + 0x58),*unaff_x22);
          if (iVar5 < *(int *)(unaff_x19 + 0x4f8) + -1) {
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e4c7cc;
            FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar5 + 1,&stack0x00000008,*unaff_x24);
            if ((CONCAT44(uStack000000000000000c,fStack0000000000000008) == 0) ||
               (*(long *)(unaff_x19 + 0x48) == 0)) goto LAB_00e4c7cc;
            fVar8 = *(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) + 0x84);
            FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar5 + 1,&stack0x00000008,*unaff_x24);
            if (CONCAT44(uStack000000000000000c,fStack0000000000000008) == 0) goto LAB_00e4c7cc;
            fVar8 = fVar8 * *(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) +
                                      0x5c);
          }
        }
        else {
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e4c7cc;
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar5,&stack0x00000008,*unaff_x24);
          if ((CONCAT44(uStack000000000000000c,fStack0000000000000008) == 0) ||
             (*(long *)(unaff_x19 + 0x48) == 0)) goto LAB_00e4c7cc;
          fVar9 = *(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) + 0x84);
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar5,&stack0x00000008,*unaff_x24);
          if (CONCAT44(uStack000000000000000c,fStack0000000000000008) == 0) goto LAB_00e4c7cc;
          fVar9 = fVar9 * *(float *)(CONCAT44(uStack000000000000000c,fStack0000000000000008) + 0x5c)
          ;
          if (fVar8 <= fVar9) {
            fVar8 = fVar9;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar6 != iVar5);
    }
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_00ac1d04(fVar8,*(long *)(unaff_x19 + 0x58),*unaff_x22);
      lVar7 = *(long *)(unaff_x19 + 0x60);
      if (lVar7 != 0) {
        lVar4 = *unaff_x23;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        uVar3 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(lVar7 + 0x18) = 0;
        }
        else {
          iVar6 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          if (0 < iVar6) {
            FUN_0179519c(*(undefined8 *)(lVar7 + 0x10),0,iVar6,0);
          }
        }
        puVar1 = OVREyeGaze_TypeInfo;
        lVar7 = *(long *)(unaff_x19 + 0x58);
        if (lVar7 != 0) {
          fVar9 = *(float *)(unaff_x19 + 0x430);
          iVar6 = 0;
          fVar8 = 0.0;
          do {
            if (*(int *)(lVar7 + 0x18) <= iVar6) {
              if (*(long *)(unaff_x19 + 0x60) != 0) {
                FUN_00ac1d04(fVar8,*(long *)(unaff_x19 + 0x60),*unaff_x22);
                return;
              }
              break;
            }
            FUN_0132138c(lVar7,iVar6,&stack0x00000008,*(undefined8 *)puVar1);
            fVar8 = fVar8 + fStack0000000000000008;
            if (fVar9 < fVar8) {
              if (*(long *)(unaff_x19 + 0x58) == 0) break;
              lVar7 = *(long *)(unaff_x19 + 0x60);
              FUN_0132138c(*(long *)(unaff_x19 + 0x58),iVar6,&stack0x00000008,*(undefined8 *)puVar1)
              ;
              if (lVar7 == 0) break;
              FUN_00ac1d04(fVar8 - fStack0000000000000008,lVar7,*unaff_x22);
              if (*(long *)(unaff_x19 + 0x58) == 0) break;
              FUN_0132138c(*(long *)(unaff_x19 + 0x58),iVar6,&stack0x00000008,*(undefined8 *)puVar1)
              ;
              fVar9 = (fVar8 - fStack0000000000000008) + *(float *)(unaff_x19 + 0x430);
            }
            lVar7 = *(long *)(unaff_x19 + 0x58);
            iVar6 = iVar6 + 1;
          } while (lVar7 != 0);
        }
      }
    }
  }
LAB_00e4c7cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


