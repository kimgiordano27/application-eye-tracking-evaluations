/*
FUNCTION_NAME: FUN_05d85ff8
ENTRY_POINT: 05d85ff8
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2
*/


void FUN_05d85ff8(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_065c8c40;
  if ((DAT_06a7ac84 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<NonConvexMeshCollider_Box,_bool>_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<NonConvexMeshCollider_Box,_NonConvexMeshCollider_Box>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<NonConvexMeshCollider_Box,_NonConvexMeshCollider_Vector3Int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<JsonParser_JsonValue,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<FlipboardCounter_Digit,_bool>_TypeInfo);
    DAT_06a7ac84 = 1;
  }
  lVar7 = param_1[0xc];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar3 = FUN_05ef59b8(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) goto LAB_05d8623c;
  }
  else {
    if (param_2 == 0) goto LAB_05d8623c;
    plVar4 = (long *)FUN_05dc1e9c(param_2,0);
    if (plVar4 == (long *)0x0) {
LAB_05d860f0:
      plVar4 = (long *)FUN_05dc1e9c(param_2,0);
      pcVar6 = *(code **)(*param_1 + 0x618);
      uVar5 = *(undefined8 *)(*param_1 + 0x620);
    }
    else {
      bVar1 = *(byte *)(*(long *)System_Func<FlipboardCounter_Digit,_bool>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<FlipboardCounter_Digit,_bool>_TypeInfo)) goto LAB_05d860f0;
      pcVar6 = *(code **)(*param_1 + 0x828);
      uVar5 = *(undefined8 *)(*param_1 + 0x830);
    }
    (*pcVar6)(param_1,plVar4,uVar5);
  }
  lVar7 = param_1[0x1e];
  uVar5 = FUN_05dc1e9c(param_2,0);
  if (lVar7 != 0) {
    FUN_04ad0ba0(lVar7,uVar5,*(undefined8 *)System_Func<NonConvexMeshCollider_Box,_bool>_TypeInfo);
    if (param_1[0x2d] != 0) {
      if ((0 < *(int *)(param_1[0x2d] + 0x20)) &&
         (plVar4 = (long *)FUN_05dc1e9c(param_2,0), plVar4 != (long *)0x0)) {
        bVar1 = *(byte *)(*(long *)System_Func<JsonParser_JsonValue,_string>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           ((*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)System_Func<JsonParser_JsonValue,_string>_TypeInfo &&
            (uVar3 = FUN_05d84ddc(param_1,plVar4), (uVar3 & 1) == 0)))) {
          if (param_1[0x2d] == 0) goto LAB_05d8623c;
          FUN_04ad0ba0(param_1[0x2d],plVar4,
                       *(undefined8 *)
                        System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo
                      );
        }
      }
      lVar7 = param_1[0x39];
      uVar5 = FUN_05dc1bf0(param_2,0);
      if (lVar7 != 0) {
        FUN_039697e4(lVar7,uVar5,
                     *(undefined8 *)
                      System_Func<NonConvexMeshCollider_Box,_NonConvexMeshCollider_Vector3Int>_TypeInfo
                    );
        uVar5 = FUN_05dc1bf0(param_2,0);
                    /* WARNING: Could not recover jumptable at 0x05d86228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x768))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x770));
        return;
      }
    }
  }
LAB_05d8623c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


