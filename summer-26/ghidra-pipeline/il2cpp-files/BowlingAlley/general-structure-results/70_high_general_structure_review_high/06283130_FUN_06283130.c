/*
FUNCTION_NAME: FUN_06283130
ENTRY_POINT: 06283130
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void FUN_06283130(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  
  puVar2 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
  if ((DAT_076de2c6 & 1) == 0) {
                    /* try { // try from 06283170 to 06383173 has its CatchHandler @ 06283380 */
                    /* try { // try from 06283174 to 06383177 has its CatchHandler @ 06283378 */
    thunk_FUN_032e1da0(UnityEngine_AndroidJavaClass_TypeInfo);
                    /* try { // try from 06283180 to 06383183 has its CatchHandler @ 06283364 */
    thunk_FUN_032e1da0(UnityEngine_AndroidJavaException_TypeInfo);
                    /* try { // try from 06283184 to 06383187 has its CatchHandler @ 06283370 */
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
                    /* try { // try from 06283190 to 06383193 has its CatchHandler @ 06283360 */
    thunk_FUN_032e1da0(System_Func<AvatarTemplateData,_Task>_TypeInfo);
                    /* try { // try from 0628319c to 0638319f has its CatchHandler @ 0628335c */
                    /* try { // try from 062831a4 to 063831f3 has its CatchHandler @ 06283358 */
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<ClearTargetsPass_PassData>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<object[],_object>_TypeInfo);
    DAT_076de2c6 = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar6 = *(long *)puVar2;
  }
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  thunk_FUN_0333a630(plVar12);
  plVar10 = (long *)(param_1 + 0x30);
  *plVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  thunk_FUN_0333a630(plVar10);
  FUN_059660a0(param_1,0);
  if (param_2 != (long *)0x0) {
    *plVar12 = param_2[0xd];
    thunk_FUN_0333a630(plVar12);
    puVar2 = UnityEngine_AndroidJavaException_TypeInfo;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar14 = *(undefined8 *)(param_2[0xb] + 0x50);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_AndroidJavaException_TypeInfo);
    FUN_0627f4f0(uVar7,uVar14,0,param_3);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    thunk_FUN_0333a630((undefined8 *)(param_1 + 0x20),uVar7);
    puVar3 = UnityEngine_AndroidJavaClass_TypeInfo;
    plVar12 = (long *)param_2[0xc];
    if (plVar12 != (long *)0x0) {
      uVar4 = FUN_058f278c(plVar12,0);
      uVar7 = FUN_032d5d3c(*(undefined8 *)puVar3,uVar4);
      puVar15 = (undefined8 *)(param_1 + 0x28);
      *puVar15 = uVar7;
      thunk_FUN_0333a630(puVar15,uVar7);
      iVar5 = FUN_058f278c(plVar12,0);
      puVar3 = System_Func<object[],_object>_TypeInfo;
      if (0 < iVar5) {
        uVar13 = 0;
        lVar6 = 0x20;
        do {
          plVar11 = (long *)*puVar15;
          plVar8 = (long *)(**(code **)(*plVar12 + 0x308))
                                     (plVar12,uVar13 & 0xffffffff,*(undefined8 *)(*plVar12 + 0x310))
          ;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c();
          }
          lVar16 = plVar8[10];
          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
          FUN_0627f4f0(lVar9,lVar16,1,param_3);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((lVar9 != 0) &&
             (lVar16 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)) {
            uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar7,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar11[uVar13 + 4] = lVar9;
          thunk_FUN_0333a630((long)plVar11 + lVar6,lVar9);
          uVar13 = uVar13 + 1;
          iVar5 = FUN_058f278c(plVar12,0);
          lVar6 = lVar6 + 8;
        } while ((long)uVar13 < (long)iVar5);
      }
      puVar2 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
      lVar6 = *param_2;
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<ClearTargetsPass_PassData>_TypeInfo
                       + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<ClearTargetsPass_PassData>_TypeInfo
         )) {
        bVar1 = *(byte *)(*(long *)System_Func<AvatarTemplateData,_Task>_TypeInfo + 0x130);
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Func<AvatarTemplateData,_Task>_TypeInfo)) {
          *(undefined4 *)(param_1 + 0x18) = 2;
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
            *plVar10 = param_2[0xf];
            thunk_FUN_0333a630();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_032d618c();
        }
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


