/*
FUNCTION_NAME: RealisticEyeMovements.EyeAndHeadAnimator$$GetLeftEyeDirection
ENTRY_POINT: 035be8e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void RealisticEyeMovements_EyeAndHeadAnimator__GetLeftEyeDirection
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long in_x9;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long in_x12;
  uint in_w13;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x27;
  long *unaff_x29;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar7 = 0;
  puVar1 = (ulong *)(in_x12 + ((ulong)unaff_x29 >> 0x12 & 0x7fff) * 8 +
                    (ulong)(in_w13 & 0xffff | 0x40000));
  do {
    if (*(long *)(in_x9 + 0x600) == 0) break;
    if (*(int *)(*(long *)(in_x9 + 0x600) + 0x18) <= iVar7) {
      FUN_035bede0();
      *(undefined4 *)(unaff_x19 + 0x9c) = 0;
      return;
    }
    lVar13 = *unaff_x29;
    lVar12 = *(long *)(unaff_x19 + 200);
    if (lVar13 == 0) {
      lVar13 = FUN_03398a84(DAT_083c6348);
      FUN_0507250c();
      *(long *)(unaff_x20 + 0x20) = lVar13;
      if (*(int *)(unaff_x27 + 0xcd0) != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x29 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if (lVar12 == 0) break;
    iVar7 = FUN_04ab1704(lVar12,0,*(undefined4 *)(lVar12 + 0x18),lVar13,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(DAT_083f7748 + 0x20) +
                                                                  0xc0) + 0x100) + 0x20) + 0xc0) +
                          0x118));
    if (iVar7 == -1) {
      if (((*(long *)(unaff_x19 + 0xa0) == 0) ||
          (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x600), lVar13 == 0)) ||
         (lVar13 = FUN_04ab0b48(lVar13,*(undefined4 *)(unaff_x20 + 0x18),DAT_083f0398), lVar13 == 0)
         ) break;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar13 = (*DAT_086ef190)(lVar13);
      if ((*(long *)(unaff_x19 + 0xa0) == 0) || (lVar13 == 0)) break;
      uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0xa0) + 0xdc0);
      if (DAT_086ef2c0 == (code *)0x0) {
        DAT_086ef2c0 = (code *)FUN_033d1b68("UnityEngine.GameObject::CompareTag(System.String)");
      }
      uVar8 = (*DAT_086ef2c0)(lVar13,uVar14);
      if ((uVar8 & 1) != 0) {
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar13 = (*DAT_086ef188)();
        if (lVar13 == 0) break;
        fVar15 = (float)FUN_07a18d2c(lVar13,0);
        if (((*(long *)(unaff_x19 + 0xa0) == 0) ||
            (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x600), lVar13 == 0)) ||
           (fVar19 = param_2, fVar21 = param_3,
           lVar13 = FUN_04ab0b48(lVar13,*(undefined4 *)(unaff_x20 + 0x18),DAT_083f0398), lVar13 == 0
           )) break;
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar13 = (*DAT_086ef188)(lVar13);
        if (lVar13 == 0) break;
        fVar16 = (float)FUN_07a18d2c(lVar13,0);
        fVar20 = fVar19;
        fVar22 = fVar21;
        if (DAT_086d7ff6 == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d7ff6 = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(long *)(unaff_x19 + 0xa0) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x600), lVar13 == 0)) break;
        lVar12 = *(long *)(unaff_x19 + 200);
        lVar13 = FUN_04ab0b48(lVar13,*(undefined4 *)(unaff_x20 + 0x18),DAT_083f0398);
        if (lVar13 == 0) break;
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        uVar14 = (*DAT_086ef188)(lVar13);
        if (((*(long *)(unaff_x19 + 0xa0) == 0) ||
            (lVar13 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x600), lVar13 == 0)) ||
           (lVar13 = FUN_04ab0b48(lVar13,*(undefined4 *)(unaff_x20 + 0x18),DAT_083f0398),
           lVar13 == 0)) break;
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar13 = (*DAT_086ef188)(lVar13);
        if (lVar13 == 0) break;
        uVar17 = FUN_07a18d2c(lVar13,0);
        uVar18 = *(undefined4 *)(unaff_x19 + 0x38);
        lVar13 = FUN_03398a84(DAT_083d9b10);
        puVar9 = (undefined8 *)(lVar13 + 0x10);
        *puVar9 = uVar14;
        iVar7 = *(int *)(unaff_x27 + 0xcd0);
        if (iVar7 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined4 *)(lVar13 + 0x18) = uVar17;
        *(float *)(lVar13 + 0x1c) = fVar20;
        param_2 = (param_2 - fVar19) * (param_2 - fVar19);
        param_3 = (param_3 - fVar21) * (param_3 - fVar21);
        *(float *)(lVar13 + 0x20) = fVar22;
        *(undefined4 *)(lVar13 + 0x24) = uVar18;
        *(float *)(lVar13 + 0x28) = SQRT(param_3 + (fVar15 - fVar16) * (fVar15 - fVar16) + param_2);
        *(undefined4 *)(lVar13 + 0x2c) = 0;
        lVar6 = DAT_083f7738;
        if (lVar12 == 0) break;
        lVar10 = *(long *)(lVar12 + 0x10);
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar3 = *(uint *)(lVar12 + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar3 + 1;
          plVar11 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
          *plVar11 = lVar13;
          if (iVar7 != 0) {
            puVar2 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          FUN_04ab0e54(lVar12,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    iVar7 = *(int *)(unaff_x20 + 0x18) + 1;
    *(int *)(unaff_x20 + 0x18) = iVar7;
    in_x9 = *(long *)(unaff_x19 + 0xa0);
  } while (in_x9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


