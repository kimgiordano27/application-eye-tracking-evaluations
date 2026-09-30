/*
FUNCTION_NAME: FUN_024fd728
ENTRY_POINT: 024fd728
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_024fd728(long param_1,double *param_2,double *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  if ((DAT_0378290e & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Request<ChallengeList>_TypeInfo);
    DAT_0378290e = 1;
  }
  *param_3 = 1.0;
  *param_2 = INFINITY;
  uVar2 = UnityEngine_XR_Interaction_Toolkit_Inputs_InputActionManager__DisableInput(param_1);
  puVar1 = Oculus_Platform_Request<ChallengeList>_TypeInfo;
  if ((uVar2 & 1) == 0) {
    dVar8 = -INFINITY;
  }
  else {
    *param_2 = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar8 = (double)FUN_0251d3ec(uVar5,0);
  }
  lVar3 = FUN_024fa77c(param_1);
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar7 = *(long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_024fd980;
        uVar5 = *(undefined8 *)(lVar7 + 0x18);
        dVar9 = *param_2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar9 = (double)FUN_01772618(uVar5,dVar9,0);
        *param_2 = dVar9;
        dVar8 = (double)FUN_01772420(*(double *)(lVar7 + 0x18) + *(double *)(lVar7 + 0x30),dVar8,0);
        uVar4 = *(uint *)(lVar3 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
    }
    FUN_02511fa8(param_1 + 0x88);
    if (*(char *)(param_1 + 0x99) != '\0') {
      uVar5 = FUN_024fda90(param_1);
      dVar9 = *param_2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      dVar9 = (double)FUN_01772618(uVar5,dVar9,0);
      *param_2 = dVar9;
      dVar8 = (double)FUN_01772420(uVar5,dVar8,0);
    }
    dVar9 = *param_2;
    if (DAT_03775608 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_03775608 = '\x01';
    }
    puVar1 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (ABS(dVar9) != INFINITY) {
      if (DAT_03775608 == '\0') {
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                          );
        DAT_03775608 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (ABS(dVar8) != INFINITY) {
        *param_3 = dVar8 - *param_2;
        return;
      }
    }
    *param_3 = 0.0;
    *param_2 = 0.0;
    return;
  }
LAB_024fd980:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


