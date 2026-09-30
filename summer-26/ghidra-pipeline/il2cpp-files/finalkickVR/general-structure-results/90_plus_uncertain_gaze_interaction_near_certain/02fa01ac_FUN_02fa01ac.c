/*
FUNCTION_NAME: FUN_02fa01ac
ENTRY_POINT: 02fa01ac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 167
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_11
*/


undefined8 FUN_02fa01ac(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *pIVar7;
  undefined8 uVar8;
  MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *pMVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  long unaff_x29;
  undefined4 uStack000000000000002c;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 uStack00000000000001a4;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001c0;
  byte bStack00000000000001cf;
  Il2CppObject *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  Il2CppObject *in_stack_000001e0;
  void *in_stack_000001e8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  
  if (*(int *)(unaff_x29 + -0x74) == 0x17) {
    uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                           *(Il2CppClass **)
                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          );
    *(undefined8 *)(unaff_x29 + -0x40) = uVar4;
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x58),0x18);
    pMVar9 = *(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)(unaff_x29 + -0x40);
    NullCheck(pMVar9);
    lVar5 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                      (pMVar9,(MethodInfo *)0x0);
    if (lVar5 != 0) {
      pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x18);
      pMVar9 = *(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)(unaff_x29 + -0x40);
      NullCheck(pMVar9);
      pIVar6 = (Il2CppObject *)
               MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                         (pMVar9,(MethodInfo *)0x0);
      NullCheck(pIVar6);
      uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
      uVar4 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992
                        (uVar4,*(undefined8 *)Method_System_Linq_Enumerable_Cast<DataTable>__,0);
      pvVar10 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
      NullCheck(pvVar10);
      uVar3 = InstructionList_get_Count_m82BCA995894F6125062029B5321772827AC6FC17(pvVar10,0);
      NullCheck(pvVar11);
      LocalVariables_DefineLocal_m1EDC3C88A85169E292D99317DB9A4D2F2BC8E9E2(pvVar11,uVar4,uVar3,0);
      in_stack_000000b0[0x31] = in_stack_000000b0[0x2f];
      in_stack_000000b0[0x30] = in_stack_000000b0[0x2e];
      in_stack_000000b0[0x2d] = in_stack_000000b0[0x31];
      in_stack_000000b0[0x2c] = in_stack_000000b0[0x30];
      Nullable_1__ctor_m3B86BA74755F8269102AF08E6024055932B4B2B4
                ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x58),
                 in_stack_000002e0,in_stack_000002e8,*in_stack_000000c8);
      pMVar9 = *(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)(unaff_x29 + -0x40);
      NullCheck(pMVar9);
      uVar4 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                        (pMVar9,(MethodInfo *)0x0);
      LightCompiler_EmitThisForMethodCall_mDA4DDCB86960649FE2C4285B0A6A1005640E43D4
                (*(undefined8 *)(unaff_x29 + -0x10),uVar4,0);
      pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
      NullCheck(pvVar11);
      InstructionList_EmitDup_mF35BA4C8C5D78390C9ABA0EA1AD8B9B39CCDA489(pvVar11,0);
      pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
      Nullable_1_GetValueOrDefault_mFC1FB968FA8CE501A6D56C657FEDAE97DA941D1F_inline
                ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x58),
                 (MethodInfo *)*in_stack_000000c0);
      in_stack_000000b0[0x27] = in_stack_000000b0[0x25];
      in_stack_000000b0[0x26] = in_stack_000000b0[0x24];
      in_stack_000000b0[0xab] = in_stack_000000b0[0x27];
      in_stack_000000b0[0xaa] = in_stack_000000b0[0x26];
      uVar3 = LocalDefinition_get_Index_m03B6B7F6D784E4B863B2CD6B4357502C31995FCF_inline
                        ((LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 *)
                         (unaff_x29 + -0xb0),(MethodInfo *)0x0);
      NullCheck(pvVar11);
      InstructionList_EmitStoreLocal_m2399D344D70C587CF7547AFB65809354F1CDA776(pvVar11,uVar3,0);
    }
    pvVar11 = *(void **)(unaff_x29 + -0x40);
    NullCheck(pvVar11);
    pIVar6 = (Il2CppObject *)
             MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pvVar11);
    uVar4 = IsInstClass(pIVar6,*(Il2CppClass **)
                                Method_System_Nullable<PrimitiveValue>_get_HasValue__);
    *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
    bVar1 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B
                      (*(undefined8 *)(unaff_x29 + -0x60),0);
    if ((bVar1 & 1) == 0) {
      pvVar11 = *(void **)(unaff_x29 + -0x40);
      NullCheck(pvVar11);
      pIVar6 = (Il2CppObject *)
               MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pvVar11);
      uVar4 = CastclassClass(pIVar6,*(Il2CppClass **)Method_System_Nullable<RaycastHit>_get_Value__)
      ;
      *(undefined8 *)(unaff_x29 + -0x68) = uVar4;
      in_stack_000001e8 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
      in_stack_000001e0 = *(Il2CppObject **)(unaff_x29 + -0x68);
      NullCheck(in_stack_000001e0);
      uStack000000000000002c = 1;
      in_stack_000001d8 =
           VirtualFuncInvoker1<MethodInfo_t*,bool>::Invoke(0x18,in_stack_000001e0,true);
      NullCheck(in_stack_000001e8);
      InstructionList_EmitCall_mB2E0E715DD35CC0E97C11DBB070BBEB80FF7996B
                (in_stack_000001e8,in_stack_000001d8,0);
      in_stack_000001d0 = *(Il2CppObject **)(unaff_x29 + -0x68);
      NullCheck(in_stack_000001d0);
      bStack00000000000001cf = VirtualFuncInvoker0<bool>::Invoke(0x15,in_stack_000001d0);
      bStack00000000000001cf = bStack00000000000001cf & (byte)uStack000000000000002c;
      if ((bStack00000000000001cf & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -8) = 0;
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
        in_stack_000000b0[7] = *(undefined8 *)(unaff_x29 + -0x50);
        in_stack_000000b0[6] = uVar4;
        in_stack_000001c0 = *(undefined8 *)(unaff_x29 + -0x48);
        in_stack_000001a8 = *(undefined8 *)(unaff_x29 + -0x68);
        uStack00000000000001a4 = *(undefined4 *)(unaff_x29 + -0x1c);
        in_stack_00000198 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3520);
        in_stack_000000b0[1] = in_stack_000000b0[7];
        *in_stack_000000b0 = in_stack_000000b0[6];
        in_stack_00000190 = in_stack_000001c0;
        PropertyByRefUpdater__ctor_m9FED566D3D6D8B5E12248CA4B4D00DC83BE1D7F4
                  (in_stack_00000198,&stack0x00000180,in_stack_000001a8,uStack00000000000001a4,0);
        *(undefined8 *)(unaff_x29 + -8) = in_stack_00000198;
      }
    }
    else {
      pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x60);
      NullCheck(pvVar11);
      InstructionList_EmitLoadField_m900BAFD2555038F844A7B113F7BA7FC35B6C8EF3(pvVar11,uVar4);
      pvVar11 = *(void **)(unaff_x29 + -0x60);
      NullCheck(pvVar11);
      bVar1 = FieldInfo_get_IsLiteral_mBE7DDC6A709439F775873859C82BAAD1EEFF791A(pvVar11,0);
      if ((bVar1 & 1) == 0) {
        pvVar11 = *(void **)(unaff_x29 + -0x60);
        NullCheck(pvVar11);
        bVar1 = FieldInfo_get_IsInitOnly_m476BB9325A68BDD56B088D3E8407F75FA1388ED9(pvVar11,0);
        if ((bVar1 & 1) == 0) {
          uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
          in_stack_000000b0[0x17] = *(undefined8 *)(unaff_x29 + -0x50);
          in_stack_000000b0[0x16] = uVar4;
          uVar12 = *(undefined8 *)(unaff_x29 + -0x60);
          uVar3 = *(undefined4 *)(unaff_x29 + -0x1c);
          uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3516);
          in_stack_000000b0[0x11] = in_stack_000000b0[0x17];
          in_stack_000000b0[0x10] = in_stack_000000b0[0x16];
          FieldByRefUpdater__ctor_m0C187A56A9FFCF954A63A387D3C3C03D0AB5AF6F
                    (uVar4,&stack0x00000200,uVar12,uVar3,0);
          *(undefined8 *)(unaff_x29 + -8) = uVar4;
          goto LAB_02fa0fec;
        }
      }
      *(undefined8 *)(unaff_x29 + -8) = 0;
    }
  }
  else if (*(int *)(unaff_x29 + -0x74) == 0x26) {
    uVar12 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),(Il2CppClass *)*in_stack_000000d0);
    LightCompiler_LoadLocalNoValueTypeCopy_m21D1A360804D36AB34A391C6C7D711C708B69214(uVar12,uVar4);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x10);
    uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),(Il2CppClass *)*in_stack_000000d0);
    uVar4 = LightCompiler_ResolveLocal_mDFBCF12A32B5AD59EA90EF1E05958797F0B96FBB(uVar12,uVar4,0);
    uVar3 = *(undefined4 *)(unaff_x29 + -0x1c);
    uVar12 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3519);
    ParameterByRefUpdater__ctor_mB7175A637B3D822FF7936E57B762EC64A29D740D(uVar12,uVar4,uVar3,0);
    *(undefined8 *)(unaff_x29 + -8) = uVar12;
  }
  else if (*(int *)(unaff_x29 + -0x74) == 0x37) {
    uVar4 = CastclassSealed(*(Il2CppObject **)(unaff_x29 + -0x18),
                            *(Il2CppClass **)StringLiteral_2601);
    *(undefined8 *)(unaff_x29 + -0x38) = uVar4;
    pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
    NullCheck(pIVar7);
    uVar4 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                      (pIVar7,(MethodInfo *)0x0);
    bVar1 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(uVar4,0);
    if ((bVar1 & 1) == 0) {
      pvVar11 = *(void **)(unaff_x29 + -0x38);
      NullCheck(pvVar11);
      iVar2 = IndexExpression_get_ArgumentCount_mBDED53F0D933829DC3C62DDCC7AB11B5BC479639(pvVar11,0)
      ;
      if (iVar2 == 1) {
        pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
        NullCheck(pIVar7);
        uVar4 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                          (pIVar7,(MethodInfo *)0x0);
        pvVar11 = *(void **)(unaff_x29 + -0x38);
        NullCheck(pvVar11);
        uVar12 = IndexExpression_GetArgument_m8C766733ECF016AFD4003DA1ABF0D862CB44216C(pvVar11,0,0);
        uVar4 = LightCompiler_CompileArrayIndexAddress_m7C7726823EE03DC4382A31435F817ABE7EDB42E8
                          (*(undefined8 *)(unaff_x29 + -0x10),uVar4,uVar12,
                           *(undefined4 *)(unaff_x29 + -0x1c),0);
        *(undefined8 *)(unaff_x29 + -8) = uVar4;
      }
      else {
        pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
        NullCheck(pIVar7);
        uVar4 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                          (pIVar7,(MethodInfo *)0x0);
        uVar4 = LightCompiler_CompileMultiDimArrayAccess_m2F440F2D354239D71E6B17867D53ABEB181E26DC
                          (*(undefined8 *)(unaff_x29 + -0x10),uVar4,
                           *(undefined8 *)(unaff_x29 + -0x38),*(undefined4 *)(unaff_x29 + -0x1c),0);
        *(undefined8 *)(unaff_x29 + -8) = uVar4;
      }
    }
    else {
      il2cpp_codegen_initobj((void *)(unaff_x29 + -0x90),0x18);
      pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
      NullCheck(pIVar7);
      lVar5 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                        (pIVar7,(MethodInfo *)0x0);
      if (lVar5 != 0) {
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x18);
        pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
        NullCheck(pIVar7);
        pIVar6 = (Il2CppObject *)
                 IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                           (pIVar7,(MethodInfo *)0x0);
        NullCheck(pIVar6);
        uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
        uVar4 = Expression_Parameter_m35FB01EA59D3BEE081F9B1CA2FDB525FA9924507(uVar4,0);
        pvVar10 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
        NullCheck(pvVar10);
        uVar3 = InstructionList_get_Count_m82BCA995894F6125062029B5321772827AC6FC17(pvVar10,0);
        NullCheck(pvVar11);
        LocalVariables_DefineLocal_m1EDC3C88A85169E292D99317DB9A4D2F2BC8E9E2(pvVar11,uVar4,uVar3,0);
        in_stack_000000b0[0x83] = in_stack_000000b0[0x81];
        in_stack_000000b0[0x82] = in_stack_000000b0[0x80];
        in_stack_000000b0[0x7f] = in_stack_000000b0[0x83];
        in_stack_000000b0[0x7e] = in_stack_000000b0[0x82];
        Nullable_1__ctor_m3B86BA74755F8269102AF08E6024055932B4B2B4
                  ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x90),
                   in_stack_00000570,in_stack_00000578,*in_stack_000000c8);
        pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
        NullCheck(pIVar7);
        uVar4 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                          (pIVar7,(MethodInfo *)0x0);
        LightCompiler_EmitThisForMethodCall_mDA4DDCB86960649FE2C4285B0A6A1005640E43D4
                  (*(undefined8 *)(unaff_x29 + -0x10),uVar4,0);
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
        NullCheck(pvVar11);
        InstructionList_EmitDup_mF35BA4C8C5D78390C9ABA0EA1AD8B9B39CCDA489(pvVar11,0);
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
        Nullable_1_GetValueOrDefault_mFC1FB968FA8CE501A6D56C657FEDAE97DA941D1F_inline
                  ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x90),
                   (MethodInfo *)*in_stack_000000c0);
        in_stack_000000b0[0x79] = in_stack_000000b0[0x77];
        in_stack_000000b0[0x78] = in_stack_000000b0[0x76];
        in_stack_000000b0[0xab] = in_stack_000000b0[0x79];
        in_stack_000000b0[0xaa] = in_stack_000000b0[0x78];
        uVar3 = LocalDefinition_get_Index_m03B6B7F6D784E4B863B2CD6B4357502C31995FCF_inline
                          ((LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 *)
                           (unaff_x29 + -0xb0),(MethodInfo *)0x0);
        NullCheck(pvVar11);
        InstructionList_EmitStoreLocal_m2399D344D70C587CF7547AFB65809354F1CDA776(pvVar11,uVar3,0);
      }
      pvVar11 = *(void **)(unaff_x29 + -0x38);
      NullCheck(pvVar11);
      uVar3 = IndexExpression_get_ArgumentCount_mBDED53F0D933829DC3C62DDCC7AB11B5BC479639(pvVar11,0)
      ;
      *(undefined4 *)(unaff_x29 + -0x94) = uVar3;
      uVar4 = SZArrayNew(*(Il2CppClass **)StringLiteral_3505,*(uint *)(unaff_x29 + -0x94));
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar4;
      *(undefined4 *)(unaff_x29 + -0xb4) = 0;
      while (*(int *)(unaff_x29 + -0xb4) < *(int *)(unaff_x29 + -0x94)) {
        pvVar11 = *(void **)(unaff_x29 + -0x38);
        uVar3 = *(undefined4 *)(unaff_x29 + -0xb4);
        NullCheck(pvVar11);
        uVar4 = IndexExpression_GetArgument_m8C766733ECF016AFD4003DA1ABF0D862CB44216C(pvVar11,uVar3)
        ;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar4;
        LightCompiler_Compile_m58394224ACEAF231D16ACBDA075BEDBD1ACCE50E
                  (*(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -0xc0),0);
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x18);
        pIVar6 = *(Il2CppObject **)(unaff_x29 + -0xc0);
        NullCheck(pIVar6);
        uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
        uVar4 = Expression_Parameter_m35FB01EA59D3BEE081F9B1CA2FDB525FA9924507(uVar4,0);
        pvVar10 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
        NullCheck(pvVar10);
        uVar3 = InstructionList_get_Count_m82BCA995894F6125062029B5321772827AC6FC17(pvVar10,0);
        NullCheck(pvVar11);
        LocalVariables_DefineLocal_m1EDC3C88A85169E292D99317DB9A4D2F2BC8E9E2(pvVar11,uVar4,uVar3,0);
        in_stack_000000b0[0x67] = in_stack_000000b0[0x65];
        in_stack_000000b0[0x66] = in_stack_000000b0[100];
        in_stack_000000b0[0xa7] = in_stack_000000b0[0x67];
        in_stack_000000b0[0xa6] = in_stack_000000b0[0x66];
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
        NullCheck(pvVar11);
        InstructionList_EmitDup_mF35BA4C8C5D78390C9ABA0EA1AD8B9B39CCDA489(pvVar11,0);
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
        uVar3 = LocalDefinition_get_Index_m03B6B7F6D784E4B863B2CD6B4357502C31995FCF_inline
                          ((LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 *)
                           (unaff_x29 + -0xd0),(MethodInfo *)0x0);
        NullCheck(pvVar11);
        InstructionList_EmitStoreLocal_m2399D344D70C587CF7547AFB65809354F1CDA776(pvVar11,uVar3,0);
        pvVar11 = *(void **)(unaff_x29 + -0xa0);
        iVar2 = *(int *)(unaff_x29 + -0xb4);
        in_stack_000000b0[0x5d] = in_stack_000000b0[0xa7];
        in_stack_000000b0[0x5c] = in_stack_000000b0[0xa6];
        NullCheck(pvVar11);
        in_stack_000000b0[0x5b] = in_stack_000000b0[0x5d];
        in_stack_000000b0[0x5a] = in_stack_000000b0[0x5c];
        LocalDefinitionU5BU5D_tE2AEBDCD1C209B76F74C1A118B36CCD165B1563E::SetAt
                  (pvVar11,(long)iVar2,in_stack_00000450,in_stack_00000458);
        uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xb4),1);
        *(undefined4 *)(unaff_x29 + -0xb4) = uVar3;
      }
      LightCompiler_EmitIndexGet_mFA78DE362D73898CDF08138CCC16492857190142
                (*(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -0x38));
      in_stack_000000b0[0x55] = in_stack_000000b0[0xaf];
      in_stack_000000b0[0x54] = in_stack_000000b0[0xae];
      uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
      pIVar7 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
      NullCheck(pIVar7);
      pvVar11 = (void *)IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                                  (pIVar7,(MethodInfo *)0x0);
      NullCheck(pvVar11);
      uVar4 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(pvVar11,0);
      uVar3 = *(undefined4 *)(unaff_x29 + -0x1c);
      uVar12 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3517);
      in_stack_000000b0[0x4b] = in_stack_000000b0[0x55];
      in_stack_000000b0[0x4a] = in_stack_000000b0[0x54];
      IndexMethodByRefUpdater__ctor_mC44C5FB9EDF1BFAEF8C29E04DD6DBCB2C4326EA1
                (uVar12,&stack0x000003d0,uVar8,uVar4,uVar3,0);
      *(undefined8 *)(unaff_x29 + -8) = uVar12;
    }
  }
  else {
    LightCompiler_Compile_m58394224ACEAF231D16ACBDA075BEDBD1ACCE50E
              (*(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -0x18),0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
LAB_02fa0fec:
  return *(undefined8 *)(unaff_x29 + -8);
}


