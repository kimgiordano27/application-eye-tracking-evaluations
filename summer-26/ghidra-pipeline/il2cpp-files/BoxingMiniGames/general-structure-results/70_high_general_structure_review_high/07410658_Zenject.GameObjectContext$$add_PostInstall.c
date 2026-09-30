/*
FUNCTION_NAME: Zenject.GameObjectContext$$add_PostInstall
ENTRY_POINT: 07410658
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


float Zenject_GameObjectContext__add_PostInstall
                (float param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_07ef3917 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_List<SignalSubscription>_AddRange__);
    FUN_03642964(Method_System_Collections_Generic_List<Toggle>_Remove__);
    FUN_03642964(Method_System_Collections_Generic_List<TimelineClip>_get_Item__);
    FUN_03642964(Method_System_Collections_Generic_List<Toggle>_Add__);
    FUN_03642964(Method_System_Collections_Generic_List<Timer>_RemoveAt__);
    FUN_03642964(Method_System_Collections_Generic_List<TimeValue>_get_Count__);
    FUN_03642964(Method_System_Collections_Generic_List<Timer>_set_Item__);
    FUN_03642964(PTR_DAT_079f4df0);
    FUN_03642964(Method_System_Collections_Generic_List<Toggle>_get_Count__);
    FUN_03642964(Method_System_Collections_Generic_List<Toggle>_get_Item__);
    DAT_07ef3917 = 1;
  }
  if (param_1 <= 0.0) {
    return param_1;
  }
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Collections_Generic_List<Toggle>_get_Item__);
  FUN_05e5ae34(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_2;
    thunk_FUN_036b7ad0((long *)(lVar3 + 0x18),param_2);
    uVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Collections_Generic_List<TimelineClip>_get_Item__);
    FUN_0547f2d4(uVar4,param_2,
                 *(undefined8 *)Method_System_Collections_Generic_List<Toggle>_Remove__,0);
    if (param_3 != 0) {
      FUN_045a0af4(param_3,uVar4,
                   *(undefined8 *)Method_System_Collections_Generic_List<Timer>_RemoveAt__);
      puVar1 = Method_System_Collections_Generic_List<SignalSubscription>_AddRange__;
      *(undefined4 *)(lVar3 + 0x10) = 0;
      uVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      FUN_0554a400(uVar4,lVar3,
                   *(undefined8 *)Method_System_Collections_Generic_List<Toggle>_get_Count__,0);
      FUN_0459fa8c(param_3,uVar4,*(undefined8 *)Method_System_Collections_Generic_List<Toggle>_Add__
                  );
      puVar2 = Method_System_Collections_Generic_List<Timer>_set_Item__;
      puVar1 = PTR_DAT_079f4df0;
      if (*(int *)(param_3 + 0x18) < 1) {
        return param_1;
      }
      iVar6 = 0;
      while( true ) {
        lVar5 = FUN_0459ed6c(param_3,iVar6,*(undefined8 *)puVar2);
        fVar7 = (float)FUN_0740fc58(param_2,lVar5);
        fVar8 = (float)FUN_0740fc58(param_2,lVar5);
        if (lVar5 == 0) break;
        fVar11 = *(float *)(lVar5 + 0x54);
        if (*(int *)(lVar5 + 0x58) != 0) {
          fVar11 = (*(float *)(param_2 + 0x50) * fVar11) / 100.0;
        }
        fVar12 = *(float *)(lVar3 + 0x10);
        fVar9 = (float)FUN_0740fc58(param_2,lVar5);
        fVar10 = 0.0;
        if (fVar9 < fVar11) {
          fVar9 = (float)FUN_0740fc58(param_2,lVar5);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          fVar10 = (float)FUN_05e18c00(param_1 * (fVar8 / fVar12),fVar11 - fVar9,0);
          if (0.0 < fVar10) {
            fVar8 = (float)FUN_0740fc58(param_2,lVar5);
            FUN_07410a98(fVar10 + fVar8,param_2,lVar5,param_4 & 1);
          }
        }
        param_1 = param_1 - fVar10;
        *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) - fVar7;
        if (param_1 <= 0.0) {
          return param_1;
        }
        iVar6 = iVar6 + 1;
        if (*(int *)(param_3 + 0x18) <= iVar6) {
          return param_1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


