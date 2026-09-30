/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 05731f18
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetOpenVRControllerOffset(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  int *unaff_x19;
  long unaff_x20;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000002c;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x6b0));
  FUN_02f07e70(PTR_DAT_06d58778);
  FUN_02f07e70(PTR_DAT_06d57c10);
  FUN_02f07e70(PTR_DAT_06d58308);
  FUN_02f07e70(PTR_DAT_06d37b60);
  FUN_02f07e70(PTR_DAT_06d3b5f8);
  *(undefined1 *)(unaff_x20 + 0x8d1) = 1;
  puVar3 = PTR_DAT_06d55150;
  puVar2 = PTR_DAT_06d156d8;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  plVar13 = *(long **)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
    goto LAB_05732540;
  }
  if (*unaff_x19 != 1) {
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar9 = thunk_FUN_02ef170c(uVar10,*(undefined8 *)PTR_DAT_06d55150);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar9;
    uVar9 = thunk_FUN_02ef170c(uVar10,*(undefined8 *)puVar3);
    thunk_FUN_02f411dc(unaff_x19 + 0x10,uVar9);
    *(long **)(unaff_x19 + 0x12) = plVar13;
    thunk_FUN_02f411dc(unaff_x19 + 0x12,plVar13);
    goto LAB_0573200c;
  }
  unaff_x19[0x18] = 0;
  unaff_x19[0x19] = 0;
  unaff_x19[0x1a] = 0;
  unaff_x19[0x1b] = 0;
  *unaff_x19 = -1;
  _in_stack_00000010 = ZEXT816(0);
  while( true ) {
    uVar6 = FUN_04a8bdcc();
    if ((uVar6 & 1) == 0) break;
LAB_0573200c:
    plVar5 = (long *)(unaff_x19 + 0x12);
    plVar12 = (long *)*plVar5;
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58308 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d58308)
         ) {
        if (plVar12[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(long *)(plVar12[0xb] + 0x10) != 0) {
          if (plVar12 == plVar13) break;
          *plVar5 = plVar12[2];
          thunk_FUN_02f411dc(plVar5);
        }
      }
    }
    plVar12 = *(long **)(unaff_x19 + 8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar12 + 0x238))(plVar12,*(undefined8 *)(*plVar12 + 0x240));
    switch(uVar4) {
    case 0:
      break;
    case 1:
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57c10);
      FUN_057308f8();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar12 = (long *)*plVar5;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar12 + 0x6e8))(plVar12,lVar8,*(undefined8 *)(*plVar12 + 0x6f0));
      *plVar5 = lVar8;
      thunk_FUN_02f411dc(plVar5,lVar8);
      break;
    case 2:
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d586b0);
      FUN_0572844c(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar12 = (long *)*plVar5;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar12 + 0x6e8))(plVar12,lVar8,*(undefined8 *)(*plVar12 + 0x6f0));
      *plVar5 = lVar8;
      thunk_FUN_02f411dc(plVar5,lVar8);
      break;
    case 3:
      plVar12 = *(long **)(unaff_x19 + 8);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58778);
      FUN_0572b548(lVar8,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar12 = (long *)*plVar5;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar12 + 0x6e8))(plVar12,lVar8,*(undefined8 *)(*plVar12 + 0x6f0));
      *plVar5 = lVar8;
      thunk_FUN_02f411dc(plVar5,lVar8);
      break;
    case 4:
      lVar8 = FUN_0573095c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                           *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x12));
      if (lVar8 == 0) {
        if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar8 = FUN_05694828(*(long *)(unaff_x19 + 8),0,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        auVar14 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar8,0,0);
        _in_stack_00000010 = auVar14;
        uVar6 = FUN_0551f17c(&stack0x00000010,0);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
          thunk_FUN_02f411dc(unaff_x19 + 0x14,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_03789350(unaff_x19 + 2,&stack0x00000010);
          return;
        }
LAB_05732540:
        FUN_0551f198(&stack0x00000010,0);
      }
      else {
        *plVar5 = lVar8;
        thunk_FUN_02f411dc(plVar5);
      }
      break;
    case 5:
      if ((*(long *)(unaff_x19 + 0xc) != 0) && (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x10) == 1)) {
        plVar12 = *(long **)(unaff_x19 + 8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250))
        ;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        lVar8 = FUN_05747b08(uVar9,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar8,*(undefined8 *)(*plVar5 + 0x6f0));
      }
      break;
    default:
      lVar8 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_055b5920(0);
      plVar13 = *(long **)(unaff_x19 + 8);
      if (plVar13 != (long *)0x0) {
        uStack000000000000002c =
             (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240));
        uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
        uVar10 = thunk_FUN_02ef1438(uVar10,&stack0x0000002c);
        uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d58910);
        uVar9 = FUN_056f1630(uVar11,uVar9,uVar10,0);
        thunk_FUN_02f239f0(PTR_DAT_06d021a0);
        uVar10 = thunk_FUN_02ef1808();
        FUN_05601bec(uVar10,uVar9,0);
        uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d589d8);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar10,uVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      plVar12 = *(long **)(unaff_x19 + 8);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar9 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
      FUN_057497d8(lVar8,uVar9,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar8,*(undefined8 *)(*plVar5 + 0x6f0));
      break;
    case 0xb:
      lVar8 = FUN_057478d0(0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar8,*(undefined8 *)(*plVar5 + 0x6f0));
      break;
    case 0xc:
      lVar8 = FUN_05747a00(0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0572c2dc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xc));
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar5 + 0x6e8))(plVar5,lVar8,*(undefined8 *)(*plVar5 + 0x6f0));
      break;
    case 0xd:
      plVar12 = (long *)*plVar5;
      if (plVar12 == plVar13) goto LAB_05732184;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *plVar5 = plVar12[2];
      thunk_FUN_02f411dc(plVar5);
      break;
    case 0xe:
      plVar12 = (long *)*plVar5;
      if (plVar12 == plVar13) goto LAB_05732184;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *plVar5 = plVar12[2];
      thunk_FUN_02f411dc(plVar5);
      break;
    case 0xf:
      plVar12 = (long *)*plVar5;
      if (plVar12 == plVar13) goto LAB_05732184;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      *plVar5 = plVar12[2];
      thunk_FUN_02f411dc(plVar5);
    }
    plVar5 = *(long **)(unaff_x19 + 8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar8 = (**(code **)(*plVar5 + 0x188))
                      (plVar5,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar5 + 400));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    auVar14 = FUN_04697d3c(lVar8,0,*(undefined8 *)PTR_DAT_06d3b5f8);
    uVar6 = FUN_04a8bd80();
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar14;
      thunk_FUN_02f411dc(unaff_x19 + 0x18,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_037872d8(unaff_x19 + 2);
      return;
    }
  }
LAB_05732184:
  *unaff_x19 = -2;
  piVar7 = unaff_x19 + 0x10;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_02f411dc(piVar7,0);
  piVar7 = unaff_x19 + 0x12;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_02f411dc(piVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0551fb78(unaff_x19 + 2,0);
  return;
}


