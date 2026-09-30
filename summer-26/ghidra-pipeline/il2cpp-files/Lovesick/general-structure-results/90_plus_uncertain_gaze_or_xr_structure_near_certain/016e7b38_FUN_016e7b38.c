/*
FUNCTION_NAME: FUN_016e7b38
ENTRY_POINT: 016e7b38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x016e7f9c) */

void FUN_016e7b38(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_100;
  long *plStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  puVar4 = StringLiteral_498;
  if ((DAT_03778818 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdivq_f64__);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_498);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo);
    DAT_03778818 = 1;
  }
  puVar1 = PTR_DAT_033f3600;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = SystemNative_GetReadDirRBufferSize(0);
  plStack_f8 = &local_70;
  local_70 = 0;
  local_100 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar13 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
  lVar7 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_70 = (**(code **)(*plVar8 + 0x178))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x180));
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdivq_f64__;
  puVar2 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  puVar1 = System_Xml_Schema_XmlSchemaWhiteSpace_TypeInfo;
  if (local_70 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(int *)(local_70 + 0x18) != 0) {
      lVar7 = local_70 + 0x20;
    }
  }
  lVar13 = 0;
  do {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_015e1988(param_1,0);
    uVar10 = FUN_017b4f64(uVar9,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar10 & 1) != 0) {
      lVar7 = thunk_FUN_00d48444(StringLiteral_498);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_015e1474(0);
      uVar9 = FUN_015e0f04(uVar9,param_1,1,0);
      uVar12 = thunk_FUN_00d48444(Method_FODBlastTheWrongPortraits_WrongPortraitBlasted__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,uVar12);
    }
    do {
      while( true ) {
        do {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar6 = SystemNative_ReadDirR(uVar9,lVar7,uVar5,&local_80,0);
          if (iVar6 != 0) {
            iVar6 = 0x12;
            goto LAB_016e7e64;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar11 = FUN_016e79b0(&local_80,param_1);
        } while (lVar11 == 0);
        if ((local_78._4_4_ != 0) && (local_78._4_4_ != 10)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iVar6 = FUN_015e1c44(lVar11,&local_f0,0);
        if ((iVar6 < 0) || ((local_f0._4_4_ & 0xf000) != 0x4000)) goto LAB_016e7e34;
LAB_016e7db4:
        if (lVar13 == 0) {
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                     );
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01320e50(lVar13,*(undefined8 *)
                               System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
        }
        FUN_00ac1158(lVar13,lVar11,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__
                    );
      }
      if (local_78._4_4_ == 4) goto LAB_016e7db4;
LAB_016e7e34:
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(param_2 + 0x18))
                         (*(undefined8 *)(param_2 + 0x40),lVar11,*(undefined8 *)(param_2 + 0x28));
    } while ((uVar10 & 1) == 0);
    iVar6 = 0x11;
LAB_016e7e64:
    uVar10 = FUN_017bc96c(uVar9,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_015e19c4(uVar9,0);
    }
    if ((((iVar6 != 0x12) && (iVar6 != 0)) || (lVar13 == 0)) || (*(int *)(lVar13 + 0x18) == 0)) {
      FUN_00bdfb78(&local_100);
      return;
    }
    FUN_0132138c(lVar13,*(int *)(lVar13 + 0x18) + -1,&local_68,
                 *(undefined8 *)Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    param_1 = local_68;
    FUN_01324ac8(lVar13,*(int *)(lVar13 + 0x18) + -1,*(undefined8 *)puVar3);
  } while( true );
}


