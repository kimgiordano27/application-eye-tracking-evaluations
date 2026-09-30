/*
FUNCTION_NAME: FUN_063b046c
ENTRY_POINT: 063b046c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_063b046c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar5 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
  if ((DAT_076decb2 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07285218);
    thunk_FUN_032e1da0(PTR_DAT_07285268);
    thunk_FUN_032e1da0(PTR_DAT_07285220);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_RenderingUtils_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_RepaintData_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_Universal_RenderingData_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_Repeat_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07285228);
    thunk_FUN_032e1da0(UnityEngine_UIElements_RepeatButton_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07285230);
    thunk_FUN_032e1da0(PTR_DAT_07285280);
    thunk_FUN_032e1da0(PTR_DAT_072850d0);
    thunk_FUN_032e1da0(Oculus_Platform_Request_TypeInfo);
    thunk_FUN_032e1da0(System_Net_Cache_RequestCache_TypeInfo);
    thunk_FUN_032e1da0(System_Text_RegularExpressions_RegexTree_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07282568);
    thunk_FUN_032e1da0(System_Net_Cache_RequestCacheLevel_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0729ade8);
    DAT_076decb2 = 1;
  }
  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_06dde1c4(lVar6,0);
  puVar4 = PTR_DAT_07285230;
  puVar3 = PTR_DAT_07285228;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo;
    thunk_FUN_0333a630();
    uVar2 = _UNK_013a0ff8;
    uVar1 = _DAT_013a0ff0;
    *(undefined8 *)(lVar6 + 0x48) = _UNK_013a0ff8;
    *(undefined8 *)(lVar6 + 0x40) = uVar1;
    *(long *)(param_1 + 0xa8) = lVar6;
    thunk_FUN_0333a630((long *)(param_1 + 0xa8),lVar6);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
    FUN_04c4a8b8(lVar6,*(undefined8 *)puVar3);
    puVar4 = UnityEngine_UIElements_RepeatButton_TypeInfo;
    puVar3 = UnityEngine_UIElements_Repeat_TypeInfo;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_07282568;
      thunk_FUN_0333a630();
      *(undefined4 *)(lVar6 + 0x40) = 2;
      *(long *)(param_1 + 0xb0) = lVar6;
      thunk_FUN_0333a630((long *)(param_1 + 0xb0),lVar6);
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
      FUN_04c4a8b8(lVar6,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_072850d0;
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) =
             *(undefined8 *)System_Text_RegularExpressions_RegexTree_TypeInfo;
        thunk_FUN_0333a630();
        *(undefined4 *)(lVar6 + 0x40) = 2;
        *(long *)(param_1 + 0xb8) = lVar6;
        thunk_FUN_0333a630((long *)(param_1 + 0xb8),lVar6);
        lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
        FUN_06dca5d0(lVar6,0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_0729ade8;
          thunk_FUN_0333a630();
          *(undefined8 *)(lVar6 + 0x40) = 0;
          thunk_FUN_0333a630((undefined8 *)(lVar6 + 0x40),0);
          *(long *)(param_1 + 0xc0) = lVar6;
          thunk_FUN_0333a630((long *)(param_1 + 0xc0),lVar6);
          lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
          FUN_06dde1c4(lVar6,0);
          puVar5 = PTR_DAT_07285280;
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)System_Net_Cache_RequestCache_TypeInfo;
            thunk_FUN_0333a630();
            *(undefined8 *)(lVar6 + 0x48) = uVar2;
            *(undefined8 *)(lVar6 + 0x40) = uVar1;
            *(long *)(param_1 + 200) = lVar6;
            thunk_FUN_0333a630((long *)(param_1 + 200),lVar6);
            lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
            FUN_06ddc8fc(lVar6,0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)Oculus_Platform_Request_TypeInfo;
              thunk_FUN_0333a630();
              *(undefined4 *)(lVar6 + 0x40) = 0x40000000;
              *(long *)(param_1 + 0xd0) = lVar6;
              thunk_FUN_0333a630((long *)(param_1 + 0xd0),lVar6);
              FUN_063a447c(param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


