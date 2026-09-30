/*
FUNCTION_NAME: FUN_057a15b4
ENTRY_POINT: 057a15b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057a2194) */
/* WARNING: Removing unreachable block (ram,0x057a1b1c) */
/* WARNING: Removing unreachable block (ram,0x057a213c) */
/* WARNING: Removing unreachable block (ram,0x057a193c) */

void FUN_057a15b4(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 local_c0;
  byte local_b8;
  byte local_b7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  char local_54 [4];
  
  if ((DAT_06b80107 & 1) == 0) {
    FUN_02d6084c(Firebase_Firestore_Converters_Int16Converter_TypeInfo);
    FUN_02d6084c(System_Data_Common_Int16Storage_TypeInfo);
    FUN_02d6084c(System_Xml_Int32ArrayHelperWithDictionaryString_TypeInfo);
    FUN_02d6084c(System_Xml_Int32ArrayHelperWithString_TypeInfo);
    FUN_02d6084c(Firebase_Firestore_Converters_Int32Converter_TypeInfo);
    FUN_02d6084c(UnityEngine_InputSystem_InputInteraction_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767a30);
    FUN_02d6084c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
                );
    FUN_02d6084c(System_Int32Enum_TypeInfo);
    FUN_02d6084c(System_Data_Common_Int32Storage_TypeInfo);
    FUN_02d6084c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                );
    FUN_02d6084c(System_Xml_Int64ArrayHelperWithDictionaryString_TypeInfo);
    FUN_02d6084c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                );
    FUN_02d6084c(System_Xml_Int64ArrayHelperWithString_TypeInfo);
    FUN_02d6084c(Firebase_Firestore_Converters_Int64Converter_TypeInfo);
    FUN_02d6084c(System_Data_Common_Int64Storage_TypeInfo);
    FUN_02d6084c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
                );
    FUN_02d6084c(System_Runtime_Serialization_IntDataContract_TypeInfo);
    FUN_02d6084c(SonicBloom_Koreo_IntPayload_TypeInfo);
    FUN_02d6084c(UnityEngine_GradientColorKey_____TypeInfo);
    FUN_02d6084c(System_Runtime_Serialization_IntRef_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<InstanceType>___TypeInfo);
    DAT_06b80107 = 1;
  }
  local_54[0] = '\0';
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar15 = ZEXT816(0);
  uVar14 = *param_1;
  lVar8 = *(long *)(param_1 + 8);
  if (uVar14 < 4) {
    uVar9 = 0;
    local_80 = ZEXT816(0);
    local_70 = ZEXT816(0);
    goto LAB_057a1bc4;
  }
  if (uVar14 == 4) {
    uVar9 = 0;
    local_a0 = ZEXT816(0);
    local_80 = ZEXT816(0);
    local_70 = ZEXT816(0);
    do {
      if (uVar14 == 4) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
        uVar14 = 0xffffffff;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        *param_1 = 0xffffffff;
LAB_057a1a54:
        FUN_04f2d338(local_80,0);
      }
      else if (*(char *)((long)param_1 + 0x59) != '\0') {
        if ((char)param_1[0x16] == '\0') {
          bVar3 = *(long *)(param_1 + 0x18) != 0;
        }
        else {
          bVar3 = true;
        }
        if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(0,bVar3);
        }
        lVar12 = FUN_056cdf1c(*(long *)(param_1 + 0x14),bVar3,*(undefined8 *)(param_1 + 10),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        auVar15 = FUN_0507b064(lVar12,0,0);
        local_80 = auVar15;
        uVar7 = FUN_04f2d31c(local_80,0);
        if ((uVar7 & 1) == 0) {
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
          thunk_FUN_02dd37b4(param_1 + 0x20,0);
          if (*(int *)(*(long *)UnityEngine_InputSystem_InputInteraction_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_03023cf4(param_1 + 2,local_80,param_1,
                       *(undefined8 *)System_Data_Common_Int16Storage_TypeInfo);
          return;
        }
        goto LAB_057a1a54;
      }
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_056c7028(*(long *)(param_1 + 0xe),1,0,0);
      plVar5 = *(long **)(param_1 + 0x12);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar13 = *(undefined8 *)(lVar8 + 0x128);
      local_54[0] = '\0';
      FUN_0506ac34(uVar13,local_54,0);
      puVar10 = param_1 + 0x10;
      lVar12 = *(long *)puVar10;
      if (lVar12 != 0) {
        *(undefined1 *)(lVar8 + 0x88) = 1;
        plVar5 = *(long **)(param_1 + 0x14);
        if (plVar5 != (long *)0x0) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          lVar12 = *(long *)puVar10;
        }
        lVar8 = *(long *)(param_1 + 0xc);
        if (lVar8 != 0) {
          uVar9 = thunk_FUN_02dc61f4(UnityEngine_XR_ARFoundation_IUpdatableTexture_____TypeInfo);
          FUN_045bc1a4(lVar8,lVar12,uVar9);
          uVar13 = *(undefined8 *)puVar10;
          uVar9 = thunk_FUN_02dc61f4(UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar13,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar6 = FUN_0579e584(lVar8,1,*(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 10));
        *(undefined8 *)(param_1 + 0xe) = uVar6;
        thunk_FUN_02dd37b4();
      }
      else {
        *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0x18);
        thunk_FUN_02dd37b4();
      }
      if (((int)uVar14 < 0) && (local_54[0] != '\0')) {
        thunk_FUN_02d6ec70(uVar13,0);
      }
      puVar10 = param_1 + 0x10;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x12;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x14;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x18;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x1a;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
LAB_057a1b70:
      puVar10 = param_1 + 0x10;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x12;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x14;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x18;
      puVar10[0] = 0;
      puVar10[1] = 0;
      *(undefined2 *)(param_1 + 0x16) = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      puVar10 = param_1 + 0x1a;
      puVar10[0] = 0;
      puVar10[1] = 0;
      thunk_FUN_02dd37b4(puVar10,0);
      auVar15 = local_a0;
LAB_057a1bc4:
      switch(uVar14) {
      case 0:
        local_70 = *(undefined1 (*) [16])(param_1 + 0x1c);
        uVar14 = 0xffffffff;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        *param_1 = 0xffffffff;
        break;
      case 1:
        local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
        uVar14 = 0xffffffff;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        *param_1 = 0xffffffff;
        goto LAB_057a1d18;
      case 2:
        local_88 = *(undefined8 *)(param_1 + 0x24);
        uVar14 = 0xffffffff;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        *param_1 = 0xffffffff;
        goto LAB_057a1d64;
      case 3:
        local_a0 = *(undefined1 (*) [16])(param_1 + 0x26);
        uVar14 = 0xffffffff;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        *param_1 = 0xffffffff;
        goto LAB_057a1dd4;
      default:
        local_a0 = auVar15;
        if (*(int *)(*(long *)PTR_DAT_06767a30 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0506a1fc(param_1 + 10,0);
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar12 = FUN_056c79b8(*(long *)(param_1 + 0xe),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        auVar15 = FUN_042a90e8(lVar12,0,*(undefined8 *)
                                         UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
                              );
        local_70 = auVar15;
        uVar7 = FUN_0467d5c0(local_70,*(undefined8 *)
                                       UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                            );
        auVar15 = local_a0;
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x1c) = local_70;
          thunk_FUN_02dd37b4(param_1 + 0x1c,0);
          if (*(int *)(*(long *)UnityEngine_InputSystem_InputInteraction_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_030204d0(param_1 + 2,local_70,param_1,
                       *(undefined8 *)Firebase_Firestore_Converters_Int16Converter_TypeInfo);
          return;
        }
      }
      local_a0 = auVar15;
      lVar12 = FUN_0467d60c(local_70,*(undefined8 *)
                                      UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                           );
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar5 = (long *)(lVar8 + 0xf8);
      *plVar5 = lVar12;
      thunk_FUN_02dd37b4(plVar5);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar12 = FUN_056ca0f8(*plVar5,*(undefined8 *)(param_1 + 10),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar15 = FUN_0507b064(lVar12,0,0);
      local_80 = auVar15;
      uVar7 = FUN_04f2d31c(local_80,0);
      auVar15 = local_a0;
      if ((uVar7 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
        thunk_FUN_02dd37b4(param_1 + 0x20,0);
        if (*(int *)(*(long *)UnityEngine_InputSystem_InputInteraction_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03023cf4(param_1 + 2,local_80,param_1,
                     *(undefined8 *)System_Data_Common_Int16Storage_TypeInfo);
        return;
      }
LAB_057a1d18:
      local_a0 = auVar15;
      FUN_04f2d338(local_80,0);
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar12 = FUN_056c7a20(*(long *)(param_1 + 0xe),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      local_88 = FUN_042a90c8(lVar12,*(undefined8 *)
                                      System_Runtime_Serialization_IntDataContract_TypeInfo);
      uVar7 = FUN_04277230(&local_88,
                           *(undefined8 *)Firebase_Firestore_Converters_Int64Converter_TypeInfo);
      auVar15 = local_a0;
      if ((uVar7 & 1) == 0) {
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0x24) = local_88;
        thunk_FUN_02dd37b4(param_1 + 0x24,0);
        if (*(int *)(*(long *)UnityEngine_InputSystem_InputInteraction_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03021bac(param_1 + 2,&local_88,param_1,
                     *(undefined8 *)System_Xml_Int32ArrayHelperWithString_TypeInfo);
        return;
      }
LAB_057a1d64:
      local_a0 = auVar15;
      uVar13 = FUN_04277274(&local_88,*(undefined8 *)System_Xml_Int64ArrayHelperWithString_TypeInfo)
      ;
      *(undefined8 *)(param_1 + 0x14) = uVar13;
      thunk_FUN_02dd37b4();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar12 = FUN_0579ea5c(lVar8,*(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 10));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      auVar15 = FUN_0429fc20(lVar12,0,*(undefined8 *)System_Data_Common_Int64Storage_TypeInfo);
      local_a0 = auVar15;
      uVar7 = FUN_0467cd90(local_a0,*(undefined8 *)
                                     System_Xml_Int64ArrayHelperWithDictionaryString_TypeInfo);
      if ((uVar7 & 1) == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x26) = local_a0;
        thunk_FUN_02dd37b4(param_1 + 0x26,0);
        if (*(int *)(*(long *)UnityEngine_InputSystem_InputInteraction_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0301e174(param_1 + 2,local_a0,param_1,
                     *(undefined8 *)System_Xml_Int32ArrayHelperWithDictionaryString_TypeInfo);
        return;
      }
LAB_057a1dd4:
      FUN_0467cddc(&local_c0,local_a0,*(undefined8 *)System_Data_Common_Int32Storage_TypeInfo);
      uVar6 = uStack_a8;
      uVar13 = local_b0;
      bVar2 = local_b7;
      bVar1 = local_b8;
      *(undefined8 *)(param_1 + 0x12) = local_c0;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(param_1 + 0x1a) = uVar13;
      *(byte *)(param_1 + 0x16) = bVar1 & 1;
      *(byte *)((long)param_1 + 0x59) = bVar2 & 1;
      thunk_FUN_02dd37b4(param_1 + 0x1a,uVar13);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02dd37b4(param_1 + 0x18,uVar6);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar13 = *(undefined8 *)(lVar8 + 0x128);
      local_54[0] = '\0';
      FUN_0506ac34(uVar13,local_54,0);
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar8 + 0x88) = 1;
        lVar8 = *(long *)(param_1 + 0xc);
        if (lVar8 != 0) {
          uVar9 = thunk_FUN_02dc61f4(UnityEngine_XR_ARFoundation_IUpdatableTexture_____TypeInfo);
          FUN_045bc1a4(lVar8,lVar12,uVar9);
          uVar13 = *(undefined8 *)(param_1 + 0x10);
          uVar9 = thunk_FUN_02dc61f4(UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar13,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if ((char)param_1[0x16] == '\0') {
        *(undefined1 *)(lVar8 + 0x88) = 1;
        *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(param_1 + 0x12);
        thunk_FUN_02dd37b4(lVar8 + 0x100);
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_045bbfd4(*(long *)(param_1 + 0xc),
                     *(undefined8 *)UnityEngine_GradientColorKey_____TypeInfo);
        uVar9 = *(undefined8 *)(param_1 + 0x12);
        iVar11 = 9;
        iVar4 = 9;
      }
      else {
        *(undefined1 *)(lVar8 + 0x130) = 0;
        *(undefined1 *)(lVar8 + 0x88) = 0;
        *(undefined8 *)(lVar8 + 0x100) = 0;
        thunk_FUN_02dd37b4(lVar8 + 0x100,0);
        *(undefined8 *)(lVar8 + 0x110) = *(undefined8 *)(param_1 + 0x18);
        thunk_FUN_02dd37b4(lVar8 + 0x110);
        iVar11 = 3;
        iVar4 = 3;
      }
      if (((int)uVar14 < 0) && (iVar4 = iVar11, local_54[0] != '\0')) {
        thunk_FUN_02d6ec70(uVar13,0);
      }
    } while ((iVar4 == 0) || (iVar4 == 3));
    auVar15 = local_80;
    if (iVar4 != 9) {
      return;
    }
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar4 = thunk_FUN_02d99f38(lVar8 + 0x118,0,0,0);
    if (iVar4 == 1) {
      lVar8 = thunk_FUN_02dc61f4(PTR_DAT_06768290);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_0579eeb8();
      uVar13 = thunk_FUN_02dc61f4(UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar9,uVar13);
    }
    uVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                System_Collections_Generic_List<InstanceType>___TypeInfo);
    FUN_057a2690();
    puVar10 = param_1 + 0xc;
    *(undefined8 *)puVar10 = uVar9;
    thunk_FUN_02dd37b4(puVar10,uVar9);
    uVar13 = *(undefined8 *)(lVar8 + 0x128);
    local_54[0] = '\0';
    FUN_0506ac34(uVar13,local_54,0);
    *(undefined1 *)(lVar8 + 0x125) = 1;
    lVar12 = FUN_02d99e8c(lVar8 + 0x108,*(undefined8 *)puVar10,0);
    if (lVar12 == 0) {
      puVar10 = param_1 + 0xe;
      *(undefined8 *)puVar10 = *(undefined8 *)(lVar8 + 0x110);
      thunk_FUN_02dd37b4(puVar10);
      if (*(long *)(lVar8 + 0x110) != 0) {
        uVar9 = FUN_056c7a08(*(long *)(lVar8 + 0x110),0);
        *(undefined8 *)(lVar8 + 0xf8) = uVar9;
        thunk_FUN_02dd37b4();
      }
      *(undefined8 *)(lVar8 + 0xb0) = *(undefined8 *)(lVar8 + 0xa8);
      thunk_FUN_02dd37b4();
      uVar9 = FUN_0579e584(lVar8,0,0,*(undefined8 *)(param_1 + 10));
      *(undefined8 *)puVar10 = uVar9;
      thunk_FUN_02dd37b4(puVar10);
      uVar9 = 0;
      iVar11 = 0xd;
      iVar4 = 0xd;
    }
    else {
      FUN_045bc260(lVar12,*(undefined8 *)SonicBloom_Koreo_IntPayload_TypeInfo);
      if (*(char *)(lVar8 + 0x88) == '\0') {
LAB_057a18b8:
        thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
        uVar9 = thunk_FUN_02d9d534();
        uVar13 = thunk_FUN_02dc61f4(
                                   System_Runtime_Serialization_Formatters_Binary_IntSizedArray_TypeInfo
                                   );
        FUN_05007004(uVar9,uVar13,0);
        uVar13 = thunk_FUN_02dc61f4(UnityEngine_InputSystem_Controls_IntegerControl_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar9,uVar13);
      }
      lVar12 = FUN_045bbf0c(lVar12,*(undefined8 *)System_Runtime_Serialization_IntRef_TypeInfo);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar7 = FUN_0507ad70(lVar12,0);
      if ((uVar7 & 1) == 0) goto LAB_057a18b8;
      uVar9 = *(undefined8 *)(lVar8 + 0x100);
      iVar11 = 9;
      iVar4 = 9;
    }
    if (((int)uVar14 < 0) && (iVar4 = iVar11, local_54[0] != '\0')) {
      thunk_FUN_02d6ec70(uVar13,0);
    }
    auVar15._8_8_ = local_80._8_8_;
    auVar15._0_8_ = local_80._0_8_;
    if (iVar4 == 0xd) goto LAB_057a1b70;
    if (iVar4 != 9) {
      local_80 = auVar15;
      if (iVar4 == 0) goto LAB_057a1b70;
      return;
    }
  }
  *param_1 = 0xfffffffe;
  puVar10 = param_1 + 0xc;
  puVar10[0] = 0;
  puVar10[1] = 0;
  local_80 = auVar15;
  thunk_FUN_02dd37b4(puVar10,0);
  puVar10 = param_1 + 0xe;
  puVar10[0] = 0;
  puVar10[1] = 0;
  thunk_FUN_02dd37b4(puVar10,0);
  if (*(int *)(*(long *)UnityEngine_InputSystem_InputInteraction_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_03ded864(param_1 + 2,uVar9,
               *(undefined8 *)Firebase_Firestore_Converters_Int32Converter_TypeInfo);
  return;
}


