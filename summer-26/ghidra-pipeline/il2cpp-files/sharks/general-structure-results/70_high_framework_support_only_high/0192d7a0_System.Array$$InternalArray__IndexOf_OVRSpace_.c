/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRSpace>
ENTRY_POINT: 0192d7a0
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__IndexOf<OVRSpace>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *plVar10;
  ulong unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_037f4738);
  FUN_017fc350(PTR_DAT_037f4740);
  FUN_017fc350(PTR_DAT_037f4748);
  FUN_017fc350(PTR_DAT_037f4750);
  FUN_017fc350(PTR_DAT_037f4758);
  FUN_017fc350(PTR_DAT_037f4760);
  FUN_017fc350(PTR_DAT_037f4768);
  FUN_017fc350(PTR_DAT_037f4770);
  FUN_017fc350(PTR_DAT_037f4778);
  FUN_017fc350(PTR_DAT_037f4780);
  FUN_017fc350(PTR_DAT_037f4788);
  *(undefined1 *)(unaff_x21 + 0x75) = 1;
  if (*(char *)(unaff_x19 + 0xae) == '\0') {
    if ((unaff_x22 & 1) == 0) {
      return;
    }
    lVar4 = FUN_033e6c58();
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033ed158(lVar4,0);
    puVar8 = (undefined8 *)PTR_DAT_037f4770;
    goto LAB_0192d97c;
  }
  plVar10 = (long *)(unaff_x19 + 0x68);
  lVar4 = *plVar10;
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0xe8) != '\0') {
      if ((unaff_x22 & 1) == 0) {
        return;
      }
      FUN_019a1928(lVar4,0,0);
    }
    *plVar10 = 0;
    thunk_FUN_0188fd20(plVar10,0);
  }
  puVar2 = PTR_DAT_037f2b10;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    lVar4 = *(long *)(unaff_x19 + 0x78);
  }
  else {
    lVar4 = FUN_033e6c58();
  }
  uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_033ea488(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
LAB_0192d908:
    if (*(char *)(unaff_x19 + 0x70) != '\0') {
      uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar5 = FUN_033ea488(uVar11,0,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = FUN_033e6c58();
        if (lVar4 != 0) {
          uVar11 = FUN_033ed158(lVar4,0);
          puVar8 = (undefined8 *)PTR_DAT_037f4778;
          goto LAB_0192d97c;
        }
        goto LAB_0192eb64;
      }
    }
    lVar4 = FUN_033e6c58();
    if (lVar4 != 0) {
      uVar11 = FUN_033ed158(lVar4,0);
      puVar8 = (undefined8 *)PTR_DAT_037f4768;
LAB_0192d97c:
      uVar11 = FUN_02a473b8(*puVar8,uVar11,0);
      uVar6 = FUN_033e6c58();
      if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
      }
      FUN_033bdbb8(uVar11,uVar6,0);
      return;
    }
