/*
FUNCTION_NAME: System.Linq.Expressions.MemberInitExpression$$get_NewExpression
ENTRY_POINT: 02e6295c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Linq_Expressions_MemberInitExpression__get_NewExpression(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x29;
  uint uStack000000000000000c;
  int iStack000000000000002c;
  undefined8 *in_stack_00000030;
  ulong *in_stack_00000038;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  byte bStack000000000000008f;
  Il2CppObject *in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  Il2CppArray *in_stack_000000a0;
  Il2CppArray *in_stack_000000a8;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000038);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_704);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_705);
  OVRSpectatorModeDomeTest_Initialize_mF41F65D95C9A5567054848A636176663E451AD37::
  s_Il2CppMethodInitialized = 1;
  iStack000000000000002c = 0;
  memset((void *)(unaff_x29 + -0x40),0,0x30);
  memset((void *)(unaff_x29 + -0x78),iStack000000000000002c,0x38);
  *(byte *)(unaff_x29 + -0x79) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x20) & 1;
  if ((*(byte *)(unaff_x29 + -0x79) & 1) == 0) {
    bVar1 = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
    *(byte *)(unaff_x29 + -0x7a) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x7a) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      bVar1 = OVRPlugin_ResetDefaultExternalCamera_mABA1DDF03790F2D8CABBDFF98204604AE9D674B6();
      *(byte *)(unaff_x29 + -0x7b) = bVar1 & 1;
      uStack000000000000000c = 1;
      uVar3 = SZArrayNew((Il2CppClass *)*in_stack_00000038,1);
      *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x88);
      uVar2 = OVRPlugin_GetExternalCameraCount_mCF884D51AD3C5666FB5C4B9CDC8E7A6C0CF719F7(0);
      *(undefined4 *)(unaff_x29 + -0x94) = uVar2;
      *(undefined4 *)(unaff_x29 + -0x98) = *(undefined4 *)(unaff_x29 + -0x94);
      uVar3 = Box((Il2CppClass *)*in_stack_00000030,(void *)(unaff_x29 + -0x98));
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar3;
      NullCheck(*(void **)(unaff_x29 + -0x90));
      ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0x90),*(void **)(unaff_x29 + -0xa0));
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0x90),0,
                 *(Il2CppObject **)(unaff_x29 + -0xa0));
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)StringLiteral_705,*(undefined8 *)(unaff_x29 + -0x90),0);
      OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA
                (*(undefined8 *)(unaff_x29 + -8),0);
      in_stack_000000a0 =
           (Il2CppArray *)SZArrayNew((Il2CppClass *)*in_stack_00000038,uStack000000000000000c);
      in_stack_000000a8 = in_stack_000000a0;
      in_stack_00000098 =
           OVRPlugin_GetExternalCameraCount_mCF884D51AD3C5666FB5C4B9CDC8E7A6C0CF719F7(0);
      uStack000000000000009c = in_stack_00000098;
      in_stack_00000090 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000030,&stack0x00000098);
      NullCheck(in_stack_000000a0);
      ArrayElementTypeCheck(in_stack_000000a0,in_stack_00000090);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000000a0,0,
                 in_stack_00000090);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)StringLiteral_704,in_stack_000000a0,0);
      bStack000000000000008f =
           OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6
                     (0,unaff_x29 + -0x78,(void *)(unaff_x29 + -0x40),0);
      bStack000000000000008f = bStack000000000000008f & 1;
      memcpy(&stack0x00000058,(void *)(unaff_x29 + -0x40),0x30);
      lVar4 = *(long *)(unaff_x29 + -8);
      *(undefined8 *)(lVar4 + 0x38) = in_stack_00000070;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_00000068;
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x20) = 1;
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x54) = 1;
    }
  }
  return;
}


