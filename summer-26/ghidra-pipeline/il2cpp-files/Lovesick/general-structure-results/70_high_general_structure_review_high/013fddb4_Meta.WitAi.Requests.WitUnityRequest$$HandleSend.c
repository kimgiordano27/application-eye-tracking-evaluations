/*
FUNCTION_NAME: Meta.WitAi.Requests.WitUnityRequest$$HandleSend
ENTRY_POINT: 013fddb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Meta_WitAi_Requests_WitUnityRequest__HandleSend(void)

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
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
  puVar7 = StringLiteral_302;
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02660dac();
  puVar6 = Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__;
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (in_stack_00000078[4] == 0) goto LAB_013fddb0;
  iVar9 = FUN_013e8084(in_stack_00000078[4],0);
  if (iVar9 == 0) {
    iVar9 = *(int *)(*(long *)puVar7 + 0xe0);
    puVar15 = (undefined8 *)
              Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
    ;
joined_r0x013fde6c:
    if (iVar9 == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = *puVar15;
LAB_013fd624:
    FUN_026610e4(uVar13,0);
  }
  else {
    plVar14 = (long *)FUN_013eae18(in_stack_00000078,0);
    if (plVar14 == (long *)0x0) goto LAB_013fddb0;
    lVar18 = *plVar14;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
          puVar15 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
          goto LAB_013fde84;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar6,0x22);
LAB_013fde84:
    uVar20 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    if ((uVar20 & 1) == 0) {
      if (in_stack_00000078[0x21] == 0) goto LAB_013fddb0;
      if (*(int *)(in_stack_00000078[0x21] + 0x18) < 1) goto LAB_013fdf10;
      lVar18 = in_stack_00000078[0x38];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_0268b4e0(lVar18,0,0);
      if ((uVar20 & 1) != 0) {
        iVar9 = *(int *)(*(long *)puVar7 + 0xe0);
        puVar15 = (undefined8 *)
                  Method_RuntimeRopeGenerator_<MakeRope>d__2_System_Collections_IEnumerator_Reset__;
        goto joined_r0x013fde6c;
      }
      if (in_stack_00000078[0x38] == 0) goto LAB_013fddb0;
      iVar9 = FUN_02665480(in_stack_00000078[0x38],0);
      puVar4 = StringLiteral_584;
      puVar3 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__;
      if (iVar9 == (int)in_stack_00000078[0x35]) goto LAB_013fdf10;
      if (in_stack_00000078[0x38] == 0) goto LAB_013fddb0;
      in_stack_00000060._4_4_ = FUN_02665480(in_stack_00000078[0x38],0);
      uVar13 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      uVar16 = FUN_0176eb1c(in_stack_00000078 + 0x35,0);
      uVar19 = *(undefined8 *)puVar3;
      uVar17 = *(undefined8 *)puVar4;
LAB_013fe218:
      uVar13 = FUN_0160073c(uVar19,uVar13,uVar17,uVar16,0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar7);
      }
      goto LAB_013fd624;
    }
LAB_013fdf10:
    lVar18 = FUN_013fe968(in_stack_00000078,in_stack_00000010._4_4_);
    if (lVar18 != 0) {
      plVar14 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar14 == (long *)0x0) goto LAB_013fddb0;
      lVar18 = *plVar14;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar21 + 8) * 0x10 + 0x138);
            goto LAB_013fdfb0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar6,8);
LAB_013fdfb0:
      uVar20 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if ((uVar20 & 1) == 0) {
        bVar8 = false;
      }
      else {
        lVar18 = (**(code **)(*in_stack_00000078 + 0x498))
                           (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x4a0));
        if (lVar18 == 0) goto LAB_013fddb0;
        bVar8 = *(int *)(lVar18 + 0x1c) == 1;
      }
      uVar13 = FUN_013eae18(in_stack_00000078,0);
      iVar9 = FUN_01432960(uVar13,1,bVar8,0);
      plVar14 = (long *)FUN_013eae18(in_stack_00000078,0);
      if (plVar14 == (long *)0x0) goto LAB_013fddb0;
      lVar18 = *plVar14;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
            goto LAB_013fe074;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar6,0x22);
LAB_013fe074:
      uVar20 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      puVar5 = Method_RCG_Lovesick_ControllerMapping_WavelengthRightPressed__;
      puVar4 = System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
      puVar3 = System_Func<string>_TypeInfo;
      if (((uVar20 & 1) == 0) && (iVar2 = (int)in_stack_00000078[0x23], iVar2 != 0)) {
        if (in_stack_00000078[0x21] == 0) goto LAB_013fddb0;
        if ((iVar2 != iVar9) && (0 < *(int *)(in_stack_00000078[0x21] + 0x18))) {
          in_stack_00000020 =
               *(undefined8 *)
                System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
          in_stack_00000028 = (undefined8 *)0xffffffffffffffff;
          in_stack_00000030 = (undefined8 *)CONCAT44(in_stack_00000030._4_4_,iVar2);
          uVar13 = FUN_017a7f78(&stack0x00000020,0);
          in_stack_00000040 = *(undefined8 *)puVar4;
          in_stack_00000048 = 0xffffffffffffffff;
          in_stack_00000050 = iVar9;
          uVar16 = FUN_017a7f78(&stack0x00000040,0);
          uVar19 = *(undefined8 *)puVar5;
          uVar17 = *(undefined8 *)puVar3;
          goto LAB_013fe218;
        }
      }
      plVar14 = (long *)in_stack_00000078[0x39];
      if (plVar14 != (long *)0x0) {
        lVar18 = *plVar14;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)Method_EventTriggerTypes_GetSelectedType__) {
              puVar15 = (undefined8 *)(lVar18 + (long)(*piVar21 + 2) * 0x10 + 0x138);
              goto LAB_013fe168;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_00d59724(plVar14,*(long *)Method_EventTriggerTypes_GetSelectedType__,2);
LAB_013fe168:
        uVar20 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if ((uVar20 & 1) == 0) {
          plVar14 = (long *)in_stack_00000078[0x39];
          if (plVar14 == (long *)0x0) goto LAB_013fddb0;
          lVar18 = *plVar14;
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_10310) {
                puVar15 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_013fe258;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_10310,0);
LAB_013fe258:
          (*(code *)*puVar15)(plVar14,puVar15[1]);
        }
      }
      uVar10 = FUN_013fd0d8(in_stack_00000078);
      uVar11 = (**(code **)(*in_stack_00000078 + 0x4f8))
                         (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x500));
      plVar14 = (long *)FUN_013eae18(in_stack_00000078,0);
      puVar3 = Sirenix_Utilities_ColorExtensions_TypeInfo;
      if (plVar14 == (long *)0x0) {
LAB_013fddb0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar18 = *plVar14;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x16) * 0x10 + 0x138);
            goto LAB_013fe308;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar6,0x16);
LAB_013fe308:
      uVar12 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      uVar1 = uVar10 & 1;
      lVar18 = FUN_013febb4(uVar1,uVar11,uVar12);
      in_stack_00000078[0x3c] = lVar18;
      lVar18 = FUN_013fd194(uVar1);
      in_stack_00000078[0x39] = lVar18;
      in_stack_00000068 = FUN_013fd194(uVar1);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      plVar14 = in_stack_00000078;
      if (lVar18 == 0) goto LAB_013fddb0;
      FUN_017b46ec(lVar18,0);
      *(long **)(lVar18 + 0x10) = plVar14;
      in_stack_00000078[0x3b] = lVar18;
      lVar18 = FUN_013fec8c(in_stack_00000078,uVar1);
      in_stack_00000078[0x3a] = lVar18;
      iVar9 = (**(code **)(*in_stack_00000078 + 0x4f8))
                        (in_stack_00000078,*(undefined8 *)(*in_stack_00000078 + 0x500));
      puVar3 = Method_UnityEngine_Resources_Load<UIZoneLibrary>__;
      puVar15 = (undefined8 *)Method_Newtonsoft_Json_JsonValidatingReader_ValidateCurrentToken__;
      if (3 < iVar9) {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((uVar10 & 1) == 0) {
          puVar15 = (undefined8 *)puVar3;
        }
        FUN_02660dac(*puVar15,0);
      }
      in_stack_00000028 = &stack0x00000078;
      in_stack_00000030 = &stack0x00000068;
      in_stack_00000020 = 0;
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


