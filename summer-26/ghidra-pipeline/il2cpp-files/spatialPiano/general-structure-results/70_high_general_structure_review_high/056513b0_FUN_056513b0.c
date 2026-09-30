/*
FUNCTION_NAME: FUN_056513b0
ENTRY_POINT: 056513b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5
*/


void FUN_056513b0(long *param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined *puVar9;
  
  if ((DAT_06bc0074 & 1) == 0) {
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__);
    FUN_02f08768(PTR_DAT_067cde88);
    FUN_02f08768(PTR_DAT_067cde90);
    FUN_02f08768(PTR_DAT_067d7cb8);
    DAT_06bc0074 = 1;
  }
  if (*(int *)((long)param_1 + 0x4c) == 3) {
    (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  }
  else if (*(int *)((long)param_1 + 0x4c) == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_05650b10();
  }
  if ((param_3 == 0) ||
     ((*(int *)(param_3 + 0x10) == 0 &&
      (uVar4 = FUN_04f6dc3c(*param_2,*(undefined8 *)PTR_DAT_067cde90,0), (uVar4 & 1) != 0)))) {
                    /* try { // try from 056517a0 to 057517ab has its CatchHandler @ 05651834 */
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar7 = thunk_FUN_02f45270();
    uVar10 = thunk_FUN_02f6ef30(Method_Oculus_Platform_Models_DeserializableList<Challenge>__ctor__)
    ;
    FUN_0504ee1c(uVar7,uVar10,0);
    goto LAB_05651a14;
  }
  if (*(int *)((long)param_1 + 0x4c) != 2) {
                    /* try { // try from 056517d8 to 057517ef has its CatchHandler @ 0565183c */
    uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
    uVar10 = FUN_02f0880c(uVar10,2);
    FUN_02a7da48();
    puVar9 = 
    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TryGetValue__
    ;
                    /* try { // try from 056517f0 to 057517fb has its CatchHandler @ 05651830 */
                    /* try { // try from 056517fc to 05751853 has its CatchHandler @ 056510ac */
    uVar7 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TryGetValue__
                              );
    FUN_02a81aa0(uVar10,uVar7);
    uVar7 = thunk_FUN_02f6ef30(puVar9);
    FUN_02a81ad4(uVar10,0,uVar7);
                    /* catch() { ... } // from try @ 056517f0 with catch @ 05651830 */
                    /* catch() { ... } // from try @ 056517a0 with catch @ 05651834 */
    uVar3 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
                    /* catch() { ... } // from try @ 056517d8 with catch @ 0565183c */
    local_58 = thunk_FUN_02f6ef30(Method_OVRObjectPool_DictionaryScope<Guid,_OVRAnchor>__ctor__);
                    /* try { // try from 05651854 to 05751857 has its CatchHandler @ 0565187c */
    uStack_50 = 0xffffffffffffffff;
                    /* try { // try from 05651858 to 05751867 has its CatchHandler @ 056510ac */
    local_48 = uVar3;
    uVar7 = FUN_0510aa48(&local_58,0);
                    /* try { // try from 05651868 to 05751877 has its CatchHandler @ 05651880 */
    FUN_02a81aa0(uVar10,uVar7);
                    /* catch() { ... } // from try @ 05651854 with catch @ 0565187c */
    FUN_02a81ad4(uVar10,1,uVar7);
                    /* catch() { ... } // from try @ 05651868 with catch @ 05651880 */
                    /* try { // try from 05651884 to 05751887 has its CatchHandler @ 056519a0 */
                    /* try { // try from 05651888 to 057518b3 has its CatchHandler @ 056510ac */
    uVar7 = thunk_FUN_02f6ef30(Method_OVRObjectPool_DictionaryScope<Guid,_OVRAnchor>_Dispose__);
                    /* catch() { ... } // from try @ 056511dc with catch @ 0565188c */
    uVar10 = FUN_056b43f0(uVar7,uVar10,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
    uVar7 = thunk_FUN_02f45270();
                    /* try { // try from 056518b4 to 057518b7 has its CatchHandler @ 0565198c */
                    /* try { // try from 056518b8 to 057518ff has its CatchHandler @ 056510ac */
    FUN_050d5404(uVar7,uVar10,0);
    goto LAB_05651a14;
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar4 = thunk_FUN_04f6d944(param_4,*(undefined8 *)PTR_DAT_067cde88,0);
    plVar11 = (long *)PTR_DAT_067cde90;
    if ((((uVar4 & 1) == 0) ||
        (uVar4 = FUN_04f6dc3c(param_3,*(undefined8 *)PTR_DAT_067cde90,0), (uVar4 & 1) == 0)) &&
       (uVar4 = thunk_FUN_04f6d944(param_4,*(undefined8 *)
                                            Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__
                                   ,0), plVar11 = (long *)PTR_DAT_067d7cb8, (uVar4 & 1) == 0)) {
      plVar11 = *(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
    }
    lVar5 = *plVar11;
    *param_2 = lVar5;
    if (lVar5 == 0) goto LAB_056518c0;
  }
  puVar2 = PTR_DAT_067d7cb8;
  puVar9 = PTR_DAT_067cde90;
  if (*(int *)(lVar5 + 0x10) == 0) {
    uVar4 = thunk_FUN_04f6d944(param_3,*(undefined8 *)PTR_DAT_067cde90,0);
    puVar1 = PTR_DAT_067c9338;
    if ((uVar4 & 1) == 0) {
      lVar5 = *param_2;
    }
    else {
      lVar5 = *(long *)puVar9;
      *param_2 = lVar5;
      param_3 = **(long **)(*(long *)(puVar1 + 0x90) + 0xb8);
    }
  }
  uVar10 = *(undefined8 *)puVar2;
  *(undefined2 *)(param_1 + 9) = 0;
  uVar4 = thunk_FUN_04f6d944(lVar5,uVar10,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = thunk_FUN_04f6d944(*param_2,*(undefined8 *)PTR_DAT_067cde90,0);
    if ((uVar4 & 1) == 0) {
      if (param_4 == 0) {
        lVar5 = *param_2;
        if (lVar5 == 0) goto LAB_056518c0;
        if (*(int *)(lVar5 + 0x10) == 0) goto LAB_056515f4;
        if (param_1[4] == 0) goto LAB_056518c0;
        lVar5 = FUN_05656600(param_1[4],lVar5,0);
        if (lVar5 != 0) goto LAB_056515f4;
        uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
                    /* try { // try from 0565167c to 0575168b has its CatchHandler @ 056516c4 */
        uVar10 = FUN_02f0880c(uVar10,1);
        lVar5 = *param_2;
        FUN_02a7da48();
                    /* try { // try from 05651694 to 057516a3 has its CatchHandler @ 05651784 */
        FUN_02a81aa0(uVar10,lVar5);
                    /* try { // try from 056516a4 to 057516df has its CatchHandler @ 056510ac */
        FUN_02a81ad4(uVar10,0,lVar5);
        uVar7 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Add__
                                  );
        uVar10 = FUN_056b43f0(uVar7,uVar10,0);
                    /* catch() { ... } // from try @ 0565167c with catch @ 056516c4 */
      }
      else {
        lVar5 = *param_2;
        if (*(int *)(param_4 + 0x10) != 0) {
          if (lVar5 != 0) {
            lVar6 = param_1[4];
            if (*(int *)(lVar5 + 0x10) == 0) {
              if (lVar6 != 0) {
                lVar5 = FUN_05656aac(lVar6,param_4,0);
                *param_2 = lVar5;
                if (lVar5 != 0) goto LAB_056515f4;
                lVar5 = *(long *)PTR_DAT_067cde88;
                if (lVar5 != 0) {
                    /* try { // try from 05651748 to 05751757 has its CatchHandler @ 05651778 */
                  if ((*(int *)(param_4 + 0x10) == *(int *)(lVar5 + 0x10)) &&
                     (uVar4 = thunk_FUN_04f6d944(param_4,lVar5,0), (uVar4 & 1) != 0)) {
                    uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
                    uVar10 = FUN_02f0880c(uVar10,2);
                    FUN_02a7da48();
                    puVar9 = PTR_DAT_067cde90;
                  }
                  else {
                    /* try { // try from 05651758 to 0575177b has its CatchHandler @ 056510ac */
                    lVar5 = *(long *)
                             Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__;
                    if (lVar5 == 0) goto LAB_056518c0;
                    /* catch() { ... } // from try @ 056516e0 with catch @ 05651778
                       catch() { ... } // from try @ 05651748 with catch @ 05651778 */
                    /* try { // try from 0565177c to 0575177f has its CatchHandler @ 056519a0 */
                    /* try { // try from 05651780 to 0575179f has its CatchHandler @ 056510ac */
                    if ((*(int *)(param_4 + 0x10) != *(int *)(lVar5 + 0x10)) ||
                       (uVar4 = thunk_FUN_04f6d944(param_4,lVar5,0), (uVar4 & 1) == 0)) {
                    /* catch() { ... } // from try @ 05651694 with catch @ 05651784 */
                      lVar5 = FUN_05650f74(param_1,param_4,param_5);
                      *param_2 = lVar5;
                      goto LAB_056515f4;
                    }
                    uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
                    uVar10 = FUN_02f0880c(uVar10,2);
                    FUN_02a7da48();
                    puVar9 = PTR_DAT_067d7cb8;
                  }
                  uVar7 = thunk_FUN_02f6ef30(puVar9);
                  FUN_02a81aa0(uVar10,uVar7);
                  uVar7 = thunk_FUN_02f6ef30(puVar9);
                  FUN_02a81ad4(uVar10,0,uVar7);
                  FUN_02a81aa0(uVar10,param_4);
                  FUN_02a81ad4(uVar10,1,param_4);
                  uVar7 = thunk_FUN_02f6ef30(
                                            Method_System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>__ctor__
                                            );
                  uVar10 = FUN_056b43f0(uVar7,uVar10,0);
                    /* try { // try from 05651ae4 to 05751aef has its CatchHandler @ 05652078 */
                  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
                  uVar7 = thunk_FUN_02f45270();
                    /* try { // try from 05651b00 to 05751b03 has its CatchHandler @ 05652090 */
                  FUN_05055664(uVar7,uVar10,0);
                  goto LAB_05651a14;
                }
              }
            }
            else if (lVar6 != 0) {
              FUN_05656044(lVar6,lVar5,param_4,param_5,0);
              goto LAB_056515f4;
            }
          }
LAB_056518c0:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar5 == 0) goto LAB_056518c0;
        if (*(int *)(lVar5 + 0x10) == 0) goto LAB_056515f4;
        uVar10 = thunk_FUN_02f6ef30(
                                   Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_GetEnumerator__
                                   );
                    /* try { // try from 056516e0 to 057516f7 has its CatchHandler @ 05651778 */
        uVar10 = FUN_056b3cb4(uVar10,0);
      }
      thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
                    /* try { // try from 056516f8 to 05751747 has its CatchHandler @ 056510ac */
      uVar7 = thunk_FUN_02f45270();
      puVar9 = PTR_DAT_067dad20;
      goto LAB_056519f8;
    }
    if ((param_4 != 0) &&
       (uVar4 = FUN_04f6dc3c(param_4,*(undefined8 *)PTR_DAT_067cde88,0), (uVar4 & 1) != 0)) {
                    /* try { // try from 05651920 to 05751923 has its CatchHandler @ 05651970 */
      uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
                    /* try { // try from 0565192c to 0575192f has its CatchHandler @ 0565196c */
                    /* try { // try from 05651930 to 05751947 has its CatchHandler @ 056510ac */
      uVar10 = FUN_02f0880c(uVar10,3);
      FUN_02a7da48();
      puVar9 = PTR_DAT_067cde90;
                    /* try { // try from 05651948 to 05751957 has its CatchHandler @ 05651978 */
      uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067cde90);
      FUN_02a81aa0(uVar10,uVar7);
      uVar7 = thunk_FUN_02f6ef30(puVar9);
                    /* try { // try from 05651964 to 0575196b has its CatchHandler @ 0565196c */
                    /* catch() { ... } // from try @ 0565192c with catch @ 0565196c
                       catch() { ... } // from try @ 05651964 with catch @ 0565196c */
      FUN_02a81ad4(uVar10,0,uVar7);
                    /* catch() { ... } // from try @ 05651920 with catch @ 05651970 */
      puVar9 = PTR_DAT_067cde88;
      goto LAB_05651978;
    }
    puVar9 = PTR_DAT_067c9338;
    *(undefined1 *)((long)param_1 + 0x49) = 1;
  }
  else {
    if ((param_4 != 0) &&
       (uVar4 = FUN_04f6dc3c(param_4,*(undefined8 *)
                                      Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__
                             ,0), (uVar4 & 1) != 0)) {
      uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
      uVar10 = FUN_02f0880c(uVar10,3);
      FUN_02a7da48();
      puVar9 = PTR_DAT_067d7cb8;
      uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067d7cb8);
      FUN_02a81aa0(uVar10,uVar7);
                    /* try { // try from 05651900 to 05751903 has its CatchHandler @ 05651978 */
      uVar7 = thunk_FUN_02f6ef30(puVar9);
      FUN_02a81ad4(uVar10,0,uVar7);
      puVar9 = Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__;
LAB_05651978:
                    /* catch() { ... } // from try @ 05651900 with catch @ 05651978
                       catch() { ... } // from try @ 05651948 with catch @ 05651978 */
      uVar7 = thunk_FUN_02f6ef30(puVar9);
                    /* try { // try from 05651980 to 05751997 has its CatchHandler @ 056519a0 */
      FUN_02a81aa0(uVar10,uVar7);
                    /* catch() { ... } // from try @ 056518b4 with catch @ 0565198c */
      uVar7 = thunk_FUN_02f6ef30(puVar9);
                    /* try { // try from 05651998 to 057519a3 has its CatchHandler @ 056510ac */
                    /* catch() { ... } // from try @ 0565177c with catch @ 056519a0
                       catch() { ... } // from try @ 05651884 with catch @ 056519a0
                       catch() { ... } // from try @ 05651980 with catch @ 056519a0 */
      FUN_02a81ad4(uVar10,1,uVar7);
      FUN_02a81aa0(uVar10,param_4);
      FUN_02a81ad4(uVar10,2,param_4);
      uVar7 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                                );
                    /* try { // try from 056519d4 to 05751ae3 has its CatchHandler @ 056519d4
                       catch() { ... } // from try @ 056519d4 with catch @ 056519d4
                       catch() { ... } // from try @ 05651fb8 with catch @ 056519d4
                       catch() { ... } // from try @ 0565203c with catch @ 056519d4
                       catch() { ... } // from try @ 05652044 with catch @ 056519d4
                       catch() { ... } // from try @ 0565206c with catch @ 056519d4
                       catch() { ... } // from try @ 05652118 with catch @ 056519d4
                       catch() { ... } // from try @ 05652168 with catch @ 056519d4
                       catch() { ... } // from try @ 05652194 with catch @ 056519d4 */
      uVar10 = FUN_056b43f0(uVar7,uVar10,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
      uVar7 = thunk_FUN_02f45270();
      puVar9 = Method_Oculus_Platform_Models_DeserializableList<UserCapability>_get_HasNextPage__;
LAB_056519f8:
      uVar8 = thunk_FUN_02f6ef30(puVar9);
      FUN_0504ee88(uVar7,uVar10,uVar8,0);
LAB_05651a14:
      uVar10 = FUN_056b3cb8(uVar7,0);
      uVar7 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar7);
    }
    puVar9 = PTR_DAT_067c9338;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  lVar5 = **(long **)(*(long *)(puVar9 + 0x90) + 0xb8);
  param_1[7] = param_3;
  param_1[8] = lVar5;
LAB_056515f4:
  *(undefined4 *)((long)param_1 + 0x4c) = 3;
  return;
}


