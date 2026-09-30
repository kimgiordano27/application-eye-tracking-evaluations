/*
FUNCTION_NAME: Proyecto26.HttpBase.<CreateRequestAndRetry>d__1$$System.IDisposable.Dispose
ENTRY_POINT: 035b0620
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Proyecto26_HttpBase_<CreateRequestAndRetry>d__1__System_IDisposable_Dispose
               (undefined8 param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int in_w9;
  undefined4 *puVar10;
  undefined4 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  char unaff_w22;
  int unaff_w23;
  undefined8 unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (in_w9 == 0) {
    FUN_033b9870(param_1);
  }
  FUN_079c9c0c();
  if (*(int *)(unaff_x20 + 0xca4) == 1) {
    if (*unaff_x26 == 0) goto LAB_035b10c0;
    uVar4 = FUN_03c89df4(*unaff_x26,DAT_08405898);
    *(undefined8 *)(unaff_x20 + 4000) = uVar4;
    if (*(int *)(unaff_x28 + 0xcd0) != 0) {
      puVar1 = &DAT_0873ccb0 + (unaff_x20 + 4000U >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (unaff_x20 + 4000U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    *(undefined8 *)(unaff_x20 + 4000) = 0;
    if (*(int *)(unaff_x28 + 0xcd0) != 0) {
      puVar1 = &DAT_0873ccb0 + (unaff_x20 + 4000U >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (unaff_x20 + 4000U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar9 = *(long *)(unaff_x20 + 0x2e0);
  *(undefined4 *)(unaff_x20 + 0xa7c) = *(undefined4 *)(unaff_x20 + 0x57c);
  if (lVar9 == 0) goto LAB_035b10c0;
  *(undefined1 *)(lVar9 + 0x38) = 1;
  *(undefined4 *)(lVar9 + 0xac) = 0;
  if (*(long *)(unaff_x20 + 0x2d8) == 0) goto LAB_035b10c0;
  FUN_035a1b40(*(long *)(unaff_x20 + 0x2d8),0);
  *(int *)(unaff_x20 + 0xf30) = unaff_w23;
  if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4();
  if ((uVar5 & 1) != 0) {
    *(undefined8 *)(unaff_x20 + 0x498) = unaff_x24;
    if (*(int *)(unaff_x28 + 0xcd0) != 0) {
      puVar1 = &DAT_0873ccb0 + (unaff_x20 + 0x498U >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (unaff_x20 + 0x498U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar9 = *unaff_x26;
    if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = FUN_035b9fb0();
      *(undefined4 *)(unaff_x20 + 0x2ec) = uVar11;
    }
  }
  if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4();
  iVar8 = *(int *)(unaff_x20 + 0xc8c);
  if ((((uVar5 & 1) != 0) && (iVar8 == 2)) || ((iVar8 != 2 && (iVar8 != 4)))) {
    if (*(char *)(unaff_x20 + 0x358) == '\0') {
      if (*(char *)(unaff_x20 + 0x351) == '\0') {
LAB_035b0828:
        *(int *)(unaff_x20 + 0x9dc) = *(int *)(unaff_x20 + 0x9dc) - unaff_w23;
        if ((unaff_x29 != 0) || (unaff_w22 == '\0')) {
          lVar9 = **(long **)(DAT_083c9b08 + 0xb8);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) goto LAB_035b10c0;
          if (*(int *)(*(long *)(lVar9 + 0x38) + 0x94) != 1) {
            if (*(long *)(unaff_x20 + 0x1b8) == 0) goto LAB_035b10c0;
            uVar11 = *(undefined4 *)(unaff_x20 + 0xf30);
            FUN_07a18d2c(*(long *)(unaff_x20 + 0x1b8),0);
            FUN_03599ba8(lVar9,uVar11,unaff_w21 & 1,0,0);
          }
        }
        if (*(long *)(unaff_x20 + 0x4f8) == 0) goto LAB_035b10c0;
        FUN_07a22574(*(long *)(unaff_x20 + 0x4f8),0);
        if ((*(int *)(unaff_x20 + 0xd80) == 1) && (*(char *)(unaff_x20 + 0xdeb) == '\0')) {
          lVar9 = *(long *)(unaff_x20 + 0x5d8);
          if (lVar9 == 0) goto LAB_035b10c0;
          iVar8 = *(int *)(lVar9 + 0x18);
          if ((0 < iVar8) && (*(char *)(unaff_x20 + 0x358) == '\0')) {
            if (DAT_086ef0a0 == (code *)0x0) {
              DAT_086ef0a0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)"
                                                 );
            }
            uVar11 = (*DAT_086ef0a0)(0,iVar8);
            uVar4 = FUN_04ab0b48(lVar9,uVar11,DAT_083f0f80);
            if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
              FUN_033b9870(*(long *)(unaff_x27 + 0x7d8));
            }
            uVar5 = FUN_07a0d2c4(uVar4,0,0);
            if ((uVar5 & 1) != 0) {
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              puVar10 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
              uVar17 = *puVar10;
              uVar16 = puVar10[1];
              uVar11 = puVar10[2];
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              lVar9 = (*DAT_086ef188)();
              if (lVar9 == 0) goto LAB_035b10c0;
              uVar12 = FUN_07a172b0(lVar9,0);
              lVar9 = FUN_035dcb1c(uVar17,uVar16,uVar11,uVar12,param_3,param_4,param_5,
                                   *(undefined4 *)(unaff_x20 + 0x5d0),uVar4,0);
              if (lVar9 == 0) goto LAB_035b10c0;
              if (DAT_086ef250 == (code *)0x0) {
                DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
              }
              lVar7 = (*DAT_086ef250)(lVar9);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar4 = (*DAT_086ef188)();
              if (lVar7 == 0) goto LAB_035b10c0;
              if (DAT_086ef840 == (code *)0x0) {
                DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
              }
              (*DAT_086ef840)(lVar7,uVar4,1);
              fVar13 = *(float *)(unaff_x20 + 0xa0);
              uVar4 = *(undefined8 *)(unaff_x20 + 0xa4);
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              uVar12 = *(undefined8 *)(*(float **)(DAT_083d2c90 + 0xb8) + 1);
              fVar13 = fVar13 - **(float **)(DAT_083d2c90 + 0xb8);
              fVar14 = (float)uVar4 - (float)uVar12;
              fVar15 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
              fVar15 = fVar15 * fVar15;
              if (fVar15 + fVar13 * fVar13 + fVar14 * fVar14 < DAT_012ed8ec) {
                fVar13 = DAT_012ed8ec;
                if (*(int *)(unaff_x20 + 0xe70) == 1) {
                  if (DAT_086ef250 == (code *)0x0) {
                    DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                  }
                  lVar7 = (*DAT_086ef250)(lVar9);
                  lVar9 = *(long *)(unaff_x20 + 0x1b8);
                }
                else {
                  if (*(int *)(unaff_x20 + 0xe70) != 0) goto LAB_035b0ff4;
                  if (DAT_086ef250 == (code *)0x0) {
                    DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                  }
                  lVar7 = (*DAT_086ef250)(lVar9);
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  lVar9 = (*DAT_086ef188)();
                }
                if ((lVar9 == 0) || (fVar14 = (float)FUN_07a18d2c(lVar9,0), lVar7 == 0))
                goto LAB_035b10c0;
                FUN_07a18dcc(fVar14 + *(float *)(unaff_x20 + 0xe64),
                             fVar15 + *(float *)(unaff_x20 + 0xe68),
                             fVar13 + *(float *)(unaff_x20 + 0xe6c),lVar7,0);
              }
LAB_035b0ff4:
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              uVar11 = *(undefined4 *)(*(undefined8 **)(DAT_083d2c90 + 0xb8) + 1);
              *(undefined8 *)(unaff_x20 + 0xa0) = **(undefined8 **)(DAT_083d2c90 + 0xb8);
              *(undefined4 *)(unaff_x20 + 0xa8) = uVar11;
            }
          }
        }
        if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
        FUN_035a41fc(*(long *)(unaff_x20 + 0x2d0),0);
        if ((*(int *)(unaff_x20 + 0xca8) == 0) || (*(int *)(unaff_x20 + 0xc98) == 0)) {
          iVar8 = *(int *)(unaff_x20 + 0x39c);
LAB_035b08fc:
          lVar9 = *(long *)(unaff_x20 + 0xf78);
          if (DAT_086ef0a0 == (code *)0x0) {
            DAT_086ef0a0 = (code *)FUN_033d1b68(
                                               "UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)"
                                               );
          }
          uVar11 = (*DAT_086ef0a0)(1,iVar8 + 1);
          uVar4 = DAT_0843c880;
          if (lVar9 == 0) goto LAB_035b10c0;
          if (DAT_086ec970 == (code *)0x0) {
            DAT_086ec970 = (code *)FUN_033d1b68(
                                               "UnityEngine.Animator::SetIntegerString(System.String,System.Int32)"
                                               );
          }
          (*DAT_086ec970)(lVar9,uVar4,uVar11);
        }
        else if (*(int *)(unaff_x20 + 0xca8) == 1) {
          if (*(int *)(unaff_x20 + 0xccc) == 1) {
            iVar8 = *(int *)(unaff_x20 + 0x3a4);
          }
          else {
            if (*(int *)(unaff_x20 + 0xccc) != 0) goto LAB_035b0978;
            iVar8 = *(int *)(unaff_x20 + 0x3a0);
          }
          goto LAB_035b08fc;
        }
LAB_035b0978:
        uVar4 = DAT_0843c870;
        if (((((*(int *)(unaff_x20 + 0xd1c) == 1) && (*(char *)(unaff_x20 + 0x34f) == '\0')) &&
             (*(char *)(unaff_x20 + 0x357) == '\0')) &&
            ((*(char *)(unaff_x20 + 0x352) == '\0' && (*(char *)(unaff_x20 + 0x34e) == '\0')))) &&
           ((*(char *)(unaff_x20 + 0x353) == '\0' &&
            ((*(char *)(unaff_x20 + 0x350) == '\0' &&
             (*(float *)(unaff_x20 + 0x2ec) <= (float)*(int *)(unaff_x20 + 0x2f4))))))) {
          lVar9 = *(long *)(unaff_x20 + 0xf78);
          if (lVar9 == 0) goto LAB_035b10c0;
          if (DAT_086ec978 == (code *)0x0) {
            DAT_086ec978 = (code *)FUN_033d1b68(
                                               "UnityEngine.Animator::SetTriggerString(System.String)"
                                               );
          }
          (*DAT_086ec978)(lVar9,uVar4);
          uVar4 = DAT_08435af8;
          lVar9 = *(long *)(unaff_x20 + 0x2d0);
          if (lVar9 == 0) goto LAB_035b10c0;
          if (DAT_086ef388 == (code *)0x0) {
            DAT_086ef388 = (code *)FUN_033d1b68(
                                               "UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)"
                                               );
          }
          (*DAT_086ef388)(0x3e800000,0,lVar9,uVar4);
          goto LAB_035b0b2c;
        }
        lVar9 = *(long *)(unaff_x20 + 0xf78);
        if (lVar9 == 0) goto LAB_035b10c0;
        pcVar6 = DAT_086ec980;
        if (DAT_086ec980 == (code *)0x0) {
          pcVar6 = (code *)FUN_033d1b68("UnityEngine.Animator::ResetTriggerString(System.String)");
          DAT_086ec980 = pcVar6;
        }
      }
      else {
        fVar13 = *(float *)(unaff_x20 + 0x2ec);
        param_3 = (ulong)(uint)fVar13;
        if ((float)*(int *)(unaff_x20 + 0x2f4) < fVar13) goto LAB_035b0828;
        if ((float)*(int *)(unaff_x20 + 0x2f4) < fVar13) goto LAB_035b0b2c;
        fVar13 = ABS((float)(*(int *)(unaff_x20 + 0x2f0) + -1) * DAT_012edd80 * (float)unaff_w23 -
                     (float)unaff_w23);
        iVar8 = -0x80000000;
        if (fVar13 != INFINITY) {
          iVar8 = (int)fVar13;
        }
        *(int *)(unaff_x20 + 0x9dc) = *(int *)(unaff_x20 + 0x9dc) - iVar8;
        if ((unaff_x29 != 0) || (unaff_w22 == '\0')) {
          if (*(long *)(unaff_x20 + 0x1b8) == 0) goto LAB_035b10c0;
          lVar9 = **(long **)(DAT_083c9b08 + 0xb8);
          FUN_07a18d2c(*(long *)(unaff_x20 + 0x1b8),0);
          if (lVar9 == 0) goto LAB_035b10c0;
          FUN_03599ba8(lVar9,iVar8,unaff_w21 & 1,0,0);
        }
        if (*(long *)(unaff_x20 + 0x2d0) == 0) goto LAB_035b10c0;
        FUN_035a3cd4(*(long *)(unaff_x20 + 0x2d0),0);
        uVar4 = DAT_08435af8;
        lVar9 = *(long *)(unaff_x20 + 0x2d0);
        if (lVar9 == 0) goto LAB_035b10c0;
        if (DAT_086ef388 == (code *)0x0) {
          DAT_086ef388 = (code *)FUN_033d1b68(
                                             "UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)"
                                             );
        }
        (*DAT_086ef388)(0x3e800000,0,lVar9,uVar4);
        uVar4 = DAT_0843c870;
        lVar9 = *(long *)(unaff_x20 + 0xf78);
        if (lVar9 == 0) goto LAB_035b10c0;
        pcVar6 = DAT_086ec978;
        if (DAT_086ec978 == (code *)0x0) {
          pcVar6 = (code *)FUN_033d1b68("UnityEngine.Animator::SetTriggerString(System.String)");
          DAT_086ec978 = pcVar6;
        }
      }
      (*pcVar6)(lVar9,uVar4);
    }
LAB_035b0b2c:
    iVar8 = *(int *)(unaff_x20 + 0xc8c);
  }
  if (((iVar8 == 3) && (*(int *)(unaff_x20 + 0xc98) == 1)) &&
     ((float)*(int *)(unaff_x20 + 0x9dc) / (float)*(int *)(unaff_x20 + 0x9e0) <=
      (float)*(int *)(unaff_x20 + 0xafc) * DAT_012edd80)) {
    lVar9 = *(long *)(unaff_x20 + 0x420);
    if (lVar9 == 0) goto LAB_035b10c0;
    if (DAT_086ebf48 == (code *)0x0) {
      DAT_086ebf48 = (code *)FUN_033d1b68(
                                         "UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)"
                                         );
    }
    (*DAT_086ebf48)(lVar9,1);
    lVar9 = *(long *)(unaff_x20 + 0x420);
    if (lVar9 == 0) goto LAB_035b10c0;
    if (DAT_086ebef8 == (code *)0x0) {
      DAT_086ebef8 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::ResetPath()");
    }
    (*DAT_086ebef8)(lVar9);
    lVar9 = *(long *)(unaff_x20 + 0x420);
    if (lVar9 == 0) goto LAB_035b10c0;
    uVar11 = *(undefined4 *)(unaff_x20 + 0xad8);
    if (DAT_086ebe78 == (code *)0x0) {
      DAT_086ebe78 = (code *)FUN_033d1b68(
                                         "UnityEngine.AI.NavMeshAgent::set_stoppingDistance(System.Single)"
                                         );
    }
    (*DAT_086ebe78)(uVar11,lVar9);
    lVar9 = *(long *)(unaff_x20 + 0xf78);
    *(undefined1 *)(unaff_x20 + 0x352) = 0;
    uVar4 = DAT_0844c5b8;
    if (lVar9 == 0) goto LAB_035b10c0;
    if (DAT_086ec958 == (code *)0x0) {
      DAT_086ec958 = (code *)FUN_033d1b68(
                                         "UnityEngine.Animator::SetBoolString(System.String,System.Boolean)"
                                         );
    }
    (*DAT_086ec958)(lVar9,uVar4,0);
    if ((*(long *)(unaff_x20 + 0x2d0) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x20 + 0x2d0) + 0x20), lVar9 == 0)) goto LAB_035b10c0;
    *(undefined4 *)(lVar9 + 0xc8c) = 1;
    *(undefined4 *)(lVar9 + 0xc98) = 0;
  }
  if ((0 < *(int *)(unaff_x20 + 0x9dc)) || (*(char *)(unaff_x20 + 0x358) != '\0')) {
    return;
  }
  *(undefined4 *)(unaff_x20 + 0x4a0) = unaff_w19;
  if (*(long *)(unaff_x20 + 0x2d8) != 0) {
    FUN_035a0d0c(*(long *)(unaff_x20 + 0x2d8),0);
    return;
  }
LAB_035b10c0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


