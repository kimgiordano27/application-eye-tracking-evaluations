/*
FUNCTION_NAME: Meta.WitAi.Requests.WitUnityRequest$$SetState
ENTRY_POINT: 013fdc88
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


uint Meta_WitAi_Requests_WitUnityRequest__SetState(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
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
  
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_Delegate>_Remove__;
  lVar13 = *(long *)(param_1 + 0xf8);
  if (lVar13 != 0) {
    iVar10 = 0;
    plVar21 = (long *)0x0;
    while (puVar7 = StringLiteral_302, iVar10 < *(int *)(lVar13 + 0x18)) {
      FUN_0132138c(lVar13,iVar10,&stack0x00000020,*(undefined8 *)puVar5);
      if ((in_stack_00000020 == (long *)0x0) ||
         (lVar13 = FUN_0268b334(in_stack_00000020,0), lVar13 == 0)) goto LAB_013fddb0;
      uVar9 = FUN_02681c0c(lVar13,0);
      in_stack_00000020 = (long *)CONCAT44(in_stack_00000020._4_4_,uVar9);
      uVar14 = FUN_012ddcec();
      if (in_stack_00000078[0x1f] == 0) goto LAB_013fddb0;
      FUN_0132138c(in_stack_00000078[0x1f],iVar10,&stack0x00000020,*(undefined8 *)puVar5);
      if ((uVar14 & 1) == 0) {
        uVar22 = *(undefined8 *)puVar3;
        if (in_stack_00000020 != (long *)0x0) {
          if (in_stack_00000020 != (long *)0x0) {
            lVar13 = *in_stack_00000020;
            plVar15 = in_stack_00000020;
            goto LAB_013fdd70;
          }
          goto LAB_013fddb0;
        }
LAB_013fdd80:
        uVar16 = 0;
      }
      else {
        if (in_stack_00000020 != (long *)0x0) {
          plVar21 = in_stack_00000020;
        }
        uVar22 = *(undefined8 *)Meta_WitAi_Json_WitResponseData_TypeInfo;
        if (in_stack_00000020 == (long *)0x0) goto LAB_013fdd80;
        if (plVar21 == (long *)0x0) goto LAB_013fddb0;
        lVar13 = *plVar21;
        plVar15 = plVar21;
LAB_013fdd70:
        uVar16 = (**(code **)(lVar13 + 0x168))(plVar15,*(undefined8 *)(lVar13 + 0x170));
      }
      FUN_015f5b28(uVar22,uVar16,0);
      FUN_0160c8e8();
      iVar10 = iVar10 + 1;
      lVar13 = in_stack_00000078[0x1f];
      if (lVar13 == 0) goto LAB_013fddb0;
    }
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac();
    puVar5 = Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
    puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (in_stack_00000078[4] != 0) {
      iVar10 = FUN_013e8084(in_stack_00000078[4],0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(*(long *)puVar7 + 0xe0);
        puVar17 = (undefined8 *)
                  Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
        ;
        goto joined_r0x013fde6c;
      }
      plVar21 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar21 != (long *)0x0) {
        lVar13 = *plVar21;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 == 0) goto LAB_013fde4c;
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_013fde34;
      }
    }
  }
  goto LAB_013fddb0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar20 = piVar20 + 4;
    if (uVar14 == 0) break;
LAB_013fde34:
    if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
      puVar17 = (undefined8 *)(lVar13 + (long)(*piVar20 + 0x22) * 0x10 + 0x138);
      goto LAB_013fde84;
    }
  }
LAB_013fde4c:
  puVar17 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar5,0x22);
LAB_013fde84:
  uVar14 = (*(code *)*puVar17)(plVar21,puVar17[1]);
  if ((uVar14 & 1) == 0) {
    if (in_stack_00000078[0x21] == 0) goto LAB_013fddb0;
    if (*(int *)(in_stack_00000078[0x21] + 0x18) < 1) goto LAB_013fdf10;
    lVar13 = in_stack_00000078[0x38];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_0268b4e0(lVar13,0,0);
    if ((uVar14 & 1) == 0) {
      if (in_stack_00000078[0x38] == 0) goto LAB_013fddb0;
      iVar10 = FUN_02665480(in_stack_00000078[0x38],0);
      puVar4 = StringLiteral_584;
      puVar3 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__;
      if (iVar10 == (int)in_stack_00000078[0x35]) goto LAB_013fdf10;
      if (in_stack_00000078[0x38] == 0) goto LAB_013fddb0;
      in_stack_00000060._4_4_ = FUN_02665480(in_stack_00000078[0x38],0);
      uVar22 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      uVar16 = FUN_0176eb1c(in_stack_00000078 + 0x35,0);
      uVar19 = *(undefined8 *)puVar3;
      uVar18 = *(undefined8 *)puVar4;
LAB_013fe218:
      uVar22 = FUN_0160073c(uVar19,uVar22,uVar18,uVar16,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
    }
    else {
      iVar10 = *(int *)(*(long *)puVar7 + 0xe0);
      puVar17 = (undefined8 *)
                Method_RuntimeRopeGenerator_<MakeRope>d__2_System_Collections_IEnumerator_Reset__;
joined_r0x013fde6c:
      if (iVar10 == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = *puVar17;
    }
    FUN_026610e4(uVar22,0);
  }
  else {
LAB_013fdf10:
    lVar13 = FUN_013fe968(in_stack_00000078,in_stack_00000010._4_4_);
    if (lVar13 != 0) {
      plVar21 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar21 == (long *)0x0) goto LAB_013fddb0;
      lVar13 = *plVar21;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
            puVar17 = (undefined8 *)(lVar13 + (long)(*piVar20 + 8) * 0x10 + 0x138);
            goto LAB_013fdfb0;
          }
          uVar14 = uVar14 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar5,8);
LAB_013fdfb0:
      uVar14 = (*(code *)*puVar17)(plVar21,puVar17[1]);
      if ((uVar14 & 1) == 0) {
        bVar8 = false;
      }
      else {
        lVar13 = (**(code **)(*in_stack_00000078 + 0x498))
                           (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x4a0));
        if (lVar13 == 0) goto LAB_013fddb0;
        bVar8 = *(int *)(lVar13 + 0x1c) == 1;
      }
      uVar22 = FUN_013eae18(in_stack_00000078,0);
      iVar10 = FUN_01432960(uVar22,1,bVar8,0);
      plVar21 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar21 == (long *)0x0) goto LAB_013fddb0;
      lVar13 = *plVar21;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
            puVar17 = (undefined8 *)(lVar13 + (long)(*piVar20 + 0x22) * 0x10 + 0x138);
            goto LAB_013fe074;
          }
          uVar14 = uVar14 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar5,0x22);
LAB_013fe074:
      uVar14 = (*(code *)*puVar17)(plVar21,puVar17[1]);
      puVar6 = Method_RCG_Lovesick_ControllerMapping_WavelengthRightPressed__;
      puVar4 = System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
      puVar3 = System_Func<string>_TypeInfo;
      if (((uVar14 & 1) == 0) && (iVar2 = (int)in_stack_00000078[0x23], iVar2 != 0)) {
        if (in_stack_00000078[0x21] == 0) goto LAB_013fddb0;
        if ((iVar2 != iVar10) && (0 < *(int *)(in_stack_00000078[0x21] + 0x18))) {
          in_stack_00000020 =
               *(long **)System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
          in_stack_00000028 = (undefined8 *)0xffffffffffffffff;
          in_stack_00000030 = (undefined8 *)CONCAT44(in_stack_00000030._4_4_,iVar2);
          uVar22 = FUN_017a7f78(&stack0x00000020,0);
          in_stack_00000040 = *(undefined8 *)puVar4;
          in_stack_00000048 = 0xffffffffffffffff;
          in_stack_00000050 = iVar10;
          uVar16 = FUN_017a7f78(&stack0x00000040,0);
          uVar19 = *(undefined8 *)puVar6;
          uVar18 = *(undefined8 *)puVar3;
          goto LAB_013fe218;
        }
      }
      plVar21 = (long *)in_stack_00000078[0x39];
      if (plVar21 != (long *)0x0) {
        lVar13 = *plVar21;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__) {
              puVar17 = (undefined8 *)(lVar13 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_013fe168;
            }
            uVar14 = uVar14 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar14 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_00d59724(plVar21,*(long *)Method_EventTriggerTypes_GetSelectedType__,2);
LAB_013fe168:
        uVar14 = (*(code *)*puVar17)(plVar21,puVar17[1]);
        if ((uVar14 & 1) == 0) {
          plVar21 = (long *)in_stack_00000078[0x39];
          if (plVar21 == (long *)0x0) goto LAB_013fddb0;
          lVar13 = *plVar21;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
                puVar17 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_013fe258;
              }
              uVar14 = uVar14 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar14 != 0);
          }
          puVar17 = (undefined8 *)FUN_00d59724(plVar21,*(long *)StringLiteral_10310,0);
LAB_013fe258:
          (*(code *)*puVar17)(plVar21,puVar17[1]);
        }
      }
      uVar11 = FUN_013fd0d8(in_stack_00000078);
      uVar9 = (**(code **)(*in_stack_00000078 + 0x4f8))
                        (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x500));
      plVar21 = (long *)FUN_013eae18(in_stack_00000078,0);
      puVar3 = Sirenix_Utilities_ColorExtensions_TypeInfo;
      if (plVar21 == (long *)0x0) {
LAB_013fddb0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar13 = *plVar21;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
            puVar17 = (undefined8 *)(lVar13 + (long)(*piVar20 + 0x16) * 0x10 + 0x138);
            goto LAB_013fe308;
          }
          uVar14 = uVar14 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)FUN_00d59724(plVar21,*(long *)puVar5,0x16);
LAB_013fe308:
      uVar12 = (*(code *)*puVar17)(plVar21,puVar17[1]);
      uVar1 = uVar11 & 1;
      lVar13 = FUN_013febb4(uVar1,uVar9,uVar12);
      in_stack_00000078[0x3c] = lVar13;
      lVar13 = FUN_013fd194(uVar1);
      in_stack_00000078[0x39] = lVar13;
      in_stack_00000068 = FUN_013fd194(uVar1);
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      plVar21 = in_stack_00000078;
      if (lVar13 == 0) goto LAB_013fddb0;
      FUN_017b46ec(lVar13,0);
      *(long **)(lVar13 + 0x10) = plVar21;
      in_stack_00000078[0x3b] = lVar13;
      lVar13 = FUN_013fec8c(in_stack_00000078,uVar1);
      in_stack_00000078[0x3a] = lVar13;
      iVar10 = (**(code **)(*in_stack_00000078 + 0x4f8))
                         (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x500));
      puVar3 = Method_UnityEngine_Resources_Load<UIZoneLibrary>__;
      puVar17 = (undefined8 *)Method_Newtonsoft_Json_JsonValidatingReader_ValidateCurrentToken__;
      if (3 < iVar10) {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((uVar11 & 1) == 0) {
          puVar17 = (undefined8 *)puVar3;
        }
        FUN_02660dac(*puVar17,0);
      }
      in_stack_00000028 = &stack0x00000078;
      in_stack_00000030 = &stack0x00000068;
      in_stack_00000020 = (long *)0x0;
      in_stack_00000038 = &stack0x00000058;
      uVar11 = Meta_WitAi_Events_AudioBufferEvents_OnSampleReadyEvent__Invoke(in_stack_00000078);
      FUN_00bbd988(&stack0x00000020);
      goto LAB_013fdf7c;
    }
  }
  uVar11 = 0;
LAB_013fdf7c:
  return uVar11 & 1;
}


