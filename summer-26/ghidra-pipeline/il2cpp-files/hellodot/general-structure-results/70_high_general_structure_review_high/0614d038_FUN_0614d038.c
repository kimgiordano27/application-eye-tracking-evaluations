/*
FUNCTION_NAME: FUN_0614d038
ENTRY_POINT: 0614d038
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


void FUN_0614d038(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,float *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if ((DAT_06a839d4 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_VisualScripting_FlowGraph_<>c__DisplayClass9_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_FocusEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_FocusInEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_FocusOutEvent_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_FoldersResource_DeleteRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass6_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_FoldersResource_GetRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_FoldersResource_InsertRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_FoldersResource_ListRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_FoldersResource_RenameRequest_TypeInfo);
                    /* try { // try from 0614d110 to 0624d11b has its CatchHandler @ 0614d9dc */
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UIElements_Foldout_UxmlFactory_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Ui_FollowCameraComponent_<Follow>d__13_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_<>c_TypeInfo);
    DAT_06a839d4 = 1;
  }
  puVar2 = PTR_DAT_065c8d28;
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar8 != 0) {
    lVar3 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 0614d154 to 0624d15b has its CatchHandler @ 0614d9b4 */
    if (lVar3 == 0) goto LAB_0614d870;
    uVar7 = *(uint *)(lVar3 + 0x18);
    if (((uVar7 <= param_3) || (uVar7 <= param_4)) || (uVar7 <= param_5)) goto LAB_0614d8a4;
    lVar3 = lVar3 + 0x20;
    puVar4 = (undefined8 *)(lVar3 + (long)(int)param_3 * 0xc);
    puVar5 = (undefined8 *)(lVar3 + (long)(int)param_4 * 0xc);
    fVar11 = *param_6;
    fVar12 = param_6[1];
    fVar14 = *(float *)(puVar4 + 1);
    uVar16 = *puVar4;
    fVar18 = *(float *)(puVar5 + 1);
    uVar22 = *puVar5;
    puVar4 = (undefined8 *)(lVar3 + (long)(int)param_5 * 0xc);
    fVar13 = param_6[2];
    uVar17 = *puVar4;
    fVar21 = *(float *)(puVar4 + 1);
                    /* try { // try from 0614d1c8 to 0624d1d3 has its CatchHandler @ 0614d870 */
                    /* try { // try from 0614d1d4 to 0624d1df has its CatchHandler @ 0614d878 */
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a6722e = '\x01';
    }
    fVar23 = (float)uVar16 * fVar11 + (float)uVar22 * fVar12 + (float)uVar17 * fVar13;
    fVar24 = (float)((ulong)uVar16 >> 0x20) * fVar11 + (float)((ulong)uVar22 >> 0x20) * fVar12 +
             (float)((ulong)uVar17 >> 0x20) * fVar13;
    fVar11 = fVar11 * fVar14 + fVar12 * fVar18 + fVar21 * fVar13;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar12 = SQRT(fVar11 * fVar11 + fVar23 * fVar23 + fVar24 * fVar24);
    if (fVar12 <= DAT_013ddfb8) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      uVar16 = **(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      fVar11 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8) + 1);
    }
    else {
                    /* try { // try from 0614d228 to 0624d22f has its CatchHandler @ 0614d874 */
      uVar16 = CONCAT44(fVar24 / fVar12,fVar23 / fVar12);
      fVar11 = fVar11 / fVar12;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) goto LAB_0614d870;
                    /* try { // try from 0614d280 to 0624d287 has its CatchHandler @ 0614d864 */
    if (*(uint *)(lVar8 + 0x18) <= param_2) goto LAB_0614d8a4;
                    /* try { // try from 0614d288 to 0624d3db has its CatchHandler @ 0614cd88 */
    lVar8 = lVar8 + (long)(int)param_2 * 0xc;
    *(undefined8 *)(lVar8 + 0x20) = uVar16;
    *(float *)(lVar8 + 0x28) = fVar11;
  }
  lVar8 = *(long *)(param_1 + 0x68);
  plVar6 = (long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
  if (lVar8 != 0) {
    lVar3 = *(long *)(lVar8 + 0x10);
    if (lVar3 == 0) goto LAB_0614d870;
    uVar7 = *(uint *)(lVar3 + 0x18);
    if (((uVar7 <= param_3) || (uVar7 <= param_4)) || (uVar7 <= param_5)) goto LAB_0614d8a4;
    lVar3 = lVar3 + 0x20;
    puVar4 = (undefined8 *)(lVar3 + (long)(int)param_3 * 0x10);
    fVar11 = *(float *)((long)puVar4 + 0xc);
    puVar5 = (undefined8 *)(lVar3 + (long)(int)param_4 * 0x10);
    fVar18 = *param_6;
    fVar14 = param_6[1];
    puVar1 = (undefined8 *)(lVar3 + (long)(int)param_5 * 0x10);
    fVar12 = *(float *)(puVar4 + 1);
    fVar13 = *(float *)(puVar5 + 1);
    fVar23 = *(float *)((long)puVar5 + 0xc);
    uVar16 = *puVar4;
    uVar17 = *puVar5;
    fVar21 = param_6[2];
    uVar22 = *puVar1;
    fVar27 = *(float *)(puVar1 + 1);
    fVar24 = *(float *)((long)puVar1 + 0xc);
    if (*(int *)(*(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo + 0xe0) ==
        0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6722e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a6722e = '\x01';
    }
    fVar25 = (float)uVar16 * fVar18 + (float)uVar17 * fVar14 + (float)uVar22 * fVar21;
    fVar26 = (float)((ulong)uVar16 >> 0x20) * fVar18 + (float)((ulong)uVar17 >> 0x20) * fVar14 +
             (float)((ulong)uVar22 >> 0x20) * fVar21;
    fVar12 = fVar18 * fVar12 + fVar14 * fVar13 + fVar27 * fVar21;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar13 = SQRT(fVar12 * fVar12 + fVar25 * fVar25 + fVar26 * fVar26);
    if (fVar13 <= DAT_013ddfb8) {
                    /* try { // try from 0614d3dc to 0624d3e3 has its CatchHandler @ 0614da5c */
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      uVar16 = **(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      fVar12 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8) + 1);
    }
    else {
      uVar16 = CONCAT44(fVar26 / fVar13,fVar25 / fVar13);
      fVar12 = fVar12 / fVar13;
    }
    plVar6 = (long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) goto LAB_0614d870;
    if (*(uint *)(lVar8 + 0x18) <= param_2) goto LAB_0614d8a4;
    lVar8 = lVar8 + (long)(int)param_2 * 0x10;
    *(undefined8 *)(lVar8 + 0x20) = uVar16;
                    /* try { // try from 0614d464 to 0624d46b has its CatchHandler @ 0614d9d8 */
    *(float *)(lVar8 + 0x28) = fVar12;
    *(float *)(lVar8 + 0x2c) = fVar18 * fVar11 + fVar14 * fVar23 + fVar24 * fVar21;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 0614d47c to 0624d47f has its CatchHandler @ 0614d9d0 */
                    /* try { // try from 0614d484 to 0624d48f has its CatchHandler @ 0614d9f0 */
    uVar9 = 0;
                    /* try { // try from 0614d490 to 0624d50f has its CatchHandler @ 0614cd88 */
    do {
      lVar8 = *plVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
        plVar6 = (long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
      }
      if ((long)**(int **)(lVar8 + 0xb8) <= (long)uVar9) break;
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x70) + 0x10), lVar8 == 0)) goto LAB_0614d870;
      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0614d8a4;
      lVar8 = *(long *)(lVar8 + uVar9 * 8 + 0x20);
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_0614d870;
        uVar7 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 0614d510 to 0624d517 has its CatchHandler @ 0614d9f4 */
        if ((((uVar7 <= param_3) || (uVar7 <= param_4)) || (uVar7 <= param_5)) || (uVar7 <= param_2)
           ) goto LAB_0614d8a4;
        lVar8 = lVar8 + 0x20;
        uVar16 = *(undefined8 *)(lVar8 + (long)(int)param_3 * 8);
                    /* try { // try from 0614d520 to 0624d52b has its CatchHandler @ 0614d9e0 */
        uVar17 = *(undefined8 *)(lVar8 + (long)(int)param_4 * 8);
        uVar22 = *(undefined8 *)(lVar8 + (long)(int)param_5 * 8);
        *(ulong *)(lVar8 + (long)(int)param_2 * 8) =
             CONCAT44((float)((ulong)uVar16 >> 0x20) * *param_6 +
                      (float)((ulong)uVar17 >> 0x20) * param_6[1] +
                      (float)((ulong)uVar22 >> 0x20) * param_6[2],
                      (float)uVar16 * *param_6 + (float)uVar17 * param_6[1] +
                      (float)uVar22 * param_6[2]);
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar9 = 0;
    do {
      lVar8 = *plVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
        plVar6 = (long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
      }
                    /* try { // try from 0614d5a8 to 0624d5af has its CatchHandler @ 0614d9d4 */
      if ((long)**(int **)(lVar8 + 0xb8) <= (long)uVar9) break;
      if ((*(long *)(param_1 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar8 == 0)) goto LAB_0614d870;
                    /* try { // try from 0614d5c0 to 0624d5c3 has its CatchHandler @ 0614d9cc */
      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0614d8a4;
                    /* try { // try from 0614d5c8 to 0624d5d3 has its CatchHandler @ 0614d9e8 */
      lVar8 = *(long *)(lVar8 + uVar9 * 8 + 0x20);
      if (lVar8 != 0) {
                    /* try { // try from 0614d5d4 to 0624d6bf has its CatchHandler @ 0614cd88 */
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_0614d870;
        uVar7 = *(uint *)(lVar8 + 0x18);
        if (((uVar7 <= param_3) || (uVar7 <= param_4)) || ((uVar7 <= param_5 || (uVar7 <= param_2)))
           ) goto LAB_0614d8a4;
        lVar8 = lVar8 + 0x20;
        fVar11 = *param_6;
        fVar12 = param_6[1];
        puVar5 = (undefined8 *)(lVar8 + (long)(int)param_4 * 0xc);
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_3 * 0xc);
        fVar14 = *(float *)(puVar4 + 1);
        uVar16 = *puVar4;
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_5 * 0xc);
        fVar18 = *(float *)(puVar5 + 1);
        uVar22 = *puVar5;
        fVar13 = param_6[2];
        fVar21 = *(float *)(puVar4 + 1);
        uVar17 = *puVar4;
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0xc);
        *puVar4 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar11 +
                           (float)((ulong)uVar22 >> 0x20) * fVar12 +
                           (float)((ulong)uVar17 >> 0x20) * fVar13,
                           (float)uVar16 * fVar11 + (float)uVar22 * fVar12 + (float)uVar17 * fVar13)
        ;
        *(float *)(puVar4 + 1) = fVar11 * fVar14 + fVar12 * fVar18 + fVar13 * fVar21;
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar9 = 0;
    do {
      lVar8 = *plVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
        plVar6 = (long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
      }
                    /* try { // try from 0614d6c0 to 0624d6c3 has its CatchHandler @ 0614d86c */
                    /* try { // try from 0614d6c8 to 0624d6cf has its CatchHandler @ 0614d884 */
      if ((long)**(int **)(lVar8 + 0xb8) <= (long)uVar9) break;
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x80) + 0x10), lVar8 == 0)) goto LAB_0614d870;
                    /* try { // try from 0614d6e0 to 0624d6e7 has its CatchHandler @ 0614d868 */
      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0614d8a4;
                    /* try { // try from 0614d6ec to 0624d6f3 has its CatchHandler @ 0614d880 */
      lVar8 = *(long *)(lVar8 + uVar9 * 8 + 0x20);
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_0614d870;
        uVar7 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 0614d714 to 0624d717 has its CatchHandler @ 0614d8ac */
        if ((((uVar7 <= param_3) || (uVar7 <= param_4)) || (uVar7 <= param_5)) || (uVar7 <= param_2)
           ) goto LAB_0614d8a4;
        lVar8 = lVar8 + 0x20;
                    /* try { // try from 0614d728 to 0624d72b has its CatchHandler @ 0614d8a8 */
        fVar11 = *param_6;
        fVar12 = param_6[1];
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_3 * 0x10);
        uVar17 = puVar4[1];
        uVar16 = *puVar4;
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_4 * 0x10);
        uVar15 = puVar4[1];
        uVar22 = *puVar4;
        fVar13 = param_6[2];
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_5 * 0x10);
        uVar20 = puVar4[1];
        uVar19 = *puVar4;
                    /* try { // try from 0614d73c to 0624d73f has its CatchHandler @ 0614d88c */
                    /* try { // try from 0614d74c to 0624d75f has its CatchHandler @ 0614d87c */
        puVar4 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0x10);
        puVar4[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar11 +
                             (float)((ulong)uVar15 >> 0x20) * fVar12 +
                             (float)((ulong)uVar20 >> 0x20) * fVar13,
                             (float)uVar17 * fVar11 + (float)uVar15 * fVar12 +
                             (float)uVar20 * fVar13);
        *puVar4 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar11 +
                           (float)((ulong)uVar22 >> 0x20) * fVar12 +
                           (float)((ulong)uVar19 >> 0x20) * fVar13,
                           (float)uVar16 * fVar11 + (float)uVar22 * fVar12 + (float)uVar19 * fVar13)
        ;
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
    if (lVar8 == 0) goto LAB_0614d870;
    uVar7 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 0614d774 to 0624d77b has its CatchHandler @ 0614d890 */
    if (((uVar7 <= param_3) || (uVar7 <= param_4)) || ((uVar7 <= param_5 || (uVar7 <= param_2)))) {
LAB_0614d8a4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar8 = lVar8 + 0x20;
                    /* try { // try from 0614d7a8 to 0624d7af has its CatchHandler @ 0614d89c */
    fVar11 = *param_6;
    fVar12 = param_6[1];
                    /* try { // try from 0614d7b0 to 0624d80f has its CatchHandler @ 0614cd88 */
    puVar4 = (undefined8 *)(lVar8 + (long)(int)param_3 * 0x10);
    uVar17 = puVar4[1];
    uVar16 = *puVar4;
    puVar4 = (undefined8 *)(lVar8 + (long)(int)param_4 * 0x10);
    uVar15 = puVar4[1];
    uVar22 = *puVar4;
    fVar13 = param_6[2];
    puVar4 = (undefined8 *)(lVar8 + (long)(int)param_5 * 0x10);
    uVar20 = puVar4[1];
    uVar19 = *puVar4;
    puVar4 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0x10);
    puVar4[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar11 +
                         (float)((ulong)uVar15 >> 0x20) * fVar12 +
                         (float)((ulong)uVar20 >> 0x20) * fVar13,
                         (float)uVar17 * fVar11 + (float)uVar15 * fVar12 + (float)uVar20 * fVar13);
    *puVar4 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar11 +
                       (float)((ulong)uVar22 >> 0x20) * fVar12 +
                       (float)((ulong)uVar19 >> 0x20) * fVar13,
                       (float)uVar16 * fVar11 + (float)uVar22 * fVar12 + (float)uVar19 * fVar13);
  }
  lVar8 = *(long *)(param_1 + 0x98);
  if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 0614d228 with catch @ 0614d874 */
                    /* catch() { ... } // from try @ 0614d1d4 with catch @ 0614d878 */
                    /* catch() { ... } // from try @ 0614d74c with catch @ 0614d87c */
                    /* catch() { ... } // from try @ 0614d6ec with catch @ 0614d880 */
                    /* catch() { ... } // from try @ 0614d6c8 with catch @ 0614d884 */
                    /* catch() { ... } // from try @ 0614d85c with catch @ 0614d888 */
                    /* catch() { ... } // from try @ 0614d73c with catch @ 0614d88c
                       catch() { ... } // from try @ 0614d850 with catch @ 0614d88c */
                    /* catch() { ... } // from try @ 0614d774 with catch @ 0614d890
                       catch() { ... } // from try @ 0614d854 with catch @ 0614d890 */
                    /* catch() { ... } // from try @ 0614d7a8 with catch @ 0614d89c
                       catch() { ... } // from try @ 0614d848 with catch @ 0614d89c */
    return;
  }
  uVar7 = 0;
  while( true ) {
    if (*(int *)(lVar8 + 0x18) <= (int)uVar7) {
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0614d8a4;
    lVar8 = *(long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
                    /* try { // try from 0614d810 to 0624d813 has its CatchHandler @ 0614dac8 */
                    /* try { // try from 0614d814 to 0624d817 has its CatchHandler @ 0614dac4 */
    if ((lVar8 == 0) || (lVar3 = *(long *)(lVar8 + 0x18), lVar3 == 0)) break;
                    /* try { // try from 0614d818 to 0624d81f has its CatchHandler @ 0614dacc */
    uVar10 = 0;
                    /* try { // try from 0614d820 to 0624d823 has its CatchHandler @ 0614d9ec */
                    /* try { // try from 0614d824 to 0624d827 has its CatchHandler @ 0614d9e4 */
    while ((int)uVar10 < (int)*(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 0614d828 to 0624d82b has its CatchHandler @ 0614cd88 */
      if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_0614d8a4;
                    /* try { // try from 0614d82c to 0624d82f has its CatchHandler @ 0614d9c0 */
                    /* try { // try from 0614d830 to 0624d837 has its CatchHandler @ 0614cd88 */
      lVar3 = *(long *)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_0614d870;
                    /* try { // try from 0614d838 to 0624d83b has its CatchHandler @ 0614d9bc */
                    /* try { // try from 0614d83c to 0624d83f has its CatchHandler @ 0614d9b8 */
                    /* try { // try from 0614d840 to 0624d843 has its CatchHandler @ 0614d8ac */
                    /* try { // try from 0614d844 to 0624d847 has its CatchHandler @ 0614d8a8 */
                    /* try { // try from 0614d848 to 0624d84f has its CatchHandler @ 0614d89c */
                    /* try { // try from 0614d850 to 0624d853 has its CatchHandler @ 0614d88c */
      FUN_0615aa54(lVar3,param_2,param_3,param_4,param_5,param_6,0);
                    /* try { // try from 0614d854 to 0624d85b has its CatchHandler @ 0614d890 */
      lVar3 = *(long *)(lVar8 + 0x18);
      uVar10 = uVar10 + 1;
                    /* try { // try from 0614d85c to 0624d863 has its CatchHandler @ 0614d888 */
      if (lVar3 == 0) goto LAB_0614d870;
    }
                    /* catch() { ... } // from try @ 0614d280 with catch @ 0614d864
                       try { // try from 0614d864 to 0624d8c7 has its CatchHandler @ 0614cd88 */
    lVar8 = *(long *)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 0614d6e0 with catch @ 0614d868 */
    uVar7 = uVar7 + 1;
                    /* catch() { ... } // from try @ 0614d6c0 with catch @ 0614d86c */
    if (lVar8 == 0) break;
  }
LAB_0614d870:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0614d1c8 with catch @ 0614d870 */
  FUN_02ce7c7c();
}


