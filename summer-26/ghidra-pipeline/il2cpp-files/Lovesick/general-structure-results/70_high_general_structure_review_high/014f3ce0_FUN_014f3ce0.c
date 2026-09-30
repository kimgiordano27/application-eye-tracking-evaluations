/*
FUNCTION_NAME: FUN_014f3ce0
ENTRY_POINT: 014f3ce0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_014f3ce0(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  ushort local_70 [2];
  undefined2 local_6c [2];
  long *local_68;
  undefined *puVar11;
  
  puVar11 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  if ((DAT_0377702a & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6140);
    thunk_FUN_00d48444(StringLiteral_917);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ObiSolver>_get_Current__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000C50_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1e30);
    thunk_FUN_00d48444(PTR_DAT_033ead30);
    thunk_FUN_00d48444(System_Runtime_Serialization_SerializationInfo_var);
    thunk_FUN_00d48444(StringLiteral_6631);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10218);
    thunk_FUN_00d48444(Method_Mono_Math_BigInteger_op_Multiply__);
    DAT_0377702a = 1;
  }
  local_6c[0] = 0;
  local_70[0] = 0;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar11);
  if ((lVar6 == 0) ||
     (FUN_013b0f04(lVar6,*(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000C50_PostfixBurstDelegate_var
                  ),
     puVar4 = 
     Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
     , puVar3 = Newtonsoft_Json_JsonReader_State_TypeInfo, puVar11 = PTR_DAT_033f6140, param_1 == 0)
     ) {
LAB_014f4450:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    plVar13 = (long *)0x0;
  }
  else {
    lVar16 = *(long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    bVar2 = false;
    iVar14 = 0;
    plVar13 = (long *)0x0;
    lVar9 = lVar16;
    plVar17 = (long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    do {
      uVar5 = FUN_015fa29c(param_1,iVar14,0);
      iVar15 = iVar14;
      if (uVar5 < 0x2d) {
        if (uVar5 < 0x21) {
          if (uVar5 < 0xd) {
            if (uVar5 == 9) {
LAB_014f404c:
              if (bVar2) goto LAB_014f4178;
              bVar2 = false;
            }
            else if (uVar5 != 10) goto LAB_014f4120;
          }
          else if (uVar5 != 0xd) {
            if (uVar5 != 0x20) goto LAB_014f4120;
            goto LAB_014f404c;
          }
          goto LAB_014f43e8;
        }
        if (uVar5 == 0x22) {
          bVar2 = (bool)(bVar2 ^ 1);
          goto LAB_014f43e8;
        }
        if (uVar5 != 0x2c) goto LAB_014f4120;
        if (bVar2) goto LAB_014f4178;
        uVar7 = FUN_015fe7e8(lVar9,*plVar17,0);
        if ((uVar7 & 1) != 0) {
          if (plVar13 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 300);
            if ((bVar1 <= *(byte *)(*plVar13 + 300)) &&
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
              uVar8 = FUN_014f4cac(lVar9);
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x208))(plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x210));
                goto LAB_014f43dc;
              }
              goto LAB_014f4450;
            }
          }
          uVar7 = FUN_015fe7e8(lVar16,*plVar17,0);
          if ((uVar7 & 1) != 0) {
            uVar8 = FUN_014f4cac(lVar9);
            if (plVar13 == (long *)0x0) goto LAB_014f4450;
            (**(code **)(*plVar13 + 0x178))(plVar13,lVar16,uVar8,*(undefined8 *)(*plVar13 + 0x180));
          }
        }
LAB_014f43dc:
        lVar16 = *plVar17;
LAB_014f43e0:
        bVar2 = false;
        lVar9 = lVar16;
      }
      else {
        if (0x5d < uVar5) {
          if (uVar5 == 0x7d) {
LAB_014f4068:
            if (bVar2) goto LAB_014f4178;
            if (*(int *)(lVar6 + 0x18) == 0) {
              thunk_FUN_00d48444(Method_System_Collections_Generic_List<TuneTarget>_Add__);
              uVar8 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              puVar11 = 
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093C_PostfixBurstDelegate_var
              ;
              goto LAB_014f4474;
            }
            FUN_013b1910(lVar6,&local_68,*(undefined8 *)StringLiteral_917);
            uVar7 = FUN_015fe7e8(lVar9,*plVar17,0);
            if ((uVar7 & 1) != 0) {
              if (lVar16 == 0) goto LAB_014f4450;
              uVar8 = FUN_01604318(lVar16,0);
              if (plVar13 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar4 + 300);
                if ((bVar1 <= *(byte *)(*plVar13 + 300)) &&
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)
                   ) {
                  uVar8 = FUN_014f4cac(lVar9);
                  if (plVar13 != (long *)0x0) {
                    (**(code **)(*plVar13 + 0x208))(plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x210))
                    ;
                    goto LAB_014f42e8;
                  }
                  goto LAB_014f4450;
                }
              }
              uVar7 = FUN_015fe7e8(uVar8,*plVar17,0);
              if ((uVar7 & 1) != 0) {
                uVar10 = FUN_014f4cac(lVar9);
                if (plVar13 == (long *)0x0) goto LAB_014f4450;
                (**(code **)(*plVar13 + 0x178))
                          (plVar13,uVar8,uVar10,*(undefined8 *)(*plVar13 + 0x180));
              }
            }
LAB_014f42e8:
            lVar16 = *plVar17;
            if (*(int *)(lVar6 + 0x18) < 1) goto LAB_014f43e0;
          }
          else {
            if (uVar5 != 0x7b) goto LAB_014f4120;
            if (bVar2) goto LAB_014f4178;
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1e30);
            if (lVar9 == 0) goto LAB_014f4450;
            FUN_014f54a8();
LAB_014f3f8c:
            FUN_013b1b6c(lVar6,lVar9,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ObiSolver>_get_Current__
                        );
            uVar7 = FUN_014f4d4c(plVar13,0);
            if ((uVar7 & 1) == 0) {
              if (lVar16 == 0) goto LAB_014f4450;
              uVar8 = FUN_01604318(lVar16,0);
              if (plVar13 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar4 + 300);
                if ((bVar1 <= *(byte *)(*plVar13 + 300)) &&
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)
                   ) {
                  FUN_013b17d4(lVar6,&local_68,*(undefined8 *)puVar11);
                  if (plVar13 != (long *)0x0) {
                    (**(code **)(*plVar13 + 0x208))
                              (plVar13,local_68,*(undefined8 *)(*plVar13 + 0x210));
                    goto LAB_014f42bc;
                  }
                  goto LAB_014f4450;
                }
              }
              uVar7 = FUN_015fe7e8(uVar8,*plVar17,0);
              if ((uVar7 & 1) != 0) {
                FUN_013b17d4(lVar6,&local_68,*(undefined8 *)puVar11);
                if (plVar13 == (long *)0x0) goto LAB_014f4450;
                (**(code **)(*plVar13 + 0x178))
                          (plVar13,uVar8,local_68,*(undefined8 *)(*plVar13 + 0x180));
              }
            }
LAB_014f42bc:
            lVar16 = *plVar17;
          }
          FUN_013b17d4(lVar6,&local_68,*(undefined8 *)puVar11);
          plVar13 = local_68;
          goto LAB_014f43e0;
        }
        if (uVar5 < 0x5c) {
          if (uVar5 == 0x3a) {
            if (!bVar2) {
              bVar2 = false;
              lVar16 = lVar9;
              lVar9 = *plVar17;
              goto LAB_014f43e8;
            }
          }
          else {
            if (uVar5 != 0x5b) goto LAB_014f4120;
            if (!bVar2) {
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              if (lVar9 != 0) {
                FUN_014f5524();
                goto LAB_014f3f8c;
              }
              goto LAB_014f4450;
            }
          }
LAB_014f4178:
          local_6c[0] = FUN_015fa29c(param_1,iVar14,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar8 = FUN_016e8b00(local_6c,0);
          lVar9 = FUN_015f5b28(lVar9,uVar8,0);
          bVar2 = true;
          goto LAB_014f43e8;
        }
        if (uVar5 != 0x5c) {
          if (uVar5 == 0x5d) goto LAB_014f4068;
LAB_014f4120:
          local_6c[0] = FUN_015fa29c(param_1,iVar14,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar8 = FUN_016e8b00(local_6c,0);
          lVar9 = FUN_015f5b28(lVar9,uVar8,0);
          goto LAB_014f43e8;
        }
        iVar15 = iVar14 + 1;
        if (!bVar2) {
          bVar2 = false;
          plVar17 = (long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
          goto LAB_014f43e8;
        }
        local_70[0] = FUN_015fa29c(param_1,iVar15,0);
        if (local_70[0] < 0x67) {
          puVar12 = (undefined8 *)System_Runtime_Serialization_SerializationInfo_var;
          if ((local_70[0] != 0x62) &&
             (puVar12 = (undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__, local_70[0] != 0x66
             )) goto switchD_014f4250_caseD_6f;
          goto LAB_014f4324;
        }
        switch(local_70[0]) {
        case 0x6e:
          puVar12 = (undefined8 *)PTR_DAT_033ead30;
          break;
        default:
switchD_014f4250_caseD_6f:
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_016e8b00(local_70,0);
          goto LAB_014f4328;
        case 0x72:
          puVar12 = (undefined8 *)StringLiteral_10218;
          break;
        case 0x74:
          puVar12 = (undefined8 *)StringLiteral_6631;
          break;
        case 0x75:
          uVar8 = FUN_01601d40(param_1,iVar14 + 2,4,0);
          local_6c[0] = FUN_0176ef0c(uVar8,0x200,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar8 = FUN_016e8b00(local_6c,0);
          lVar9 = FUN_015f5b28(lVar9,uVar8,0);
          iVar15 = iVar14 + 5;
          bVar2 = true;
          plVar17 = (long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
          goto LAB_014f43e8;
        }
LAB_014f4324:
        uVar8 = *puVar12;
LAB_014f4328:
        lVar9 = FUN_015f5b28(lVar9,uVar8,0);
        bVar2 = true;
        plVar17 = (long *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
      }
LAB_014f43e8:
      iVar14 = iVar15 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x10));
    if (bVar2) {
      thunk_FUN_00d48444(Method_System_Collections_Generic_List<TuneTarget>_Add__);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar11 = Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__;
LAB_014f4474:
      uVar10 = thunk_FUN_00d48444(puVar11);
      FUN_014f55a0(uVar8,uVar10);
      uVar10 = thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar8,uVar10);
    }
  }
  return plVar13;
}


