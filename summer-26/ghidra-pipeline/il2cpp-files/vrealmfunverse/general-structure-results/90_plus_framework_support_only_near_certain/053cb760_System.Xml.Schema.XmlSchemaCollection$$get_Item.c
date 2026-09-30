/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaCollection$$get_Item
ENTRY_POINT: 053cb760
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


void System_Xml_Schema_XmlSchemaCollection__get_Item(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long unaff_x24;
  long *plVar14;
  undefined8 *puVar15;
  long *unaff_x27;
  
  plVar14 = *(long **)(unaff_x24 + 0x478);
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_053d65b0();
  lVar2 = FUN_053db378();
  if (*(int *)(*plVar14 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*plVar14);
  }
  FUN_053f0488(0);
  puVar10 = PTR_DAT_06312310;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar3 = FUN_04d938a0();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar11 = (long *)(unaff_x19 + 0x28);
    *plVar11 = lVar2;
    thunk_FUN_02bb0e9c(plVar11,lVar2);
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    FUN_037a5cd0(uVar4,*(undefined8 *)OVRPassthroughLayer_IStyleHandler_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),uVar4);
    plVar14 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                          OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_053b71b0(plVar14,2,0);
    if ((*plVar11 == 0) || (plVar14 == (long *)0x0)) goto LAB_053cbfb8;
    uVar4 = (**(code **)(*plVar14 + 0x188))
                      (plVar14,*(undefined8 *)(*plVar11 + 0x10),*(undefined8 *)(*plVar14 + 400));
    *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar4);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_053cbfb8;
    uVar4 = (**(code **)(*plVar14 + 0x188))
                      (plVar14,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                       *(undefined8 *)(*plVar14 + 400));
    *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
    thunk_FUN_02bb0e9c();
    uVar4 = FUN_02b3c908(*(undefined8 *)
                          System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                         ,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar4);
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar4);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb0),uVar4);
    goto LAB_053cbbcc;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_053cbfb8;
  plVar11 = (long *)(**(code **)(*unaff_x20 + 0x868))();
  if (*(int *)(*plVar14 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*plVar14);
  }
  plVar5 = (long *)FUN_053eebec(0);
  if (plVar5 == (long *)0x0) goto LAB_053cbfb8;
  bVar1 = (**(code **)(*plVar5 + 0x298))();
  *(byte *)(unaff_x19 + 0x90) = bVar1 & 1;
  System_Xml_Schema_XmlSchemaDocumentation__set_Markup();
  if (*(char *)(unaff_x19 + 0x90) != '\0') {
    if (*(char *)(unaff_x19 + 0x95) != '\0') {
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar4 = FUN_02b3c908(uVar4,1);
      uVar9 = FUN_053d6158();
      FUN_0275e13c(uVar4);
      FUN_0275a400(uVar4,uVar9);
      FUN_0275a434(uVar4,0,uVar9);
      puVar10 = OVRPermissionsRequester_<>c_TypeInfo;
      goto LAB_053cc154;
    }
    if (*(int *)(*(long *)(puVar10 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_04d94540(plVar11,0,0);
    if ((uVar3 & 1) != 0) {
      if (plVar11 == (long *)0x0) goto LAB_053cbfb8;
      uVar3 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar5 = (long *)FUN_053eebec(0);
        if (plVar5 == (long *)0x0) goto LAB_053cbfb8;
        uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2a0));
        if ((uVar3 & 1) != 0) goto LAB_053cb9f0;
      }
      plVar11 = (long *)0x0;
    }
  }
