/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$Start
ENTRY_POINT: 04c37cdc
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c37f10) */
/* WARNING: Removing unreachable block (ram,0x04c37f20) */

void Meta_XR_MRUtilityKit_EffectMesh__Start(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar2 = PTR_DAT_065e6630;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 04c37cf0 to 04d37d4f has its CatchHandler @ 04c37e5c */
  FUN_04dbd9f0();
  if (*(long *)puVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar4 = FUN_04dbd134();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = FUN_054dcf98(lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1700);
  uVar6 = FUN_044a8fc8(&stack0x00000010,*unaff_x29);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x22) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335fb84(unaff_x19 + 2,&stack0x00000010);
    return;
  }
                    /* try { // try from 04c37d64 to 04d37d73 has its CatchHandler @ 04c37e54 */
  uVar4 = FUN_044a9014(&stack0x00000010,*unaff_x26);
                    /* try { // try from 04c37d74 to 04d37e43 has its CatchHandler @ 04c37b90 */
  *(undefined8 *)(unaff_x19 + 0xe) = uVar4;
  if ((unaff_w28 < 0) && (plVar10 = *(long **)(unaff_x19 + 0x18), plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065c8a48) {
                    /* try { // try from 04c37eec to 04d37ef7 has its CatchHandler @ 04c37b90 */
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04c37ef8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065c8a48,0);
LAB_04c37ef8:
                    /* try { // try from 04c37ef8 to 04d37eff has its CatchHandler @ 04c37f00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c37ec4 with catch @ 04c37f00
                       catch(type#2 @ 00000000) { ... } // from try @ 04c37ef8 with catch @ 04c37f00
                        */
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  unaff_x19[0x12] = 0;
  while( true ) {
    if (*(int *)(*(long *)PTR_DAT_065c89b8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f94794(unaff_x19 + 10,0);
    puVar2 = PTR_DAT_065e1960;
    lVar5 = *(long *)(unaff_x19 + 0xe);
    uVar4 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e1960,*(undefined8 *)(unaff_x19 + 0x10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar4,uVar4);
    }
    iVar3 = FUN_04dbd9f0(lVar5,uVar4,4,0);
    if (iVar3 == -1) break;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),
                         iVar3 + *(int *)(*(long *)(unaff_x19 + 0x10) + 0x10) + 2,0);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    uVar4 = FUN_04db00f0(*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar4,uVar4);
    }
    auVar13 = FUN_04dbd9f0(lVar5,uVar4,4,0);
    uVar6 = auVar13._0_8_ & 0xffffffff;
    unaff_x19[0x26] = auVar13._0_4_;
    if (auVar13._0_4_ == -1) break;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(0,auVar13._8_8_,uVar6);
    }
    FUN_04dbaed4(*(long *)(unaff_x19 + 0xe),0,uVar6,0);
    lVar5 = FUN_04c34aa0();
    *(long *)(unaff_x19 + 0x18) = lVar5;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar6 = FUN_054df770(lVar5,0);
    if ((uVar6 & 1) == 0) {
      if (unaff_w28 == 5) {
        unaff_w28 = -1;
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
        *(undefined8 *)(unaff_x19 + 0x2a) = 0;
        *unaff_x19 = 0xffffffff;
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar10 = *(long **)(unaff_x20 + 0x20);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar5 = *plVar10;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
              goto LAB_04c384bc;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x27,0xd);
LAB_04c384bc:
        lVar5 = (*(code *)*puVar7)(plVar10,uVar4,puVar7[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar13 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1b60);
        uVar6 = FUN_044a8fc8();
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 5;
          *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar13;
          if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_0335fb84(unaff_x19 + 2);
          return;
        }
      }
      uVar4 = FUN_044a9014();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar10 = *(long **)(unaff_x20 + 0x10);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar10;
      uVar1 = unaff_x19[0x12];
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04c38578;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x25,0);
LAB_04c38578:
      plVar10 = (long *)(*(code *)*puVar7)(plVar10,uVar1,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      (**(code **)(*plVar10 + 0x178))
                (plVar10,0,uVar4,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*plVar10 + 0x180));
    }
    else {
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = FUN_054dcf98(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar13 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1700);
      _in_stack_00000010 = auVar13;
      uVar6 = FUN_044a8fc8(&stack0x00000010,*unaff_x29);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x22) = _in_stack_00000010;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_0335fb84(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      uVar4 = FUN_044a9014(&stack0x00000010,*unaff_x26);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar10 = *(long **)(unaff_x20 + 0x20);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 10) * 0x10 + 0x138);
            goto LAB_04c3829c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x27,10);
LAB_04c3829c:
      plVar10 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
      plVar11 = *(long **)(unaff_x20 + 0x10);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar11;
      uVar1 = unaff_x19[0x12];
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04c38304;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*unaff_x25,0);
LAB_04c38304:
      lVar5 = (*(code *)*puVar7)(plVar11,uVar1,puVar7[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *plVar10;
      uVar12 = *(undefined8 *)(lVar5 + 0x18);
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e1720) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_04c38378;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065e1720,4);
LAB_04c38378:
      uVar4 = (*(code *)*puVar7)(plVar10,uVar4,uVar12,puVar7[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar10 = *(long **)(unaff_x20 + 0x10);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar10;
      uVar1 = unaff_x19[0x12];
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04c383f0;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x25,0);
LAB_04c383f0:
      plVar10 = (long *)(*(code *)*puVar7)(plVar10,uVar1,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      (**(code **)(*plVar10 + 0x178))
                (plVar10,uVar4,0,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*plVar10 + 0x180));
    }
    unaff_x19[0x12] = unaff_x19[0x12] + 1;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),unaff_x19[0x26],0);
    *(undefined8 *)(unaff_x19 + 0xe) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