LAB_0192eb64:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_033ea488(lVar4,0,0);
  if ((uVar5 & 1) != 0) goto LAB_0192d908;
  iVar3 = *(int *)(unaff_x19 + 0xc0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(unaff_x19 + 0xbc);
    if (iVar3 == 0) {
      if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_0192eb64;
      thunk_FUN_0187f3ac(*(long *)(unaff_x19 + 0xb0),0);
      iVar3 = FUN_0192ec90();
      *(int *)(unaff_x19 + 0xbc) = iVar3;
    }
  }
  else {
    *(int *)(unaff_x19 + 0xbc) = iVar3;
  }
  switch(*(undefined4 *)(unaff_x19 + 0xb8)) {
  case 1:
    if (*(char *)(unaff_x19 + 0xc5) != '\0') {
      *(undefined1 *)(unaff_x19 + 0xa8) = 0;
      uVar11 = *(undefined8 *)(unaff_x19 + 0x108);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar5 = FUN_033ea488(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(unaff_x19 + 0xbc) == 5) {
          plVar7 = *(long **)(unaff_x19 + 0x108);
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else if (*plVar7 != *(long *)PTR_DAT_037f46a0) {
            plVar7 = (long *)0x0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar5 = FUN_033ea488(plVar7,0,0);
          if ((uVar5 & 1) != 0) {
            lVar4 = FUN_033e6c58();
            if (lVar4 == 0) goto LAB_0192eb64;
            uVar11 = FUN_033ed158(lVar4,0);
            puVar8 = (undefined8 *)PTR_DAT_037f4760;
            goto LAB_0192e430;
          }
          plVar9 = *(long **)(unaff_x19 + 0xb0);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)0x0;
          }
          else if (*plVar9 != *(long *)PTR_DAT_037f46a0) {
            plVar9 = (long *)0x0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar5 = FUN_033ea488(plVar9,0,0);
          if ((uVar5 & 1) == 0) {
            uVar13 = FUN_019297fc(plVar7,plVar9);
            *(undefined4 *)(unaff_x19 + 0xcc) = uVar13;
            *(undefined4 *)(unaff_x19 + 0xd0) = param_2;
            *(undefined4 *)(unaff_x19 + 0xd4) = 0;
          }
          else {
            lVar4 = FUN_033e6c58();
            if (lVar4 == 0) goto LAB_0192eb64;
            uVar11 = FUN_033ed158(lVar4,0);
            uVar11 = FUN_02a473b8(*(undefined8 *)PTR_DAT_037f4788,uVar11,0);
            uVar6 = FUN_033e6c58();
            if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
            }
            FUN_033bdbb8(uVar11,uVar6,0);
          }
        }
        else {
          if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_0192eb64;
          uVar13 = FUN_033f2e00(*(long *)(unaff_x19 + 0x108),0);
          *(undefined4 *)(unaff_x19 + 0xcc) = uVar13;
          *(undefined4 *)(unaff_x19 + 0xd0) = param_2;
          *(undefined4 *)(unaff_x19 + 0xd4) = param_3;
        }
      }
      else {
        lVar4 = FUN_033e6c58();
        if (lVar4 == 0) goto LAB_0192eb64;
        uVar11 = FUN_033ed158(lVar4,0);
        puVar8 = (undefined8 *)PTR_DAT_037f4780;
LAB_0192e430:
        uVar11 = FUN_02a473b8(*puVar8,uVar11,0);
        uVar6 = FUN_033e6c58();
        if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
        }
        FUN_033bdbb8(uVar11,uVar6,0);
        if (DAT_03a21ec9 == '\0') {
          FUN_017fc350(PTR_DAT_037f2b88);
          DAT_03a21ec9 = '\x01';
        }
        uVar13 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_037f2b88 + 0xb8) + 1);
        *(undefined8 *)(unaff_x19 + 0xcc) = **(undefined8 **)(*(long *)PTR_DAT_037f2b88 + 0xb8);
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar13;
      }
    }
    switch(*(int *)(unaff_x19 + 0xbc)) {
    case 5:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f46a0)) goto LAB_0192eb68;
      lVar4 = FUN_01926774(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                           plVar7,*(char *)(unaff_x19 + 0x110) != '\0');
      break;
    default:
      goto switchD_0192da3c_default;
    case 8:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f4658 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4658
           )) goto LAB_0192eb68;
      }
      lVar4 = FUN_01922838(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                           plVar7,*(char *)(unaff_x19 + 0x110) != '\0');
      break;
    case 9:
    case 0xb:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f46c0 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f46c0
           )) goto LAB_0192eb68;
      }
      lVar4 = FUN_019a9078(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                           plVar7,*(char *)(unaff_x19 + 0x110) != '\0',0);
    }
    break;
  case 2:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    lVar4 = FUN_019a9784(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                         *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),uVar11,
                         *(undefined1 *)(unaff_x19 + 0x110),0);
    goto LAB_0192e038;
  case 3:
    if (iVar3 == 8) {
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0xcc);
      if (plVar7 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_037f4658;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) goto LAB_0192eb6c;
      }
      lVar4 = FUN_01922f14(uVar13,*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                           plVar7,*(undefined4 *)(unaff_x19 + 0x11c));
    }
    else {
      if ((iVar3 != 9) && (iVar3 != 0xb)) goto switchD_0192da3c_default;
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0xcc);
      if (plVar7 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_037f46c0;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) goto LAB_0192eb6c;
      }
      lVar4 = FUN_019a9e5c(uVar13,*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                           plVar7,*(undefined4 *)(unaff_x19 + 0x11c),0);
    }
    break;
  case 4:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    lVar4 = FUN_019aa1f4(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                         *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),uVar11,
                         *(undefined4 *)(unaff_x19 + 0x11c),0);
    goto LAB_0192e038;
  case 5:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    if (*(char *)(unaff_x19 + 0x110) == '\0') {
      uVar13 = *(undefined4 *)(unaff_x19 + 0xcc);
      uVar14 = *(undefined4 *)(unaff_x19 + 0xd0);
      uVar15 = *(undefined4 *)(unaff_x19 + 0xd4);
    }
    else {
      uVar15 = *(undefined4 *)(unaff_x19 + 200);
      uVar13 = uVar15;
      uVar14 = uVar15;
    }
    lVar4 = FUN_019aa58c(uVar13,uVar14,uVar15,*(undefined4 *)(unaff_x19 + 0x88),uVar11,0);
    goto LAB_0192e038;
  case 6:
    *(undefined1 *)(unaff_x19 + 0xa8) = 0;
    switch(iVar3) {
    case 3:
      if (*(long **)(unaff_x19 + 0xb0) != (long *)0x0) {
        lVar4 = **(long **)(unaff_x19 + 0xb0);
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f4690 + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4690))
        goto LAB_0192eb68;
      }
      lVar4 = FUN_01924e5c(*(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),
                           *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),
                           *(undefined4 *)(unaff_x19 + 0x88));
      break;
    case 4:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4698)) goto LAB_0192eb68;
      lVar4 = FUN_019a6c5c(*(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),
                           *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),
                           *(undefined4 *)(unaff_x19 + 0x88),plVar7,0);
      break;
    default:
      goto switchD_0192da3c_default;
    case 6:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if (plVar7 == (long *)0x0) goto LAB_0192eb64;
      bVar1 = *(byte *)(*(long *)PTR_DAT_037f46a8 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f46a8))
      goto LAB_0192eb68;
      uVar11 = FUN_033c9320(plVar7,0);
      lVar4 = FUN_019a72cc(*(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),
                           *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),
                           *(undefined4 *)(unaff_x19 + 0x88),uVar11,0);
      goto LAB_0192e038;
    case 7:
      if ((*(long **)(unaff_x19 + 0xb0) != (long *)0x0) &&
         (**(long **)(unaff_x19 + 0xb0) != *(long *)PTR_DAT_037f46b0)) goto LAB_0192eb68;
      lVar4 = FUN_019244cc(*(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),
                           *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),
                           *(undefined4 *)(unaff_x19 + 0x88));
      break;
    case 10:
      if (*(long **)(unaff_x19 + 0xb0) != (long *)0x0) {
        lVar4 = **(long **)(unaff_x19 + 0xb0);
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f46b8 + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f46b8))
        goto LAB_0192eb68;
      }
      lVar4 = FUN_01928868(*(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),
                           *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),
                           *(undefined4 *)(unaff_x19 + 0x88));
    }
    break;
  case 7:
    *(undefined1 *)(unaff_x19 + 0xa8) = 0;
    switch(iVar3) {
    case 2:
      if ((*(long **)(unaff_x19 + 0xb0) != (long *)0x0) &&
         (**(long **)(unaff_x19 + 0xb0) != *(long *)PTR_DAT_037f4680)) goto LAB_0192eb68;
      lVar4 = FUN_01924cd0(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88));
      break;
    case 3:
      if (*(long **)(unaff_x19 + 0xb0) != (long *)0x0) {
        lVar4 = **(long **)(unaff_x19 + 0xb0);
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f4690 + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4690))
        goto LAB_0192eb68;
      }
      lVar4 = FUN_01925010(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88));
      break;
    case 4:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4698)) goto LAB_0192eb68;
      lVar4 = System_Array__InternalArray__set_Item<OVRPlugin_Vector4f>
                        (*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88),plVar7,0
                        );
      break;
    default:
      goto switchD_0192da3c_default;
    case 6:
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      if (plVar7 == (long *)0x0) goto LAB_0192eb64;
      bVar1 = *(byte *)(*(long *)PTR_DAT_037f46a8 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f46a8))
      goto LAB_0192eb68;
      uVar11 = FUN_033c9320(plVar7,0);
      lVar4 = FUN_019a78ac(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88),uVar11
                           ,0);
      goto LAB_0192e038;
    case 7:
      if ((*(long **)(unaff_x19 + 0xb0) != (long *)0x0) &&
         (**(long **)(unaff_x19 + 0xb0) != *(long *)PTR_DAT_037f46b0)) goto LAB_0192eb68;
      lVar4 = FUN_01924680(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88));
      break;
    case 10:
      if (*(long **)(unaff_x19 + 0xb0) != (long *)0x0) {
        lVar4 = **(long **)(unaff_x19 + 0xb0);
        bVar1 = *(byte *)(*(long *)PTR_DAT_037f46b8 + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f46b8))
        goto LAB_0192eb68;
      }
      lVar4 = FUN_01928c3c(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88));
    }
    break;
  case 8:
    if (iVar3 == 10) {
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0x88);
      if (plVar7 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_037f46b8;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) goto LAB_0192eb6c;
      }
      lVar4 = FUN_01928dc8(uVar13,plVar7,*(undefined8 *)(unaff_x19 + 0xf0),
                           *(char *)(unaff_x19 + 0x110) != '\0',*(undefined4 *)(unaff_x19 + 0x120),
                           *(undefined8 *)(unaff_x19 + 0x128));
      break;
    }
    goto switchD_0192da3c_default;
  case 9:
    if (iVar3 == 5) {
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0xcc);
      if ((plVar7 != (long *)0x0) && (lVar4 = *(long *)PTR_DAT_037f46a0, *plVar7 != lVar4)) {
LAB_0192eb6c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(uVar13,plVar7,lVar4);
      }
      lVar4 = FUN_01927838(uVar13,*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x114),
                           plVar7,*(undefined4 *)(unaff_x19 + 0x118),
                           *(char *)(unaff_x19 + 0x110) != '\0');
    }
    else {
      if (iVar3 != 0xb) goto switchD_0192da3c_default;
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0xcc);
      if (plVar7 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_037f46c0;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) goto LAB_0192eb6c;
      }
      lVar4 = FUN_019ab058(uVar13,*(undefined4 *)(unaff_x19 + 0xd0),
                           *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                           *(undefined4 *)(unaff_x19 + 0x114),plVar7,
                           *(undefined4 *)(unaff_x19 + 0x118),*(char *)(unaff_x19 + 0x110) != '\0',0
                          );
    }
    break;
  case 10:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    lVar4 = FUN_019ab504(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                         *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                         *(undefined4 *)(unaff_x19 + 0x114),uVar11,
                         *(undefined4 *)(unaff_x19 + 0x118),0);
    goto LAB_0192e038;
  case 0xb:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    lVar4 = FUN_019ab2c0(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                         *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0x88),
                         *(undefined4 *)(unaff_x19 + 0x114),uVar11,
                         *(undefined4 *)(unaff_x19 + 0x118),0);
    goto LAB_0192e038;
  case 0xc:
    if (iVar3 == 5) {
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0x88);
      if ((plVar7 != (long *)0x0) && (lVar4 = *(long *)PTR_DAT_037f46a0, *plVar7 != lVar4))
      goto LAB_0192eb6c;
      lVar4 = FUN_01927bdc(uVar13,*(undefined4 *)(unaff_x19 + 0xcc),
                           *(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0x114),
                           plVar7,*(undefined4 *)(unaff_x19 + 0x118),
                           *(char *)(unaff_x19 + 0x110) != '\0',*(char *)(unaff_x19 + 0x111) != '\0'
                           ,*(undefined4 *)(unaff_x19 + 0x124));
    }
    else {
      if (iVar3 != 0xb) goto switchD_0192da3c_default;
      plVar7 = *(long **)(unaff_x19 + 0xb0);
      uVar13 = *(undefined4 *)(unaff_x19 + 0x88);
      if (plVar7 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_037f46c0;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) goto LAB_0192eb6c;
      }
      lVar4 = FUN_019ab9bc(uVar13,*(undefined4 *)(unaff_x19 + 0xcc),
                           *(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0xd4),
                           *(undefined4 *)(unaff_x19 + 0x114),plVar7,
                           *(undefined4 *)(unaff_x19 + 0x118),*(char *)(unaff_x19 + 0x110) != '\0',
                           *(char *)(unaff_x19 + 0x111) != '\0',*(undefined4 *)(unaff_x19 + 0x124),0
                          );
    }
    break;
  case 0xd:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    lVar4 = FUN_019abeac(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0xcc),
                         *(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0xd4),
                         *(undefined4 *)(unaff_x19 + 0x114),uVar11,
                         *(undefined4 *)(unaff_x19 + 0x118),*(undefined1 *)(unaff_x19 + 0x111),
                         *(undefined4 *)(unaff_x19 + 0x124),0);
    goto LAB_0192e038;
  case 0xe:
    if (lVar4 == 0) goto LAB_0192eb64;
    uVar11 = FUN_033e98f0(lVar4,0);
    lVar4 = FUN_019ac404(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0xcc),
                         *(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0xd4),
                         *(undefined4 *)(unaff_x19 + 0x114),uVar11,
                         *(undefined4 *)(unaff_x19 + 0x118),*(undefined1 *)(unaff_x19 + 0x111),
                         *(undefined4 *)(unaff_x19 + 0x124),0);
    goto LAB_0192e038;
  case 0xf:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4678)) goto LAB_0192eb68;
    lVar4 = FUN_019a55d4(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88),plVar7,0
                        );
    break;
  case 0x10:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4678)) goto LAB_0192eb68;
    lVar4 = FUN_019a575c(*(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),
                         *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),
                         *(undefined4 *)(unaff_x19 + 0x88),plVar7,0);
    break;
  case 0x11:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4678)) goto LAB_0192eb68;
    lVar4 = FUN_019a5a94(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88),plVar7,0
                        );
    break;
  case 0x12:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4678)) goto LAB_0192eb68;
    lVar4 = FUN_019a5da4(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0x88),plVar7,0
                        );
    break;
  case 0x13:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4678)) goto LAB_0192eb68;
    lVar4 = FUN_019a5f2c(*(undefined4 *)(unaff_x19 + 0xf8),*(undefined4 *)(unaff_x19 + 0xfc),
                         *(undefined4 *)(unaff_x19 + 0x100),*(undefined4 *)(unaff_x19 + 0x104),
                         *(undefined4 *)(unaff_x19 + 0x88),plVar7,0);
    break;
  case 0x14:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f4678)) goto LAB_0192eb68;
    lVar4 = FUN_019a60dc(*(undefined4 *)(unaff_x19 + 0xf8),*(undefined4 *)(unaff_x19 + 0xfc),
                         *(undefined4 *)(unaff_x19 + 0x100),*(undefined4 *)(unaff_x19 + 0x104),
                         *(undefined4 *)(unaff_x19 + 0x88),plVar7,0);
    break;
  case 0x15:
    plVar7 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_037f46a0)) goto LAB_0192eb68;
    if (*(char *)(unaff_x19 + 0x110) == '\0') {
      uVar13 = *(undefined4 *)(unaff_x19 + 0xd8);
      uVar14 = *(undefined4 *)(unaff_x19 + 0xdc);
    }
    else {
      uVar14 = *(undefined4 *)(unaff_x19 + 200);
      uVar13 = uVar14;
    }
    lVar4 = FUN_01927684(uVar13,uVar14,*(undefined4 *)(unaff_x19 + 0x88),plVar7,0);
