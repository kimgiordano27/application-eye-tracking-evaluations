/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.Generic.ICollection<T>.Add
ENTRY_POINT: 04c855f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_Generic_ICollection<T>_Add
               (long param_1,long param_2,uint param_3)

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
  long unaff_x20;
  long *plVar10;
  long unaff_x23;
  undefined8 uVar11;
  
  if ((*(byte *)(unaff_x23 + 0x53d) & 1) == 0) {
    FUN_03642964(&DAT_07b63fa8);
    *(undefined1 *)(unaff_x23 + 0x53d) = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(3,0);
  }
  iVar1 = thunk_FUN_03651f18(param_2,0);
  if (iVar1 != 1) {
    FUN_05e390e4(7,0);
  }
  iVar1 = thunk_FUN_03651ed8(param_2,0,0);
  if (iVar1 != 0) {
    FUN_05e390e4(6,0);
  }
  if ((int)param_3 < 0) {
    FUN_05e3994c(0);
  }
  iVar1 = FUN_05e310c0(param_2,0);
  iVar2 = FUN_04c84f78(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68)
                      );
  if ((int)(iVar1 - param_3) < iVar2) {
    FUN_05e390e4(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  lVar5 = thunk_FUN_0367fd24(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_03652da4(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
      }
      plVar4 = (long *)FUN_05e26f18(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_04c85a08;
          uVar8 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_05e39984(0);
          }
        }
        plVar10 = (long *)thunk_FUN_0367fd24(param_2,*(undefined8 *)PTR_DAT_079f4558);
        if (plVar10 == (long *)0x0) {
          FUN_05e39984();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04c858bc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_0367cd30(plVar4,lVar5,0);
LAB_04c858bc:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_0367c9fc(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04c85950;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_0367cd30(plVar4,lVar5,0);
LAB_04c85950:
              (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_0367fa58(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_0367fd24(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar10[(long)(int)param_3 + 4] = lVar5;
              thunk_FUN_036b7ad0(plVar10 + (long)(int)param_3 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_3 = param_3 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_04c85884;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar10,lVar6,5);
LAB_04c85884:
                    /* WARNING: Could not recover jumptable at 0x04c858ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_04c85a08:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


