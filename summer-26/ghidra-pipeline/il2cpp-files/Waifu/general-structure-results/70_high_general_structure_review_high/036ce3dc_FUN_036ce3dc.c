/*
FUNCTION_NAME: FUN_036ce3dc
ENTRY_POINT: 036ce3dc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


void FUN_036ce3dc(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  lVar5 = *(long *)(param_1 + 0x50);
  if ((param_2 & 1) == 0) {
    if (lVar5 != 0) {
      uVar7 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
          lVar5 = *(long *)(param_1 + 0x58);
          if (lVar5 != 0) {
            uVar7 = 0;
            goto LAB_036ce540;
          }
          break;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
        lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (DAT_086ef168 == (code *)0x0) {
          DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
        (*DAT_086ef168)(lVar5,0);
        lVar5 = *(long *)(param_1 + 0x50);
        uVar7 = uVar7 + 1;
      } while (lVar5 != 0);
    }
  }
  else if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
        lVar5 = *(long *)(param_1 + 0x58);
        if (lVar5 != 0) {
          uVar7 = 0;
          goto LAB_036ce4d8;
        }
        break;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
      lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (DAT_086ef168 == (code *)0x0) {
        DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
      (*DAT_086ef168)(lVar5,1);
      lVar5 = *(long *)(param_1 + 0x50);
      uVar7 = uVar7 + 1;
    } while (lVar5 != 0);
  }
  goto thunk_FUN_033d1d3c;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,0);
    lVar5 = *(long *)(param_1 + 0x58);
    uVar7 = uVar7 + 1;
    if (lVar5 == 0) break;
LAB_036ce540:
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
      lVar5 = *(long *)(param_1 + 0x60);
      if (lVar5 != 0) {
        uVar7 = 0;
        goto 
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<TaskAwaiter<object>,_WebRequestConfig_<RunViaWebRequestManager>d__0<object>>
        ;
      }
      break;
    }
  }
  goto thunk_FUN_033d1d3c;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    (*DAT_086ef168)(lVar5,1);
    lVar5 = *(long *)(param_1 + 0x60);
    uVar7 = uVar7 + 1;
    if (lVar5 == 0) break;

    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>__AwaitUnsafeOnCompleted<TaskAwaiter<object>,_WebRequestConfig_<RunViaWebRequestManager>d__0<object>>
    :
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
      lVar5 = *(long *)(param_1 + 0x68);
      if (lVar5 != 0) {
        uVar7 = 0;
        goto LAB_036ce6d0;
      }
      break;
    }
  }
  goto thunk_FUN_033d1d3c;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,1);
    lVar5 = *(long *)(param_1 + 0x68);
    uVar7 = uVar7 + 1;
    if (lVar5 == 0) break;
LAB_036ce6d0:
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
      if (*(long *)(param_1 + 0x20) != 0) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        *puVar6 = *(undefined8 *)(param_1 + 0x40);
        iVar4 = DAT_08908cd0;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
          *puVar6 = *(undefined8 *)(param_1 + 0x48);
          if (iVar4 == 0) {
            return;
          }
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          return;
        }
      }
      break;
    }
  }
  goto thunk_FUN_033d1d3c;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,1);
    lVar5 = *(long *)(param_1 + 0x58);
    uVar7 = uVar7 + 1;
    if (lVar5 == 0) break;
LAB_036ce4d8:
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
      lVar5 = *(long *)(param_1 + 0x60);
      if (lVar5 != 0) {
        uVar7 = 0;
        goto LAB_036ce5a4;
      }
      break;
    }
  }
  goto thunk_FUN_033d1d3c;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_036ce874;
    lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    (*DAT_086ef168)(lVar5,0);
    lVar5 = *(long *)(param_1 + 0x60);
    uVar7 = uVar7 + 1;
    if (lVar5 == 0) break;
LAB_036ce5a4:
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
      lVar5 = *(long *)(param_1 + 0x68);
      if (lVar5 != 0) {
        uVar7 = 0;
        goto LAB_036ce66c;
      }
      break;
    }
  }
  goto thunk_FUN_033d1d3c;
LAB_036ce66c:
  do {
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
      if (*(long *)(param_1 + 0x20) != 0) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        *puVar6 = *(undefined8 *)(param_1 + 0x30);
        iVar4 = DAT_08908cd0;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
          *puVar6 = *(undefined8 *)(param_1 + 0x38);
          if (iVar4 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
      break;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_036ce874:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar5,0);
    lVar5 = *(long *)(param_1 + 0x68);
    uVar7 = uVar7 + 1;
  } while (lVar5 != 0);
thunk_FUN_033d1d3c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


