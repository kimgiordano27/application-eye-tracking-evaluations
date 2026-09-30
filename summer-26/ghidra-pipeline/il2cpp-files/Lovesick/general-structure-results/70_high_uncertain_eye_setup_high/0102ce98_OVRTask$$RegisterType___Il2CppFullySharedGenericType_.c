/*
FUNCTION_NAME: OVRTask$$RegisterType<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0102ce98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRTask__RegisterType<__Il2CppFullySharedGenericType>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined1 uStack0000000000000010;
  undefined1 uStack0000000000000014;
  byte bStack0000000000000018;
  undefined7 uStack0000000000000019;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_84_0_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_302);
  thunk_FUN_00d48444(
                    Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                    );
  thunk_FUN_00d48444(StringLiteral_3033);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_543);
  thunk_FUN_00d48444(
                    UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                    );
  *(undefined1 *)(unaff_x21 + 0xf02) = 1;
  plVar5 = (long *)FUN_00da4fb8(*unaff_x22,5);
  lVar6 = FUN_0268b6ac();
  if (plVar5 == (long *)0x0) goto LAB_0102d2d4;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_0102d2c8:
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  puVar2 = StringLiteral_9958;
  if ((int)plVar5[3] == 0) {
LAB_0102d2c4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar5[4] = lVar6;
  uStack0000000000000014 = (undefined1)unaff_x19[0x11];
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000010 + 4);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  if (*(uint *)(plVar5 + 3) < 2) goto LAB_0102d2c4;
  plVar5[5] = lVar6;
  uStack0000000000000010 = (undefined1)unaff_x19[5];
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000010);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  if (*(uint *)(plVar5 + 3) < 3) goto LAB_0102d2c4;
  plVar5[6] = lVar6;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x20 == 0) goto LAB_0102d2d4;
  uVar8 = FUN_026f2aa0();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  in_stack_00000008._4_1_ = FUN_0268b4e0(uVar8,0,0);
  in_stack_00000008._4_1_ = in_stack_00000008._4_1_ & 1;
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  if (*(uint *)(plVar5 + 3) < 4) goto LAB_0102d2c4;
  plVar5[7] = lVar6;
  lVar6 = FUN_026f2bb4();
  puVar3 = 
  Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
  ;
  if (lVar6 == 0) goto LAB_0102d2d4;
  FUN_010e58e8(lVar6,&stack0x00000018,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
              );
  bStack0000000000000018 = FUN_0268b4e0(CONCAT71(uStack0000000000000019,bStack0000000000000018),0,0)
  ;
  bStack0000000000000018 = bStack0000000000000018 & 1;
  lVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000018);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
  goto LAB_0102d2c8;
  puVar2 = UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo;
  if (*(uint *)(plVar5 + 3) < 5) goto LAB_0102d2c4;
  plVar5[8] = lVar6;
  puVar4 = StringLiteral_302;
  uVar8 = FUN_01600be4(*(undefined8 *)puVar2,plVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  FUN_02660dac(uVar8,0);
  if ((char)unaff_x19[0x11] == '\0') {
    return;
  }
  if ((char)unaff_x19[5] != '\0') {
    return;
  }
  uVar8 = FUN_026f2aa0();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar9 = FUN_0268b4e0(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar6 = FUN_026f2bb4();
  if (lVar6 == 0) goto LAB_0102d2d4;
  FUN_010e58e8(lVar6,&stack0x00000018,*(undefined8 *)puVar3);
  uVar8 = CONCAT71(uStack0000000000000019,bStack0000000000000018);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0268b4e0(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  lVar6 = FUN_026f2aa0();
  if (lVar6 == 0) goto LAB_0102d2d4;
  FUN_010c2e94(lVar6,&stack0x00000018,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__);
  lVar6 = CONCAT71(uStack0000000000000019,bStack0000000000000018);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0268b5e4(lVar6,0);
  if ((uVar9 & 1) == 0) {
LAB_0102d1e8:
    uVar8 = FUN_026f2aa0();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar6 = FUN_026f2aa0();
    if (lVar6 == 0) goto LAB_0102d2d4;
    FUN_010c2c5c(lVar6,&stack0x00000018,*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo);
    uVar8 = CONCAT71(uStack0000000000000019,bStack0000000000000018);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
  else {
    if (lVar6 == 0) goto LAB_0102d2d4;
    if (*(char *)(lVar6 + 0xfd) == '\0') goto LAB_0102d1e8;
  }
  *(undefined1 *)(unaff_x19 + 5) = 1;
  if (unaff_x19[7] != 0) {
    *(undefined1 *)(unaff_x19[7] + 0x30) = 0;
    if (unaff_x19[3] != 0) {
      FUN_013e0100();
    }
    (**(code **)(*unaff_x19 + 0x288))();
    return;
  }
LAB_0102d2d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


