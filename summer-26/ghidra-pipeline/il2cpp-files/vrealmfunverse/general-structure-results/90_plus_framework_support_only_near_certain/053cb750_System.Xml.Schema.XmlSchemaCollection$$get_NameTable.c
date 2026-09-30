/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaCollection$$get_NameTable
ENTRY_POINT: 053cb750
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_Schema_XmlSchemaCollection__get_NameTable(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *unaff_x27;
  
  *(undefined1 *)(unaff_x21 + 0x9b6) = in_w8;
  puVar11 = PTR_DAT_06322478;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_053d65b0();
  lVar3 = FUN_053db378();
  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar11);
  }
  FUN_053f0488(0);
  puVar1 = PTR_DAT_06312310;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar4 = FUN_04d938a0();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar12 = (long *)(unaff_x19 + 0x28);
    *plVar12 = lVar3;
    thunk_FUN_02bb0e9c(plVar12,lVar3);
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_037a5cd0(uVar5,*(undefined8 *)OVRPassthroughLayer_IStyleHandler_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),uVar5);
    plVar6 = (long *)thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_NoneStyleHandler_TypeInfo
                                       );
    FUN_053b71b0(plVar6,2,0);
    if ((*plVar12 == 0) || (plVar6 == (long *)0x0)) goto LAB_053cbfb8;
    uVar5 = (**(code **)(*plVar6 + 0x188))
                      (plVar6,*(undefined8 *)(*plVar12 + 0x10),*(undefined8 *)(*plVar6 + 400));
    *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar5);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_053cbfb8;
    uVar5 = (**(code **)(*plVar6 + 0x188))
                      (plVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                       *(undefined8 *)(*plVar6 + 400));
    *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
    thunk_FUN_02bb0e9c();
    uVar5 = FUN_02b3c908(*(undefined8 *)
                          System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                         ,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar5);
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar5);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb0),uVar5);
    goto LAB_053cbbcc;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_053cbfb8;
  plVar6 = (long *)(**(code **)(*unaff_x20 + 0x868))();
  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar11);
  }
  plVar12 = (long *)FUN_053eebec(0);
  if (plVar12 == (long *)0x0) goto LAB_053cbfb8;
  bVar2 = (**(code **)(*plVar12 + 0x298))();
  *(byte *)(unaff_x19 + 0x90) = bVar2 & 1;
  System_Xml_Schema_XmlSchemaDocumentation__set_Markup();
  if (*(char *)(unaff_x19 + 0x90) != '\0') {
    if (*(char *)(unaff_x19 + 0x95) != '\0') {
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar5 = FUN_02b3c908(uVar5,1);
      uVar10 = FUN_053d6158();
      FUN_0275e13c(uVar5);
      FUN_0275a400(uVar5,uVar10);
      FUN_0275a434(uVar5,0,uVar10);
      puVar11 = OVRPermissionsRequester_<>c_TypeInfo;
      goto LAB_053cc154;
    }
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04d94540(plVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if (plVar6 == (long *)0x0) goto LAB_053cbfb8;
      uVar4 = (**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar12 = (long *)FUN_053eebec(0);
        if (plVar12 == (long *)0x0) goto LAB_053cbfb8;
        uVar4 = (**(code **)(*plVar12 + 0x298))(plVar12,plVar6,*(undefined8 *)(*plVar12 + 0x2a0));
        if ((uVar4 & 1) != 0) goto LAB_053cb9f0;
      }
      plVar6 = (long *)0x0;
    }
  }
