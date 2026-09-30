/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 03664024
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x22;
  long *plVar10;
  
  if ((*(byte *)(unaff_x22 + 0xd12) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Entry__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Key__
                      );
    *(undefined1 *)(unaff_x22 + 0xd12) = 1;
  }
  puVar1 = Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Entry__;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Entry__
           ) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036640b0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(param_2,*(long *)
                                   Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Entry__
                          ,0);
LAB_036640b0:
    iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (iVar2 == 0) {
      return;
    }
    plVar10 = (long *)(param_1 + 0x98);
    lVar5 = *plVar10;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) < iVar2) {
        lVar5 = FUN_01f08890(*(undefined8 *)
                              Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_get_Key__
                             ,iVar2);
        *plVar10 = lVar5;
        thunk_FUN_01f51358(plVar10,lVar5);
        lVar5 = *plVar10;
      }
      lVar6 = *param_2;
      lVar4 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_03664150;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar4,5);
LAB_03664150:
      (*(code *)*puVar3)(param_2,lVar5,0,puVar3[1]);
      if ((param_3 & 1) != 0) {
        lVar4 = *param_2;
        lVar5 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_036641b8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar5,3);
LAB_036641b8:
        (*(code *)*puVar3)(param_2,puVar3[1]);
      }
      lVar5 = *plVar10;
      if (lVar5 != 0) {
        if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
          return;
        }
        uVar8 = 0;
        uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          FUN_03664228(param_1,*(undefined8 *)(lVar5 + 0x20 + uVar8 * 8),param_3 & 1);
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


