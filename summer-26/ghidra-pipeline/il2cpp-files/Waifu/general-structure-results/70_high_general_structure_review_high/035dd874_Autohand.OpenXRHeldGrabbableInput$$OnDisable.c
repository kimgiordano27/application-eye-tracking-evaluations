/*
FUNCTION_NAME: Autohand.OpenXRHeldGrabbableInput$$OnDisable
ENTRY_POINT: 035dd874
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2
*/


void Autohand_OpenXRHeldGrabbableInput__OnDisable
               (long *param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long in_x9;
  int in_w10;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x21;
  long *unaff_x22;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double __x;
  undefined4 uVar18;
  double in_stack_00000008;
  
  *(undefined1 *)(unaff_x19 + 0x74) = 0;
  *(undefined4 *)(unaff_x19 + 0x70) = 0;
  if (unaff_x21 == 0) goto LAB_035dde7c;
  plVar11 = (long *)(unaff_x19 + 0x78);
  *plVar11 = *(long *)(unaff_x21 + 0xdb0);
  if (in_w10 != 0) {
    puVar1 = (ulong *)(in_x9 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(unaff_x19 + 0x5c) = 0;
  *(undefined4 *)(unaff_x19 + 0x60) = 0;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035dde7c;
  uVar12 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x70);
  lVar8 = *(long *)(unaff_x19 + 0x30);
  *(undefined1 *)(unaff_x19 + 100) = 0;
  *(undefined1 *)(unaff_x19 + 0x80) = 0;
  *(undefined4 *)(unaff_x19 + 0xb8) = uVar12;
  if (lVar8 == 0) goto LAB_035dde7c;
  puVar9 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar9 = *(undefined8 *)(lVar8 + 0xdb0);
  if (in_w10 == 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar8 + 4000);
  }
  else {
    puVar1 = (ulong *)(in_x9 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*param_1 == 0) goto LAB_035dde7c;
    puVar9 = (undefined8 *)(unaff_x19 + 0x38);
    *puVar9 = *(undefined8 *)(*param_1 + 4000);
    puVar1 = (ulong *)(in_x9 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *param_1;
    if (lVar8 == 0) goto LAB_035dde7c;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x88) = *(undefined4 *)(lVar8 + 0xca4);
  if (*(float *)(unaff_x19 + 0xb8) == 0.0) {
    if (lVar7 == 0) goto LAB_035dde7c;
    if (*(int *)(lVar7 + 0x108) == 1) {
      *(undefined4 *)(unaff_x19 + 0xb8) = 0x40400000;
    }
  }
  else if (lVar7 == 0) goto LAB_035dde7c;
  if (*(int *)(lVar7 + 0xfc) == 0) {
    FUN_035ddf74();
  }
  else if (*(int *)(lVar7 + 0xfc) == 1) {
    FUN_035dde80();
  }
  lVar8 = *plVar11;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_035dde7c;
    fVar13 = (float)FUN_07a18d2c(*plVar11,0);
    fVar15 = param_4;
    fVar17 = param_3;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar8 = (*DAT_086ef188)();
    if (lVar8 == 0) goto LAB_035dde7c;
    fVar14 = (float)FUN_07a18d2c(lVar8,0);
    *(float *)(unaff_x19 + 0x50) = fVar13 - fVar14;
    *(float *)(unaff_x19 + 0x54) = param_3 - fVar17;
    *(float *)(unaff_x19 + 0x58) = param_4 - fVar15;
  }
  if (*unaff_x22 == 0) goto LAB_035dde7c;
  if (*(int *)(*unaff_x22 + 0xf4) == 1) {
    lVar8 = *(long *)(unaff_x19 + 0xf8);
    if (lVar8 == 0) goto LAB_035dde7c;
    if (DAT_086f1e98 == (code *)0x0) {
      DAT_086f1e98 = (code *)FUN_033d1b68(
                                         "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                         );
    }
    (*DAT_086f1e98)(lVar8,1);
    lVar8 = *(long *)(unaff_x19 + 0xf8);
    if (lVar8 == 0) goto LAB_035dde7c;
    if (DAT_086f1e78 == (code *)0x0) {
      DAT_086f1e78 = (code *)FUN_033d1b68(
                                         "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                         );
    }
    (*DAT_086f1e78)(lVar8,3);
  }
  lVar8 = *(long *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (lVar8 == 0) goto LAB_035dde7c;
  if (DAT_086f1fd0 == (code *)0x0) {
    DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
  }
  (*DAT_086f1fd0)(lVar8,1);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(unaff_x19 + 0x90);
    if (lVar8 == 0) goto LAB_035dde7c;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar8,1);
  }
  lVar8 = *unaff_x22;
  if (lVar8 == 0) goto LAB_035dde7c;
  if (*(int *)(lVar8 + 0x110) == 1) {
    uVar12 = *(undefined4 *)(lVar8 + 0x2c);
    iVar4 = *(int *)(lVar8 + 0x30);
    if (DAT_086ef0a0 == (code *)0x0) {
      DAT_086ef0a0 = (code *)FUN_033d1b68(
                                         "UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)"
                                         );
    }
    iVar4 = (*DAT_086ef0a0)(uVar12,iVar4 + 1);
    lVar8 = *unaff_x22;
    if (lVar8 == 0) goto LAB_035dde7c;
  }
  else if (*(int *)(lVar8 + 0x110) == 0) {
    iVar4 = *(int *)(lVar8 + 0x28);
  }
  else {
    iVar4 = 0;
  }
  if (*(int *)(lVar8 + 0x124) != 0) {
    if (*(int *)(lVar8 + 0x124) == 1) {
      iVar6 = *(int *)(lVar8 + 0xec);
      if (iVar6 == 0) {
        if (DAT_086ef098 == (code *)0x0) {
          DAT_086ef098 = (code *)FUN_033d1b68(
                                             "UnityEngine.Random::Range(System.Single,System.Single)"
                                             );
        }
        fVar15 = (float)(*DAT_086ef098)(0,0x3f800000);
        fVar15 = fVar15 * 100.0;
        dVar16 = modf((double)fVar15,&stack0x00000008);
        if (0.0 <= fVar15) {
          if (dVar16 == 0.5) {
            fVar15 = 1.0;
            goto LAB_035ddc98;
          }
          fVar17 = (float)(int)(fVar15 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar15 = -1.0;
LAB_035ddc98:
          fVar17 = (float)in_stack_00000008;
          if (((long)in_stack_00000008 & 1U) != 0) {
            fVar17 = (float)in_stack_00000008 + fVar15;
          }
        }
        else {
          fVar17 = (float)(int)(fVar15 + -0.5);
        }
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_035dde7c;
        uVar18 = *(undefined4 *)(lVar8 + 0x3c);
        uVar12 = *(undefined4 *)(lVar8 + 0x40);
        if (DAT_086ef098 == (code *)0x0) {
          DAT_086ef098 = (code *)FUN_033d1b68(
                                             "UnityEngine.Random::Range(System.Single,System.Single)"
                                             );
        }
        fVar15 = (float)(*DAT_086ef098)(uVar18,uVar12);
        fVar15 = fVar15 * 100.0;
        dVar16 = modf((double)fVar15,&stack0x00000008);
        if (0.0 <= fVar15) {
          if (dVar16 == 0.5) {
            fVar15 = 1.0;
            goto LAB_035ddd48;
          }
          fVar13 = (float)(int)(fVar15 + 0.5);
        }
        else if (dVar16 == -0.5) {
          fVar15 = -1.0;
LAB_035ddd48:
          fVar13 = (float)in_stack_00000008;
          if (((long)in_stack_00000008 & 1U) != 0) {
            fVar13 = (float)in_stack_00000008 + fVar15;
          }
        }
        else {
          fVar13 = (float)(int)(fVar15 + -0.5);
        }
        if (*unaff_x22 == 0) {
LAB_035dde7c:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(float *)(*unaff_x22 + 0x38) < (fVar17 / 100.0) * 100.0) goto LAB_035ddc64;
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (DAT_086d83f6 == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d83f6 = '\x01';
        }
        fVar15 = (fVar13 / 100.0) * (float)iVar4;
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        __x = (double)fVar15;
        dVar16 = modf(__x,&stack0x00000008);
        if (0.0 <= fVar15) {
          if (dVar16 == 0.5) {
            dVar16 = 1.0;
            goto LAB_035dde38;
          }
          in_stack_00000008 = (double)(long)(__x + 0.5);
        }
        else if (dVar16 == -0.5) {
          dVar16 = -1.0;
LAB_035dde38:
          if (((long)in_stack_00000008 & 1U) != 0) {
            in_stack_00000008 = in_stack_00000008 + dVar16;
          }
        }
        else {
          in_stack_00000008 = (double)(long)(__x + -0.5);
        }
        iVar4 = -0x80000000;
        if (in_stack_00000008 != INFINITY) {
          iVar4 = (int)in_stack_00000008;
        }
        goto LAB_035ddc68;
      }
    }
    else {
      iVar6 = *(int *)(lVar8 + 0xec);
    }
    if (iVar6 != 1) {
      return;
    }
  }
LAB_035ddc64:
  *(undefined1 *)(unaff_x19 + 0x81) = 0;
LAB_035ddc68:
  *(int *)(unaff_x19 + 0x28) = iVar4;
  return;
}


