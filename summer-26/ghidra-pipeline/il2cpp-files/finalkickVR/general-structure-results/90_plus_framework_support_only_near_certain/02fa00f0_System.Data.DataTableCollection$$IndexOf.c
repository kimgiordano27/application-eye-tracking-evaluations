/*
FUNCTION_NAME: System.Data.DataTableCollection$$IndexOf
ENTRY_POINT: 02fa00f0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_16;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_17
*/


undefined8 System_Data_DataTableCollection__IndexOf(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 *pBVar7;
  IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 *pIVar8;
  undefined8 uVar9;
  MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 *pMVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB *pMVar14;
  long unaff_x29;
  undefined4 uStack000000000000002c;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined4 uStack00000000000000ec;
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
  
  if (*(int *)(unaff_x29 + -0xd4) == -1) {
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_get_Count__
              );
    bVar1 = LightCompiler_ShouldWritebackNode_m84A3B4429F20E7B2DD5EDB4350E53A898E30717B
                      (*(undefined8 *)(unaff_x29 + -0xe0),0);
    *(byte *)(unaff_x29 + -0xe1) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0xe1) & 1) != 0) goto LAB_02fa0138;
  }
  else {
LAB_02fa0138:
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0xf0));
    uVar2 = VirtualFuncInvoker0<int>::Invoke(4,*(Il2CppObject **)(unaff_x29 + -0xf0));
    *(undefined4 *)(unaff_x29 + -0xf4) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0xf4);
    *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0x74);
    if (*(int *)(unaff_x29 + -0xf8) < 7) {
      *(undefined4 *)(unaff_x29 + -0xfc) = *(undefined4 *)(unaff_x29 + -0x74);
      if (*(int *)(unaff_x29 + -0xfc) == 5) {
        uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                               *(Il2CppClass **)StringLiteral_3507);
        *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
        pBVar7 = *(BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 **)(unaff_x29 + -0x30)
        ;
        NullCheck(pBVar7);
        uVar4 = BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline
                          (pBVar7,(MethodInfo *)0x0);
        pBVar7 = *(BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4 **)(unaff_x29 + -0x30)
        ;
        NullCheck(pBVar7);
        uVar13 = BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline
                           (pBVar7,(MethodInfo *)0x0);
        uVar4 = LightCompiler_CompileArrayIndexAddress_m7C7726823EE03DC4382A31435F817ABE7EDB42E8
                          (*(undefined8 *)(unaff_x29 + -0x10),uVar4,uVar13,
                           *(undefined4 *)(unaff_x29 + -0x1c),0);
        *(undefined8 *)(unaff_x29 + -8) = uVar4;
        goto LAB_02fa0fec;
      }
      *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x29 + -0x74);
      if (*(int *)(unaff_x29 + -0x100) == 6) {
        uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                               *(Il2CppClass **)StringLiteral_3518);
        *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
        pMVar14 = *(MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB **)
                   (unaff_x29 + -0x70);
        NullCheck(pMVar14);
        pvVar12 = (void *)MethodCallExpression_get_Method_m76D210171E9633BD4E62F23C9300CF86098E5615_inline
                                    (pMVar14,(MethodInfo *)0x0);
        NullCheck(pvVar12);
        bVar1 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(pvVar12,0);
        if ((bVar1 & 1) == 0) {
          pvVar12 = *(void **)(unaff_x29 + -0x70);
          NullCheck(pvVar12);
          pIVar6 = (Il2CppObject *)
                   MethodCallExpression_get_Object_m3E06943B2633E3F64AFF6E35D591DB017956299D
                             (pvVar12);
          NullCheck(pIVar6);
          pvVar12 = (void *)VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
          NullCheck(pvVar12);
          bVar1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(pvVar12,0);
          if ((bVar1 & 1) != 0) {
            pMVar14 = *(MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB **)
                       (unaff_x29 + -0x70);
            NullCheck(pMVar14);
            uVar4 = MethodCallExpression_get_Method_m76D210171E9633BD4E62F23C9300CF86098E5615_inline
                              (pMVar14,(MethodInfo *)0x0);
            pvVar12 = *(void **)(unaff_x29 + -0x70);
            NullCheck(pvVar12);
            pIVar6 = (Il2CppObject *)
                     MethodCallExpression_get_Object_m3E06943B2633E3F64AFF6E35D591DB017956299D
                               (pvVar12,0);
            NullCheck(pIVar6);
            pvVar12 = (void *)VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
            NullCheck(pvVar12);
            uVar13 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D
                               (pvVar12,*(undefined8 *)StringLiteral_3163,0x14,0);
            bVar1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(uVar4,uVar13,0)
            ;
            if ((bVar1 & 1) != 0) {
              pvVar12 = *(void **)(unaff_x29 + -0x70);
              NullCheck(pvVar12);
              uVar4 = MethodCallExpression_get_Object_m3E06943B2633E3F64AFF6E35D591DB017956299D
                                (pvVar12);
              uStack00000000000000ec = *(undefined4 *)(unaff_x29 + -0x1c);
              uVar4 = LightCompiler_CompileMultiDimArrayAccess_m2F440F2D354239D71E6B17867D53ABEB181E26DC
                                (*(undefined8 *)(unaff_x29 + -0x10),uVar4,
                                 *(undefined8 *)(unaff_x29 + -0x70),uStack00000000000000ec,0);
              *(undefined8 *)(unaff_x29 + -8) = uVar4;
              goto LAB_02fa0fec;
            }
          }
        }
      }
    }
    else {
      if (*(int *)(unaff_x29 + -0x74) == 0x17) {
        uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                               *(Il2CppClass **)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              );
        *(undefined8 *)(unaff_x29 + -0x40) = uVar4;
        il2cpp_codegen_initobj((void *)(unaff_x29 + -0x58),0x18);
        pMVar10 = *(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)
                   (unaff_x29 + -0x40);
        NullCheck(pMVar10);
        lVar5 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                          (pMVar10,(MethodInfo *)0x0);
        if (lVar5 != 0) {
          pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x18);
          pMVar10 = *(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)
                     (unaff_x29 + -0x40);
          NullCheck(pMVar10);
          pIVar6 = (Il2CppObject *)
                   MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                             (pMVar10,(MethodInfo *)0x0);
          NullCheck(pIVar6);
          uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
          uVar4 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992
                            (uVar4,*(undefined8 *)Method_System_Linq_Enumerable_Cast<DataTable>__,0)
          ;
          pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
          NullCheck(pvVar11);
          uVar2 = InstructionList_get_Count_m82BCA995894F6125062029B5321772827AC6FC17(pvVar11,0);
          NullCheck(pvVar12);
          LocalVariables_DefineLocal_m1EDC3C88A85169E292D99317DB9A4D2F2BC8E9E2
                    (pvVar12,uVar4,uVar2,0);
          in_stack_000000b0[0x31] = in_stack_000000b0[0x2f];
          in_stack_000000b0[0x30] = in_stack_000000b0[0x2e];
          in_stack_000000b0[0x2d] = in_stack_000000b0[0x31];
          in_stack_000000b0[0x2c] = in_stack_000000b0[0x30];
          Nullable_1__ctor_m3B86BA74755F8269102AF08E6024055932B4B2B4
                    ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x58),
                     in_stack_000002e0,in_stack_000002e8,*in_stack_000000c8);
          pMVar10 = *(MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89 **)
                     (unaff_x29 + -0x40);
          NullCheck(pMVar10);
          uVar4 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline
                            (pMVar10,(MethodInfo *)0x0);
          LightCompiler_EmitThisForMethodCall_mDA4DDCB86960649FE2C4285B0A6A1005640E43D4
                    (*(undefined8 *)(unaff_x29 + -0x10),uVar4,0);
          pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
          NullCheck(pvVar12);
          InstructionList_EmitDup_mF35BA4C8C5D78390C9ABA0EA1AD8B9B39CCDA489(pvVar12,0);
          pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
          Nullable_1_GetValueOrDefault_mFC1FB968FA8CE501A6D56C657FEDAE97DA941D1F_inline
                    ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x58),
                     (MethodInfo *)*in_stack_000000c0);
          in_stack_000000b0[0x27] = in_stack_000000b0[0x25];
          in_stack_000000b0[0x26] = in_stack_000000b0[0x24];
          in_stack_000000b0[0xab] = in_stack_000000b0[0x27];
          in_stack_000000b0[0xaa] = in_stack_000000b0[0x26];
          uVar2 = LocalDefinition_get_Index_m03B6B7F6D784E4B863B2CD6B4357502C31995FCF_inline
                            ((LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 *)
                             (unaff_x29 + -0xb0),(MethodInfo *)0x0);
          NullCheck(pvVar12);
          InstructionList_EmitStoreLocal_m2399D344D70C587CF7547AFB65809354F1CDA776(pvVar12,uVar2,0);
        }
        pvVar12 = *(void **)(unaff_x29 + -0x40);
        NullCheck(pvVar12);
        pIVar6 = (Il2CppObject *)
                 MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pvVar12);
        uVar4 = IsInstClass(pIVar6,*(Il2CppClass **)
                                    Method_System_Nullable<PrimitiveValue>_get_HasValue__);
        *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
        bVar1 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B
                          (*(undefined8 *)(unaff_x29 + -0x60),0);
        if ((bVar1 & 1) == 0) {
          pvVar12 = *(void **)(unaff_x29 + -0x40);
          NullCheck(pvVar12);
          pIVar6 = (Il2CppObject *)
                   MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(pvVar12);
          uVar4 = CastclassClass(pIVar6,*(Il2CppClass **)
                                         Method_System_Nullable<RaycastHit>_get_Value__);
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
                      (in_stack_00000198,&stack0x00000180,in_stack_000001a8,uStack00000000000001a4,0
                      );
            *(undefined8 *)(unaff_x29 + -8) = in_stack_00000198;
          }
        }
        else {
          pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
          uVar4 = *(undefined8 *)(unaff_x29 + -0x60);
          NullCheck(pvVar12);
          InstructionList_EmitLoadField_m900BAFD2555038F844A7B113F7BA7FC35B6C8EF3(pvVar12,uVar4);
          pvVar12 = *(void **)(unaff_x29 + -0x60);
          NullCheck(pvVar12);
          bVar1 = FieldInfo_get_IsLiteral_mBE7DDC6A709439F775873859C82BAAD1EEFF791A(pvVar12,0);
          if ((bVar1 & 1) == 0) {
            pvVar12 = *(void **)(unaff_x29 + -0x60);
            NullCheck(pvVar12);
            bVar1 = FieldInfo_get_IsInitOnly_m476BB9325A68BDD56B088D3E8407F75FA1388ED9(pvVar12,0);
            if ((bVar1 & 1) == 0) {
              uVar4 = *(undefined8 *)(unaff_x29 + -0x58);
              in_stack_000000b0[0x17] = *(undefined8 *)(unaff_x29 + -0x50);
              in_stack_000000b0[0x16] = uVar4;
              uVar13 = *(undefined8 *)(unaff_x29 + -0x60);
              uVar2 = *(undefined4 *)(unaff_x29 + -0x1c);
              uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3516);
              in_stack_000000b0[0x11] = in_stack_000000b0[0x17];
              in_stack_000000b0[0x10] = in_stack_000000b0[0x16];
              FieldByRefUpdater__ctor_m0C187A56A9FFCF954A63A387D3C3C03D0AB5AF6F
                        (uVar4,&stack0x00000200,uVar13,uVar2,0);
              *(undefined8 *)(unaff_x29 + -8) = uVar4;
              goto LAB_02fa0fec;
            }
          }
          *(undefined8 *)(unaff_x29 + -8) = 0;
        }
        goto LAB_02fa0fec;
      }
      if (*(int *)(unaff_x29 + -0x74) == 0x26) {
        uVar13 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                               (Il2CppClass *)*in_stack_000000d0);
        LightCompiler_LoadLocalNoValueTypeCopy_m21D1A360804D36AB34A391C6C7D711C708B69214
                  (uVar13,uVar4);
        uVar13 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar4 = CastclassClass(*(Il2CppObject **)(unaff_x29 + -0x18),
                               (Il2CppClass *)*in_stack_000000d0);
        uVar4 = LightCompiler_ResolveLocal_mDFBCF12A32B5AD59EA90EF1E05958797F0B96FBB(uVar13,uVar4,0)
        ;
        uVar2 = *(undefined4 *)(unaff_x29 + -0x1c);
        uVar13 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3519);
        ParameterByRefUpdater__ctor_mB7175A637B3D822FF7936E57B762EC64A29D740D(uVar13,uVar4,uVar2,0);
        *(undefined8 *)(unaff_x29 + -8) = uVar13;
        goto LAB_02fa0fec;
      }
      if (*(int *)(unaff_x29 + -0x74) == 0x37) {
        uVar4 = CastclassSealed(*(Il2CppObject **)(unaff_x29 + -0x18),
                                *(Il2CppClass **)StringLiteral_2601);
        *(undefined8 *)(unaff_x29 + -0x38) = uVar4;
        pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)(unaff_x29 + -0x38);
        NullCheck(pIVar8);
        uVar4 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                          (pIVar8,(MethodInfo *)0x0);
        bVar1 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(uVar4,0);
        if ((bVar1 & 1) == 0) {
          pvVar12 = *(void **)(unaff_x29 + -0x38);
          NullCheck(pvVar12);
          iVar3 = IndexExpression_get_ArgumentCount_mBDED53F0D933829DC3C62DDCC7AB11B5BC479639
                            (pvVar12,0);
          if (iVar3 == 1) {
            pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)
                      (unaff_x29 + -0x38);
            NullCheck(pIVar8);
            uVar4 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                              (pIVar8,(MethodInfo *)0x0);
            pvVar12 = *(void **)(unaff_x29 + -0x38);
            NullCheck(pvVar12);
            uVar13 = IndexExpression_GetArgument_m8C766733ECF016AFD4003DA1ABF0D862CB44216C
                               (pvVar12,0,0);
            uVar4 = LightCompiler_CompileArrayIndexAddress_m7C7726823EE03DC4382A31435F817ABE7EDB42E8
                              (*(undefined8 *)(unaff_x29 + -0x10),uVar4,uVar13,
                               *(undefined4 *)(unaff_x29 + -0x1c),0);
            *(undefined8 *)(unaff_x29 + -8) = uVar4;
          }
          else {
            pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)
                      (unaff_x29 + -0x38);
            NullCheck(pIVar8);
            uVar4 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                              (pIVar8,(MethodInfo *)0x0);
            uVar4 = LightCompiler_CompileMultiDimArrayAccess_m2F440F2D354239D71E6B17867D53ABEB181E26DC
                              (*(undefined8 *)(unaff_x29 + -0x10),uVar4,
                               *(undefined8 *)(unaff_x29 + -0x38),*(undefined4 *)(unaff_x29 + -0x1c)
                               ,0);
            *(undefined8 *)(unaff_x29 + -8) = uVar4;
          }
        }
        else {
          il2cpp_codegen_initobj((void *)(unaff_x29 + -0x90),0x18);
          pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)
                    (unaff_x29 + -0x38);
          NullCheck(pIVar8);
          lVar5 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                            (pIVar8,(MethodInfo *)0x0);
          if (lVar5 != 0) {
            pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x18);
            pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)
                      (unaff_x29 + -0x38);
            NullCheck(pIVar8);
            pIVar6 = (Il2CppObject *)
                     IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                               (pIVar8,(MethodInfo *)0x0);
            NullCheck(pIVar6);
            uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
            uVar4 = Expression_Parameter_m35FB01EA59D3BEE081F9B1CA2FDB525FA9924507(uVar4,0);
            pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
            NullCheck(pvVar11);
            uVar2 = InstructionList_get_Count_m82BCA995894F6125062029B5321772827AC6FC17(pvVar11,0);
            NullCheck(pvVar12);
            LocalVariables_DefineLocal_m1EDC3C88A85169E292D99317DB9A4D2F2BC8E9E2
                      (pvVar12,uVar4,uVar2,0);
            in_stack_000000b0[0x83] = in_stack_000000b0[0x81];
            in_stack_000000b0[0x82] = in_stack_000000b0[0x80];
            in_stack_000000b0[0x7f] = in_stack_000000b0[0x83];
            in_stack_000000b0[0x7e] = in_stack_000000b0[0x82];
            Nullable_1__ctor_m3B86BA74755F8269102AF08E6024055932B4B2B4
                      ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x90),
                       in_stack_00000570,in_stack_00000578,*in_stack_000000c8);
            pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)
                      (unaff_x29 + -0x38);
            NullCheck(pIVar8);
            uVar4 = IndexExpression_get_Object_mECDB8F40AE9B6E8037FBB8C55DCC0D90BFB981C3_inline
                              (pIVar8,(MethodInfo *)0x0);
            LightCompiler_EmitThisForMethodCall_mDA4DDCB86960649FE2C4285B0A6A1005640E43D4
                      (*(undefined8 *)(unaff_x29 + -0x10),uVar4,0);
            pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
            NullCheck(pvVar12);
            InstructionList_EmitDup_mF35BA4C8C5D78390C9ABA0EA1AD8B9B39CCDA489(pvVar12,0);
            pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
            Nullable_1_GetValueOrDefault_mFC1FB968FA8CE501A6D56C657FEDAE97DA941D1F_inline
                      ((Nullable_1_t8E699A6C21FC31A12A10C20E4F9A9DA84BABD9B2 *)(unaff_x29 + -0x90),
                       (MethodInfo *)*in_stack_000000c0);
            in_stack_000000b0[0x79] = in_stack_000000b0[0x77];
            in_stack_000000b0[0x78] = in_stack_000000b0[0x76];
            in_stack_000000b0[0xab] = in_stack_000000b0[0x79];
            in_stack_000000b0[0xaa] = in_stack_000000b0[0x78];
            uVar2 = LocalDefinition_get_Index_m03B6B7F6D784E4B863B2CD6B4357502C31995FCF_inline
                              ((LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 *)
                               (unaff_x29 + -0xb0),(MethodInfo *)0x0);
            NullCheck(pvVar12);
            InstructionList_EmitStoreLocal_m2399D344D70C587CF7547AFB65809354F1CDA776
                      (pvVar12,uVar2,0);
          }
          pvVar12 = *(void **)(unaff_x29 + -0x38);
          NullCheck(pvVar12);
          uVar2 = IndexExpression_get_ArgumentCount_mBDED53F0D933829DC3C62DDCC7AB11B5BC479639
                            (pvVar12,0);
          *(undefined4 *)(unaff_x29 + -0x94) = uVar2;
          uVar4 = SZArrayNew(*(Il2CppClass **)StringLiteral_3505,*(uint *)(unaff_x29 + -0x94));
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar4;
          *(undefined4 *)(unaff_x29 + -0xb4) = 0;
          while (*(int *)(unaff_x29 + -0xb4) < *(int *)(unaff_x29 + -0x94)) {
            pvVar12 = *(void **)(unaff_x29 + -0x38);
            uVar2 = *(undefined4 *)(unaff_x29 + -0xb4);
            NullCheck(pvVar12);
            uVar4 = IndexExpression_GetArgument_m8C766733ECF016AFD4003DA1ABF0D862CB44216C
                              (pvVar12,uVar2);
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar4;
            LightCompiler_Compile_m58394224ACEAF231D16ACBDA075BEDBD1ACCE50E
                      (*(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -0xc0),0);
            pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x18);
            pIVar6 = *(Il2CppObject **)(unaff_x29 + -0xc0);
            NullCheck(pIVar6);
            uVar4 = VirtualFuncInvoker0<Type_t*>::Invoke(5,pIVar6);
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
            uVar4 = Expression_Parameter_m35FB01EA59D3BEE081F9B1CA2FDB525FA9924507(uVar4,0);
            pvVar11 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
            NullCheck(pvVar11);
            uVar2 = InstructionList_get_Count_m82BCA995894F6125062029B5321772827AC6FC17(pvVar11,0);
            NullCheck(pvVar12);
            LocalVariables_DefineLocal_m1EDC3C88A85169E292D99317DB9A4D2F2BC8E9E2
                      (pvVar12,uVar4,uVar2,0);
            in_stack_000000b0[0x67] = in_stack_000000b0[0x65];
            in_stack_000000b0[0x66] = in_stack_000000b0[100];
            in_stack_000000b0[0xa7] = in_stack_000000b0[0x67];
            in_stack_000000b0[0xa6] = in_stack_000000b0[0x66];
            pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
            NullCheck(pvVar12);
            InstructionList_EmitDup_mF35BA4C8C5D78390C9ABA0EA1AD8B9B39CCDA489(pvVar12,0);
            pvVar12 = *(void **)(*(long *)(unaff_x29 + -0x10) + 0x10);
            uVar2 = LocalDefinition_get_Index_m03B6B7F6D784E4B863B2CD6B4357502C31995FCF_inline
                              ((LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02 *)
                               (unaff_x29 + -0xd0),(MethodInfo *)0x0);
            NullCheck(pvVar12);
            InstructionList_EmitStoreLocal_m2399D344D70C587CF7547AFB65809354F1CDA776
                      (pvVar12,uVar2,0);
            pvVar12 = *(void **)(unaff_x29 + -0xa0);
            iVar3 = *(int *)(unaff_x29 + -0xb4);
            in_stack_000000b0[0x5d] = in_stack_000000b0[0xa7];
            in_stack_000000b0[0x5c] = in_stack_000000b0[0xa6];
            NullCheck(pvVar12);
            in_stack_000000b0[0x5b] = in_stack_000000b0[0x5d];
            in_stack_000000b0[0x5a] = in_stack_000000b0[0x5c];
            LocalDefinitionU5BU5D_tE2AEBDCD1C209B76F74C1A118B36CCD165B1563E::SetAt
                      (pvVar12,(long)iVar3,in_stack_00000450,in_stack_00000458);
            uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xb4),1);
            *(undefined4 *)(unaff_x29 + -0xb4) = uVar2;
          }
          LightCompiler_EmitIndexGet_mFA78DE362D73898CDF08138CCC16492857190142
                    (*(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -0x38));
          in_stack_000000b0[0x55] = in_stack_000000b0[0xaf];
          in_stack_000000b0[0x54] = in_stack_000000b0[0xae];
          uVar9 = *(undefined8 *)(unaff_x29 + -0xa0);
          pIVar8 = *(IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347 **)
                    (unaff_x29 + -0x38);
          NullCheck(pIVar8);
          pvVar12 = (void *)IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline
                                      (pIVar8,(MethodInfo *)0x0);
          NullCheck(pvVar12);
          uVar4 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(pvVar12,0);
          uVar2 = *(undefined4 *)(unaff_x29 + -0x1c);
          uVar13 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_3517);
          in_stack_000000b0[0x4b] = in_stack_000000b0[0x55];
          in_stack_000000b0[0x4a] = in_stack_000000b0[0x54];
          IndexMethodByRefUpdater__ctor_mC44C5FB9EDF1BFAEF8C29E04DD6DBCB2C4326EA1
                    (uVar13,&stack0x000003d0,uVar9,uVar4,uVar2,0);
          *(undefined8 *)(unaff_x29 + -8) = uVar13;
        }
        goto LAB_02fa0fec;
      }
    }
  }
  LightCompiler_Compile_m58394224ACEAF231D16ACBDA075BEDBD1ACCE50E
            (*(undefined8 *)(unaff_x29 + -0x10),*(undefined8 *)(unaff_x29 + -0x18),0);
  *(undefined8 *)(unaff_x29 + -8) = 0;
LAB_02fa0fec:
  return *(undefined8 *)(unaff_x29 + -8);
}


