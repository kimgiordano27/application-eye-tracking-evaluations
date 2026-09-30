/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<__Il2CppFullySharedGenericType>$$BeginInvoke
ENTRY_POINT: 0616595c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>__BeginInvoke
               (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  
  iVar1 = thunk_FUN_03d9e840(param_1,0,0);
  if (iVar1 != 0) {
    FUN_0719958c(6,0);
  }
  if ((int)unaff_w19 < 0) {
    Newtonsoft_Json_Schema_JsonSchemaGenerator_<>c__DisplayClass23_0___ctor(0);
  }
  iVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
  iVar2 = FUN_061652a4();
  if ((int)(iVar1 - unaff_w19) < iVar2) {
    FUN_0719958c(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_03d8f26c(lVar5);
  }
  lVar5 = thunk_FUN_03d2ee44();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_03d9f2a8();
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)PTR_DAT_091a1be8);
      }
      plVar4 = (long *)FUN_07186ef4(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2c0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_06165cfc;
          uVar8 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2c0));
          if ((uVar8 & 1) == 0) {
            FUN_07199e44(0);
          }
        }
        plVar10 = (long *)thunk_FUN_03d2ee44();
        if (plVar10 == (long *)0x0) {
          FUN_07199e44();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03d8f26c(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06165bc0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03d8f370(plVar4,lVar5,0);
LAB_06165bc0:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_03d8f26c(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_06165c4c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_03d8f370(plVar4,lVar5,0);
LAB_06165c4c:
              (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_03d2eb70(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_03d2ee44(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
                FUN_03d2d414(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d550();
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar5;
              thunk_FUN_03d1023c(plVar10 + (long)(int)unaff_w19 + 4,lVar5);
              iVar2 = iVar2 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03d8f26c(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_06165b8c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar10,lVar6,5);
LAB_06165b8c:
                    /* WARNING: Could not recover jumptable at 0x06165bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_06165cfc:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


