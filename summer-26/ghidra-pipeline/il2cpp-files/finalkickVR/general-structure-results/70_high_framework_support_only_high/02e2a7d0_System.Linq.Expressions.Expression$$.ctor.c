/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$.ctor
ENTRY_POINT: 02e2a7d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Linq_Expressions_Expression___ctor(undefined1 param_1 [16],undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar4;
  void *pvVar5;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000074;
  byte in_stack_00000080;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000114;
  undefined4 uStack0000000000000124;
  undefined4 uStack000000000000012c;
  undefined4 uStack000000000000013c;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000164;
  byte bStack0000000000000173;
  undefined4 uStack0000000000000174;
  byte bStack0000000000000183;
  undefined4 uStack0000000000000184;
  byte bStack0000000000000193;
  undefined4 uStack0000000000000194;
  byte bStack00000000000001a7;
  byte bStack00000000000001c7;
  byte bStack00000000000001d3;
  undefined4 uStack00000000000001e4;
  byte bStack00000000000001ed;
  byte bStack00000000000001ee;
  byte bStack00000000000001ef;
  undefined4 uVar6;
  
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48);
  if ((*(byte *)(unaff_x29 + -0x15) & in_stack_00000080 & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -200) = uVar2;
    *(undefined4 *)(unaff_x29 + -0xd4) = 0;
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -200);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar2;
    *(uint *)(unaff_x29 + -0xd4) = (uint)(*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 2);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xd0);
  }
  NullCheck(*(void **)(unaff_x29 + -0xe0));
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (*(undefined8 *)(unaff_x29 + -0xe0),*(int *)(unaff_x29 + -0xd4) != 0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(pvVar3);
  uStack0000000000000074 = 0;
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack0000000000000074 & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack0000000000000074 & 1,0);
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
  NullCheck(pvVar3);
  GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
            (pvVar3,uStack0000000000000074 & 1,0);
  if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -8);
    pGVar4 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x40);
    NullCheck(pGVar4);
    uVar2 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                      (pGVar4,(MethodInfo *)*in_stack_000000c0);
    *(undefined8 *)(unaff_x29 + -0xf8) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0xe8);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -8);
    pGVar4 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pGVar4);
    uVar2 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                      (pGVar4,(MethodInfo *)*in_stack_000000c0);
    *(undefined8 *)(unaff_x29 + -0xf8) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0xf0);
  }
  NullCheck(*(void **)(unaff_x29 + -0x100));
  *(undefined8 *)(*(long *)(unaff_x29 + -0x100) + 0x80) = *(undefined8 *)(unaff_x29 + -0xf8);
  Il2CppCodeGenWriteBarrier
            ((void **)(*(long *)(unaff_x29 + -0x100) + 0x80),*(void **)(unaff_x29 + -0xf8));
  if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
    pvVar3 = *(void **)(unaff_x29 + -8);
    pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
  }
  else {
    pvVar3 = *(void **)(unaff_x29 + -8);
    pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
  }
  NullCheck(pvVar3);
  *(void **)((long)pvVar3 + 0x88) = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x88),pvVar5);
  *(byte *)(*(long *)(unaff_x29 + -8) + 0x98) = *(byte *)(unaff_x29 + -0x15) & 1;
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x99) = 1;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x9c) = *(undefined4 *)(unaff_x29 + -0x14);
  bStack00000000000001ef = *(byte *)(*(long *)(unaff_x29 + -8) + 0x91) & 1;
  *(byte *)(*(long *)(unaff_x29 + -8) + 0x92) = bStack00000000000001ef;
  bStack00000000000001ee = *(byte *)(*(long *)(unaff_x29 + -8) + 0x91) & 1;
  bStack00000000000001ed = *(byte *)(unaff_x29 + -0x15) & 1;
  *(bool *)(unaff_x29 + -0x16) = (bStack00000000000001ee & bStack00000000000001ed) != 0;
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x74);
  uStack00000000000001e4 = *(undefined4 *)(unaff_x29 + -0x1c);
  switch(uStack00000000000001e4) {
  case 0:
    break;
  case 1:
    if (*(int *)(unaff_x29 + -0x14) == 2) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
    break;
  case 2:
    if (*(int *)(unaff_x29 + -0x14) != 1) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
    break;
  case 3:
    if (*(int *)(unaff_x29 + -0x14) != 2) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
    break;
  case 4:
    if (*(int *)(unaff_x29 + -0x14) != 0) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
  }
  bStack00000000000001d3 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x78) & 1;
  if (bStack00000000000001d3 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
    bVar1 = OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533
                      (0);
    if ((bVar1 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
      bVar1 = OVRPlugin_AreControllerDrivenHandPosesNatural_mC5F1D327BC5B0A79190FEA4433F9FC4F488445A7
                        (0);
      if ((bVar1 & 1) != 0) {
        *(undefined1 *)(unaff_x29 + -0x16) = 0;
      }
    }
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x88);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bStack00000000000001c7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar2,0);
  bStack00000000000001c7 = bStack00000000000001c7 & 1;
  if (bStack00000000000001c7 != 0) {
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x88);
    bVar1 = *(byte *)(unaff_x29 + -0x16);
    NullCheck(pvVar3);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1 & 1,0);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bStack00000000000001a7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar2,0);
  bStack00000000000001a7 = bStack00000000000001a7 & 1;
  if (bStack00000000000001a7 != 0) {
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000194 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    bStack0000000000000193 =
         OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(1,uStack0000000000000194,0);
    bStack0000000000000193 = bStack0000000000000193 & 1;
    if (bStack0000000000000193 == 0) {
      uVar2 = *in_stack_000000f0;
      uVar6 = 0;
    }
    else {
      uVar2 = *in_stack_000000f0;
      uVar6 = 0x3f800000;
    }
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(uVar6,pvVar3,uVar2);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000184 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    bStack0000000000000183 =
         OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(2,uStack0000000000000184,0);
    bStack0000000000000183 = bStack0000000000000183 & 1;
    if (bStack0000000000000183 == 0) {
      uVar2 = *in_stack_000000e8;
      uVar6 = 0;
    }
    else {
      uVar2 = *in_stack_000000e8;
      uVar6 = 0x3f800000;
    }
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(uVar6,pvVar3,uVar2);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000174 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    bStack0000000000000173 =
         OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(0x100,uStack0000000000000174,0);
    bStack0000000000000173 = bStack0000000000000173 & 1;
    if (bStack0000000000000173 == 0) {
      uVar2 = *in_stack_000000f8;
      uVar6 = 0;
    }
    else {
      uVar2 = *in_stack_000000f8;
      uVar6 = 0x3f800000;
    }
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(uVar6,pvVar3,uVar2);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000164 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    uStack000000000000000c = 1;
    uStack000000000000014c =
         OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1,uStack0000000000000164,0);
    uStack0000000000000154 = param_2;
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uStack000000000000014c,pvVar3,*(undefined8 *)StringLiteral_464,0);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack000000000000013c = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8
              (uStack000000000000000c,uStack000000000000013c,0);
    uStack0000000000000124 = param_2;
    uStack000000000000012c = param_2;
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uStack0000000000000124,pvVar3,*(undefined8 *)StringLiteral_462,0);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000114 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    uVar6 = OVRSimpleJSON_JSONNode__get_Value(uStack000000000000000c,uStack0000000000000114,0);
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar6,pvVar3,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_MoveNext__
               ,0);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000104 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    uVar6 = OVRSimpleJSON_JSONNode__get_Value(4,uStack0000000000000104,0);
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar6,pvVar3,*(undefined8 *)StringLiteral_463,0);
  }
  return;
}


