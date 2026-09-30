/*
FUNCTION_NAME: System.Linq.Expressions.CachedReflectionInfo$$get_CallSiteOps_ClearMatch
ENTRY_POINT: 02e29830
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_17;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_12;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_12
*/


void System_Linq_Expressions_CachedReflectionInfo__get_CallSiteOps_ClearMatch(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  undefined4 in_w8;
  void *pvVar5;
  long unaff_x29;
  uint uStack000000000000000c;
  int iStack0000000000000024;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  Il2CppArray *in_stack_000000b0;
  
  *(undefined4 *)(unaff_x29 + -0x24) = in_w8;
  *(undefined4 *)(unaff_x29 + -0x18) = *(undefined4 *)(unaff_x29 + -0x24);
  *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  uVar2 = OVRPlugin_GetCurrentInteractionProfile_m12953945102999ED32CED85223563A6EAC9AE7CF
                    (*(undefined4 *)(unaff_x29 + -0x34));
  *(undefined4 *)(unaff_x29 + -0x38) = uVar2;
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(unaff_x29 + -0x38);
  bVar1 = OVRPlugin_IsMultimodalHandsControllersSupported_m63A2812AFB66A88C74A506B378E105B4D0FACE9D
                    (0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x39) & 1) != 0) {
    *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    uVar2 = OVRPlugin_GetCurrentDetachedInteractionProfile_m2AFEEFB0724E660A20253977485077DCDB94794C
                      (*(undefined4 *)(unaff_x29 + -0x40),0);
    *(undefined4 *)(unaff_x29 + -0x44) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x44);
    *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -0x20);
    if (*(int *)(unaff_x29 + -0x48) != 0) {
      *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x20);
      *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(unaff_x29 + -0x4c);
    }
  }
  *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x14);
  iStack0000000000000024 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x50),9);
  if (iStack0000000000000024 == 0) {
    *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0x1c);
    if (*(int *)(unaff_x29 + -0x58) == 2) {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 4;
    }
    else {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 3;
    }
    goto LAB_02e29a70;
  }
  if (iStack0000000000000024 == 1) {
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 4;
    goto LAB_02e29a70;
  }
  if (iStack0000000000000024 == 2) {
FUN_02e29a2c:
    *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x1c);
    if (*(int *)(unaff_x29 + -0x60) == 2) {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 4;
    }
    else {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 5;
    }
    goto LAB_02e29a70;
  }
  *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(unaff_x29 + -0x14);
  uVar2 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x54),0x1002);
  switch(uVar2) {
  case 0:
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 2;
    goto LAB_02e29a70;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x1c);
    if (*(int *)(unaff_x29 + -0x5c) == 2) {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 4;
    }
    else {
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 3;
    }
    goto LAB_02e29a70;
  case 5:
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 4;
    goto LAB_02e29a70;
  case 6:
    goto FUN_02e29a2c;
  }
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 1;
LAB_02e29a70:
  uVar3 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                     ,4);
  *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94);
  *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x74);
  uVar3 = Box(*(Il2CppClass **)StringLiteral_453,(void *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0x80) = uVar3;
  NullCheck(*(void **)(unaff_x29 + -0x70));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x70),*(void **)(unaff_x29 + -0x80));
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x70),0,
             *(Il2CppObject **)(unaff_x29 + -0x80));
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  uVar3 = OVRPlugin_get_productName_mF2E3AB2A95F1FE2DDC35AAEADD9887782C4916C0();
  *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
  NullCheck(*(void **)(unaff_x29 + -0x88));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x88),*(void **)(unaff_x29 + -0x90));
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x88),1,
             *(Il2CppObject **)(unaff_x29 + -0x90));
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x88);
  *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x14);
  *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x9c);
  uVar3 = Box(*(Il2CppClass **)StringLiteral_457,(void *)(unaff_x29 + -0xa0));
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar3;
  NullCheck(*(void **)(unaff_x29 + -0x98));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x98),*(void **)(unaff_x29 + -0xa8));
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x98),2,
             *(Il2CppObject **)(unaff_x29 + -0xa8));
  in_stack_000000b0 = *(Il2CppArray **)(unaff_x29 + -0x98);
  in_stack_000000a8 = *(undefined4 *)(unaff_x29 + -0x18);
  uStack00000000000000ac = in_stack_000000a8;
  pIVar4 = (Il2CppObject *)Box(*(Il2CppClass **)StringLiteral_454,&stack0x000000a8);
  NullCheck(in_stack_000000b0);
  ArrayElementTypeCheck(in_stack_000000b0,pIVar4);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000000b0,3,pIVar4);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
            (*(undefined8 *)StringLiteral_458,in_stack_000000b0,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
  NullCheck(pvVar5);
  uStack000000000000000c = 0;
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar5,0,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
  NullCheck(pvVar5);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar5,uStack000000000000000c & 1,0);
  uVar3 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000030);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar3,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_455,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(uVar3,0);
  uVar3 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000030);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar3,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_456,0);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar3,0);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x90) = 1;
  return;
}


