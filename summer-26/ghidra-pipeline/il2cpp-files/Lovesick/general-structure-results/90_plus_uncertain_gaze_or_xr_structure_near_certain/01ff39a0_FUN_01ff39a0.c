/*
FUNCTION_NAME: FUN_01ff39a0
ENTRY_POINT: 01ff39a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01ff3d18) */
/* WARNING: Removing unreachable block (ram,0x01ff3fec) */

long FUN_01ff39a0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  char local_54 [4];
  undefined *puVar9;
  
  puVar9 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03780846 & 1) == 0) {
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectsOfType<BassGuitar>__);
    thunk_FUN_00d48444(Method_Polenter_Serialization_Core_Binary_IndexGenerator<Type>__ctor__);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_NOTATION_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__);
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    DAT_03780846 = 1;
  }
  local_54[0] = '\0';
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01789ac0(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    if (param_2 != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = (**(code **)(*param_1 + 0x8b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x8c0));
      puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      lVar14 = param_2;
      if ((uVar4 & 1) == 0) {
        lVar5 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar1;
        }
        plVar13 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x18);
        thunk_FUN_00d8e500();
        if ((plVar13 != (long *)0x0) &&
           (lVar5 = (**(code **)(*plVar13 + 0x308))
                              (plVar13,param_2,*(undefined8 *)(*plVar13 + 0x310)),
           puVar1 = System_Xml_Schema_Datatype_NOTATION_TypeInfo, lVar5 != 0)) {
          uVar15 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
          plVar13 = (long *)thunk_FUN_00d6225c(lVar5,uVar15);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar5,uVar15);
          }
          local_54[0] = '\0';
          FUN_017d75a8(plVar13,local_54,0);
          lVar5 = *plVar13;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_01ff3b70;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_00d59724(plVar13,*(long *)
                                         System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                                ,1);
LAB_01ff3b70:
          iVar3 = (*(code *)*puVar6)(plVar13,puVar6[1]);
          puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
          lVar5 = param_2;
          while (lVar11 = lVar5, iVar3 = iVar3 + -1, -1 < iVar3) {
            lVar10 = *plVar13;
            lVar5 = *(long *)puVar1;
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar5) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01ff3bdc;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar13,lVar5,0);
LAB_01ff3bdc:
            plVar7 = (long *)(*(code *)*puVar6)(plVar13,iVar3,puVar6[1]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar5 = *(long *)puVar2;
            if ((*(byte *)(*plVar7 + 300) < *(byte *)(lVar5 + 300)) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) !=
                lVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
            lVar10 = *plVar7;
            if ((*(byte *)(lVar10 + 300) < *(byte *)(lVar5 + 300)) ||
               (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5
               )) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
            lVar5 = (**(code **)(lVar10 + 0x198))(plVar7,*(undefined8 *)(lVar10 + 0x1a0));
            if (lVar5 == 0) {
              lVar10 = *plVar13;
              lVar5 = *(long *)puVar1;
              uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar4 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar5) {
                    puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                    goto LAB_01ff3cc8;
                  }
                  uVar4 = uVar4 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar13,lVar5,10);
LAB_01ff3cc8:
              (*(code *)*puVar6)(plVar13,iVar3,puVar6[1]);
              lVar5 = lVar11;
            }
            else {
              uVar4 = (**(code **)(*param_1 + 0x8b8))
                                (param_1,lVar5,*(undefined8 *)(*param_1 + 0x8c0));
              if ((uVar4 & 1) == 0) {
                lVar5 = lVar11;
              }
            }
          }
          if (local_54[0] != '\0') {
            thunk_FUN_00d56f10(plVar13,0);
          }
          if (lVar11 != param_2) {
            return lVar11;
          }
        }
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
        plVar13 = (long *)thunk_FUN_00d6225c(param_2,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__
                                            );
        if (plVar13 != (long *)0x0) {
          lVar5 = *plVar13;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01ff3d8c;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,0);
LAB_01ff3d8c:
          plVar7 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
          if (plVar7 != (long *)0x0) {
            lVar5 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_01ff3df8;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_00d59724(plVar7,*(long *)
                                          Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                                  ,1);
LAB_01ff3df8:
            uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
            puVar1 = Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__;
            if ((uVar4 & 1) != 0) {
              uVar15 = *(undefined8 *)Method_UnityEngine_Object_FindObjectsOfType<BassGuitar>__;
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              puVar9 = Method_Polenter_Serialization_Core_Binary_IndexGenerator<Type>__ctor__;
              uVar15 = FUN_01780344(uVar15,0);
              lVar5 = *plVar7;
              uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar4 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                    goto Unity_Burst_Intrinsics_Arm_Neon__vqshlh_u16;
                  }
                  uVar4 = uVar4 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
Unity_Burst_Intrinsics_Arm_Neon__vqshlh_u16:
              uVar15 = (*(code *)*puVar6)(plVar7,uVar15,puVar6[1]);
              plVar7 = (long *)thunk_FUN_00d6225c(uVar15,*(undefined8 *)puVar9);
              if (plVar7 != (long *)0x0) {
                lVar11 = *plVar7;
                lVar5 = *(long *)puVar9;
                uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar4 != 0) {
                  piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == lVar5) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                      goto LAB_01ff3f00;
                    }
                    uVar4 = uVar4 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar4 != 0);
                }
                puVar6 = (undefined8 *)FUN_00d59724(plVar7,lVar5,1);
LAB_01ff3f00:
                lVar5 = (*(code *)*puVar6)(plVar7,plVar13,puVar6[1]);
                if ((lVar5 != 0) &&
                   (uVar4 = (**(code **)(*param_1 + 0x8b8))
                                      (param_1,lVar5,*(undefined8 *)(*param_1 + 0x8c0)),
                   lVar14 = lVar5, (uVar4 & 1) == 0)) {
                  lVar14 = param_2;
                }
              }
            }
          }
        }
      }
      return lVar14;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar15 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = StringLiteral_6229;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar15 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  }
  uVar8 = thunk_FUN_00d48444(puVar9);
  FUN_016ec5b8(uVar15,uVar8,0);
  uVar8 = thunk_FUN_00d48444(System_Net_CaseInsensitiveAscii_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar15,uVar8);
}


