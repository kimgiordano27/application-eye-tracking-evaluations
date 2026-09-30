/*
FUNCTION_NAME: FUN_02d48d3c
ENTRY_POINT: 02d48d3c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02d48d3c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  __shared_count *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_065c2588;
  param_1[1] = param_2 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar10 = param_1 + 2;
  *plVar10 = (long)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[4] = param_1 + 0x22;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  plVar12 = param_1 + 3;
  *plVar12 = *plVar10;
  puVar3 = UnityEngine_UIElements_Vector2IntField_UxmlFactory_TypeInfo;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = Unity_Properties_Internal_Vector2IntPropertyBag_XProperty_TypeInfo;
  DAT_06c9aa30 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  DAT_06c9aa38 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Unity_Properties_Internal_Vector2IntPropertyBag_XProperty_TypeInfo,&local_78
               ,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aa30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aa30;
  puVar2 = Unity_Properties_Internal_Vector2PropertyBag_XProperty_TypeInfo;
  DAT_06c9aa40 = Unity_Properties_Internal_Vector2IntPropertyBag_YProperty_TypeInfo + 0x10;
  local_90 = Unity_Properties_Internal_Vector2PropertyBag_XProperty_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aa48 = 0;
  local_80 = 0;
  if (*(long *)Unity_Properties_Internal_Vector2PropertyBag_XProperty_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Unity_Properties_Internal_Vector2PropertyBag_XProperty_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aa40);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aa40;
  puVar2 = Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo;
  DAT_06c9aa60 = &DAT_01aa4f10;
  DAT_06c9aa50 = Unity_Properties_Internal_Vector2PropertyBag_YProperty_TypeInfo + 0x10;
  DAT_06c9aa68 = 0;
  DAT_06c9aa58 = 0;
  local_90 = Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aa50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aa50;
  puVar2 = UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo;
  DAT_06c9aa70 = Niantic_Peridot_Rpc_Vector2Proto_<>c_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aa78 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aa70);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aa70;
  puVar2 = UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo;
  DAT_06c9aa80 = Niantic_Peridot_Api_Vector2Range_<>c_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aa88 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aa80);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aa80;
  DAT_06c9aa90 = Niantic_Peridot_Telemetry_Vector3_<>c_TypeInfo + 0x10;
  DAT_06c9aa98 = 0;
  if (((DAT_06c9a060 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06c9a060), iVar5 != 0)) {
    DAT_06c9a058 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_06c9a060);
  }
  puVar2 = UnityEngine_UIElements_Vector3Field_<>c_TypeInfo;
  DAT_06c9aaa0 = DAT_06c9a058;
  local_80 = 0;
  local_90 = UnityEngine_UIElements_Vector3Field_<>c_TypeInfo;
  puStack_88 = puVar3;
  if (*(long *)UnityEngine_UIElements_Vector3Field_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_Vector3Field_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aa90);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aa90;
  puVar2 = UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo;
  DAT_06c9aab0 = UnityEngine_UIElements_Vector3Field_UxmlFactory_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aab8 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aab0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aab0;
  puVar2 = Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo;
  DAT_06c9aac0 = UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo + 0x10;
  local_90 = Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aac8 = 0;
  local_80 = 0;
  if (*(long *)Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo,&local_78
               ,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aac0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aac0;
  puVar2 = Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo;
  DAT_06c9aae0 = 0x2c2e;
  DAT_06c9aad0 = Unity_Properties_Internal_Vector3IntPropertyBag_YProperty_TypeInfo + 0x10;
  DAT_06c9aaf0 = 0;
  DAT_06c9aaf8 = 0;
  DAT_06c9aae8 = 0;
  local_90 = Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aad8 = 0;
  local_80 = 0;
  if (*(long *)Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aad0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aad0;
  puVar2 = Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo;
  DAT_06c9ab00 = Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo + 0x10;
  DAT_06c9ab20 = 0;
  DAT_06c9ab28 = 0;
  DAT_06c9ab18 = 0;
  local_90 = Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab08 = 0;
  DAT_06c9ab10 = DAT_0137e668;
  local_80 = 0;
  if (*(long *)Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab00;
  puVar2 = UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo;
  DAT_06c9ab30 = Unity_Properties_Internal_Vector3PropertyBag_XProperty_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab38 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo,
               &local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab30;
  puVar2 = UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo;
  DAT_06c9ab40 = Unity_Properties_Internal_Vector3PropertyBag_YProperty_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab48 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo,&local_78
               ,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab40);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab40;
  puVar2 = UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo;
  DAT_06c9ab50 = Unity_Properties_Internal_Vector3PropertyBag_ZProperty_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab58 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo,
               &local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab50;
  puVar2 = UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo;
  DAT_06c9ab60 = UnityEngine_UIElements_Vector4Field_<>c_TypeInfo + 0x10;
  local_90 = UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab68 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab60);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab60;
  puVar2 = UnityEngine_UIElements_Vector2Field_<>c_TypeInfo;
  DAT_06c9ab70 = UnityEngine_UIElements_Vector4Field_UxmlFactory_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_Vector2Field_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab78 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_Vector2Field_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_Vector2Field_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab70);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab70;
  puVar2 = Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo;
  DAT_06c9ab80 = Unity_Properties_Internal_Vector4PropertyBag_WProperty_TypeInfo + 0x10;
  local_90 = Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab88 = 0;
  local_80 = 0;
  if (*(long *)Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab80);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab80;
  puVar2 = UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo;
  DAT_06c9ab90 = Unity_Properties_Internal_Vector4PropertyBag_XProperty_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ab98 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ab90);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ab90;
  puVar2 = UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo;
  DAT_06c9aba0 = Unity_Properties_Internal_Vector4PropertyBag_YProperty_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9aba8 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9aba0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9aba0;
  puVar2 = Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo;
  DAT_06c9abb0 = Unity_Properties_Internal_Vector4PropertyBag_ZProperty_TypeInfo + 0x10;
  local_90 = Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9abb8 = 0;
  local_80 = 0;
  if (*(long *)Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abb0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9abb0;
  puVar2 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo;
  DAT_06c9abc0 = Niantic_Peridot_Api_Vector4Range_<>c_TypeInfo + 0x10;
  local_90 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9abc8 = 0;
  local_80 = 0;
  if (*(long *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo,&local_78,
               FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abc0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9abc0;
  puVar2 = VendingModule_<>c__DisplayClass53_0_TypeInfo;
  DAT_06c9abd0 = VendingModule_<>c_TypeInfo + 0x10;
  local_90 = VendingModule_<>c__DisplayClass53_0_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9abd8 = 0;
  local_80 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass53_0_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass53_0_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abd0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9abd0;
  puVar2 = VendingModule_<>c__DisplayClass55_0_TypeInfo;
  DAT_06c9abe0 = VendingModule_<>c__DisplayClass53_1_TypeInfo + 0x10;
  local_90 = VendingModule_<>c__DisplayClass55_0_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9abe8 = 0;
  local_80 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass55_0_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass55_0_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abe0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9abe0;
  puVar2 = VendingModule_<>c__DisplayClass55_2_TypeInfo;
  DAT_06c9abf0 = VendingModule_<>c__DisplayClass55_1_TypeInfo + 0x10;
  DAT_06c9ac00 = VendingModule_<>c__DisplayClass55_1_TypeInfo + 0x70;
  local_90 = VendingModule_<>c__DisplayClass55_2_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9abf8 = 0;
  local_80 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass55_2_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass55_2_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abf0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9abf0;
  puVar2 = VendingModule_<>c__DisplayClass57_1_TypeInfo;
  DAT_06c9ac10 = VendingModule_<>c__DisplayClass57_0_TypeInfo + 0x10;
  DAT_06c9ac20 = VendingModule_<>c__DisplayClass57_0_TypeInfo + 0x70;
  local_90 = VendingModule_<>c__DisplayClass57_1_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ac18 = 0;
  local_80 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass57_1_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass57_1_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac10);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ac10;
  puVar2 = VendingModule_<>c__DisplayClass57_2_TypeInfo;
  DAT_06c9ac30 = VendingModule_<>c__DisplayClass57_2_TypeInfo + 0x10;
  DAT_06c9ac38 = 0;
  if (((DAT_06c9a060 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06c9a060), iVar5 != 0)) {
    DAT_06c9a058 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_06c9a060);
  }
  puVar4 = VendingModule_<>c__DisplayClass57_4_TypeInfo;
  DAT_06c9ac40 = DAT_06c9a058;
  DAT_06c9ac30 = VendingModule_<>c__DisplayClass57_3_TypeInfo + 0x10;
  local_90 = VendingModule_<>c__DisplayClass57_4_TypeInfo;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass57_4_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass57_4_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ac30;
  DAT_06c9ac50 = puVar2 + 0x10;
  DAT_06c9ac58 = 0;
  if (((DAT_06c9a060 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06c9a060), iVar5 != 0)) {
    DAT_06c9a058 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_06c9a060);
  }
  puVar2 = VendingModule_<AnimateExtras>d__46_TypeInfo;
  DAT_06c9ac60 = DAT_06c9a058;
  DAT_06c9ac50 = VendingModule_<>c__DisplayClass58_0_TypeInfo + 0x10;
  local_90 = VendingModule_<AnimateExtras>d__46_TypeInfo;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)VendingModule_<AnimateExtras>d__46_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<AnimateExtras>d__46_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ac50;
  puVar2 = VendingModule_<HandleSlider>d__59_TypeInfo;
  DAT_06c9ac70 = VendingModule_<HandleScroll>d__49_TypeInfo + 0x10;
  local_90 = VendingModule_<HandleSlider>d__59_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ac78 = 0;
  local_80 = 0;
  if (*(long *)VendingModule_<HandleSlider>d__59_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<HandleSlider>d__59_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac70);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ac70;
  puVar2 = Google_Protobuf_Compiler_Version_<>c_TypeInfo;
  DAT_06c9ac80 = VendingModule_<OnGrab>d__56_TypeInfo + 0x10;
  local_90 = Google_Protobuf_Compiler_Version_<>c_TypeInfo;
  puStack_88 = puVar3;
  DAT_06c9ac88 = 0;
  local_80 = 0;
  if (*(long *)Google_Protobuf_Compiler_Version_<>c_TypeInfo != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Google_Protobuf_Compiler_Version_<>c_TypeInfo,&local_78,FUN_02d5f2e4);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac80);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02d5f194(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_06c9ac80;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


