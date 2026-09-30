/*
FUNCTION_NAME: FUN_016547f4
ENTRY_POINT: 016547f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_016547f4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if ((DAT_037782e6 & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunk_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_Axis_AxisType>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10086);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Quaternion>_set_Item__);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_GroupCollection_CopyTo__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_152__);
    DAT_037782e6 = 1;
  }
  puVar5 = StringLiteral_10086;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_152__;
  puVar3 = Method_Obi_ObiNativeList<Quaternion>_set_Item__;
  puVar2 = System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunk_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<string,_Axis_AxisType>_TypeInfo;
  if (param_2 != (long *)0x0) {
    uVar11 = 0;
    do {
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_016548f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,4);
LAB_016548f8:
      lVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar8 == 0) break;
      if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar11) {
        return;
      }
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_01654964;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,4);
LAB_01654964:
      lVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar12 = *(undefined8 *)(lVar8 + uVar11 * 8 + 0x20);
      uVar9 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar4,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar5,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar3,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = thunk_FUN_015fe514(uVar12,*(undefined8 *)
                                               Method_System_Text_RegularExpressions_GroupCollection_CopyTo__
                                       ,0);
            if ((uVar9 & 1) == 0) {
              uVar12 = thunk_FUN_00d48444(
                                         System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunk_TypeInfo
                                         );
              uVar12 = FUN_00bd9510(4,uVar12,param_2);
              FUN_00ac2be8();
              uVar12 = FUN_00bd94ec(uVar12,uVar11);
              uVar7 = thunk_FUN_00d48444(
                                        System_Collections_Generic_IEnumerator<SimpleTuple<Face,_Face>>_TypeInfo
                                        );
              uVar12 = FUN_015f5b28(uVar7,uVar12,0);
              thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                                );
              uVar7 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              FUN_0164c318(uVar7,uVar12);
              uVar12 = thunk_FUN_00d48444(
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JToken_<ReadFromAsync>d__3>__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar7,uVar12);
            }
            lVar8 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_01654c54;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,2);
LAB_01654c54:
            uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
            uVar12 = FUN_01655ef8(uVar12,uVar12);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar1);
            }
            FUN_016562c8(uVar12);
          }
          else {
            lVar8 = *param_2;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_01654bd8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,2);
LAB_01654bd8:
            uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
            uVar12 = FUN_01655ef8(uVar12,uVar12);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar1);
            }
            if (DAT_037783ba == '\0') {
              thunk_FUN_00d48444(puVar1);
              DAT_037783ba = '\x01';
            }
            lVar8 = *(long *)puVar1;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar8 = *(long *)puVar1;
            }
            *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10) = uVar12;
          }
        }
        else {
          lVar8 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_01654b64;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,2);
LAB_01654b64:
          uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
          uVar12 = FUN_01655ef8(uVar12,uVar12);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
          if (DAT_037783b9 == '\0') {
            thunk_FUN_00d48444(puVar1);
            DAT_037783b9 = '\x01';
          }
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar1;
          }
          *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18) = uVar12;
        }
      }
      else {
        lVar8 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_01654a94;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,2);
LAB_01654a94:
        uVar12 = (*(code *)*puVar6)(param_2,uVar11 & 0xffffffff,puVar6[1]);
        uVar12 = FUN_01655ef8(uVar12,uVar12);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        if (DAT_037783b8 == '\0') {
          thunk_FUN_00d48444(puVar1);
          DAT_037783b8 = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar1;
        }
        *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar12;
      }
      uVar11 = uVar11 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


