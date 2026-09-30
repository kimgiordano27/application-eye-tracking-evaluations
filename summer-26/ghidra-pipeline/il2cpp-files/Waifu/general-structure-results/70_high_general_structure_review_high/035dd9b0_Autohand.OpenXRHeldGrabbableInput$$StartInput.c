/*
FUNCTION_NAME: Autohand.OpenXRHeldGrabbableInput$$StartInput
ENTRY_POINT: 035dd9b0
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_20;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void Autohand_OpenXRHeldGrabbableInput__StartInput
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long *unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  double __x;
  undefined4 uVar12;
  double in_stack_00000008;
  
  if (param_1 == 0) goto LAB_035dde7c;
  if (*(int *)(param_1 + 0xfc) == 0) {
    FUN_035ddf74();
  }
  else if (*(int *)(param_1 + 0xfc) == 1) {
    FUN_035dde80();
  }
  lVar4 = *unaff_x23;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar2 = FUN_07a0d2c4(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*unaff_x23 == 0) goto LAB_035dde7c;
    fVar6 = (float)FUN_07a18d2c(*unaff_x23,0);
    fVar8 = param_4;
    fVar10 = param_3;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar4 = (*DAT_086ef188)();
    if (lVar4 == 0) goto LAB_035dde7c;
    fVar7 = (float)FUN_07a18d2c(lVar4,0);
    *(float *)(unaff_x19 + 0x50) = fVar6 - fVar7;
    *(float *)(unaff_x19 + 0x54) = param_3 - fVar10;
    *(float *)(unaff_x19 + 0x58) = param_4 - fVar8;
  }
  if (*unaff_x22 == 0) goto LAB_035dde7c;
  if (*(int *)(*unaff_x22 + 0xf4) == 1) {
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    if (lVar4 == 0) goto LAB_035dde7c;
    if (DAT_086f1e98 == (code *)0x0) {
      DAT_086f1e98 = (code *)FUN_033d1b68(
                                         "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                         );
    }
    (*DAT_086f1e98)(lVar4,1);
    lVar4 = *(long *)(unaff_x19 + 0xf8);
    if (lVar4 == 0) goto LAB_035dde7c;
    if (DAT_086f1e78 == (code *)0x0) {
      DAT_086f1e78 = (code *)FUN_033d1b68(
                                         "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                         );
    }
    (*DAT_086f1e78)(lVar4,3);
  }
  lVar4 = *(long *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (lVar4 == 0) goto LAB_035dde7c;
  if (DAT_086f1fd0 == (code *)0x0) {
    DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
  }
  (*DAT_086f1fd0)(lVar4,1);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar2 = FUN_07a0d2c4(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x90);
    if (lVar4 == 0) goto LAB_035dde7c;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar4,1);
  }
  lVar4 = *unaff_x22;
  if (lVar4 == 0) goto LAB_035dde7c;
  if (*(int *)(lVar4 + 0x110) == 1) {
    uVar11 = *(undefined4 *)(lVar4 + 0x2c);
    iVar1 = *(int *)(lVar4 + 0x30);
    if (DAT_086ef0a0 == (code *)0x0) {
      DAT_086ef0a0 = (code *)FUN_033d1b68(
                                         "UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)"
                                         );
    }
    iVar1 = (*DAT_086ef0a0)(uVar11,iVar1 + 1);
    lVar4 = *unaff_x22;
    if (lVar4 == 0) goto LAB_035dde7c;
  }
  else if (*(int *)(lVar4 + 0x110) == 0) {
    iVar1 = *(int *)(lVar4 + 0x28);
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)(lVar4 + 0x124) != 0) {
    if (*(int *)(lVar4 + 0x124) == 1) {
      iVar3 = *(int *)(lVar4 + 0xec);
      if (iVar3 == 0) {
        if (DAT_086ef098 == (code *)0x0) {
          DAT_086ef098 = (code *)FUN_033d1b68(
                                             "UnityEngine.Random::Range(System.Single,System.Single)"
                                             );
        }
        fVar8 = (float)(*DAT_086ef098)(0,0x3f800000);
        fVar8 = fVar8 * 100.0;
        dVar9 = modf((double)fVar8,&stack0x00000008);
        if (0.0 <= fVar8) {
          if (dVar9 == 0.5) {
            fVar8 = 1.0;
            goto LAB_035ddc98;
          }
          fVar10 = (float)(int)(fVar8 + 0.5);
        }
        else if (dVar9 == -0.5) {
          fVar8 = -1.0;
LAB_035ddc98:
          fVar10 = (float)in_stack_00000008;
          if (((long)in_stack_00000008 & 1U) != 0) {
            fVar10 = (float)in_stack_00000008 + fVar8;
          }
        }
        else {
          fVar10 = (float)(int)(fVar8 + -0.5);
        }
        lVar4 = *unaff_x22;
        if (lVar4 == 0) goto LAB_035dde7c;
        uVar12 = *(undefined4 *)(lVar4 + 0x3c);
        uVar11 = *(undefined4 *)(lVar4 + 0x40);
        if (DAT_086ef098 == (code *)0x0) {
          DAT_086ef098 = (code *)FUN_033d1b68(
                                             "UnityEngine.Random::Range(System.Single,System.Single)"
                                             );
        }
        fVar8 = (float)(*DAT_086ef098)(uVar12,uVar11);
        fVar8 = fVar8 * 100.0;
        dVar9 = modf((double)fVar8,&stack0x00000008);
        if (0.0 <= fVar8) {
          if (dVar9 == 0.5) {
            fVar8 = 1.0;
            goto LAB_035ddd48;
          }
          fVar6 = (float)(int)(fVar8 + 0.5);
        }
        else if (dVar9 == -0.5) {
          fVar8 = -1.0;
LAB_035ddd48:
          fVar6 = (float)in_stack_00000008;
          if (((long)in_stack_00000008 & 1U) != 0) {
            fVar6 = (float)in_stack_00000008 + fVar8;
          }
        }
        else {
          fVar6 = (float)(int)(fVar8 + -0.5);
        }
        if (*unaff_x22 == 0) {
LAB_035dde7c:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(float *)(*unaff_x22 + 0x38) < (fVar10 / 100.0) * 100.0) goto LAB_035ddc64;
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (DAT_086d83f6 == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d83f6 = '\x01';
        }
        fVar8 = (fVar6 / 100.0) * (float)iVar1;
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        __x = (double)fVar8;
        dVar9 = modf(__x,&stack0x00000008);
        if (0.0 <= fVar8) {
          if (dVar9 == 0.5) {
            dVar9 = 1.0;
            goto LAB_035dde38;
          }
          in_stack_00000008 = (double)(long)(__x + 0.5);
        }
        else if (dVar9 == -0.5) {
          dVar9 = -1.0;
LAB_035dde38:
          if (((long)in_stack_00000008 & 1U) != 0) {
            in_stack_00000008 = in_stack_00000008 + dVar9;
          }
        }
        else {
          in_stack_00000008 = (double)(long)(__x + -0.5);
        }
        iVar1 = -0x80000000;
        if (in_stack_00000008 != INFINITY) {
          iVar1 = (int)in_stack_00000008;
        }
        goto LAB_035ddc68;
      }
    }
    else {
      iVar3 = *(int *)(lVar4 + 0xec);
    }
    if (iVar3 != 1) {
      return;
    }
  }
LAB_035ddc64:
  *(undefined1 *)(unaff_x19 + 0x81) = 0;
LAB_035ddc68:
  *(int *)(unaff_x19 + 0x28) = iVar1;
  return;
}