LAB_0192e038:
    *(long *)(unaff_x19 + 0x68) = lVar4;
    goto LAB_0192e5ec;
  default:
    goto switchD_0192da3c_default;
  }
  *plVar10 = lVar4;
LAB_0192e5ec:
  thunk_FUN_0188fd20(plVar10,lVar4);
switchD_0192da3c_default:
  plVar7 = (long *)*plVar10;
  if (plVar7 != (long *)0x0) {
    if (*(char *)(unaff_x19 + 0xa9) == '\0') {
      FUN_01bd42ac(plVar7,*(char *)(unaff_x19 + 0xa8) != '\0',*(undefined8 *)PTR_DAT_037f4730);
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_037f4750 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f4750))
      {
LAB_0192eb68:
                    /* WARNING: Subroutine does not return */
        FUN_017fc944();
      }
      FUN_01bd33b4(plVar7,*(char *)(unaff_x19 + 0xa8) != '\0',*(undefined8 *)PTR_DAT_037f46d8);
    }
    if ((*(char *)(unaff_x19 + 0x70) == '\0') && (*(char *)(unaff_x19 + 0x80) != '\0')) {
      uVar11 = *(undefined8 *)(unaff_x19 + 0x78);
    }
    else {
      uVar11 = FUN_033e6c58();
    }
    uVar11 = FUN_01bd4328(*(undefined8 *)(unaff_x19 + 0x68),uVar11,*(undefined8 *)PTR_DAT_037f4740);
    uVar11 = FUN_01bd3b64(*(undefined4 *)(unaff_x19 + 0x84),uVar11,*(undefined8 *)PTR_DAT_037f3d60);
    uVar11 = FUN_01bd41f0(uVar11,*(undefined4 *)(unaff_x19 + 0x9c),*(undefined4 *)(unaff_x19 + 0x98)
                          ,*(undefined8 *)PTR_DAT_037f4728);
    uVar11 = FUN_01bd3b40(uVar11,*(undefined1 *)(unaff_x19 + 0xab),*(undefined8 *)PTR_DAT_037f4710);
    puVar2 = PTR_DAT_037f3d10;
    uVar6 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f3d10);
    FUN_0199b2f4();
    FUN_01bd35c0(uVar11,uVar6,*(undefined8 *)PTR_DAT_037f46e8);
    if (*(char *)(unaff_x19 + 0x24) != '\0') {
      FUN_01bd42e0(*plVar10,*(undefined8 *)PTR_DAT_037f4738);
    }
    if (*(int *)(unaff_x19 + 0x8c) == 0x25) {
      FUN_01bd3cac(*(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0x90),
                   *(undefined8 *)PTR_DAT_037f4718);
    }
    else {
      FUN_01bd3d74(*(undefined8 *)(unaff_x19 + 0x68),*(int *)(unaff_x19 + 0x8c),
                   *(undefined8 *)PTR_DAT_037f3d68);
    }
    uVar5 = System_Convert__ToSingle(*(undefined8 *)(unaff_x19 + 0xa0),0);
    if ((uVar5 & 1) == 0) {
      FUN_01bd3f50(*(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0xa0),
                   *(undefined8 *)PTR_DAT_037f4720);
    }
    FUN_01bd4468(*(undefined8 *)(unaff_x19 + 0x68),*(undefined1 *)(unaff_x19 + 0xaa),
                 *(undefined8 *)PTR_DAT_037f4748);
    plVar7 = (long *)(unaff_x19 + 0x30);
    if (*(char *)(unaff_x19 + 0x25) == '\0') {
      *plVar7 = 0;
      thunk_FUN_0188fd20(plVar7,0);
    }
    else {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
        FUN_0199b2f4(uVar11,lVar4,*(undefined8 *)PTR_DAT_037f4758,0);
        FUN_01bd3670(lVar12,uVar11,*(undefined8 *)PTR_DAT_037f4700);
      }
    }
    plVar7 = (long *)(unaff_x19 + 0x38);
    if (*(char *)(unaff_x19 + 0x26) == '\0') {
      *plVar7 = 0;
      thunk_FUN_0188fd20(plVar7,0);
    }
    else {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
        FUN_0199b2f4(uVar11,lVar4,*(undefined8 *)PTR_DAT_037f4758,0);
        FUN_01bd3618(lVar12,uVar11,*(undefined8 *)PTR_DAT_037f46f0);
      }
    }
    plVar7 = (long *)(unaff_x19 + 0x40);
    if (*(char *)(unaff_x19 + 0x27) == '\0') {
      *plVar7 = 0;
      thunk_FUN_0188fd20(plVar7,0);
    }
    else {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
        FUN_0199b2f4(uVar11,lVar4,*(undefined8 *)PTR_DAT_037f4758,0);
        FUN_01bd36c8(lVar12,uVar11,*(undefined8 *)PTR_DAT_037f3fa0);
      }
    }
    plVar7 = (long *)(unaff_x19 + 0x48);
    if (*(char *)(unaff_x19 + 0x28) == '\0') {
      *plVar7 = 0;
      thunk_FUN_0188fd20(plVar7,0);
    }
    else {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
        FUN_0199b2f4(uVar11,lVar4,*(undefined8 *)PTR_DAT_037f4758,0);
        FUN_01bd369c(lVar12,uVar11,*(undefined8 *)PTR_DAT_037f4708);
      }
    }
    plVar7 = (long *)(unaff_x19 + 0x50);
    if (*(char *)(unaff_x19 + 0x29) == '\0') {
      *plVar7 = 0;
      thunk_FUN_0188fd20(plVar7,0);
    }
    else {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
        FUN_0199b2f4(uVar11,lVar4,*(undefined8 *)PTR_DAT_037f4758,0);
        FUN_01bd3594(lVar12,uVar11,*(undefined8 *)PTR_DAT_037f46e0);
      }
    }
    plVar7 = (long *)(unaff_x19 + 0x60);
    if (*(char *)(unaff_x19 + 0x2b) == '\0') {
      *plVar7 = 0;
      thunk_FUN_0188fd20(plVar7,0);
    }
    else {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        lVar12 = *plVar10;
        uVar11 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
        FUN_0199b2f4(uVar11,lVar4,*(undefined8 *)PTR_DAT_037f4758,0);
        FUN_01bd3644(lVar12,uVar11,*(undefined8 *)PTR_DAT_037f46f8);
      }
    }
    if ((unaff_x20 & 1) == 0) {
      FUN_01bcbc70(*plVar10,*(undefined8 *)PTR_DAT_037f46c8);
    }
    else {
      FUN_01bcbdc8(*plVar10,*(undefined8 *)PTR_DAT_037f46d0);
    }
    if ((*(char *)(unaff_x19 + 0x2a) != '\0') && (*(long *)(unaff_x19 + 0x58) != 0)) {
      FUN_033f90c4(*(long *)(unaff_x19 + 0x58),0);
      return;
    }
  }
  return;
}


