/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Setup
ENTRY_POINT: 04c21e1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Setup(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined4 uVar10;
  long *plVar11;
  long *unaff_x20;
  long *plVar12;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  
  iVar3 = (**(code **)(param_1 + 0x138))();
  iVar1 = unaff_x19[0xc];
  if (iVar1 <= iVar3) {
    plVar12 = (long *)unaff_x20[2];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04c21e8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x24,0);
LAB_04c21e8c:
    uVar6 = (*(code *)*puVar5)(plVar12,iVar1,puVar5[1]);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
    puVar2 = PTR_DAT_065c98d0;
    lVar7 = unaff_x20[3];
    if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_04f485d4(uVar6,lVar7,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = *(long *)puVar2;
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar7 = *(long *)puVar2;
      }
      uVar8 = FUN_04f485bc(uVar6,**(undefined8 **)(lVar7 + 0xb8),0);
      if ((uVar8 & 1) == 0) {
        lVar7 = (**(code **)(*unaff_x20 + 0x1b8))();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar13 = FUN_04fa5130(lVar7,0,0);
        uVar8 = FUN_04e5bb90();
        if ((uVar8 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = auVar13;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030a0b2c(unaff_x19 + 2);
          return;
        }
        FUN_04e5bbac();
        puVar2 = PTR_DAT_065e50d0;
        lVar7 = *(long *)PTR_DAT_065e50d0;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar7 = *(long *)puVar2;
        }
        plVar11 = (long *)**(undefined8 **)(lVar7 + 0xb8);
        plVar12 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
        if (*(int *)(*(long *)PTR_DAT_065c98d0 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        in_stack_00000018 = FUN_04f47938(unaff_x19 + 0x10,0);
        lVar7 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ca3e0,&stack0x00000018);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar4 == 0)) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
        if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar12[4] = lVar7;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uVar6 = *(undefined8 *)PTR_DAT_065e5b58;
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_04c21df4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065e39d8,3);
LAB_04c21df4:
        (*(code *)*puVar5)(plVar11,uVar6,plVar12,puVar5[1]);
        uVar10 = 1;
        goto LAB_04c21f08;
      }
    }
  }
  uVar10 = 0;
LAB_04c21f08:
  *unaff_x19 = 0xfffffffe;
  puVar2 = PTR_DAT_065ce848;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,uVar10,*(undefined8 *)puVar2);
  return;
}


