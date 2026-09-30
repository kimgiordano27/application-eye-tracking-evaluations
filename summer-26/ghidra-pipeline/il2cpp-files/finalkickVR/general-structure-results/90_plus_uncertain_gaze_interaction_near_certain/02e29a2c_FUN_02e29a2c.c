/*
FUNCTION_NAME: FUN_02e29a2c
ENTRY_POINT: 02e29a2c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_13;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_12;functionality_gaze_interaction_hits_12
*/


void FUN_02e29a2c(void)

{
  undefined8 uVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  long unaff_x29;
  uint uStack000000000000000c;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  Il2CppArray *in_stack_000000b0;
  
  *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x1c);
  if (*(int *)(unaff_x29 + -0x60) == 2) {
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 4;
  }
  else {
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94) = 5;
  }
  uVar1 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                     ,4);
  *(undefined8 *)(unaff_x29 + -0x68) = uVar1;
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94);
  *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x74);
  uVar1 = Box(*(Il2CppClass **)StringLiteral_453,(void *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0x80) = uVar1;
  NullCheck(*(void **)(unaff_x29 + -0x70));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x70),*(void **)(unaff_x29 + -0x80));
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x70),0,
             *(Il2CppObject **)(unaff_x29 + -0x80));
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  uVar1 = OVRPlugin_get_productName_mF2E3AB2A95F1FE2DDC35AAEADD9887782C4916C0();
  *(undefined8 *)(unaff_x29 + -0x90) = uVar1;
  NullCheck(*(void **)(unaff_x29 + -0x88));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x88),*(void **)(unaff_x29 + -0x90));
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x88),1,
             *(Il2CppObject **)(unaff_x29 + -0x90));
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x88);
  *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x14);
  *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x9c);
  uVar1 = Box(*(Il2CppClass **)StringLiteral_457,(void *)(unaff_x29 + -0xa0));
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
  NullCheck(*(void **)(unaff_x29 + -0x98));
  ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x98),*(void **)(unaff_x29 + -0xa8));
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x98),2,
             *(Il2CppObject **)(unaff_x29 + -0xa8));
  in_stack_000000b0 = *(Il2CppArray **)(unaff_x29 + -0x98);
  in_stack_000000a8 = *(undefined4 *)(unaff_x29 + -0x18);
  uStack00000000000000ac = in_stack_000000a8;
  pIVar2 = (Il2CppObject *)Box(*(Il2CppClass **)StringLiteral_454,&stack0x000000a8);
  NullCheck(in_stack_000000b0);
  ArrayElementTypeCheck(in_stack_000000b0,pIVar2);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000000b0,3,pIVar2);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
  Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
            (*(undefined8 *)StringLiteral_458,in_stack_000000b0,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
  NullCheck(pvVar3);
  uStack000000000000000c = 0;
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack000000000000000c & 1,0);
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000030);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar1,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_455,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_InputFocusAcquired_m303EF833FD42193E22AFA2851C1E80861B53F41B(uVar1,0);
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000030);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar1,*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)StringLiteral_456,0);
  OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44(uVar1,0);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x90) = 1;
  return;
}


