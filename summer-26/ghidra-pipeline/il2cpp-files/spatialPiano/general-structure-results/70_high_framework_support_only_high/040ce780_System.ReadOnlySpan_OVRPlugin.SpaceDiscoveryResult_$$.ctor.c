/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 040ce780
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    plVar8 = (long *)thunk_FUN_02f1863c();
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
      }
      plVar3 = (long *)FUN_050e4454(uVar10,0);
      if (plVar8 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar3,*(undefined8 *)(*plVar8 + 0x2a0));
        if ((uVar6 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_040cea98;
          uVar6 = (**(code **)(*plVar3 + 0x298))(plVar3,plVar8,*(undefined8 *)(*plVar3 + 0x2a0));
          if ((uVar6 & 1) == 0) {
            FUN_050f63f8(0);
          }
        }
        plVar8 = (long *)thunk_FUN_02f45174();
        if (plVar8 == (long *)0x0) {
          FUN_050f63f8();
        }
        plVar3 = *(long **)(unaff_x21 + 0x10);
        if (plVar3 != (long *)0x0) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c(lVar4);
          }
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_040ce960;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_02f421d0(plVar3,lVar4,0);
LAB_040ce960:
          iVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if (0 < iVar1) {
            iVar9 = 0;
            do {
              plVar3 = *(long **)(unaff_x21 + 0x10);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02f41e9c(lVar4);
              }
              lVar5 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == lVar4) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_040ce9f0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined8 *)FUN_02f421d0(plVar3,lVar4,0);
LAB_040ce9f0:
              (*(code *)*puVar2)(plVar3,iVar9,puVar2[1]);
              lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar5 == 0)) {
                uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar10,0);
              }
              if (*(uint *)(plVar8 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar5 = (long)(int)unaff_w19;
              iVar9 = iVar9 + 1;
              unaff_w19 = unaff_w19 + 1;
              plVar8[lVar5 + 4] = lVar4;
            } while (iVar9 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_040ce92c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar8,lVar4,5);
LAB_040ce92c:
                    /* WARNING: Could not recover jumptable at 0x040ce950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar8,param_1,unaff_w19,puVar2[1]);
      return;
    }
  }
LAB_040cea98:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


