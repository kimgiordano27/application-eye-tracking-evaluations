/*
FUNCTION_NAME: FUN_027449a4
ENTRY_POINT: 027449a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


undefined8 FUN_027449a4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440 *pCVar4;
  Il2CppArray *this;
  Type_t *pTVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x29;
  int iStack0000000000000004;
  undefined4 uStack00000000000000b0;
  int iStack00000000000000b4;
  uint uStack00000000000000dc;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined8 in_stack_000001b8;
  byte bStack00000000000001c6;
  byte bStack00000000000001c7;
  undefined8 in_stack_000001c8;
  void *in_stack_000001d0;
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440 *in_stack_000001d8;
  
  *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0x2c);
  *(uint *)(unaff_x29 + -0x5c) = *(uint *)(unaff_x29 + -0x6c) & 0x700;
  *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x5c);
  if (*(int *)(unaff_x29 + -0x70) < 0x201) {
    *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x5c);
    if (*(int *)(unaff_x29 + -0x74) == 0x100) {
      *(undefined4 *)(unaff_x29 + -0x34) = 1;
      goto LAB_02744a94;
    }
    *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x5c);
    if (*(int *)(unaff_x29 + -0x78) == 0x200) {
      *(undefined4 *)(unaff_x29 + -0x34) = 2;
      goto LAB_02744a94;
    }
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x7c) = *(undefined4 *)(unaff_x29 + -0x5c);
    if (*(int *)(unaff_x29 + -0x7c) == 0x300) {
      *(undefined4 *)(unaff_x29 + -0x34) = 3;
      goto LAB_02744a94;
    }
    *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x29 + -0x5c);
    if (*(int *)(unaff_x29 + -0x80) == 0x400) {
      *(undefined4 *)(unaff_x29 + -0x34) = 4;
      goto LAB_02744a94;
    }
    *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x5c);
    if (*(int *)(unaff_x29 + -0x84) == 0x500) {
      *(undefined4 *)(unaff_x29 + -0x34) = 5;
      goto LAB_02744a94;
    }
  }
  *(undefined4 *)(unaff_x29 + -0x34) = 2;
LAB_02744a94:
  *(undefined4 *)(unaff_x29 + -0x88) = *(undefined4 *)(unaff_x29 + -0x2c);
  uStack00000000000000dc = 1;
  iStack0000000000000004 = 0;
  uStack00000000000000b0 = 1;
  *(bool *)(unaff_x29 + -0x35) = (*(uint *)(unaff_x29 + -0x88) & 1) != 0;
  *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x2c);
  *(bool *)(unaff_x29 + -0x36) = (*(uint *)(unaff_x29 + -0x8c) & 0x40) != 0;
  *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x2c);
  *(bool *)(unaff_x29 + -0x37) = (*(uint *)(unaff_x29 + -0x90) & 0x30) == 0x10;
  *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(unaff_x29 + -0x2c);
  *(bool *)(unaff_x29 + -0x38) = (*(uint *)(unaff_x29 + -0x94) & 0x3000) == 0x1000;
  uVar2 = VirtualFuncInvoker0<int>::Invoke(0x14,*(Il2CppObject **)(unaff_x29 + -0x10));
  *(undefined4 *)(unaff_x29 + -0x98) = uVar2;
  iVar1 = iStack0000000000000004;
  if ((*(uint *)(unaff_x29 + -0x98) & 0x80) != 0) {
    iVar1 = 1;
  }
  *(byte *)(unaff_x29 + -0x39) = iVar1 != 0 & (byte)uStack00000000000000b0;
  uVar3 = SZArrayNew(*(Il2CppClass **)Method_WebSocketSharp_Ext_WriteContent__,
                     uStack00000000000000dc);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0xb0) = *in_stack_00000100;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
  *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                    (*(undefined8 *)(unaff_x29 + -0xc0));
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar3;
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined8 *)(unaff_x29 + -0xd8) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  CustomAttributeTypedArgument__ctor_m05B5ADB5D601F4B177406F8531EF645CA3F08570
            (unaff_x29 + -0xd8,*(undefined8 *)(unaff_x29 + -0xb8),*(undefined8 *)(unaff_x29 + -200),
             0);
  NullCheck(*(void **)(unaff_x29 + -0xa8));
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xd8);
  CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B::SetAt
            (*(undefined8 *)(unaff_x29 + -0xa8),0,*(undefined8 *)(unaff_x29 + -0xf0),
             *(undefined8 *)(unaff_x29 + -0xe8));
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x29 + -0xf8) =
       *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRSceneRoom>__;
  uVar3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                    (*(undefined8 *)(unaff_x29 + -0xf8),0);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x100);
  pCVar4 = (CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440 *)
           SZArrayNew(*(Il2CppClass **)Method_UnityEngine_GameObject_AddComponent<OVRSceneAnchor>__,
                      8);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<OVRTouchpadHelper>__,0);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x20);
  iStack00000000000000b4 = 0;
  memset(&stack0x00000540,0,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x00000540,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x00000510,&stack0x00000540,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,0,&stack0x00000510);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<OneGrabFreeTransformer>__,0)
  ;
  uVar7 = Box(*(Il2CppClass **)Method_UnityEngine_GameObject_AddComponent<OVROverlay>__,
              &stack0x000004f0);
  memset(&stack0x000004b8,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x000004b8,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x00000488,&stack0x000004b8,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,1,&stack0x00000488);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<PAMeshParticle>__,0);
  uVar7 = Box((Il2CppClass *)*in_stack_000000f8,&stack0x0000046e);
  memset(&stack0x00000430,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x00000430,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x00000400,&stack0x00000430,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,2,&stack0x00000400);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<OVRVirtualKeyboard>__,0);
  uVar7 = Box((Il2CppClass *)*in_stack_000000f8,&stack0x000003e6);
  memset(&stack0x000003a8,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x000003a8,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x00000378,&stack0x000003a8,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,3,&stack0x00000378);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<PAExclusionZone>__,0);
  uVar7 = Box((Il2CppClass *)*in_stack_000000f8,&stack0x0000035e);
  memset(&stack0x00000320,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x00000320,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x000002f0,&stack0x00000320,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,4,&stack0x000002f0);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<PAParticleField>__,0);
  uVar7 = Box(*(Il2CppClass **)Method_UnityEngine_GameObject_AddComponent<OVRManager>__,
              &stack0x000002d0);
  memset(&stack0x00000298,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x00000298,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x00000268,&stack0x00000298,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,5,&stack0x00000268);
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  NullCheck(pvVar6);
  uVar3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                    (pvVar6,*(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<PABillboardParticle>__,0);
  uVar7 = Box((Il2CppClass *)*in_stack_000000f8,&stack0x0000024e);
  memset(&stack0x00000210,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x00000210,uVar3,uVar7,0);
  NullCheck(pCVar4);
  memcpy(&stack0x000001e0,&stack0x00000210,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,6,&stack0x000001e0);
  in_stack_000001d0 = *(void **)(unaff_x29 + -0x50);
  in_stack_000001d8 = pCVar4;
  NullCheck(in_stack_000001d0);
  in_stack_000001c8 =
       Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0
                 (in_stack_000001d0,
                  *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OculusRestarter>__,0);
  bStack00000000000001c7 = *(byte *)(unaff_x29 + -0x38) & (byte)uStack00000000000000b0;
  bStack00000000000001c6 = bStack00000000000001c7 & 1;
  in_stack_000001b8 = Box((Il2CppClass *)*in_stack_000000f8,&stack0x000001c6);
  memset(&stack0x00000188,iStack00000000000000b4,0x30);
  CustomAttributeNamedArgument__ctor_m8C414BA5A58D9DC237BFB24FC4567D23CB6DC7F3
            (&stack0x00000188,in_stack_000001c8,in_stack_000001b8,0);
  NullCheck(in_stack_000001d8);
  pCVar4 = in_stack_000001d8;
  memcpy(&stack0x00000158,&stack0x00000188,0x30);
  CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440::SetAt
            (pCVar4,7,&stack0x00000158);
  *(CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440 **)
   (unaff_x29 + -0x58) = in_stack_000001d8;
  pvVar6 = *(void **)(unaff_x29 + -0x50);
  this = (Il2CppArray *)
         SZArrayNew(*(Il2CppClass **)
                     Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_get_Values__
                    ,uStack00000000000000dc);
  pTVar5 = (Type_t *)
           Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(*in_stack_00000100,0);
  NullCheck(this);
  ArrayElementTypeCheck(this,pTVar5);
  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB::SetAt
            ((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *)this,0,pTVar5);
  NullCheck(pvVar6);
  uVar3 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(pvVar6,this,0);
  uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x58);
  uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)Method_WebSocketSharp_Ext_ToHostOrder__);
  CustomAttributeData__ctor_mFC60E115E80D158E524DC91EDC3983DE015BE2C9(uVar7,uVar3,uVar8,uVar9,0);
  *(undefined8 *)(unaff_x29 + -8) = uVar7;
  return *(undefined8 *)(unaff_x29 + -8);
}


