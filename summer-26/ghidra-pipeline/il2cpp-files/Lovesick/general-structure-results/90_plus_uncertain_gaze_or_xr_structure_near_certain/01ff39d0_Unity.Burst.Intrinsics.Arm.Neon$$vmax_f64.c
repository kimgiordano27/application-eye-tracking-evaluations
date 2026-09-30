/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmax_f64
ENTRY_POINT: 01ff39d0
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

long Unity_Burst_Intrinsics_Arm_Neon__vmax_f64(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x25;
  char cStack000000000000000c;
  undefined *puVar8;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0x846) = 1;
  }
  cStack000000000000000c = '\0';
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01789ac0();
  if ((uVar3 & 1) == 0) {
    if (unaff_x19 != 0) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = (**(code **)(*unaff_x20 + 0x8b8))();
      puVar8 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      lVar13 = unaff_x19;
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar8;
        }
        plVar12 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x18);
        thunk_FUN_00d8e500();
        if ((plVar12 != (long *)0x0) &&
           (lVar4 = (**(code **)(*plVar12 + 0x308))(plVar12),
           puVar8 = System_Xml_Schema_Datatype_NOTATION_TypeInfo, lVar4 != 0)) {
          uVar14 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
          plVar12 = (long *)thunk_FUN_00d6225c(lVar4,uVar14);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(lVar4,uVar14);
          }
          cStack000000000000000c = '\0';
          FUN_017d75a8(plVar12,&stack0x0000000c,0);
          lVar4 = *plVar12;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_01ff3b70;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_00d59724(plVar12,*(long *)
                                         System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                                ,1);
LAB_01ff3b70:
          iVar2 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
          lVar4 = unaff_x19;
          while (lVar10 = lVar4, iVar2 = iVar2 + -1, -1 < iVar2) {
            lVar9 = *plVar12;
            lVar4 = *(long *)puVar8;
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar4) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01ff3bdc;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_00d59724(plVar12,lVar4,0);
LAB_01ff3bdc:
            plVar6 = (long *)(*(code *)*puVar5)(plVar12,iVar2,puVar5[1]);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar4 = *(long *)puVar1;
            if ((*(byte *)(*plVar6 + 300) < *(byte *)(lVar4 + 300)) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar4 + 300) * 8 + -8) !=
                lVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
            lVar9 = *plVar6;
            if ((*(byte *)(lVar9 + 300) < *(byte *)(lVar4 + 300)) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar4 + 300) * 8 + -8) != lVar4)
               ) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
            lVar4 = (**(code **)(lVar9 + 0x198))(plVar6,*(undefined8 *)(lVar9 + 0x1a0));
            if (lVar4 == 0) {
              lVar9 = *plVar12;
              lVar4 = *(long *)puVar8;
              uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar3 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar4) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
                    goto LAB_01ff3cc8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_00d59724(plVar12,lVar4,10);
LAB_01ff3cc8:
              (*(code *)*puVar5)(plVar12,iVar2,puVar5[1]);
              lVar4 = lVar10;
            }
            else {
              uVar3 = (**(code **)(*unaff_x20 + 0x8b8))();
              if ((uVar3 & 1) == 0) {
                lVar4 = lVar10;
              }
            }
          }
          if (cStack000000000000000c != '\0') {
            thunk_FUN_00d56f10(plVar12,0);
          }
          if (lVar10 != unaff_x19) {
            return lVar10;
          }
        }
        puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
        plVar12 = (long *)thunk_FUN_00d6225c();
        if (plVar12 != (long *)0x0) {
          lVar4 = *plVar12;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar8) {
                puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_01ff3d8c;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_01ff3d8c:
          plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
          if (plVar6 != (long *)0x0) {
            lVar4 = *plVar6;
            uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar3 != 0) {
              piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_01ff3df8;
                }
                uVar3 = uVar3 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_00d59724(plVar6,*(long *)
                                          Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                                  ,1);
LAB_01ff3df8:
            uVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            puVar8 = Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__;
            if ((uVar3 & 1) != 0) {
              uVar14 = *(undefined8 *)Method_UnityEngine_Object_FindObjectsOfType<BassGuitar>__;
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              puVar1 = Method_Polenter_Serialization_Core_Binary_IndexGenerator<Type>__ctor__;
              uVar14 = FUN_01780344(uVar14,0);
              lVar4 = *plVar6;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar3 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar8) {
                    puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                    goto Unity_Burst_Intrinsics_Arm_Neon__vqshlh_u16;
                  }
                  uVar3 = uVar3 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar8,0);
Unity_Burst_Intrinsics_Arm_Neon__vqshlh_u16:
              uVar14 = (*(code *)*puVar5)(plVar6,uVar14,puVar5[1]);
              plVar6 = (long *)thunk_FUN_00d6225c(uVar14,*(undefined8 *)puVar1);
              if (plVar6 != (long *)0x0) {
                lVar10 = *plVar6;
                lVar4 = *(long *)puVar1;
                uVar3 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar3 != 0) {
                  piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar4) {
                      puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_01ff3f00;
                    }
                    uVar3 = uVar3 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar3 != 0);
                }
                puVar5 = (undefined8 *)FUN_00d59724(plVar6,lVar4,1);
LAB_01ff3f00:
                lVar4 = (*(code *)*puVar5)(plVar6,plVar12,puVar5[1]);
                if ((lVar4 != 0) &&
                   (uVar3 = (**(code **)(*unaff_x20 + 0x8b8))(), lVar13 = lVar4, (uVar3 & 1) == 0))
                {
                  lVar13 = unaff_x19;
                }
              }
            }
          }
        }
      }
      return lVar13;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = StringLiteral_6229;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar8 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  }
  uVar7 = thunk_FUN_00d48444(puVar8);
  FUN_016ec5b8(uVar14,uVar7,0);
  uVar7 = thunk_FUN_00d48444(System_Net_CaseInsensitiveAscii_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar14,uVar7);
}


