/*
FUNCTION_NAME: FUN_05ee63f0
ENTRY_POINT: 05ee63f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


void FUN_05ee63f0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long local_e8;
  long local_d0;
  long lStack_c8;
  long *local_c0;
  long local_b0;
  long lStack_a8;
  long *local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_76;
  undefined2 local_72;
  long *local_70;
  long lStack_68;
  
  puVar6 = 
  Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetSurrogatedType__;
  puVar5 = 
  Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContractSkipValidation__
  ;
  puVar4 = PTR_DAT_067cfc40;
  puVar3 = PTR_DAT_067cfc38;
  puVar2 = PTR_DAT_067c9db8;
  if ((DAT_06bc4672 & 1) == 0) {
    FUN_02f08768(Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_ReadValue__);
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlFormatWriterInterpreter_<WriteCollection>b__24_0__
                );
    FUN_02f08768(PTR_DAT_067c9db8);
    FUN_02f08768(Method_System_Xml_XmlParserContext__ctor__);
    FUN_02f08768(Method_System_Xml_XmlQualifiedName_GetHashCodeOfString__);
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetSurrogatedType__
                );
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerWriteContextComplex_GetDataContractSkipValidation__
                );
    FUN_02f08768(System_Func<Touch,_TapGesture>_TypeInfo);
    FUN_02f08768(System_Func<Touch,_DragGesture>_TypeInfo);
    FUN_02f08768(System_Func<Touch,_TapGesture>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c99b0);
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_HandleUnexpectedItemInCollection__
                );
    FUN_02f08768(PTR_DAT_067cfbd8);
    FUN_02f08768(System_Func<TransformFeature,_int>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cfc40);
    FUN_02f08768(PTR_DAT_067cfc38);
    FUN_02f08768(Method_System_Xml_XmlQualifiedName_Parse__);
    FUN_02f08768(Method_System_Xml_XmlRawWriter_LookupPrefix__);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc4672 = 1;
  }
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = (long *)0x0;
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_049257fc(uVar10,*(undefined8 *)puVar6);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar10;
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_03abf108(lVar11,*(undefined8 *)puVar4);
  lVar16 = *(long *)(*(long *)puVar2 + 0xb8);
  *(long *)(lVar16 + 0x18) = lVar11;
  if (*(long *)(lVar16 + 0x10) == 0) {
    uVar10 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Xml_XmlRawWriter_LookupPrefix__);
    FUN_05ee29ac();
    lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar10;
  }
  puVar3 = 
  Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_HandleUnexpectedItemInCollection__;
  if (lVar11 != 0) {
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar1) {
      Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
    }
    puVar4 = Method_System_Xml_XmlQualifiedName_Parse__;
    uVar10 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050e4454(uVar10,0);
    uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar4);
    }
    UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_Hands_XRDeviceSimulatorHandsProvider_HandState__get_isTracked
              (uVar10,uVar18,0,0);
    plVar15 = (long *)PTR_DAT_067cbf00;
    lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    if (lVar11 != 0) {
      FUN_03ac039c(&local_b0,lVar11,*(undefined8 *)System_Func<TransformFeature,_int>_TypeInfo);
      local_c0 = local_a0;
      lStack_c8 = lStack_a8;
      local_d0 = local_b0;
      do {
        do {
          uVar12 = FUN_04aff1b0(&local_d0,*(undefined8 *)System_Func<Touch,_DragGesture>_TypeInfo);
          plVar7 = local_c0;
          if ((uVar12 & 1) == 0) {
            FUN_04aff1ac(&local_d0,*(undefined8 *)System_Func<Touch,_TapGesture>_TypeInfo);
            return;
          }
          uVar10 = *(undefined8 *)
                    Method_System_Runtime_Serialization_XmlFormatReaderInterpreter_ReadValue__;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_050e4454(uVar10,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar10,uVar10);
          }
          lVar11 = (**(code **)(*plVar7 + 0x218))(plVar7,uVar10,0,*(undefined8 *)(*plVar7 + 0x220));
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        } while ((int)*(ulong *)(lVar11 + 0x18) < 1);
        uVar12 = 0;
        uVar17 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar17 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar20 = *(long **)(lVar11 + 0x20 + uVar12 * 8);
          if (plVar20 == (long *)0x0) {
LAB_05ee673c:
            bVar8 = true;
LAB_05ee6740:
            plVar13 = (long *)(**(code **)(*plVar7 + 0x2f8))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x300));
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            local_e8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            if (!bVar8) {
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_05ee6798;
            }
            bVar8 = true;
LAB_05ee67ac:
            lVar16 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            if (!bVar8) {
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_05ee681c;
            }
            lVar21 = *plVar15;
            lVar14 = *(long *)(PTR_DAT_067c9338 + 0xe0);
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar14 = *(long *)(PTR_DAT_067c9338 + 0xe0);
            }
            bVar9 = false;
            bVar8 = true;
            plVar15 = (long *)(*(long *)(lVar14 + 0xb8) + 0x10);
            lVar14 = lVar21;
            lVar22 = lVar21;
            lVar23 = lVar21;
          }
          else {
            if (*plVar20 !=
                *(long *)
                 Method_System_Runtime_Serialization_XmlFormatWriterInterpreter_<WriteCollection>b__24_0__
               ) {
              plVar20 = (long *)0x0;
              goto LAB_05ee673c;
            }
            uVar17 = FUN_04f6ebb4(plVar20[2],0);
            if ((uVar17 & 1) != 0) {
              bVar8 = false;
              goto LAB_05ee6740;
            }
            local_e8 = plVar20[2];
LAB_05ee6798:
            uVar17 = FUN_04f6ebb4(plVar20[3],0);
            if ((uVar17 & 1) != 0) {
              bVar8 = false;
              goto LAB_05ee67ac;
            }
            lVar16 = plVar20[3];
LAB_05ee681c:
            uVar17 = FUN_04f6ebb4(plVar20[4],0);
            plVar13 = plVar15;
            if ((uVar17 & 1) == 0) {
              plVar13 = plVar20 + 4;
            }
            lVar22 = *plVar13;
            uVar17 = FUN_04f6ebb4(plVar20[5],0);
            plVar13 = plVar15;
            if ((uVar17 & 1) == 0) {
              plVar13 = plVar20 + 5;
            }
            lVar23 = *plVar13;
            uVar17 = FUN_04f6ebb4(plVar20[6],0);
            plVar13 = plVar15;
            if ((uVar17 & 1) == 0) {
              plVar13 = plVar20 + 6;
            }
            lVar21 = *plVar13;
            uVar17 = FUN_04f6ebb4(plVar20[7],0);
            if ((uVar17 & 1) == 0) {
              plVar15 = plVar20 + 7;
            }
            bVar8 = (char)plVar20[8] != '\0';
            lVar14 = *plVar15;
            plVar15 = plVar20 + 9;
            bVar9 = *(char *)((long)plVar20 + 0x41) != '\0';
          }
          lVar19 = *plVar15;
          plVar15 = (long *)(**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
          if (*(int *)(*(long *)PTR_DAT_067c99b0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (**(long **)(*(long *)PTR_DAT_067c9db8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar17 = FUN_049264dc(**(long **)(*(long *)PTR_DAT_067c9db8 + 0xb8),plVar15,
                                *(undefined8 *)
                                 Method_System_Xml_XmlQualifiedName_GetHashCodeOfString__);
          if ((uVar17 & 1) != 0) {
            uVar10 = thunk_FUN_02f6ef30(Method_System_Xml_XmlRawWriter_WriteAttributes__);
            uVar10 = FUN_04f65260(uVar10,plVar15,0);
            thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
            uVar18 = thunk_FUN_02f45270();
            FUN_05055664(uVar18,uVar10,0);
            uVar10 = thunk_FUN_02f6ef30(Method_System_Xml_XmlRawWriter_WriteEndDocument__);
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar18,uVar10);
          }
          if (**(long **)(*(long *)PTR_DAT_067c9db8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          local_72 = 0;
          local_76 = 0;
          local_b0 = local_e8;
          local_70 = plVar7;
          lStack_a8 = lVar16;
          local_a0 = plVar15;
          lStack_98 = lVar22;
          local_90 = lVar23;
          lStack_88 = lVar21;
          local_80 = lVar14;
          local_78 = bVar8;
          local_77 = bVar9;
          lStack_68 = lVar19;
          FUN_049261d4(**(long **)(*(long *)PTR_DAT_067c9db8 + 0xb8),plVar15,&local_b0,
                       *(undefined8 *)Method_System_Xml_XmlParserContext__ctor__);
          uVar12 = uVar12 + 1;
          uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
          plVar15 = (long *)PTR_DAT_067cbf00;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


