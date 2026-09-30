/*
FUNCTION_NAME: Meta.WitAi.Requests.WitUnityRequest$$GetSendError
ENTRY_POINT: 013fdcec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Meta_WitAi_Requests_WitUnityRequest__GetSendError(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined8 *unaff_x22;
  int unaff_w25;
  long *unaff_x27;
  undefined8 uVar21;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
  while( true ) {
    in_stack_00000020 = (long *)CONCAT44(in_stack_00000020._4_4_,param_1);
    uVar13 = FUN_012ddcec();
    if (in_stack_00000078[0x1f] == 0) break;
    FUN_0132138c(in_stack_00000078[0x1f],unaff_w25,&stack0x00000020,*unaff_x22);
    if ((uVar13 & 1) == 0) {
      uVar21 = *unaff_x29;
      if (in_stack_00000020 != (long *)0x0) {
        if (in_stack_00000020 != (long *)0x0) {
          lVar18 = *in_stack_00000020;
          plVar15 = in_stack_00000020;
          goto LAB_013fdd70;
        }
        break;
      }
LAB_013fdd80:
      uVar14 = 0;
    }
    else {
      if (in_stack_00000020 != (long *)0x0) {
        unaff_x27 = in_stack_00000020;
      }
      uVar21 = *(undefined8 *)Meta_WitAi_Json_WitResponseData_TypeInfo;
      if (in_stack_00000020 == (long *)0x0) goto LAB_013fdd80;
      if (unaff_x27 == (long *)0x0) break;
      lVar18 = *unaff_x27;
      plVar15 = unaff_x27;
LAB_013fdd70:
      uVar14 = (**(code **)(lVar18 + 0x168))(plVar15,*(undefined8 *)(lVar18 + 0x170));
    }
    FUN_015f5b28(uVar21,uVar14,0);
    FUN_0160c8e8();
    puVar7 = StringLiteral_302;
    unaff_w25 = unaff_w25 + 1;
    lVar18 = in_stack_00000078[0x1f];
    if (lVar18 == 0) break;
    if (*(int *)(lVar18 + 0x18) <= unaff_w25) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac();
      puVar6 = Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
      puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (in_stack_00000078[4] != 0) {
        iVar9 = FUN_013e8084(in_stack_00000078[4],0);
        if (iVar9 == 0) {
          iVar9 = *(int *)(*(long *)puVar7 + 0xe0);
          puVar16 = (undefined8 *)
                    Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
          ;
          goto joined_r0x013fde6c;
        }
        plVar15 = (long *)FUN_013eae18(in_stack_00000078,0);
        if (plVar15 != (long *)0x0) {
          lVar18 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar13 == 0) goto LAB_013fde4c;
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_013fde34;
        }
      }
      break;
    }
    FUN_0132138c(lVar18,unaff_w25,&stack0x00000020,*unaff_x22);
    if ((in_stack_00000020 == (long *)0x0) ||
       (lVar18 = FUN_0268b334(in_stack_00000020,0), lVar18 == 0)) break;
    param_1 = FUN_02681c0c(lVar18,0);
  }
  goto LAB_013fddb0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar20 = piVar20 + 4;
    if (uVar13 == 0) break;
LAB_013fde34:
    if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
      puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 0x22) * 0x10 + 0x138);
      goto LAB_013fde84;
    }
  }
LAB_013fde4c:
  puVar16 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar6,0x22);
LAB_013fde84:
  uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
  if ((uVar13 & 1) == 0) {
    if (in_stack_00000078[0x21] == 0) goto LAB_013fddb0;
    if (*(int *)(in_stack_00000078[0x21] + 0x18) < 1) goto LAB_013fdf10;
    lVar18 = in_stack_00000078[0x38];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_0268b4e0(lVar18,0,0);
    if ((uVar13 & 1) == 0) {
      if (in_stack_00000078[0x38] == 0) goto LAB_013fddb0;
      iVar9 = FUN_02665480(in_stack_00000078[0x38],0);
      puVar4 = StringLiteral_584;
      puVar3 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__;
      if (iVar9 == (int)in_stack_00000078[0x35]) goto LAB_013fdf10;
      if (in_stack_00000078[0x38] == 0) goto LAB_013fddb0;
      in_stack_00000060._4_4_ = FUN_02665480(in_stack_00000078[0x38],0);
      uVar21 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      uVar14 = FUN_0176eb1c(in_stack_00000078 + 0x35,0);
      uVar19 = *(undefined8 *)puVar3;
      uVar17 = *(undefined8 *)puVar4;
LAB_013fe218:
      uVar21 = FUN_0160073c(uVar19,uVar21,uVar17,uVar14,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
    }
    else {
      iVar9 = *(int *)(*(long *)puVar7 + 0xe0);
      puVar16 = (undefined8 *)
                Method_RuntimeRopeGenerator_<MakeRope>d__2_System_Collections_IEnumerator_Reset__;
joined_r0x013fde6c:
      if (iVar9 == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = *puVar16;
    }
    FUN_026610e4(uVar21,0);
  }
  else {
LAB_013fdf10:
    lVar18 = FUN_013fe968(in_stack_00000078,in_stack_00000010._4_4_);
    if (lVar18 != 0) {
      plVar15 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar15 == (long *)0x0) goto LAB_013fddb0;
      lVar18 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 8) * 0x10 + 0x138);
            goto LAB_013fdfb0;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar6,8);
LAB_013fdfb0:
      uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
      if ((uVar13 & 1) == 0) {
        bVar8 = false;
      }
      else {
        lVar18 = (**(code **)(*in_stack_00000078 + 0x498))
                           (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x4a0));
        if (lVar18 == 0) goto LAB_013fddb0;
        bVar8 = *(int *)(lVar18 + 0x1c) == 1;
      }
      uVar21 = FUN_013eae18(in_stack_00000078,0);
      iVar9 = FUN_01432960(uVar21,1,bVar8,0);
      plVar15 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar15 == (long *)0x0) goto LAB_013fddb0;
      lVar18 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 0x22) * 0x10 + 0x138);
            goto LAB_013fe074;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar6,0x22);
LAB_013fe074:
      uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
      puVar5 = Method_RCG_Lovesick_ControllerMapping_WavelengthRightPressed__;
      puVar4 = System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
      puVar3 = System_Func<string>_TypeInfo;
      if (((uVar13 & 1) == 0) && (iVar2 = (int)in_stack_00000078[0x23], iVar2 != 0)) {
        if (in_stack_00000078[0x21] == 0) goto LAB_013fddb0;
        if ((iVar2 != iVar9) && (0 < *(int *)(in_stack_00000078[0x21] + 0x18))) {
          in_stack_00000020 =
               *(long **)System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
          in_stack_00000028 = (undefined8 *)0xffffffffffffffff;
          in_stack_00000030 = (undefined8 *)CONCAT44(in_stack_00000030._4_4_,iVar2);
          uVar21 = FUN_017a7f78(&stack0x00000020,0);
          in_stack_00000040 = *(undefined8 *)puVar4;
          in_stack_00000048 = 0xffffffffffffffff;
          in_stack_00000050 = iVar9;
          uVar14 = FUN_017a7f78(&stack0x00000040,0);
          uVar19 = *(undefined8 *)puVar5;
          uVar17 = *(undefined8 *)puVar3;
          goto LAB_013fe218;
        }
      }
      plVar15 = (long *)in_stack_00000078[0x39];
      if (plVar15 != (long *)0x0) {
        lVar18 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar13 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__) {
              puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_013fe168;
            }
            uVar13 = uVar13 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar13 != 0);
        }
        puVar16 = (undefined8 *)
                  FUN_00d59724(plVar15,*(long *)Method_EventTriggerTypes_GetSelectedType__,2);
LAB_013fe168:
        uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
        if ((uVar13 & 1) == 0) {
          plVar15 = (long *)in_stack_00000078[0x39];
          if (plVar15 == (long *)0x0) goto LAB_013fddb0;
          lVar18 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
                puVar16 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_013fe258;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar16 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_10310,0);
LAB_013fe258:
          (*(code *)*puVar16)(plVar15,puVar16[1]);
        }
      }
      uVar10 = FUN_013fd0d8(in_stack_00000078);
      uVar11 = (**(code **)(*in_stack_00000078 + 0x4f8))
                         (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x500));
      plVar15 = (long *)FUN_013eae18(in_stack_00000078,0);
      puVar3 = Sirenix_Utilities_ColorExtensions_TypeInfo;
      if (plVar15 == (long *)0x0) {
LAB_013fddb0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar18 + (long)(*piVar20 + 0x16) * 0x10 + 0x138);
            goto LAB_013fe308;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar6,0x16);
LAB_013fe308:
      uVar12 = (*(code *)*puVar16)(plVar15,puVar16[1]);
      uVar1 = uVar10 & 1;
      lVar18 = FUN_013febb4(uVar1,uVar11,uVar12);
      in_stack_00000078[0x3c] = lVar18;
      lVar18 = FUN_013fd194(uVar1);
      in_stack_00000078[0x39] = lVar18;
      in_stack_00000068 = FUN_013fd194(uVar1);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      plVar15 = in_stack_00000078;
      if (lVar18 == 0) goto LAB_013fddb0;
      FUN_017b46ec(lVar18,0);
      *(long **)(lVar18 + 0x10) = plVar15;
      in_stack_00000078[0x3b] = lVar18;
      lVar18 = FUN_013fec8c(in_stack_00000078,uVar1);
      in_stack_00000078[0x3a] = lVar18;
      iVar9 = (**(code **)(*in_stack_00000078 + 0x4f8))
                        (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x500));
      puVar3 = Method_UnityEngine_Resources_Load<UIZoneLibrary>__;
      puVar16 = (undefined8 *)Method_Newtonsoft_Json_JsonValidatingReader_ValidateCurrentToken__;
      if (3 < iVar9) {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((uVar10 & 1) == 0) {
          puVar16 = (undefined8 *)puVar3;
        }
        FUN_02660dac(*puVar16,0);
      }
      in_stack_00000028 = &stack0x00000078;
      in_stack_00000030 = &stack0x00000068;
      in_stack_00000020 = (long *)0x0;
      in_stack_00000038 = &stack0x00000058;
      uVar10 = Meta_WitAi_Events_AudioBufferEvents_OnSampleReadyEvent__Invoke(in_stack_00000078);
      FUN_00bbd988(&stack0x00000020);
      goto LAB_013fdf7c;
    }
  }
  uVar10 = 0;
LAB_013fdf7c:
  return uVar10 & 1;
}


