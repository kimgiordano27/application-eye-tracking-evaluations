/*
FUNCTION_NAME: FUN_06280750
ENTRY_POINT: 06280750
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_06280750(long param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_076de2a3 & 1) == 0) {
                    /* try { // try from 06280780 to 0638078f has its CatchHandler @ 06280c58 */
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
                    /* try { // try from 062807a0 to 063807af has its CatchHandler @ 06280c2c */
    thunk_FUN_032e1da0(System_Collections_Generic_List<Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
                    /* try { // try from 062807bc to 063807c7 has its CatchHandler @ 06280c78 */
    thunk_FUN_032e1da0(System_Collections_Generic_List<Column>_TypeInfo);
                    /* try { // try from 062807c8 to 063807e7 has its CatchHandler @ 06280c7c */
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Android_AndroidAssetPackInfo_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<RenderGraphDebugData_PassDebugData>_TypeInfo)
    ;
                    /* try { // try from 062807f0 to 063807f7 has its CatchHandler @ 06280c54 */
    thunk_FUN_032e1da0(Newtonsoft_Json_Linq_JTokenType___TypeInfo);
                    /* try { // try from 062807f8 to 06380803 has its CatchHandler @ 06280c50 */
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<RenderGraphDebugData_ResourceDebugData>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<IBinding>_TypeInfo);
                    /* try { // try from 06280818 to 0638081b has its CatchHandler @ 06280c4c */
    thunk_FUN_032e1da0(System_Collections_Generic_List<SampleAvatarConfig_AssetData>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Android_AndroidAssetPackState_TypeInfo);
    DAT_076de2a3 = 1;
  }
  if ((param_3 == (long *)0x0) || (param_3[2] == 0)) {
LAB_06280bac:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(param_3[2] + 0x10) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_06280bac;
  plVar3 = (long *)FUN_061a33b4(param_2,param_3,0);
  if (plVar3 == (long *)0x0) {
    FUN_061a2d90(param_2,param_3,param_4,0);
    return;
  }
  if (plVar3 == param_4) {
    return;
  }
  uVar9 = *(undefined8 *)
           System_Collections_Generic_List<RenderGraphDebugData_PassDebugData>_TypeInfo;
  if (param_4 == (long *)0x0) goto LAB_06280b78;
  lVar7 = *param_4;
  bVar1 = *(byte *)(lVar7 + 0x130);
  bVar2 = *(byte *)(*(long *)System_Func<TransitionCancelEvent>_TypeInfo + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)System_Func<TransitionCancelEvent>_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)System_Func<TransitionEndEvent>_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Func<TransitionEndEvent>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
        bVar2 = *(byte *)(*(long *)
                           System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo +
                         0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo)) {
          bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)System_Collections_Generic_List<Color>_TypeInfo)) {
            bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
            if ((bVar1 < bVar2) ||
               (puVar8 = (undefined8 *)Newtonsoft_Json_Linq_JTokenType___TypeInfo,
               *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
               *(long *)System_Collections_Generic_List<Column>_TypeInfo)) {
              bVar2 = *(byte *)(*(long *)
                                 System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo +
                               0x130);
              if ((bVar1 < bVar2) ||
                 (puVar8 = (undefined8 *)System_Collections_Generic_List<IBinding>_TypeInfo,
                 *(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                 *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo))
              goto LAB_06280b78;
            }
            goto LAB_06280b74;
          }
          uVar5 = FUN_06280e00(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)UnityEngine_Android_AndroidAssetPackState_TypeInfo;
        }
        else {
          uVar5 = FUN_06280cd8(plVar3,plVar3,param_4,param_2);
          puVar8 = (undefined8 *)
                   System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
          ;
        }
      }
      else {
        uVar5 = FUN_06280cd8(plVar3,plVar3,param_4,param_2);
        puVar8 = (undefined8 *)
                 System_Collections_Generic_List<RenderGraphDebugData_ResourceDebugData>_TypeInfo;
      }
joined_r0x06280b24:
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) goto LAB_06280bac;
      uVar9 = (**(code **)(*plVar4 + 0x198))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1a0));
      uVar5 = FUN_0622ced0(uVar9,*(undefined8 *)(param_1 + 0x38),0);
      puVar8 = (undefined8 *)System_Collections_Generic_List<SampleAvatarConfig_AssetData>_TypeInfo;
      if ((uVar5 & 1) != 0) {
        lVar7 = FUN_06151d7c(0);
        if ((lVar7 == 0) || (lVar7 = FUN_0619a864(lVar7,0), lVar7 == 0)) goto LAB_06280bac;
        plVar4 = (long *)FUN_061a33b4(lVar7,param_3,0);
        puVar8 = (undefined8 *)
                 System_Collections_Generic_List<SampleAvatarConfig_AssetData>_TypeInfo;
        goto joined_r0x06280a9c;
      }
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_06280bac;
    uVar9 = (**(code **)(*plVar4 + 0x198))(plVar4,param_3[3],*(undefined8 *)(*plVar4 + 0x1a0));
    uVar5 = FUN_0622ced0(uVar9,*(undefined8 *)(param_1 + 0x38),0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_06280bb0(uVar5,plVar3,param_4,param_2);
      puVar8 = (undefined8 *)UnityEngine_Android_AndroidAssetPackInfo_TypeInfo;
      goto joined_r0x06280b24;
    }
    lVar7 = FUN_06151d7c(0);
    if ((lVar7 == 0) || (lVar7 = FUN_0619a8d4(lVar7,0), lVar7 == 0)) goto LAB_06280bac;
    plVar4 = (long *)FUN_061a33b4(lVar7,param_3,0);
    puVar8 = (undefined8 *)UnityEngine_Android_AndroidAssetPackInfo_TypeInfo;
joined_r0x06280a9c:
    if (plVar3 == plVar4) {
      FUN_061a2ed8(param_2,param_3,param_4,0);
      return;
    }
    if (plVar4 == param_4) {
      return;
    }
  }
LAB_06280b74:
  uVar9 = *puVar8;
LAB_06280b78:
  uVar6 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
  FUN_06280f14(param_1,uVar9,uVar6,param_4);
  return;
}