LAB_053cb9f0:
  bVar2 = FUN_04d957a4();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*unaff_x27);
  }
  lVar7 = *(long *)(puVar1 + 0xe0);
  *(byte *)(unaff_x19 + 0x21) = bVar2 & 1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_04d94540(plVar6,0,0);
  if ((uVar4 & 1) == 0) {
LAB_053cbb4c:
    FUN_053ce86c();
  }
  else {
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_053e1528(0);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar4 = FUN_04d94540(plVar6,uVar5,0);
    if ((uVar4 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_053ee818(0);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar4 = FUN_04d94540(plVar6,uVar5,0);
    if ((uVar4 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_053ee4c8(0);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
    }
    uVar4 = FUN_04d94540(plVar6,uVar5,0);
    if ((uVar4 & 1) == 0) goto LAB_053cbb4c;
    plVar12 = (long *)FUN_053d718c(plVar6,0);
    if (((plVar12 != (long *)0x0) &&
        (*plVar12 == *(long *)OVRPassthroughLayer_ColorLutHandler_TypeInfo)) && (plVar12[8] == 0))
    goto LAB_053cbfb8;
    FUN_053ce86c();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if (lVar7 == 0) goto LAB_053cbfb8;
      if ((*(char *)(lVar7 + 0x94) != '\0') && (*(char *)(unaff_x19 + 0x94) == '\0')) {
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar5 = FUN_02b3c908(uVar5,2);
        uVar10 = FUN_053d6158();
        FUN_0275e13c(uVar5);
        FUN_0275a400(uVar5,uVar10);
        FUN_0275a434(uVar5,0,uVar10);
        uVar10 = FUN_053d6158(plVar6,0);
        FUN_0275a400(uVar5,uVar10);
        FUN_0275a434(uVar5,1,uVar10);
        puVar11 = OVRPassthroughLayer_StylesHandler_TypeInfo;
        goto LAB_053cc154;
      }
    }
  }
  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar6 = (long *)FUN_053ef930(0);
  if (plVar6 == (long *)0x0) goto LAB_053cbfb8;
  bVar2 = (**(code **)(*plVar6 + 0x298))();
  *(byte *)(unaff_x19 + 0x93) = bVar2 & 1;
  if ((((bVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0x95) == '\0')) &&
     (*(char *)(unaff_x19 + 0x94) == '\0')) {
    uVar5 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar5 = FUN_02b3c908(uVar5,1);
    uVar10 = FUN_053d6158();
    FUN_0275e13c(uVar5);
    FUN_0275a400(uVar5,uVar10);
    FUN_0275a434(uVar5,0,uVar10);
    puVar11 = OVRPermissionsRequester_Permission_TypeInfo;
LAB_053cc154:
    uVar10 = thunk_FUN_02ba3594(puVar11);
    uVar5 = FUN_0540ce80(uVar10,uVar5,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar10 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar10,uVar5,0);
    uVar5 = FUN_0540c738(uVar10,0);
    uVar10 = thunk_FUN_02ba3594(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,uVar10);
  }
  if (*(char *)(unaff_x19 + 0x90) != '\0') {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_053e3530();
LAB_053cbbcc:
    FUN_053ce410();
    return;
  }
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar6 = (long *)(unaff_x19 + 0x28);
  *plVar6 = lVar3;
  thunk_FUN_02bb0e9c(plVar6,lVar3);
  FUN_053cea58();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    iVar13 = *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18);
    plVar12 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                          OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_053b71b0(plVar12,iVar13 + 2,0);
    if ((*plVar6 != 0) && (plVar12 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar12 + 0x188))
                        (plVar12,*(undefined8 *)(*plVar6 + 0x10),*(undefined8 *)(*plVar12 + 400));
      *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar5);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        lVar3 = (**(code **)(*plVar12 + 0x188))
                          (plVar12,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                           *(undefined8 *)(*plVar12 + 400));
        plVar6 = (long *)(unaff_x19 + 0x38);
        *plVar6 = lVar3;
        thunk_FUN_02bb0e9c(plVar6,lVar3);
        puVar11 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
        if (*(long *)(unaff_x19 + 0x48) == 0) {
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar5 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar5);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar11,
                               *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
          thunk_FUN_02bb0e9c();
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar11,1);
          *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
          thunk_FUN_02bb0e9c();
          lVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_053cccdc();
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar3 == 0))
            goto LAB_053cbfb8;
            *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(lVar3 + 0x88);
            thunk_FUN_02bb0e9c();
          }
          puVar11 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
          if (((*(long *)(unaff_x19 + 0x48) == 0) ||
              (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x30), lVar3 == 0)) ||
             (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_053cbfb8;
          uVar4 = *(ulong *)(lVar3 + 0x18);
          uVar5 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar4);
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar5);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x30),
                       *(undefined8 *)(unaff_x19 + 0xb8),uVar4 & 0xffffffff,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar11,
                               *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar4);
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar5);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x38),
                       *(undefined8 *)(unaff_x19 + 0xc0),uVar4 & 0xffffffff,0);
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x28), lVar3 == 0)) goto LAB_053cbfb8;
          uVar14 = *(ulong *)(lVar3 + 0x18);
          iVar13 = (int)uVar14;
          uVar5 = FUN_02b3c908(*(undefined8 *)puVar11,iVar13 + 1);
          puVar15 = (undefined8 *)(unaff_x19 + 0xb0);
          *puVar15 = uVar5;
          thunk_FUN_02bb0e9c(puVar15,uVar5);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          uVar4 = uVar4 & 0xffffffff;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x28),*puVar15,
                       uVar14 & 0xffffffff,0);
          lVar3 = (long)iVar13;
        }
        plVar16 = *(long **)(unaff_x19 + 0xb0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (plVar16 != (long *)0x0) {
          lVar7 = *plVar6;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
LAB_053cc09c:
            uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar5,0);
          }
          if (*(uint *)(plVar16 + 3) <= (uint)lVar3) {
LAB_053cc098:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar16[lVar3 + 4] = lVar7;
          thunk_FUN_02bb0e9c(plVar16 + lVar3 + 4,lVar7);
          puVar11 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
          lVar3 = *(long *)(unaff_x19 + 0x50);
          if (lVar3 != 0) {
            uVar14 = 0;
            lVar7 = uVar4 << 0x20;
            do {
              if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar14) goto LAB_053cbbcc;
              plVar16 = *(long **)(unaff_x19 + 0xb8);
              lVar3 = FUN_037a6268(lVar3,uVar14 & 0xffffffff,*(undefined8 *)puVar11);
              if (lVar3 == 0) break;
              uVar5 = FUN_053e52fc(lVar3,0);
              lVar3 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar5,*(undefined8 *)(*plVar12 + 400))
              ;
              if (plVar16 == (long *)0x0) break;
              if ((lVar3 != 0) &&
                 (lVar8 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0))
              goto LAB_053cc09c;
              if ((ulong)*(uint *)(plVar16 + 3) <= uVar4 + uVar14) goto LAB_053cc098;
              lVar8 = lVar7 >> 0x20;
              plVar16[lVar8 + 4] = lVar3;
              thunk_FUN_02bb0e9c(plVar16 + lVar8 + 4,lVar3);
              plVar16 = *(long **)(unaff_x19 + 0xc0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (plVar16 == (long *)0x0) break;
              lVar3 = *plVar6;
              if ((lVar3 != 0) &&
                 (lVar9 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
              goto LAB_053cc09c;
              uVar14 = uVar14 + 1;
              if ((ulong)*(uint *)(plVar16 + 3) <= (uVar4 + uVar14) - 1) goto LAB_053cc098;
              lVar7 = lVar7 + 0x100000000;
              plVar16[lVar8 + 4] = lVar3;
              thunk_FUN_02bb0e9c(plVar16 + lVar8 + 4,lVar3);
              lVar3 = *(long *)(unaff_x19 + 0x50);
            } while (lVar3 != 0);
          }
        }
      }
    }
  }
LAB_053cbfb8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


