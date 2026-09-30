/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$RegisterAnchorUpdates
ENTRY_POINT: 04c382dc
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


void Meta_XR_MRUtilityKit_EffectMesh__RegisterAnchorUpdates
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *piVar8;
  int *in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long *plVar10;
  undefined4 unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04c382dc:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_04c382d0;
LAB_04c382e8:
  puVar4 = (undefined8 *)FUN_02ce0a7c(unaff_x23,param_3,0);
LAB_04c38304:
  lVar5 = (*(code *)*puVar4)(unaff_x23,unaff_w24,puVar4[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = *unaff_x22;
  uVar9 = *(undefined8 *)(lVar5 + 0x18);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e1720) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_04c38378;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(unaff_x22,*(long *)PTR_DAT_065e1720,4);
LAB_04c38378:
  uVar9 = (*(code *)*puVar4)(unaff_x22,unaff_x21,uVar9,puVar4[1]);
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
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04c383f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x25,0);
LAB_04c383f0:
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,uVar1,puVar4[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  (**(code **)(*plVar10 + 0x178))
            (plVar10,uVar9,0,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
             *(undefined8 *)(*plVar10 + 0x180));
  do {
    unaff_x19[0x12] = unaff_x19[0x12] + 1;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar9 = FUN_04dbd134(*(long *)(unaff_x19 + 0xe),unaff_x19[0x26],0);
    *(undefined8 *)(unaff_x19 + 0xe) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    if (*(int *)(*(long *)PTR_DAT_065c89b8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04f94794(unaff_x19 + 10,0);
    puVar2 = PTR_DAT_065e1960;
    lVar5 = *(long *)(unaff_x19 + 0xe);
    uVar9 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e1960,*(undefined8 *)(unaff_x19 + 0x10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar9,uVar9);
    }
    iVar3 = FUN_04dbd9f0(lVar5,uVar9,4,0);
    if (iVar3 == -1) {
LAB_04c38474:
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
    uVar9 = FUN_04db00f0(*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar9,uVar9);
    }
    auVar11 = FUN_04dbd9f0(lVar5,uVar9,4,0);
    uVar7 = auVar11._0_8_ & 0xffffffff;
    unaff_x19[0x26] = auVar11._0_4_;
    if (auVar11._0_4_ == -1) goto LAB_04c38474;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(0,auVar11._8_8_,uVar7);
    }
    FUN_04dbaed4(*(long *)(unaff_x19 + 0xe),0,uVar7,0);
    lVar5 = FUN_04c34aa0();
    *(long *)(unaff_x19 + 0x18) = lVar5;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar7 = FUN_054df770(lVar5,0);
    if ((uVar7 & 1) != 0) break;
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
      uVar9 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_04c384bc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x27,0xd);
LAB_04c384bc:
      lVar5 = (*(code *)*puVar4)(plVar10,uVar9,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar11 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1b60);
      uVar7 = FUN_044a8fc8();
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 5;
        *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar11;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_0335fb84(unaff_x19 + 2);
        return;
      }
    }
    uVar9 = FUN_044a9014();
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
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c38578;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x25,0);
LAB_04c38578:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,uVar1,puVar4[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    (**(code **)(*plVar10 + 0x178))
              (plVar10,0,uVar9,unaff_x19[0x12],*(undefined8 *)(unaff_x19 + 0x18),
               *(undefined8 *)(*plVar10 + 0x180));
  } while( true );
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
  auVar11 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e1700);
  _in_stack_00000010 = auVar11;
  uVar7 = FUN_044a8fc8(&stack0x00000010,*unaff_x29);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 4;
    *(undefined1 (*) [16])(unaff_x19 + 0x22) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335fb84(unaff_x19 + 2,&stack0x00000010);
    return;
  }
  unaff_x21 = FUN_044a9014(&stack0x00000010,*unaff_x26);
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
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 10) * 0x10 + 0x138);
        goto LAB_04c3829c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x27,10);
LAB_04c3829c:
  unaff_x22 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
  unaff_x23 = *(long **)(unaff_x20 + 0x10);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  param_1 = *unaff_x23;
  unaff_w24 = unaff_x19[0x12];
  param_3 = *unaff_x25;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 == 0) goto LAB_04c382e8;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04c382d0:
  if (*(long *)(in_x10 + -2) != param_3) goto code_r0x04c382dc;
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_04c38304;
}


