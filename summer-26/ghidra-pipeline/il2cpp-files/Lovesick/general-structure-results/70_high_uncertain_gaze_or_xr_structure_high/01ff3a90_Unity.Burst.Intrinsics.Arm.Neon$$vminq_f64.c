/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vminq_f64
ENTRY_POINT: 01ff3a90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ff3d18) */
/* WARNING: Removing unreachable block (ram,0x01ff3fec) */

long Unity_Burst_Intrinsics_Arm_Neon__vminq_f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  uVar4 = (**(code **)(param_1 + 0x8b8))(param_2,param_3,*(undefined8 *)(param_1 + 0x8c0));
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar12 = unaff_x19;
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    plVar11 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x18);
    thunk_FUN_00d8e500();
    if ((plVar11 != (long *)0x0) &&
       (lVar5 = (**(code **)(*plVar11 + 0x308))(plVar11),
       puVar1 = System_Xml_Schema_Datatype_NOTATION_TypeInfo, lVar5 != 0)) {
      uVar13 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
      plVar11 = (long *)thunk_FUN_00d6225c(lVar5,uVar13);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar5,uVar13);
      }
      in_stack_00000008._4_1_ = '\0';
      FUN_017d75a8(plVar11,(long)&stack0x00000008 + 4,0);
      lVar5 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01ff3b70;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)
                                     System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                            ,1);
LAB_01ff3b70:
      iVar3 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
      lVar5 = unaff_x19;
      while (lVar9 = lVar5, iVar3 = iVar3 + -1, -1 < iVar3) {
        lVar8 = *plVar11;
        lVar5 = *(long *)puVar1;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01ff3bdc;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar11,lVar5,0);
LAB_01ff3bdc:
        plVar7 = (long *)(*(code *)*puVar6)(plVar11,iVar3,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)puVar2;
        if ((*(byte *)(*plVar7 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        lVar8 = *plVar7;
        if ((*(byte *)(lVar8 + 300) < *(byte *)(lVar5 + 300)) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        lVar5 = (**(code **)(lVar8 + 0x198))(plVar7,*(undefined8 *)(lVar8 + 0x1a0));
        if (lVar5 == 0) {
          lVar8 = *plVar11;
          lVar5 = *(long *)puVar1;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                goto LAB_01ff3cc8;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(plVar11,lVar5,10);
LAB_01ff3cc8:
          (*(code *)*puVar6)(plVar11,iVar3,puVar6[1]);
          lVar5 = lVar9;
        }
        else {
          uVar4 = (**(code **)(*unaff_x20 + 0x8b8))();
          if ((uVar4 & 1) == 0) {
            lVar5 = lVar9;
          }
        }
      }
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_00d56f10(plVar11,0);
      }
      if (lVar9 != unaff_x19) {
        return lVar9;
      }
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
    plVar11 = (long *)thunk_FUN_00d6225c();
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01ff3d8c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,0);
LAB_01ff3d8c:
      plVar7 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_01ff3df8;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
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
          uVar13 = *(undefined8 *)Method_UnityEngine_Object_FindObjectsOfType<BassGuitar>__;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar2 = Method_Polenter_Serialization_Core_Binary_IndexGenerator<Type>__ctor__;
          uVar13 = FUN_01780344(uVar13,0);
          lVar5 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto Unity_Burst_Intrinsics_Arm_Neon__vqshlh_u16;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
Unity_Burst_Intrinsics_Arm_Neon__vqshlh_u16:
          uVar13 = (*(code *)*puVar6)(plVar7,uVar13,puVar6[1]);
          plVar7 = (long *)thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar2);
          if (plVar7 != (long *)0x0) {
            lVar9 = *plVar7;
            lVar5 = *(long *)puVar2;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar5) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_01ff3f00;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar7,lVar5,1);
LAB_01ff3f00:
            lVar5 = (*(code *)*puVar6)(plVar7,plVar11,puVar6[1]);
            if ((lVar5 != 0) &&
               (uVar4 = (**(code **)(*unaff_x20 + 0x8b8))(), lVar12 = lVar5, (uVar4 & 1) == 0)) {
              lVar12 = unaff_x19;
            }
          }
        }
      }
    }
  }
  return lVar12;
}


