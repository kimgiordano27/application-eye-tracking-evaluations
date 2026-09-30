/*
FUNCTION_NAME: FUN_053cb69c
ENTRY_POINT: 053cb69c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_053cb69c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  
  puVar12 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
  if ((DAT_066d09b6 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_BCSStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_ColorLutHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(OVRPassthroughLayer_IStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo);
    FUN_02b3c81c(OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    DAT_066d09b6 = 1;
  }
  puVar2 = PTR_DAT_06322478;
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_053d65b0(param_1,param_2,0);
  lVar4 = FUN_053db378(param_2,param_1 + 0x95,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  uVar5 = FUN_053f0488(0);
  puVar1 = PTR_DAT_06312310;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar6 = FUN_04d938a0(param_2,uVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar13 = (long *)(param_1 + 0x28);
    *plVar13 = lVar4;
    thunk_FUN_02bb0e9c(plVar13,lVar4);
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_037a5cd0(uVar5,*(undefined8 *)OVRPassthroughLayer_IStyleHandler_TypeInfo);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar5);
    plVar7 = (long *)thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_NoneStyleHandler_TypeInfo
                                       );
    FUN_053b71b0(plVar7,2,0);
    if ((*plVar13 == 0) || (plVar7 == (long *)0x0)) goto LAB_053cbfb8;
    uVar5 = (**(code **)(*plVar7 + 0x188))
                      (plVar7,*(undefined8 *)(*plVar13 + 0x10),*(undefined8 *)(*plVar7 + 400));
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar5);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_053cbfb8;
    uVar5 = (**(code **)(*plVar7 + 0x188))
                      (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                       *(undefined8 *)(*plVar7 + 400));
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    thunk_FUN_02bb0e9c();
    uVar5 = FUN_02b3c908(*(undefined8 *)
                          System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                         ,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xc0),uVar5);
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb8),uVar5);
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb0),uVar5);
    goto LAB_053cbbcc;
  }
  if (param_2 == (long *)0x0) goto LAB_053cbfb8;
  plVar7 = (long *)(**(code **)(*param_2 + 0x868))(param_2,*(undefined8 *)(*param_2 + 0x870));
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  plVar13 = (long *)FUN_053eebec(0);
  if (plVar13 == (long *)0x0) goto LAB_053cbfb8;
  bVar3 = (**(code **)(*plVar13 + 0x298))(plVar13,param_2,*(undefined8 *)(*plVar13 + 0x2a0));
  *(byte *)(param_1 + 0x90) = bVar3 & 1;
  System_Xml_Schema_XmlSchemaDocumentation__set_Markup(param_1,param_2);
  if (*(char *)(param_1 + 0x90) != '\0') {
    if (*(char *)(param_1 + 0x95) != '\0') {
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar5 = FUN_02b3c908(uVar5,1);
      uVar11 = FUN_053d6158(param_2,0);
      FUN_0275e13c(uVar5);
      FUN_0275a400(uVar5,uVar11);
      FUN_0275a434(uVar5,0,uVar11);
      puVar12 = OVRPermissionsRequester_<>c_TypeInfo;
      goto LAB_053cc154;
    }
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_04d94540(plVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (plVar7 == (long *)0x0) goto LAB_053cbfb8;
      uVar6 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar13 = (long *)FUN_053eebec(0);
        if (plVar13 == (long *)0x0) goto LAB_053cbfb8;
        uVar6 = (**(code **)(*plVar13 + 0x298))(plVar13,plVar7,*(undefined8 *)(*plVar13 + 0x2a0));
        if ((uVar6 & 1) != 0) goto LAB_053cb9f0;
      }
      plVar7 = (long *)0x0;
    }
  }
LAB_053cb9f0:
  bVar3 = FUN_04d957a4(param_2,0);
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar12);
  }
  lVar8 = *(long *)(puVar1 + 0xe0);
  *(byte *)(param_1 + 0x21) = bVar3 & 1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_04d94540(plVar7,0,0);
  if ((uVar6 & 1) == 0) {
LAB_053cbb4c:
    FUN_053ce86c(param_1,0);
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_053e1528(0);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar6 = FUN_04d94540(plVar7,uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_053ee818(0);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar6 = FUN_04d94540(plVar7,uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_053ee4c8(0);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar6 = FUN_04d94540(plVar7,uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_053cbb4c;
    plVar13 = (long *)FUN_053d718c(plVar7,0);
    if (plVar13 == (long *)0x0) {
LAB_053cbfe8:
      plVar13 = (long *)0x0;
    }
    else if (*plVar13 == *(long *)OVRPassthroughLayer_ColorLutHandler_TypeInfo) {
      if (plVar13[8] == 0) goto LAB_053cbfb8;
      plVar13 = *(long **)(plVar13[8] + 0x88);
      if (plVar13 == (long *)0x0) goto LAB_053cbfe8;
      if (*plVar13 != *(long *)OVRPassthroughLayer_BCSStyleHandler_TypeInfo) {
        plVar13 = (long *)0x0;
      }
    }
    else if (*plVar13 != *(long *)OVRPassthroughLayer_BCSStyleHandler_TypeInfo) {
      plVar13 = (long *)0x0;
    }
    FUN_053ce86c(param_1,plVar13);
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x48);
      if (lVar8 == 0) goto LAB_053cbfb8;
      if ((*(char *)(lVar8 + 0x94) != '\0') && (*(char *)(param_1 + 0x94) == '\0')) {
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar5 = FUN_02b3c908(uVar5,2);
        uVar11 = FUN_053d6158(param_2,0);
        FUN_0275e13c(uVar5);
        FUN_0275a400(uVar5,uVar11);
        FUN_0275a434(uVar5,0,uVar11);
        uVar11 = FUN_053d6158(plVar7,0);
        FUN_0275a400(uVar5,uVar11);
        FUN_0275a434(uVar5,1,uVar11);
        puVar12 = OVRPassthroughLayer_StylesHandler_TypeInfo;
        goto LAB_053cc154;
      }
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar7 = (long *)FUN_053ef930(0);
  if (plVar7 == (long *)0x0) goto LAB_053cbfb8;
  bVar3 = (**(code **)(*plVar7 + 0x298))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x2a0));
  *(byte *)(param_1 + 0x93) = bVar3 & 1;
  if ((((bVar3 & 1) != 0) && (*(char *)(param_1 + 0x95) == '\0')) &&
     (*(char *)(param_1 + 0x94) == '\0')) {
    uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar5 = FUN_02b3c908(uVar5,1);
    uVar11 = FUN_053d6158(param_2,0);
    FUN_0275e13c(uVar5);
    FUN_0275a400(uVar5,uVar11);
    FUN_0275a434(uVar5,0,uVar11);
    puVar12 = OVRPermissionsRequester_Permission_TypeInfo;
LAB_053cc154:
    uVar11 = thunk_FUN_02ba3594(puVar12);
    uVar5 = FUN_0540ce80(uVar11,uVar5,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar11 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar11,uVar5,0);
    uVar5 = FUN_0540c738(uVar11,0);
    uVar11 = thunk_FUN_02ba3594(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,uVar11);
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_053e3530(param_1,lVar4,0);
LAB_053cbbcc:
    FUN_053ce410(param_1);
    return;
  }
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar7 = (long *)(param_1 + 0x28);
  *plVar7 = lVar4;
  thunk_FUN_02bb0e9c(plVar7,lVar4);
  FUN_053cea58(param_1);
  if (*(long *)(param_1 + 0x50) != 0) {
    iVar14 = *(int *)(*(long *)(param_1 + 0x50) + 0x18);
    plVar13 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                          OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_053b71b0(plVar13,iVar14 + 2,0);
    if ((*plVar7 != 0) && (plVar13 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar13 + 0x188))
                        (plVar13,*(undefined8 *)(*plVar7 + 0x10),*(undefined8 *)(*plVar13 + 400));
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar5);
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar4 = (**(code **)(*plVar13 + 0x188))
                          (plVar13,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                           *(undefined8 *)(*plVar13 + 400));
        plVar7 = (long *)(param_1 + 0x38);
        *plVar7 = lVar4;
        thunk_FUN_02bb0e9c(plVar7,lVar4);
        puVar2 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
        if (*(long *)(param_1 + 0x48) == 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_053cbfb8;
          uVar5 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x18));
          *(undefined8 *)(param_1 + 0xb8) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb8),uVar5);
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_053cbfb8;
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar2,
                               *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x18));
          *(undefined8 *)(param_1 + 0xc0) = uVar5;
          thunk_FUN_02bb0e9c();
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar2,1);
          *(undefined8 *)(param_1 + 0xb0) = uVar5;
          thunk_FUN_02bb0e9c();
          lVar4 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_053cccdc();
          if ((uVar6 & 1) != 0) {
            if ((*(long *)(param_1 + 0x48) == 0) ||
               (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x48), lVar4 == 0)) goto LAB_053cbfb8;
            *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar4 + 0x88);
            thunk_FUN_02bb0e9c();
          }
          puVar2 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
          if (((*(long *)(param_1 + 0x48) == 0) ||
              (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar4 == 0)) ||
             (*(long *)(param_1 + 0x50) == 0)) goto LAB_053cbfb8;
          uVar6 = *(ulong *)(lVar4 + 0x18);
          uVar5 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(int *)(*(long *)(param_1 + 0x50) + 0x18) + (int)uVar6);
          *(undefined8 *)(param_1 + 0xb8) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb8),uVar5);
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),
                       *(undefined8 *)(param_1 + 0xb8),uVar6 & 0xffffffff,0);
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_053cbfb8;
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar2,
                               *(int *)(*(long *)(param_1 + 0x50) + 0x18) + (int)uVar6);
          *(undefined8 *)(param_1 + 0xc0) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xc0),uVar5);
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38),
                       *(undefined8 *)(param_1 + 0xc0),uVar6 & 0xffffffff,0);
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar4 == 0)) goto LAB_053cbfb8;
          uVar15 = *(ulong *)(lVar4 + 0x18);
          iVar14 = (int)uVar15;
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar2,iVar14 + 1);
          puVar16 = (undefined8 *)(param_1 + 0xb0);
          *puVar16 = uVar5;
          thunk_FUN_02bb0e9c(puVar16,uVar5);
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_053cbfb8;
          uVar6 = uVar6 & 0xffffffff;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28),*puVar16,
                       uVar15 & 0xffffffff,0);
          lVar4 = (long)iVar14;
        }
        plVar17 = *(long **)(param_1 + 0xb0);
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (plVar17 != (long *)0x0) {
          lVar8 = *plVar7;
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar9 == 0)) {
LAB_053cc09c:
            uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar5,0);
          }
          if (*(uint *)(plVar17 + 3) <= (uint)lVar4) {
LAB_053cc098:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar17[lVar4 + 4] = lVar8;
          thunk_FUN_02bb0e9c(plVar17 + lVar4 + 4,lVar8);
          puVar2 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
          lVar4 = *(long *)(param_1 + 0x50);
          if (lVar4 != 0) {
            uVar15 = 0;
            lVar8 = uVar6 << 0x20;
            do {
              if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar15) goto LAB_053cbbcc;
              plVar17 = *(long **)(param_1 + 0xb8);
              lVar4 = FUN_037a6268(lVar4,uVar15 & 0xffffffff,*(undefined8 *)puVar2);
              if (lVar4 == 0) break;
              uVar5 = FUN_053e52fc(lVar4,0);
              lVar4 = (**(code **)(*plVar13 + 0x188))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 400))
              ;
              if (plVar17 == (long *)0x0) break;
              if ((lVar4 != 0) &&
                 (lVar9 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar17 + 0x40)), lVar9 == 0))
              goto LAB_053cc09c;
              if ((ulong)*(uint *)(plVar17 + 3) <= uVar6 + uVar15) goto LAB_053cc098;
              lVar9 = lVar8 >> 0x20;
              plVar17[lVar9 + 4] = lVar4;
              thunk_FUN_02bb0e9c(plVar17 + lVar9 + 4,lVar4);
              plVar17 = *(long **)(param_1 + 0xc0);
              if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (plVar17 == (long *)0x0) break;
              lVar4 = *plVar7;
              if ((lVar4 != 0) &&
                 (lVar10 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar17 + 0x40)), lVar10 == 0))
              goto LAB_053cc09c;
              uVar15 = uVar15 + 1;
              if ((ulong)*(uint *)(plVar17 + 3) <= (uVar6 + uVar15) - 1) goto LAB_053cc098;
              lVar8 = lVar8 + 0x100000000;
              plVar17[lVar9 + 4] = lVar4;
              thunk_FUN_02bb0e9c(plVar17 + lVar9 + 4,lVar4);
              lVar4 = *(long *)(param_1 + 0x50);
            } while (lVar4 != 0);
          }
        }
      }
    }
  }
LAB_053cbfb8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


