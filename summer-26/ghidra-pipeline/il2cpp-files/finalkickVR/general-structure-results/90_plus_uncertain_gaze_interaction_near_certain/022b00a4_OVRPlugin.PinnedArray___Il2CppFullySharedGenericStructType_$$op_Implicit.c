/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 022b00a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit(undefined8 param_1)

{
  undefined8 uVar1;
  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *pEVar2;
  TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *pTVar3;
  Il2CppArray *this;
  ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *pAVar4;
  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *pPVar5;
  Il2CppClass *pIVar6;
  long lVar7;
  undefined8 *puVar8;
  TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *pTVar9;
  MethodInfo *pMVar10;
  Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7 *pEVar11;
  Il2CppObject *pIVar12;
  undefined8 uVar13;
  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB *pTVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C *pPVar17;
  Converter_2_t67D5393CE8BC8B97622E117F523904B1AEDFBDEC *pCVar18;
  LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5 *pLVar19;
  String_t *pSVar20;
  ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *pEVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000054;
  int iStack000000000000006c;
  undefined4 uStack0000000000000084;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000c8;
  ArrayBuilder_1_t02DC1EECF7D4374AACA0F1C4D92B11DAAB01ED4E *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 *in_stack_00000130;
  undefined8 *in_stack_00000138;
  undefined8 *in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined8 *in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined8 *in_stack_00000160;
  undefined8 *in_stack_00000170;
  undefined8 *in_stack_00000178;
  undefined8 in_stack_00000ac0;
  
                    /* try { // try from 022b00a4 to 023b00a7 has its CatchHandler @ 022b0340 */
                    /* try { // try from 022b00a8 to 023b00c3 has its CatchHandler @ 022afd64 */
  pIVar12 = *(Il2CppObject **)(unaff_x29 + -0x70);
  NullCheck(pIVar12);
  uVar1 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar12);
                    /* try { // try from 022b00c4 to 023b00d3 has its CatchHandler @ 022b0090 */
                    /* try { // try from 022b00d4 to 023b0347 has its CatchHandler @ 022afd64 */
  uVar1 = Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5
                    (param_1,uVar1,in_stack_000000d8);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE
                     (in_stack_00000ac0,uVar1,in_stack_000000d8);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            ((ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *)(unaff_x29 + -0x30),pEVar2,
             (MethodInfo *)*in_stack_00000138);
  uVar1 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)
                             (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x13);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1,in_stack_000000d8);
  uVar1 = Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                    (uVar1,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<List<XRTargetEvaluator>>_System_IDisposable_Dispose__
                     ,in_stack_000000d8);
  *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            (in_stack_000000d0,
             *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0x78),
             (MethodInfo *)*in_stack_00000130);
  uVar1 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)
                             (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),
                            in_stack_000000c8._4_4_);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1,in_stack_000000d8);
  uVar1 = Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                    (uVar1,*(undefined8 *)
                            Method_UnityEngine_Pool_PooledObject<List<VisualElement>>_System_IDisposable_Dispose__
                     ,in_stack_000000d8);
  *(undefined8 *)(unaff_x29 + -0x80) = uVar1;
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            (in_stack_000000d0,
             *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0x80),
             (MethodInfo *)*in_stack_00000130);
  uVar1 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)
                             (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),
                            in_stack_000000c8._4_4_);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1,in_stack_000000d8);
  uVar1 = Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                    (uVar1,*(undefined8 *)
                            Method_UnityEngine_Pool_PooledObject<List<MultiColumnCollectionHeader_SortedColumnState>>_System_IDisposable_Dispose__
                     ,in_stack_000000d8);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar1;
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            (in_stack_000000d0,
             *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0x88),
             (MethodInfo *)*in_stack_00000130);
  uVar1 = Expression_Field_m7E7386B06D5633A67D272A594A9183C91373F8E3
                    (*(undefined8 *)(unaff_x29 + -0x70),
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<ActivateEventArgs>_System_IDisposable_Dispose__
                     ,in_stack_000000d8);
  *(undefined8 *)(unaff_x29 + -0x90) = uVar1;
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE
                     (*(undefined8 *)(unaff_x29 + -0x88),*(undefined8 *)(unaff_x29 + -0x90),
                      in_stack_000000d8);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            ((ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *)(unaff_x29 + -0x30),pEVar2,
             (MethodInfo *)*in_stack_00000138);
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    pLVar19 = *(LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5 **)(unaff_x29 + -0x50);
    NullCheck(pLVar19);
    uVar1 = LabelTarget_get_Type_mADC0685E37D8FD2990BFA36A3679AB7C5659143E_inline
                      (pLVar19,(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    pPVar5 = (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *)
             Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                       (uVar1,*(undefined8 *)
                               Method_UnityEngine_Pool_PooledObject<List<HID_HIDElementDescriptor>>_System_IDisposable_Dispose__
                        ,0);
    *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0x98) = pPVar5;
    ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
              ((ArrayBuilder_1_t02DC1EECF7D4374AACA0F1C4D92B11DAAB01ED4E *)(unaff_x29 + -0x40),
               pPVar5,(MethodInfo *)*in_stack_00000130);
  }
  uVar1 = *in_stack_00000148;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000170);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  uVar1 = Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                    (uVar1,*(undefined8 *)
                            Method_System_Collections_Generic_List<CanvasGroup>_get_Item__,0);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar1;
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            ((ArrayBuilder_1_t02DC1EECF7D4374AACA0F1C4D92B11DAAB01ED4E *)(unaff_x29 + -0x40),
             *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0xa0),
             (MethodInfo *)*in_stack_00000130);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(*in_stack_00000148,0);
  uVar1 = Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                    (uVar1,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_char>__ctor__,0);
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            ((ArrayBuilder_1_t02DC1EECF7D4374AACA0F1C4D92B11DAAB01ED4E *)(unaff_x29 + -0x40),
             *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0xa8),
             (MethodInfo *)*in_stack_00000130);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x60);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_CreateMatchmaker_m2E66839B98406032C89FA148D00484F1F7226298
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uStack00000000000000b4 = 0x2c;
  uVar1 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::
          Invoke(0x2c,pIVar12,pTVar14);
  uVar1 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x70),0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar13,uVar1,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            ((ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *)(unaff_x29 + -0x30),pEVar2,
             (MethodInfo *)*in_stack_00000138);
  uVar1 = CachedReflectionInfo_get_CallSiteOps_GetMatch_m29FFB0B5A93020F852C7E180228747819E60DB07(0)
  ;
  uVar1 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x60),0);
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar1;
  uVar1 = CachedReflectionInfo_get_CallSiteOps_ClearMatch_mAB56728200D511F6FC150F74663E67D234EE3ED5
                    (0);
  uVar1 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x60),0);
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x29 + -0x80);
  pEVar21 = *(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F **)(unaff_x29 + -0x48);
  pTVar3 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000160);
  TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD
            (pTVar3,pEVar21,(MethodInfo *)*in_stack_00000158);
  uVar1 = Expression_Invoke_m1EFAE86A8EF6D2101ED9E6C1DFE5D1D1A7F5BC8D(uVar1,pTVar3,0);
  *(undefined8 *)(unaff_x29 + -200) = uVar1;
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_UpdateRules_mB3CF4E5585CF9638CBA3B6C3F330963CB30030CF
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uVar1 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::
          Invoke((ushort)uStack00000000000000b4,pIVar12,pTVar14);
  uVar1 = Expression_Call_mAAB021C767CBA4310715AAFC48B30C98720FFBEF
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x70),*(undefined8 *)(unaff_x29 + -0xa8),0);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0x98);
    uVar13 = *(undefined8 *)(unaff_x29 + -200);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    uVar1 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar1,uVar13);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar16 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar13 = Expression_Return_mB6AFFF7202147FE939AEB5E16BDD4F45F737E201
                       (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x98),0);
    uVar13 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar16,uVar13,0);
    uVar13 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar15,uVar13,0);
    uVar1 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar1,uVar13,0);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x29 + -200);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar16 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x50);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    uVar1 = Expression_Return_m1FDAF65D8A7F2C72229E7EF98A654BED35ACE88F(uVar1);
    uVar1 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar16,uVar1,0);
    uVar1 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar15,uVar1,0);
    uVar1 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar13,uVar1,0);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  }
  uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x78);
  this = (Il2CppArray *)
         SZArrayNew(*(Il2CppClass **)
                     Method_UnityEngine_Pool_PooledObject<HashSet<IUIInteractor>>_System_IDisposable_Dispose__
                    ,1);
  pEVar2 = *(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 **)(unaff_x29 + -0xa8);
  NullCheck(this);
  ArrayElementTypeCheck(this,pEVar2);
  ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F::SetAt
            ((ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)this,0,pEVar2);
  pTVar3 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000160);
  TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD
            (pTVar3,(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)this,
             (MethodInfo *)*in_stack_00000158);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  uVar1 = Expression_ArrayAccess_m8792ED3383F64B3E9EFAB2C575A7440B5A15DD45(uVar1,pTVar3);
  uVar1 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar13,uVar1,0);
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar1;
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xd8);
  uVar1 = Expression_Label_m7AE42EA7D01132BF7CB1932468FBCCE7EEF9188E(0);
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar1;
  uVar1 = Expression_Equal_m34192402FDC7FF9F1F71FF8FCCE09D1D19A73E1B
                    (*(undefined8 *)(unaff_x29 + -0xa8),*(undefined8 *)(unaff_x29 + -0xa0),0);
  uVar13 = Expression_Break_m18FCD1B67B842C75F40E579722180C7FADA4AEF8
                     (*(undefined8 *)(unaff_x29 + -0xe8),0);
  uVar1 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar1,uVar13,0);
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar1;
  uVar1 = Expression_PreIncrementAssign_mDA297B9AEB69CCFA2497F5AC94599D80A3C611A8
                    (*(undefined8 *)(unaff_x29 + -0xa8),0);
  *(undefined8 *)(unaff_x29 + -0xf8) = uVar1;
  uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_GetRules_m9389A853C0EE517251316A958D76F647743CFF2E
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uStack0000000000000084 = 0x2c;
  uVar1 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::
          Invoke(0x2c,pIVar12,pTVar14);
  uVar1 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x70),0);
  uVar1 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar13,uVar1,0);
  pIVar12 = *(Il2CppObject **)(unaff_x29 + -0x78);
  NullCheck(pIVar12);
  uVar13 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar12);
  uVar13 = Expression_Constant_m71DA28DF529697FFF5205A455CACAD09A4FD30CE(0,uVar13);
  uVar1 = Expression_NotEqual_m0EB019FAA689B1BE8CC276C628A02C7ACEEF66FF(uVar1,uVar13,0);
  uVar15 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar13 = Expression_ArrayLength_m38B1E25F797E3CDDF9B522B4B9DC68122FB0C937
                     (*(undefined8 *)(unaff_x29 + -0x78),0);
  uVar13 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar15,uVar13,0);
  uVar16 = *(undefined8 *)(unaff_x29 + -0xa8);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000178);
  uVar15 = Utils_Constant_m08EE1AAF5349EDDDBCB8622FEE8C67FF45294E6D(0,0);
  uVar15 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar16,uVar15,0);
  uVar23 = *(undefined8 *)(unaff_x29 + -0xf0);
  uVar24 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar25 = *(undefined8 *)(unaff_x29 + -0x80);
  uVar16 = *in_stack_00000150;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000170);
  uVar16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar16,0);
  uVar16 = Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5(uVar25,uVar16,0);
  uVar22 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(*in_stack_00000150,0);
  uVar25 = Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5(uVar22,uVar25,0);
  uVar16 = Expression_NotEqual_m0EB019FAA689B1BE8CC276C628A02C7ACEEF66FF(uVar16,uVar25,0);
  uVar25 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE
                     (*(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0x80),0);
  uVar25 = Expression_Block_m9F494D83E4AB0C2E2DD4F05BF8345A84736049E3
                     (uVar25,*(undefined8 *)(unaff_x29 + -0xb0),*(undefined8 *)(unaff_x29 + -0xc0),0
                     );
  uVar16 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar16,uVar25,0);
  uVar16 = Expression_Block_m45693439C466790E6DC6FE9BA949F009EE2A8CB6
                     (uVar23,uVar24,uVar16,*(undefined8 *)(unaff_x29 + -0xf8),0);
  uVar16 = Expression_Loop_mB7082405A24855BEEFADA0F9C27C94154F8CC1EA
                     (uVar16,*(undefined8 *)(unaff_x29 + -0xe8),0);
  uVar13 = Expression_Block_m9F494D83E4AB0C2E2DD4F05BF8345A84736049E3(uVar13,uVar15,uVar16,0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar1,uVar13,0);
  pAVar4 = (ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *)(unaff_x29 + -0x30);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar1 = il2cpp_rgctx_type(*(Il2CppRGCTXData **)
                             (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x14);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1,0);
  uVar1 = Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                    (uVar1,*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<DropEventArgs>_System_IDisposable_Dispose__
                     ,0);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar1;
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            ((ArrayBuilder_1_t02DC1EECF7D4374AACA0F1C4D92B11DAAB01ED4E *)(unaff_x29 + -0x40),
             *(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 **)(unaff_x29 + -0x100)
             ,(MethodInfo *)*in_stack_00000130);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x100);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_GetRuleCache_m5DE82908FA8030053B71B96852EE0DAB61830C7C
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uVar1 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::
          Invoke((ushort)uStack0000000000000084,pIVar12,pTVar14);
  uVar1 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x70),0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar13,uVar1,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_GetCachedRules_m701869EF897B4CFD6FE7AEF161DED8B8A66FAC61
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uVar1 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::
          Invoke((ushort)uStack0000000000000084,pIVar12,pTVar14);
  uVar1 = Expression_Call_mA9F5232733685D98799ED2992DDC0F1EA57EBD53
                    (uVar1,*(undefined8 *)(unaff_x29 + -0x100),0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar13,uVar1,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  if ((*(byte *)(unaff_x29 + -0x19) & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0x98);
    uVar13 = *(undefined8 *)(unaff_x29 + -200);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    uVar1 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar1,uVar13);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar13 = Expression_Return_mB6AFFF7202147FE939AEB5E16BDD4F45F737E201
                       (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x98),0);
    uVar13 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar15,uVar13,0);
    uVar1 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar1,uVar13,0);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x29 + -200);
    uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x50);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    uVar1 = Expression_Return_m1FDAF65D8A7F2C72229E7EF98A654BED35ACE88F(uVar1);
    uVar1 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar15,uVar1,0);
    uVar1 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar13,uVar1,0);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  }
  uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar16 = *(undefined8 *)(unaff_x29 + -0xb8);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_AddRule_mC92ADF3399FACCAFF54F7779D7C14D529D7A915E()
  ;
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uStack0000000000000054 = 0x2c;
  uVar1 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>::
          Invoke(0x2c,pIVar12,pTVar14);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x70);
  uVar25 = *(undefined8 *)(unaff_x29 + -0x80);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  uVar1 = Expression_Call_mAAB021C767CBA4310715AAFC48B30C98720FFBEF(uVar1,uVar13,uVar25,0);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_MoveRule_m5E9CDB33C10A59C89262F93594D4A0F1EEB5C9A4
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uVar13 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>
           ::Invoke((ushort)uStack0000000000000054,pIVar12,pTVar14);
  uVar13 = Expression_Call_m125033A18DFD7793B305D151EE3826B172AA3E0A
                     (uVar13,*(undefined8 *)(unaff_x29 + -0x100),*(undefined8 *)(unaff_x29 + -0x80),
                      *(undefined8 *)(unaff_x29 + -0xa8),0);
  uVar1 = Expression_Block_m46DDCF34E2877C4DEF137330575296EBC2EA8D3D(uVar1,uVar13,0);
  uVar1 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar16,uVar1,0);
  uVar1 = Expression_TryFinally_m6A2648F6C3BD9BF88B879D9F69A2341AE6E8CD36(uVar15,uVar1,0);
  uVar13 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE
                     (*(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0xd8),0);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar13;
  uVar15 = *(undefined8 *)(unaff_x29 + -0xa8);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000178);
  uVar13 = Utils_Constant_m08EE1AAF5349EDDDBCB8622FEE8C67FF45294E6D(0,0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar15,uVar13,0);
  pAVar4 = (ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *)(unaff_x29 + -0x30);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar15 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar13 = Expression_ArrayLength_m38B1E25F797E3CDDF9B522B4B9DC68122FB0C937
                     (*(undefined8 *)(unaff_x29 + -0x78),0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar15,uVar13,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar1 = Expression_Block_m70B2B4E3C971109AA7088E98D722FC8D0D144A4A
                    (*(undefined8 *)(unaff_x29 + -0xf0),*(undefined8 *)(unaff_x29 + -0xe0),uVar1,
                     *(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -0xf8),0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Loop_mB7082405A24855BEEFADA0F9C27C94154F8CC1EA
                     (uVar1,*(undefined8 *)(unaff_x29 + -0xe8),0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x80);
  pIVar12 = *(Il2CppObject **)(unaff_x29 + -0x80);
  NullCheck(pIVar12);
  uVar1 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar12);
  uVar1 = Expression_Constant_m71DA28DF529697FFF5205A455CACAD09A4FD30CE(0,uVar1);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar13,uVar1,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar1 = *(undefined8 *)
           Method_UnityEngine_Pool_PooledObject<List<ValueTuple<int,_int>>>_System_IDisposable_Dispose__
  ;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000170);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1,0);
  pPVar5 = (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110 *)
           Expression_Variable_mE364CFE694FE6431D9FFACF6369626237972606B
                     (uVar1,*(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<FocusEnterEventArgs>_System_IDisposable_Dispose__
                      ,0);
  pPVar17 = *(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C **)
             (unaff_x29 + -0x68);
  iStack000000000000006c = 0x10;
  pIVar6 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x10);
  il2cpp_codegen_runtime_class_init_inline(pIVar6);
  pIVar6 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),
                             iStack000000000000006c);
  lVar7 = il2cpp_codegen_static_fields_for(pIVar6);
  pCVar18 = *(Converter_2_t67D5393CE8BC8B97622E117F523904B1AEDFBDEC **)(lVar7 + 0x10);
  if (pCVar18 == (Converter_2_t67D5393CE8BC8B97622E117F523904B1AEDFBDEC *)0x0) {
    pIVar6 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x10);
    il2cpp_codegen_runtime_class_init_inline(pIVar6);
    pIVar6 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x10);
    puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar6);
    pIVar12 = (Il2CppObject *)*puVar8;
    pCVar18 = (Converter_2_t67D5393CE8BC8B97622E117F523904B1AEDFBDEC *)
              il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<int>>_System_IDisposable_Dispose__
                        );
    lVar7 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                 (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x15);
    Converter_2__ctor_mCD1FC75FC07A303D386C249F9D752D4A3CA317AB
              (pCVar18,pIVar12,lVar7,(MethodInfo *)0x0);
    pIVar6 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x10);
    lVar7 = il2cpp_codegen_static_fields_for(pIVar6);
    *(Converter_2_t67D5393CE8BC8B97622E117F523904B1AEDFBDEC **)(lVar7 + 0x10) = pCVar18;
    pIVar6 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x10);
    lVar7 = il2cpp_codegen_static_fields_for(pIVar6);
    Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x10),pCVar18);
  }
  pEVar21 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F *)
            Array_ConvertAll_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_TisExpression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_mB36F2BA86DA5E7C222E41EEA1B70218C0683A325
                      (pPVar17,pCVar18,
                       *(MethodInfo **)
                        Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
  ArrayBuilder_1_UncheckedAdd_m9A6D403B63C921CBCC0A82F8A38C34F684DBFAB3
            ((ArrayBuilder_1_t02DC1EECF7D4374AACA0F1C4D92B11DAAB01ED4E *)(unaff_x29 + -0x40),pPVar5,
             (MethodInfo *)*in_stack_00000130);
  uVar1 = *in_stack_00000150;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000170);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(uVar1);
  pTVar3 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000160);
  TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD
            (pTVar3,pEVar21,(MethodInfo *)*in_stack_00000158);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  uVar1 = Expression_NewArrayInit_m2DBCFC451AA40AC8998C1085D5D003595DEE59D4(uVar1,pTVar3,0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(pPVar5,uVar1,0);
  pAVar4 = (ArrayBuilder_1_t2D559E2CE2B87C1C2C49A813031C64F0F66001EF *)(unaff_x29 + -0x30);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar1 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE
                    (*(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0x88),0);
  uVar16 = *(undefined8 *)(unaff_x29 + -0x90);
  uVar25 = *(undefined8 *)(unaff_x29 + -0x80);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_Bind_m2B591622CE215236A30879C5E2526E74EBE22C77(0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uStack0000000000000004 = 0x2c;
  uVar13 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>
           ::Invoke(0x2c,pIVar12,pTVar14);
  uVar15 = Expression_Property_m5D56C72467274FFBC501420474EB607A74B90AA2
                     (*(undefined8 *)(unaff_x29 + -0x70),
                      *(undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<DeactivateEventArgs>_System_IDisposable_Dispose__
                      ,0);
  uVar13 = Expression_Call_m125033A18DFD7793B305D151EE3826B172AA3E0A
                     (uVar13,uVar15,*(undefined8 *)(unaff_x29 + -0x70),pPVar5,0);
  uVar13 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar25,uVar13,0);
  uVar13 = Expression_Assign_m40E289CAB859CE4106031350821B9B1B8DA51DBE(uVar16,uVar13,0);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar13;
  uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar16 = *(undefined8 *)(unaff_x29 + -0xb8);
  pIVar12 = (Il2CppObject *)
            CachedReflectionInfo_get_CallSiteOps_AddRule_mC92ADF3399FACCAFF54F7779D7C14D529D7A915E
                      (0);
  pTVar14 = *(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB **)(unaff_x29 + -0x58);
  NullCheck(pIVar12);
  uVar13 = VirtualFuncInvoker1<MethodInfo_t*,TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*>
           ::Invoke((ushort)uStack0000000000000004,pIVar12,pTVar14);
  uVar13 = Expression_Call_mAAB021C767CBA4310715AAFC48B30C98720FFBEF
                     (uVar13,*(undefined8 *)(unaff_x29 + -0x70),*(undefined8 *)(unaff_x29 + -0x80),0
                     );
  uVar13 = Expression_IfThen_mE022C3B373A1761B2E664378D2AEAF59E46C08A4(uVar16,uVar13,0);
  uVar13 = Expression_TryFinally_m6A2648F6C3BD9BF88B879D9F69A2341AE6E8CD36(uVar15,uVar13,0);
  uVar1 = Expression_Block_m45693439C466790E6DC6FE9BA949F009EE2A8CB6
                    (uVar1,*(undefined8 *)(unaff_x29 + -0xe0),uVar13,
                     *(undefined8 *)(unaff_x29 + -0xc0),0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Loop_mB7082405A24855BEEFADA0F9C27C94154F8CC1EA(uVar1,0,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  pLVar19 = *(LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5 **)(unaff_x29 + -0x50);
  NullCheck(pLVar19);
  uVar1 = LabelTarget_get_Type_mADC0685E37D8FD2990BFA36A3679AB7C5659143E_inline
                    (pLVar19,(MethodInfo *)0x0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Default_m2D0EE74BD93E1D7DAB169DA8F013DC8B35FBB42D(uVar1,0);
  ArrayBuilder_1_UncheckedAdd_mE720DB0298A704602524F9866DD35075138D215D
            (pAVar4,pEVar2,(MethodInfo *)*in_stack_00000138);
  uVar15 = *(undefined8 *)(unaff_x29 + -0x50);
  uVar1 = ArrayBuilderExtensions_ToReadOnly_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m333F9999B9497A147A9E7D22D00921981B0EED39
                    (*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38),
                     *(undefined8 *)
                      Method_Oculus_Interaction_PointerInteractor<RayInteractor,_RayInteractable>_InteractableSelected__
                    );
  uVar13 = ArrayBuilderExtensions_ToReadOnly_TisExpression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_m3CFB9669E1456299C8C0AF6BED7E8052D0DC8D6F
                     (*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                      *(undefined8 *)
                       Method_Oculus_Interaction_PointerInteractor<RayInteractor,_RayInteractable>__ctor__
                     );
  uVar1 = Expression_Block_mBBEF1F00572B18C5114360A5AD91850342A1B9C6(uVar1,uVar13,0);
  pEVar2 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785 *)
           Expression_Label_m3695CEC6E9B2F17C15EBB94164366DDBD7D8EA8C(uVar15,uVar1,0);
  pPVar17 = *(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C **)
             (unaff_x29 + -0x48);
  pTVar9 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__)
  ;
  TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C
            (pTVar9,pPVar17,
             *(MethodInfo **)
              Method_UnityEngine_Pool_PooledObject<List<Column>>_System_IDisposable_Dispose__);
  pSVar20 = *(String_t **)Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__;
  pMVar10 = (MethodInfo *)
            il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                 (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x16);
  pEVar11 = (Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7 *)
            Expression_Lambda_TisRuntimeObject_m208FF8532548F744FDC7715D12012D92B4B9CDC5
                      (pEVar2,pSVar20,true,(Il2CppObject *)pTVar9,pMVar10);
  NullCheck(pEVar11);
  pMVar10 = (MethodInfo *)
            il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                 (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0),0x18);
  uVar1 = Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC(pEVar11,pMVar10);
  return uVar1;
}


