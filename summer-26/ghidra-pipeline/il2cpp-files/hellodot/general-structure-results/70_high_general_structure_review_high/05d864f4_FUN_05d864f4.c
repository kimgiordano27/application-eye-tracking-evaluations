/*
FUNCTION_NAME: FUN_05d864f4
ENTRY_POINT: 05d864f4
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05d864f4(long *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  
  if ((DAT_06a7ac88 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
                    /* try { // try from 05d86520 to 05e8652b has its CatchHandler @ 05d861dc */
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
                    /* try { // try from 05d8652c to 05e86533 has its CatchHandler @ 05d86534 */
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<NonConvexMeshCollider_Box,_NonConvexMeshCollider_Box>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d864b8 with catch @ 05d86534
                       catch(type#2 @ 00000000) { ... } // from try @ 05d8652c with catch @ 05d86534
                        */
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<JsonParser_JsonValue,_string>_TypeInfo);
    DAT_06a7ac88 = 1;
  }
  if (param_2 != 0) {
    lVar7 = param_1[0x1f];
    uVar3 = FUN_05dc2068(param_2,0);
    if (lVar7 != 0) {
      FUN_04ad0ba0(lVar7,uVar3,
                   *(undefined8 *)System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo
                  );
      if (param_1[0x2d] != 0) {
        if ((0 < *(int *)(param_1[0x2d] + 0x20)) &&
           (plVar4 = (long *)FUN_05dc2068(param_2,0), plVar4 != (long *)0x0)) {
          bVar1 = *(byte *)(*(long *)System_Func<JsonParser_JsonValue,_string>_TypeInfo + 0x130);
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             ((*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
               *(long *)System_Func<JsonParser_JsonValue,_string>_TypeInfo &&
              (uVar5 = FUN_05d84d84(param_1,plVar4), (uVar5 & 1) == 0)))) {
            if (param_1[0x2d] == 0) goto LAB_05d86640;
            FUN_04ad0ba0(param_1[0x2d],plVar4,
                         *(undefined8 *)
                          System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo
                        );
          }
        }
        cVar2 = *(char *)(param_2 + 0x28);
        uVar3 = FUN_05dc1bf0(param_2,0);
        lVar7 = *param_1;
        if (cVar2 == '\0') {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x7a8);
          uVar6 = *(undefined8 *)(lVar7 + 0x7b0);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x7c8);
          uVar6 = *(undefined8 *)(lVar7 + 2000);
        }
                    /* WARNING: Could not recover jumptable at 0x05d8663c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,uVar6);
        return;
      }
    }
  }
LAB_05d86640:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


