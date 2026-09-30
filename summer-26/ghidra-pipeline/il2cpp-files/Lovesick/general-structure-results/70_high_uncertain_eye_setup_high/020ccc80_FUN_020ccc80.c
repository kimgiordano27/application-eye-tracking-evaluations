/*
FUNCTION_NAME: FUN_020ccc80
ENTRY_POINT: 020ccc80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020cd100) */

long * FUN_020ccc80(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  char local_34 [4];
  
  puVar3 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  if ((DAT_03780f15 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
    thunk_FUN_00d48444(Obi_ObiBendConstraintsData_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                      );
    thunk_FUN_00d48444(Mono_Security_Cryptography_PKCS1_TypeInfo);
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1220);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(StringLiteral_6303);
    DAT_03780f15 = 1;
  }
  lVar4 = *(long *)puVar3;
  local_34[0] = '\0';
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  local_34[0] = '\0';
  FUN_017d75a8(uVar9,local_34,0);
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *(long *)puVar3;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1220);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01747a0c(lVar5,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *(long *)puVar3;
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *(long *)puVar3;
  }
  plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x2e8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x2f0));
  puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar3;
    }
    plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x310))
    ;
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
    }
    goto LAB_020cd0cc;
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01fffb04(param_2,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar8 = (long *)(**(code **)(*plVar6 + 0x6e8))
                             (plVar6,*(undefined8 *)StringLiteral_6303,0x418,
                              *(undefined8 *)(*plVar6 + 0x6f0));
  uVar7 = FUN_016aafa4(plVar8,0,0);
  if ((uVar7 & 1) == 0) {
LAB_020ccf28:
    lVar4 = (**(code **)(*plVar6 + 0x348))(plVar6,*(undefined8 *)(*plVar6 + 0x350));
    lVar10 = *(long *)Obi_ObiBendConstraintsData_TypeInfo;
    lVar5 = *(long *)(lVar10 + 0x38);
    if (lVar5 == 0) {
      FUN_00d59478(lVar10);
      lVar5 = *(long *)(lVar10 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar4 = FUN_0178c180(lVar4,**(undefined8 **)(lVar5 + 0xb8),0);
    if (*(int *)(*(long *)System_Xml_XmlDeclaration_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_016aa83c(lVar4,0,0);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      lVar10 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar5 = *(long *)(lVar10 + 0x38);
      if (lVar5 == 0) {
        FUN_00d59478(lVar10);
        lVar5 = *(long *)(lVar10 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar6 = (long *)FUN_016aa7d0(lVar4,**(undefined8 **)(lVar5 + 0xb8),0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
      uVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      if ((uVar7 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
    }
  }
  else {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_016aaed0(plVar8,0);
    if ((uVar7 & 1) == 0) goto LAB_020ccf28;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x2f8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x300));
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
    }
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar8 + 0x318))(plVar8,param_2,plVar6,*(undefined8 *)(*plVar8 + 800));
LAB_020cd0cc:
  if (local_34[0] != '\0') {
    thunk_FUN_00d56f10(uVar9,0);
  }
  return plVar6;
}


