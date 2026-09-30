/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 0325f3b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_JsonSerializer__DeserializeInternal
              (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  ulong in_x9;
  int unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined *puVar9;
  
  do {
    if (in_x9 + unaff_w26 >> 0x1f != 0) {
LAB_0325f494:
      uVar7 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,*(undefined8 *)
                          Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<List<IResourceLocator>>_op_Implicit__
                  );
    }
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_0325f470;
    if (*(int *)(lVar10 + 0x18) < (int)((int)param_4 + unaff_w26)) break;
    if ((int)unaff_w20 < 0) {
LAB_0325f4a8:
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar7 = thunk_FUN_01c496e0();
      puVar9 = 
      Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<List<string>>_IsValid__
      ;
      goto LAB_0325f4c4;
    }
    if ((ulong)unaff_w20 + (ulong)unaff_w23 >> 0x1f != 0) goto LAB_0325f494;
    if (unaff_x21 == 0) goto LAB_0325f470;
    if (*(int *)(unaff_x21 + 0x18) < (int)(unaff_w20 + unaff_w23)) goto LAB_0325f4a8;
    plVar6 = *(long **)(unaff_x22 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_0325f470;
    lVar1 = 0;
    if (*(int *)(unaff_x21 + 0x18) != 0) {
      lVar1 = unaff_x28;
    }
    lVar2 = 0;
    if (*(int *)(lVar10 + 0x18) != 0) {
      lVar2 = lVar10 + 0x20;
    }
    iVar5 = (**(code **)(*plVar6 + 0x1d8))
                      (plVar6,lVar2 + (ulong)unaff_w26,param_4,lVar1 + (ulong)unaff_w20 * 2,
                       unaff_w23,0,*(undefined8 *)(*plVar6 + 0x1e0));
    unaff_w23 = unaff_w23 - iVar5;
    unaff_w20 = iVar5 + unaff_w20;
    if ((int)unaff_w23 < 1) {
LAB_0325f450:
      return unaff_w19 - unaff_w23;
    }
    plVar6 = *(long **)(unaff_x22 + 0x20);
    uVar4 = unaff_w23;
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      bVar3 = *(byte *)(*(long *)BattlepassManager_<GetLevelsCoroutine>d__17_TypeInfo + 0x130);
      if ((bVar3 <= *(byte *)(lVar10 + 0x130)) &&
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) ==
          *(long *)BattlepassManager_<GetLevelsCoroutine>d__17_TypeInfo)) {
        uVar4 = (**(code **)(lVar10 + 0x218))(plVar6,*(undefined8 *)(lVar10 + 0x220));
        uVar4 = unaff_w23 - (1 < (int)unaff_w23 & uVar4);
      }
    }
    iVar5 = uVar4 << (ulong)(*(byte *)(unaff_x22 + 0x44) & 0x1f);
    if (0x7f < iVar5) {
      iVar5 = unaff_w29;
    }
    if (*(char *)(unaff_x22 + 0x45) == '\0') {
      plVar6 = *(long **)(unaff_x22 + 0x10);
      if (plVar6 == (long *)0x0) goto LAB_0325f470;
      uVar4 = (**(code **)(*plVar6 + 0x348))
                        (plVar6,*unaff_x25,0,iVar5,*(undefined8 *)(*plVar6 + 0x350));
      unaff_w26 = 0;
      param_1 = unaff_x25;
    }
    else {
      param_1 = *(long **)(unaff_x22 + 0x10);
      if (param_1 == (long *)0x0) {
LAB_0325f470:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      bVar3 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*param_1 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x27))
      goto LAB_0325f470;
      unaff_w26 = *(uint *)((long)param_1 + 0x34);
      uVar4 = FUN_03225a94(param_1,iVar5,0);
      param_1 = param_1 + 5;
    }
    if (uVar4 == 0) goto LAB_0325f450;
    param_4 = (ulong)uVar4;
    in_x9 = param_4;
  } while (-1 < (int)(uVar4 | unaff_w26));
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar7 = thunk_FUN_01c496e0();
  puVar9 = 
  DarkTonic_MasterAudio_AudioResourceOptimizer_<PopulateSourcesWithResourceClipAsync>d__12_TypeInfo;
LAB_0325f4c4:
  uVar8 = thunk_FUN_01c273e8(puVar9);
  FUN_03247e00(uVar7,uVar8,0);
  uVar8 = thunk_FUN_01c273e8(
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<List<IResourceLocator>>_op_Implicit__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar7,uVar8);
}


