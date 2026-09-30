/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyMesh
ENTRY_POINT: 04c38020
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c380c8) */

void Meta_XR_MRUtilityKit_EffectMesh__DestroyMesh(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_2 != 1) {
    if ((unaff_w28 < 0) && (plVar5 = *(long **)(unaff_x19 + 0x18), plVar5 != (long *)0x0)) {
      lVar11 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x04c380b8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8a48,0);
code_r0x04c380b8:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d846d4(param_1);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065c8580);
    uVar9 = thunk_FUN_02c72dcc(uVar6,*(undefined8 *)*puVar4);
    if ((uVar9 & 1) != 0) {
      uVar6 = *puVar4;
      __cxa_end_catch();
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      lVar11 = thunk_FUN_02c7737c(PTR_DAT_065c84d8);
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04e5a2ec(unaff_x19 + 2,uVar6,0);
      return;
    }
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_0620d888,0);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar11 = *plVar5;
  __cxa_end_catch();
  if ((unaff_w28 < 0) && (plVar5 = *(long **)(unaff_x19 + 0x18), plVar5 != (long *)0x0)) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04c37ef8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8a48,0);
LAB_04c37ef8:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(lVar11);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  unaff_x19[0x12] = 0;
  while( true ) {
    if (*(int *)(*(long *)PTR_DAT_065c89b8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f94794(unaff_x19 + 10,0);
    puVar2 = PTR_DAT_065e1960;
    lVar11 = *(long *)(unaff_x19 + 0xe);
    uVar6 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e1960,*(undefined8 *)(unaff_x19 + 0x10),0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar6,uVar6);
    }
    iVar3 = FUN_04dbd9f0(lVar11,uVar6,4,0);
    if (iVar3 == -1) break;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),
                          iVar3 + *(int *)(*(long *)(unaff_x19 + 0x10) + 0x10) + 2,0);
    *(long *)(unaff_x19 + 0xe) = lVar11;
    uVar6 = FUN_04db00f0(*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x10),0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar6,uVar6);
    }
    auVar14 = FUN_04dbd9f0(lVar11,uVar6,4,0);
    uVar9 = auVar14._0_8_ & 0xffffffff;
    unaff_x19[0x26] = auVar14._0_4_;
    if (auVar14._0_4_ == -1) break;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(0,auVar14._8_8_,uVar9);
    }
    FUN_04dbaed4(*(long *)(unaff_x19 + 0xe),0,uVar9,0);
    lVar11 = FUN_04c34aa0();
    *(long *)(unaff_x19 + 0x18) = lVar11;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar9 = FUN_054df770(lVar11,0);
    if ((uVar9 & 1) == 0) {
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
        plVar5 = *(long **)(unaff_x20 + 0x20);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = *plVar5;
        uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
              goto LAB_04c384bc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x27,0xd);
LAB_04c384bc:
        lVar11 = (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar14 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e1b60);
        uVar9 = FUN_044a8fc8();
        if ((uVar9 & 1) == 0) {
          *unaff_x19 = 5;
          *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar14;
          if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_0335fb84(unaff_x19 + 2);
          return;
        }
      }
      uVar6 = FUN_044a9014();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar5 = *(long **)(unaff_x20 + 0x10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar5;
      uVar1 = unaff_x19[0x12];
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04c38578;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x25,0);
LAB_04c38578:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,uVar1,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      (**(code **)(*plVar5 + 0x178))
                (plVar5,0,uVar6,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*plVar5 + 0x180));
    }
    else {
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = FUN_054dcf98(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar14 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e1700);
      _in_stack_00000010 = auVar14;
      uVar9 = FUN_044a8fc8(&stack0x00000010,*unaff_x29);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x22) = _in_stack_00000010;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_0335fb84(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      uVar6 = FUN_044a9014(&stack0x00000010,*unaff_x26);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar5 = *(long **)(unaff_x20 + 0x20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar10 + 10) * 0x10 + 0x138);
            goto LAB_04c3829c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x27,10);
LAB_04c3829c:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar12 = *(long **)(unaff_x20 + 0x10);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar12;
      uVar1 = unaff_x19[0x12];
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04c38304;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x25,0);
LAB_04c38304:
      lVar11 = (*(code *)*puVar4)(plVar12,uVar1,puVar4[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *plVar5;
      uVar13 = *(undefined8 *)(lVar11 + 0x18);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e1720) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_04c38378;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065e1720,4);
LAB_04c38378:
      uVar6 = (*(code *)*puVar4)(plVar5,uVar6,uVar13,puVar4[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar5 = *(long **)(unaff_x20 + 0x10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar5;
      uVar1 = unaff_x19[0x12];
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04c383f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x25,0);
LAB_04c383f0:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,uVar1,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      (**(code **)(*plVar5 + 0x178))
                (plVar5,uVar6,0,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)(*plVar5 + 0x180));
    }
    unaff_x19[0x12] = unaff_x19[0x12] + 1;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar6 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),unaff_x19[0x26],0);
    *(undefined8 *)(unaff_x19 + 0xe) = uVar6;
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


