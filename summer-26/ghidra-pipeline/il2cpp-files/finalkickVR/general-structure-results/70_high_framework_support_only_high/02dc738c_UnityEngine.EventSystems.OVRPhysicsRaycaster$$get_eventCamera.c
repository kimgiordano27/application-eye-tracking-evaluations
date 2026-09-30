/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRPhysicsRaycaster$$get_eventCamera
ENTRY_POINT: 02dc738c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_EventSystems_OVRPhysicsRaycaster__get_eventCamera(long param_1)

{
  undefined8 *puVar1;
  void **ppvVar2;
  long lVar3;
  GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *pGVar4;
  void *pvVar5;
  undefined8 uVar6;
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC *this;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  ulong *in_stack_00000068;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x790));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_7886A713E86423F598779DC3705554AF721B941EA12B5A82350F7B93B85D0F92
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000068);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__);
  OVRPlugin__cctor_m077322BF80F9EC92EF39237D5279ED27FFB57075::s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  *(undefined8 *)(unaff_x29 + -0x10) = *puVar1;
  uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *puVar1 = uVar6;
  ppvVar2 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier(ppvVar2,*(void **)(unaff_x29 + -0x10));
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined4 *)(lVar3 + 0x18) = 8;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  il2cpp_codegen_initobj((void *)(lVar3 + 0x1c),8);
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
  GUID__ctor_mE86A653F57E2611E4C38C623AAE82CF5507CA592(*(undefined8 *)(unaff_x29 + -0x18));
  uVar6 = *(undefined8 *)(unaff_x29 + -0x18);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x28),*(void **)(unaff_x29 + -0x18));
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar6;
  GUID__ctor_mE86A653F57E2611E4C38C623AAE82CF5507CA592(*(undefined8 *)(unaff_x29 + -0x20),0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x20);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined8 *)(lVar3 + 0x48) = uVar6;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x48),*(void **)(unaff_x29 + -0x20));
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined1 *)(lVar3 + 0x68) = 0;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined1 *)(lVar3 + 0x69) = 0;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined8 *)(lVar3 + 0x70) = 0;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x70),(void *)0x0);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(undefined8 *)(lVar3 + 0x78) = 0;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x78),(void *)0x0);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  il2cpp_codegen_initobj((void *)(lVar3 + 0x80),0x200);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  il2cpp_codegen_initobj((void *)(lVar3 + 0x280),0x20);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  il2cpp_codegen_initobj((void *)(lVar3 + 0x2a0),0xc44);
  uVar6 = SZArrayNew(*(Il2CppClass **)
                      Field_<PrivateImplementationDetails>_533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
                     ,0x46);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x28);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x38) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0x30));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0x30),0,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0x40));
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x30);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x50) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0x58),*(undefined8 *)(unaff_x29 + -0x50),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0x48));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0x48),1,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0x58));
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x48);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x68) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0x70),*(undefined8 *)(unaff_x29 + -0x68),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_223D6CA32241C349E421A0164F2341E20CC5B65D5A04AA021CFF71D623895570
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0x60));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0x60),2,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0x70));
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x80) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0x88),*(undefined8 *)(unaff_x29 + -0x80),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_772907508FD7AA0ED404C8FC80B6B772E26D67FA3C3662C22D62B871067C28DA
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0x78));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0x78),3,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0x88));
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0x98) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x98),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0x90));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0x90),4,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0xa0));
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x90);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0xb0) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0xb8),*(undefined8 *)(unaff_x29 + -0xb0),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5EDA150FE7576E845094FDFB4B24FB4E513BAC8B2604D92353440BA1CE5B0239
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0xa8));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0xa8),5,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0xb8));
  *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xa8);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -200) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0xd0),*(undefined8 *)(unaff_x29 + -200),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0xc0));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0xc0),6,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0xd0));
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xc0);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0xe0) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0xe8),*(undefined8 *)(unaff_x29 + -0xe0),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0xd8));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0xd8),7,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0xe8));
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xd8);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  *(undefined8 *)(unaff_x29 + -0xf8) = *puVar1;
  uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar6;
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (*(undefined8 *)(unaff_x29 + -0x100),*(undefined8 *)(unaff_x29 + -0xf8),
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
             ,0);
  NullCheck(*(void **)(unaff_x29 + -0xf0));
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt
            (*(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
              (unaff_x29 + -0xf0),8,
             *(GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 **)
              (unaff_x29 + -0x100));
  this = *(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
          (unaff_x29 + -0xf0);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,9,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_59BE5A634187B8A57216EFF5371A47732C05744B1C1A0A6382A6D5622C9FFDCE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,10,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0xb,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5F8C6B3C66B972606D85E7651F67ADBD02E8316876884674E8328FA710747E5B
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0xc,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_60C6ED13AF98DBFEEDA8F8197FFFCC349BB04395CC81DF0D477CBC57BF5B398B
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0xd,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0xe,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_6772A9B8BF207A3CFE6EE68769D6985B69522183F24A2A3D41BC3B4602953426
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0xf,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x10,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x11,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_796E63069E193A008CB4E85573AA1FE53C5F4E58B42A7F61FD0EEE1D89B5120B
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x12,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x13,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_992F16C986809AB68C7466CC3EC6F12B2506A962EA539753E5D84A2FB7FF8A24
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x14,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x15,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x16,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_B1E34F4A11EE411B83415EF0B252A0B2BBCFCAC2E592865E09C12E4252C93A75
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x17,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_C92FAD7F348A682E7D5B7E74C76B5D019174EE7BC87545B25A1FDD49FBCC2D0B
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x18,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x19,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x1a,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_FB6D7301FFDCB5FBA5807A19B4F0606947897C1105240B6BBA815352DBBE2064
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x1b,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_0698228BF899CAEAB9A53E5E6C7099E846C44F56432050D234DDF03AD772F139
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x1c,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_19AE20A57B073E3E8DD45C6F6A4E9AB1076EA3EBFFF28E4AEB58B411472CF994
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x1d,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_33350F5DA385CE1B8749AEC68BA060CD54EE981968522B5EDF62178537A1FEEE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x1e,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_38809B9974198671140931F729415F3FD75DF68A6398E3486AE3B58554329A63
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x1f,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x20,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_4EDE3546F1189E450DF4D4A2739BE90BEB3B1708B3B9F406B02E0773A92A10FF
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x21,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x22,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5ADB7CA81690556AB2A3201A849839FA3562604BB469382C7D6D78AB426283E2
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x23,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5DDF815AC046E7D4603FA586D1BDE42118AD4FE9875D64F716BC7D2740EE52C9
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x24,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_605A3F93AE7A97E00C156F977E942027EA532E263A5B440A4219984F803FDD04
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x25,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_7367A65185E4F747AA29364AB199D01646A010A62129A6BA2E35E929D7294D62
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x26,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_7439A4C9E30AC42BCC55AD1A2B617E29E7129B6DDAC79C886944B17819262CC1
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x27,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_990F3F1286CC3928725497B2745CFF7BC7C9803B4EB8271611540BA6BF6654B5
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x28,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x29,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_B1D1BCD1D06B4A563944BE3C67D51F63DF23702E5BE760D7897C6AD1F51C6122
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x2a,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_CAA07D7573596B3356BD202533F0EAFDD05309981F270193A99E300D57587326
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x2b,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_D4B3B8EBA0589FC38724A0D318B46104B07BC528744109ED69ED71604B7EEC1A
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x2c,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_F6EDC1733B068F457C63E03BB041B9AB6BFAD5CD7673D3E0841968D3FBCB12C7
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x2d,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x2e,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_FCA56C548368F7065472C8C8EE4D63921B4F16BB51181EC202A0C252D5209E6A
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x2f,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_538626DBDDCBAF340034E253E6CD62029433C39810B31FCF099B5B3CC49A87A2
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x30,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_90BF41834FF60FA6561772DD3FF27FD1314BB602A3CDD506B2495C1B4516E352
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x31,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x32,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x33,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_2B1FD722B0C0586F285976A166555FD77C64A00FC76F6CC455BE22FA86E48427
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x34,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x35,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x36,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x37,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x38,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x39,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x3a,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x3b,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x3c,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x3d,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x3e,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x3f,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_7886A713E86423F598779DC3705554AF721B941EA12B5A82350F7B93B85D0F92
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x40,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x41,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x42,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x43,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x44,pGVar4);
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
  uVar6 = *puVar1;
  pGVar4 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000050);
  GetBoneSkeleton2Delegate__ctor_mB15A32053B81D12D6E142DF9DF5FF6774D86FF63
            (pGVar4,uVar6,
             *(undefined8 *)
              Field_<PrivateImplementationDetails>_9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
             ,0);
  NullCheck(this);
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::SetAt(this,0x45,pGVar4);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)(lVar3 + 0xee8) =
       this;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0xee8),this);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  il2cpp_codegen_initobj((void *)(lVar3 + 0xef0),0x118);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  il2cpp_codegen_initobj((void *)(lVar3 + 0x1008),0x50);
  pvVar5 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__
                             );
  Version__ctor_m7D8EE608025AE8D7AD8867718BC0AC96A2CFC1F5(pvVar5,0,0,0,0);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *(void **)(lVar3 + 0x1058) = pvVar5;
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x1058),pvVar5);
  return;
}


