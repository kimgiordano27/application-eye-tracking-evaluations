/*
FUNCTION_NAME: FUN_01230770
ENTRY_POINT: 01230770
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_01230770(long *param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int **ppiVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int **local_80;
  long lStack_78;
  int *local_70;
  int local_64;
  
  if ((DAT_03776470 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__);
    DAT_03776470 = 1;
  }
  plVar5 = (long *)FUN_027b5250(param_1[4],param_2,0);
  if (plVar5 == (long *)0x0) {
    if (param_1[5] == 0) goto LAB_01230b68;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0);
    (*(code *)puVar9[2])(*puVar9,puVar9,param_1[5],0,&local_80);
    ppiVar7 = local_80;
  }
  else {
    lVar12 = param_1[2];
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar12 == 0) goto LAB_01230b68;
    ppiVar7 = (int **)FUN_027528d4(lVar12,uVar6,0);
  }
  plVar8 = (long *)param_1[6];
  if (plVar8 != (long *)0x0) {
    lVar12 = param_1[2];
    uVar6 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    if (lVar12 != 0) {
      FUN_02751fc0(lVar12,(ulong)ppiVar7 & 0xffffffff,uVar6,0);
      if (param_1[5] != 0) {
        lStack_78 = param_1[6];
        puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x128);
        local_80 = &local_70;
        local_70 = (int *)CONCAT44(local_70._4_4_,(int)ppiVar7);
        (*(code *)puVar9[2])(*puVar9,puVar9,param_1[5],&local_80);
        puVar3 = Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__;
        puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
        puVar1 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
        lVar12 = param_1[5];
        if (lVar12 != 0) {
          iVar4 = 0;
          do {
            puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0);
            (*(code *)puVar9[2])(*puVar9,puVar9,lVar12,0,&local_80);
            if ((int)local_80 <= iVar4) {
              puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0);
              (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_80);
              iVar4 = (int)local_80;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              iVar4 = FUN_017726a0(param_2,iVar4 + -1,0);
              if (param_1[6] != 0) {
                if (iVar4 == *(int *)(param_1[6] + 0x20)) goto LAB_01230b44;
                puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108);
                (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_80);
                if (local_80 == (int **)0x0) goto LAB_01230ad0;
                puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108);
                (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_80);
                if ((local_80 != (int **)0x0) &&
                   (lVar12 = (**(code **)(*local_80 + 0x5e))
                                       (local_80,*(undefined8 *)(*local_80 + 0x60)), lVar12 != 0)) {
                  plVar8 = (long *)FUN_0274adf4(lVar12,0);
                  local_70 = (int *)CONCAT44(local_70._4_4_,1);
                  FUN_013b4f10(&local_70,&local_80,*(undefined8 *)puVar3);
                  ppiVar7 = local_80;
                  if (plVar8 != (long *)0x0) {
                    lVar12 = *plVar8;
                    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar10 == 0) goto LAB_01230aa0;
                    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    goto LAB_01230a88;
                  }
                }
              }
              break;
            }
            if (param_1[5] == 0) break;
            puVar9 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0);
            local_70 = &local_64;
            local_64 = iVar4;
            (*(code *)puVar9[2])(*puVar9,puVar9,param_1[5],&local_70,&local_80);
            if (local_80 == (int **)0x0) break;
            if (*(char *)(local_80 + 5) != '\0') {
              *(undefined4 *)(local_80 + 4) = 0xffffffff;
              local_80 = (int **)CONCAT44(local_80._4_4_,iVar4);
              lVar12 = *(long *)(*param_1 + 0x2b0);
              local_70 = (int *)&local_80;
              (**(code **)(lVar12 + 0x10))
                        (*(undefined8 *)(lVar12 + 8),lVar12,param_1,&local_70,&local_80);
              iVar4 = iVar4 + -1;
            }
            lVar12 = param_1[5];
            iVar4 = iVar4 + 1;
          } while (lVar12 != 0);
        }
      }
    }
  }
  goto LAB_01230b68;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_01230a88:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x11) * 0x10 + 0x138);
      goto LAB_01230ac0;
    }
  }
LAB_01230aa0:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,0x11);
LAB_01230ac0:
  (*(code *)*puVar9)(plVar8,ppiVar7,puVar9[1]);
LAB_01230ad0:
  if (param_1[6] != 0) {
    if (param_2 <= *(int *)(param_1[6] + 0x20)) {
      if (plVar5 != (long *)0x0) {
        if ((param_1[4] == 0) || (plVar8 = *(long **)(param_1[4] + 0x440), plVar8 == (long *)0x0))
        goto LAB_01230b68;
        (**(code **)(*plVar8 + 0x1d8))
                  (plVar8,plVar5,(int)plVar5[4],*(undefined8 *)(*plVar8 + 0x1e0));
        *(undefined4 *)(plVar5 + 4) = 0xffffffff;
      }
LAB_01230b44:
      param_1[6] = 0;
      return;
    }
    if ((param_1[4] != 0) && (plVar5 = *(long **)(param_1[4] + 0x440), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x1d8))();
      if (param_1[6] != 0) {
        *(undefined4 *)(param_1[6] + 0x20) = 0xffffffff;
        goto LAB_01230b44;
      }
    }
  }
LAB_01230b68:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