LAB_053cb9f0:
  bVar1 = FUN_04d957a4();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*unaff_x27);
  }
  lVar6 = *(long *)(puVar10 + 0xe0);
  *(byte *)(unaff_x19 + 0x21) = bVar1 & 1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04d94540(plVar11,0,0);
  if ((uVar3 & 1) == 0) {
LAB_053cbb4c:
    FUN_053ce86c();
  }
  else {
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_053e1528(0);
    if (*(int *)(*(long *)(puVar10 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar10 + 0xe0));
    }
    uVar3 = FUN_04d94540(plVar11,uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_053ee818(0);
    if (*(int *)(*(long *)(puVar10 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar10 + 0xe0));
    }
    uVar3 = FUN_04d94540(plVar11,uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_053ee4c8(0);
    if (*(int *)(*(long *)(puVar10 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar10 + 0xe0));
    }
    uVar3 = FUN_04d94540(plVar11,uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_053cbb4c;
    plVar5 = (long *)FUN_053d718c(plVar11,0);
    if (((plVar5 != (long *)0x0) &&
        (*plVar5 == *(long *)OVRPassthroughLayer_ColorLutHandler_TypeInfo)) && (plVar5[8] == 0))
    goto LAB_053cbfb8;
    FUN_053ce86c();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if (lVar6 == 0) goto LAB_053cbfb8;
      if ((*(char *)(lVar6 + 0x94) != '\0') && (*(char *)(unaff_x19 + 0x94) == '\0')) {
        uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar4 = FUN_02b3c908(uVar4,2);
        uVar9 = FUN_053d6158();
        FUN_0275e13c(uVar4);
        FUN_0275a400(uVar4,uVar9);
        FUN_0275a434(uVar4,0,uVar9);
        uVar9 = FUN_053d6158(plVar11,0);
        FUN_0275a400(uVar4,uVar9);
        FUN_0275a434(uVar4,1,uVar9);
        puVar10 = OVRPassthroughLayer_StylesHandler_TypeInfo;
        goto LAB_053cc154;
      }
    }
  }
  if (*(int *)(*plVar14 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar14 = (long *)FUN_053ef930(0);
  if (plVar14 == (long *)0x0) goto LAB_053cbfb8;
  bVar1 = (**(code **)(*plVar14 + 0x298))();
  *(byte *)(unaff_x19 + 0x93) = bVar1 & 1;
  if ((((bVar1 & 1) != 0) && (*(char *)(unaff_x19 + 0x95) == '\0')) &&
     (*(char *)(unaff_x19 + 0x94) == '\0')) {
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar4 = FUN_02b3c908(uVar4,1);
    uVar9 = FUN_053d6158();
    FUN_0275e13c(uVar4);
    FUN_0275a400(uVar4,uVar9);
    FUN_0275a434(uVar4,0,uVar9);
    puVar10 = OVRPermissionsRequester_Permission_TypeInfo;
LAB_053cc154:
    uVar9 = thunk_FUN_02ba3594(puVar10);
    uVar4 = FUN_0540ce80(uVar9,uVar4,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar9 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar9,uVar4,0);
    uVar4 = FUN_0540c738(uVar9,0);
    uVar9 = thunk_FUN_02ba3594(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar4,uVar9);
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
  plVar14 = (long *)(unaff_x19 + 0x28);
  *plVar14 = lVar2;
  thunk_FUN_02bb0e9c(plVar14,lVar2);
  FUN_053cea58();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    iVar12 = *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18);
    plVar11 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                          OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_053b71b0(plVar11,iVar12 + 2,0);
    if ((*plVar14 != 0) && (plVar11 != (long *)0x0)) {
      uVar4 = (**(code **)(*plVar11 + 0x188))
                        (plVar11,*(undefined8 *)(*plVar14 + 0x10),*(undefined8 *)(*plVar11 + 400));
      *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar4);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        lVar2 = (**(code **)(*plVar11 + 0x188))
                          (plVar11,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                           *(undefined8 *)(*plVar11 + 400));
        plVar14 = (long *)(unaff_x19 + 0x38);
        *plVar14 = lVar2;
        thunk_FUN_02bb0e9c(plVar14,lVar2);
        puVar10 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
        if (*(long *)(unaff_x19 + 0x48) == 0) {
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar4 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar4);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar4 = FUN_02b3c908(*(undefined8 *)puVar10,
                               *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
          thunk_FUN_02bb0e9c();
          uVar4 = FUN_02b3c908(*(undefined8 *)puVar10,1);
          *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
          thunk_FUN_02bb0e9c();
          lVar2 = 0;
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_053cccdc();
          if ((uVar3 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar2 == 0))
            goto LAB_053cbfb8;
            *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(lVar2 + 0x88);
            thunk_FUN_02bb0e9c();
          }
          puVar10 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
          if (((*(long *)(unaff_x19 + 0x48) == 0) ||
              (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x30), lVar2 == 0)) ||
             (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_053cbfb8;
          uVar3 = *(ulong *)(lVar2 + 0x18);
          uVar4 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar3);
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar4);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x30),
                       *(undefined8 *)(unaff_x19 + 0xb8),uVar3 & 0xffffffff,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar4 = FUN_02b3c908(*(undefined8 *)puVar10,
                               *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar3);
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar4);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x38),
                       *(undefined8 *)(unaff_x19 + 0xc0),uVar3 & 0xffffffff,0);
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x28), lVar2 == 0)) goto LAB_053cbfb8;
          uVar13 = *(ulong *)(lVar2 + 0x18);
          iVar12 = (int)uVar13;
          uVar4 = FUN_02b3c908(*(undefined8 *)puVar10,iVar12 + 1);
          puVar15 = (undefined8 *)(unaff_x19 + 0xb0);
          *puVar15 = uVar4;
          thunk_FUN_02bb0e9c(puVar15,uVar4);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          uVar3 = uVar3 & 0xffffffff;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x28),*puVar15,
                       uVar13 & 0xffffffff,0);
          lVar2 = (long)iVar12;
        }
        plVar5 = *(long **)(unaff_x19 + 0xb0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar14;
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_053cc09c:
            uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) <= (uint)lVar2) {
LAB_053cc098:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar5[lVar2 + 4] = lVar6;
          thunk_FUN_02bb0e9c(plVar5 + lVar2 + 4,lVar6);
          puVar10 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
          lVar2 = *(long *)(unaff_x19 + 0x50);
          if (lVar2 != 0) {
            uVar13 = 0;
            lVar6 = uVar3 << 0x20;
            do {
              if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar13) goto LAB_053cbbcc;
              plVar5 = *(long **)(unaff_x19 + 0xb8);
              lVar2 = FUN_037a6268(lVar2,uVar13 & 0xffffffff,*(undefined8 *)puVar10);
              if (lVar2 == 0) break;
              uVar4 = FUN_053e52fc(lVar2,0);
              lVar2 = (**(code **)(*plVar11 + 0x188))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 400))
              ;
              if (plVar5 == (long *)0x0) break;
              if ((lVar2 != 0) &&
                 (lVar7 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
              goto LAB_053cc09c;
              if ((ulong)*(uint *)(plVar5 + 3) <= uVar3 + uVar13) goto LAB_053cc098;
              lVar7 = lVar6 >> 0x20;
              plVar5[lVar7 + 4] = lVar2;
              thunk_FUN_02bb0e9c(plVar5 + lVar7 + 4,lVar2);
              plVar5 = *(long **)(unaff_x19 + 0xc0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (plVar5 == (long *)0x0) break;
              lVar2 = *plVar14;
              if ((lVar2 != 0) &&
                 (lVar8 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
              goto LAB_053cc09c;
              uVar13 = uVar13 + 1;
              if ((ulong)*(uint *)(plVar5 + 3) <= (uVar3 + uVar13) - 1) goto LAB_053cc098;
              lVar6 = lVar6 + 0x100000000;
              plVar5[lVar7 + 4] = lVar2;
              thunk_FUN_02bb0e9c(plVar5 + lVar7 + 4,lVar2);
              lVar2 = *(long *)(unaff_x19 + 0x50);
            } while (lVar2 != 0);
          }
        }
      }
    }
  }
LAB_053cbfb8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


