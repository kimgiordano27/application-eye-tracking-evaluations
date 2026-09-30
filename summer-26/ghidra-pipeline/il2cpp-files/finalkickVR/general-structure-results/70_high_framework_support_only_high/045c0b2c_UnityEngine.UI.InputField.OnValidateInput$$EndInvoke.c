/*
FUNCTION_NAME: UnityEngine.UI.InputField.OnValidateInput$$EndInvoke
ENTRY_POINT: 045c0b2c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_UI_InputField_OnValidateInput__EndInvoke(undefined1 param_1 [16],undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  void **ppvVar4;
  void *pvVar5;
  long lVar6;
  long unaff_x29;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uStack000000000000007c;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  byte bStack000000000000013f;
  undefined4 uStack0000000000000174;
  undefined4 uStack000000000000018c;
  undefined4 uStack000000000000019c;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001ec;
  
  *(undefined1 *)(unaff_x29 + -0xb9) = 0;
  *(undefined1 *)(unaff_x29 + -0xba) = 0;
  *(undefined1 *)(unaff_x29 + -0xbb) = 0;
  *(undefined1 *)(unaff_x29 + -0xbc) = 0;
  *(undefined1 *)(unaff_x29 + -0xbd) = 0;
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x10);
  uVar1 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -200),
                      *(Il2CppClass **)
                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x28);
  *(bool *)(unaff_x29 + -0x79) = *(long *)(unaff_x29 + -0xd0) == 0;
  *(byte *)(unaff_x29 + -0xd1) = *(byte *)(unaff_x29 + -0x79) & 1;
  if ((*(byte *)(unaff_x29 + -0xd1) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0xe0);
  }
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10);
  NullCheck(*(void **)(unaff_x29 + -0xe8));
  VisualElement_get_worldBoundingBox_m086C681F01ED4E997C717364031BB80E3EDA5CAA
            (*(undefined8 *)(unaff_x29 + -0xe8));
  in_stack_00000088[0x43] = in_stack_00000088[0x41];
  in_stack_00000088[0x42] = in_stack_00000088[0x40];
  in_stack_00000088[0x5b] = in_stack_00000088[0x43];
  in_stack_00000088[0x5a] = in_stack_00000088[0x42];
  uVar7 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x40),
                     (MethodInfo *)0x0);
  uVar12 = param_2;
  uVar8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline
                    (uVar7,param_2,uVar8,uVar12,0);
  uVar12 = param_2;
  uVar9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x40),
                     (MethodInfo *)0x0);
  uVar7 = uVar12;
  uVar10 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uStack000000000000007c = 0x40000000;
  uVar10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(uVar10,0);
  Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(uVar9,uVar12,uVar10,uVar7,0);
  Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675_inline(uVar8,unaff_x29 + -0x50,0);
  pvVar5 = *(void **)(unaff_x29 + -0x28);
  NullCheck(pvVar5);
  VisualElement_get_worldBound_m2E4AF689F0B4AB06E1316348A1E10D4DB2412AC3(pvVar5,0);
  in_stack_00000088[0x29] = in_stack_00000088[0x27];
  in_stack_00000088[0x28] = in_stack_00000088[0x26];
  in_stack_00000088[0x57] = in_stack_00000088[0x29];
  in_stack_00000088[0x56] = in_stack_00000088[0x28];
  uVar7 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x60),
                     (MethodInfo *)0x0);
  uVar12 = param_2;
  uVar8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline
                    (uVar7,param_2,uVar8,uVar12,0);
  uVar12 = param_2;
  uVar9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x60),
                     (MethodInfo *)0x0);
  uVar7 = uVar12;
  uVar10 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
  uVar10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline
                     (uVar10,uVar7,uStack000000000000007c,0);
  uVar7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline
                    (uVar9,uVar12,uVar10,uVar7,0);
  Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675_inline
            (uVar8,param_2,uVar7,uVar12,unaff_x29 + -0x70,0);
  lVar6 = *(long *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
  *(bool *)(unaff_x29 + -0x7a) = lVar6 == *(long *)(lVar2 + 0x10);
  if ((*(byte *)(unaff_x29 + -0x7a) & 1) == 0) {
    lVar6 = *(long *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
    *(bool *)(unaff_x29 + -0x7b) = lVar6 == *(long *)(lVar2 + 0x18);
    if ((*(byte *)(unaff_x29 + -0x7b) & 1) == 0) {
      lVar2 = *(long *)(unaff_x29 + -0x18);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
      plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
      *(bool *)(unaff_x29 + -0x7c) = lVar2 == *plVar3;
      if ((*(byte *)(unaff_x29 + -0x7c) & 1) == 0) {
        lVar6 = *(long *)(unaff_x29 + -0x18);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
        lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
        *(bool *)(unaff_x29 + -0x7d) = lVar6 == *(long *)(lVar2 + 8);
        if ((*(byte *)(unaff_x29 + -0x7d) & 1) != 0) {
          fVar11 = (float)Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F_inline
                                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                     (unaff_x29 + -0x50),(MethodInfo *)0x0);
          Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                     (MethodInfo *)0x0);
        }
      }
      else {
        fVar11 = (float)Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                   (unaff_x29 + -0x50),(MethodInfo *)0x0);
        Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                   (MethodInfo *)0x0);
      }
    }
    else {
      fVar11 = (float)Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E_inline
                                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                 (unaff_x29 + -0x50),(MethodInfo *)0x0);
      Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B_inline
                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                 (MethodInfo *)0x0);
    }
  }
  else {
    fVar11 = (float)Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F_inline
                              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x50)
                               ,(MethodInfo *)0x0);
    Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE_inline
              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
               (MethodInfo *)0x0);
  }
  ppvVar4 = (void **)(unaff_x29 + -0xa8);
  il2cpp_codegen_initobj(ppvVar4,0x28);
  *(void **)(unaff_x29 + -0xa8) = *(void **)(unaff_x29 + -0x28);
  Il2CppCodeGenWriteBarrier(ppvVar4,*(void **)(unaff_x29 + -0x28));
  *(void **)(unaff_x29 + -0x88) = *(void **)(unaff_x29 + -0x18);
  Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x88),*(void **)(unaff_x29 + -0x18));
  in_stack_00000088[1] = in_stack_00000088[0x55];
  *in_stack_00000088 = in_stack_00000088[0x54];
  uVar1 = *in_stack_00000088;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000088[1];
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar1;
  *(undefined1 *)(unaff_x29 + -0x90) = 1;
  uVar1 = FocusableHierarchyTraversal_GetBestOverall_mC2F808C4A4AB7EAAFDCD511987F250B346FF1D7D
                    (ppvVar4,*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10),0);
  *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
  *(bool *)(unaff_x29 + -0xa9) = *(long *)(unaff_x29 + -0x78) != 0;
  if ((*(byte *)(unaff_x29 + -0xa9) & 1) == 0) {
    uVar7 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x60),
                       (MethodInfo *)0x0);
    uVar12 = param_2;
    uStack00000000000001ec = param_2;
    uVar8 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
    uStack00000000000001dc = uVar12;
    uVar8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline
                      (uVar7,param_2,uVar8,uVar12,0);
    uVar12 = param_2;
    uStack00000000000001cc = param_2;
    uVar9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x60),
                       (MethodInfo *)0x0);
    uVar7 = uVar12;
    uStack00000000000001ac = uVar12;
    uVar10 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline((MethodInfo *)0x0);
    uStack000000000000019c = uVar7;
    uVar10 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline
                       (uVar10,uVar7,0x40000000,0);
    uStack000000000000018c = uVar7;
    uVar7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline
                      (uVar9,uVar12,uVar10,uVar7,0);
    uStack0000000000000174 = uVar12;
    Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675_inline
              (uVar8,param_2,uVar7,uVar12,unaff_x29 + -0x70,0);
    lVar6 = *(long *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
    *(bool *)(unaff_x29 + -0xb9) = lVar6 == *(long *)(lVar2 + 0x18);
    bStack000000000000013f = *(byte *)(unaff_x29 + -0xb9) & 1;
    if (bStack000000000000013f == 0) {
      lVar6 = *(long *)(unaff_x29 + -0x18);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
      lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
      *(bool *)(unaff_x29 + -0xba) = lVar6 == *(long *)(lVar2 + 0x10);
      if ((*(byte *)(unaff_x29 + -0xba) & 1) == 0) {
        lVar6 = *(long *)(unaff_x29 + -0x18);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
        lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
        *(bool *)(unaff_x29 + -0xbb) = lVar6 == *(long *)(lVar2 + 8);
        if ((*(byte *)(unaff_x29 + -0xbb) & 1) == 0) {
          lVar2 = *(long *)(unaff_x29 + -0x18);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
          plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000090);
          *(bool *)(unaff_x29 + -0xbc) = lVar2 == *plVar3;
          if ((*(byte *)(unaff_x29 + -0xbc) & 1) != 0) {
            fVar11 = (float)Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F_inline
                                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                       (unaff_x29 + -0x50),(MethodInfo *)0x0);
            Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                       (MethodInfo *)0x0);
          }
        }
        else {
          fVar11 = (float)Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D_inline
                                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                     (unaff_x29 + -0x50),(MethodInfo *)0x0);
          Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19_inline
                    ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                     (MethodInfo *)0x0);
        }
      }
      else {
        fVar11 = (float)Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E_inline
                                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                   (unaff_x29 + -0x50),(MethodInfo *)0x0);
        Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B_inline
                  ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                   (MethodInfo *)0x0);
      }
    }
    else {
      fVar11 = (float)Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F_inline
                                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)
                                 (unaff_x29 + -0x50),(MethodInfo *)0x0);
      Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE_inline
                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x70),fVar11,
                 (MethodInfo *)0x0);
    }
    ppvVar4 = (void **)(unaff_x29 + -0xa8);
    il2cpp_codegen_initobj(ppvVar4,0x28);
    *(void **)(unaff_x29 + -0xa8) = *(void **)(unaff_x29 + -0x28);
    Il2CppCodeGenWriteBarrier(ppvVar4,*(void **)(unaff_x29 + -0x28));
    *(void **)(unaff_x29 + -0x88) = *(void **)(unaff_x29 + -0x18);
    Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0x88),*(void **)(unaff_x29 + -0x18));
    uVar1 = in_stack_00000088[0x54];
    *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000088[0x55];
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar1;
    *(undefined1 *)(unaff_x29 + -0x90) = 0;
    uVar1 = FocusableHierarchyTraversal_GetBestOverall_mC2F808C4A4AB7EAAFDCD511987F250B346FF1D7D
                      (ppvVar4,*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10),0);
    *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
    *(bool *)(unaff_x29 + -0xbd) = *(long *)(unaff_x29 + -0x78) != 0;
    if ((*(byte *)(unaff_x29 + -0xbd) & 1) == 0) {
      *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x10);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x78);
    }
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x78);
  }
  return *(undefined8 *)(unaff_x29 + -0xb8);
}


