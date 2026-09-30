/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaCollectionEnumerator$$get_Current
ENTRY_POINT: 053cba10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 110
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void System_Xml_Schema_XmlSchemaCollectionEnumerator__get_Current(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x19;
  long unaff_x21;
  long lVar11;
  byte unaff_w23;
  int iVar12;
  ulong uVar13;
  long *unaff_x24;
  undefined8 *puVar14;
  long *plVar15;
  long unaff_x26;
  long *unaff_x27;
  
  thunk_FUN_02b9ad44();
  lVar2 = *(long *)(unaff_x26 + 0xe0);
  *(byte *)(unaff_x19 + 0x21) = unaff_w23 & 1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04d94540();
  if ((uVar3 & 1) == 0) {
LAB_053cbb4c:
    FUN_053ce86c();
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_053e1528(0);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x26 + 0xe0));
    }
    uVar3 = FUN_04d94540();
    if ((uVar3 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_053ee818(0);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x26 + 0xe0));
    }
    uVar3 = FUN_04d94540();
    if ((uVar3 & 1) == 0) goto LAB_053cbb4c;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_053ee4c8(0);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x26 + 0xe0));
    }
    uVar3 = FUN_04d94540();
    if ((uVar3 & 1) == 0) goto LAB_053cbb4c;
    plVar4 = (long *)FUN_053d718c();
    if (((plVar4 != (long *)0x0) &&
        (*plVar4 == *(long *)OVRPassthroughLayer_ColorLutHandler_TypeInfo)) && (plVar4[8] == 0))
    goto LAB_053cbfb8;
    FUN_053ce86c();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if (lVar2 == 0) goto LAB_053cbfb8;
      if ((*(char *)(lVar2 + 0x94) != '\0') && (*(char *)(unaff_x19 + 0x94) == '\0')) {
        uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar8 = FUN_02b3c908(uVar8,2);
        uVar9 = FUN_053d6158();
        FUN_0275e13c(uVar8);
        FUN_0275a400(uVar8,uVar9);
        FUN_0275a434(uVar8,0,uVar9);
        uVar9 = FUN_053d6158();
        FUN_0275a400(uVar8,uVar9);
        FUN_0275a434(uVar8,1,uVar9);
        puVar10 = OVRPassthroughLayer_StylesHandler_TypeInfo;
        goto LAB_053cc154;
      }
    }
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar4 = (long *)FUN_053ef930(0);
  if (plVar4 != (long *)0x0) {
    bVar1 = (**(code **)(*plVar4 + 0x298))();
    *(byte *)(unaff_x19 + 0x93) = bVar1 & 1;
    if ((((bVar1 & 1) != 0) && (*(char *)(unaff_x19 + 0x95) == '\0')) &&
       (*(char *)(unaff_x19 + 0x94) == '\0')) {
      uVar8 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar8 = FUN_02b3c908(uVar8,1);
      uVar9 = FUN_053d6158();
      FUN_0275e13c(uVar8);
      FUN_0275a400(uVar8,uVar9);
      FUN_0275a434(uVar8,0,uVar9);
      puVar10 = OVRPermissionsRequester_Permission_TypeInfo;
LAB_053cc154:
      uVar9 = thunk_FUN_02ba3594(puVar10);
      uVar8 = FUN_0540ce80(uVar9,uVar8,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar9 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar9,uVar8,0);
      uVar8 = FUN_0540c738(uVar9,0);
      uVar9 = thunk_FUN_02ba3594(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar8,uVar9);
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
    plVar4 = (long *)(unaff_x19 + 0x28);
    *plVar4 = unaff_x21;
    thunk_FUN_02bb0e9c(plVar4);
    FUN_053cea58();
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      iVar12 = *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18);
      plVar5 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                           OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
      FUN_053b71b0(plVar5,iVar12 + 2,0);
      if ((*plVar4 != 0) && (plVar5 != (long *)0x0)) {
        uVar8 = (**(code **)(*plVar5 + 0x188))
                          (plVar5,*(undefined8 *)(*plVar4 + 0x10),*(undefined8 *)(*plVar5 + 400));
        *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar8);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          lVar2 = (**(code **)(*plVar5 + 0x188))
                            (plVar5,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                             *(undefined8 *)(*plVar5 + 400));
          plVar4 = (long *)(unaff_x19 + 0x38);
          *plVar4 = lVar2;
          thunk_FUN_02bb0e9c(plVar4,lVar2);
          puVar10 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
          if (*(long *)(unaff_x19 + 0x48) == 0) {
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
            uVar8 = FUN_02b3c908(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                                 ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
            *(undefined8 *)(unaff_x19 + 0xb8) = uVar8;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar8);
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
            uVar8 = FUN_02b3c908(*(undefined8 *)puVar10,
                                 *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
            *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
            thunk_FUN_02bb0e9c();
            uVar8 = FUN_02b3c908(*(undefined8 *)puVar10,1);
            *(undefined8 *)(unaff_x19 + 0xb0) = uVar8;
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
            uVar8 = FUN_02b3c908(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                                 ,*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar3);
            *(undefined8 *)(unaff_x19 + 0xb8) = uVar8;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar8);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
            FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x30),
                         *(undefined8 *)(unaff_x19 + 0xb8),uVar3 & 0xffffffff,0);
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
            uVar8 = FUN_02b3c908(*(undefined8 *)puVar10,
                                 *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar3);
            *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar8);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
            FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x38),
                         *(undefined8 *)(unaff_x19 + 0xc0),uVar3 & 0xffffffff,0);
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x28), lVar2 == 0))
            goto LAB_053cbfb8;
            uVar13 = *(ulong *)(lVar2 + 0x18);
            iVar12 = (int)uVar13;
            uVar8 = FUN_02b3c908(*(undefined8 *)puVar10,iVar12 + 1);
            puVar14 = (undefined8 *)(unaff_x19 + 0xb0);
            *puVar14 = uVar8;
            thunk_FUN_02bb0e9c(puVar14,uVar8);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
            uVar3 = uVar3 & 0xffffffff;
            FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x28),*puVar14,
                         uVar13 & 0xffffffff,0);
            lVar2 = (long)iVar12;
          }
          plVar15 = *(long **)(unaff_x19 + 0xb0);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (plVar15 != (long *)0x0) {
            lVar11 = *plVar4;
            if ((lVar11 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)) {
LAB_053cc09c:
              uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar8,0);
            }
            if (*(uint *)(plVar15 + 3) <= (uint)lVar2) {
LAB_053cc098:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar15[lVar2 + 4] = lVar11;
            thunk_FUN_02bb0e9c(plVar15 + lVar2 + 4,lVar11);
            puVar10 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
            lVar2 = *(long *)(unaff_x19 + 0x50);
            if (lVar2 != 0) {
              uVar13 = 0;
              lVar11 = uVar3 << 0x20;
              do {
                if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar13) goto LAB_053cbbcc;
                plVar15 = *(long **)(unaff_x19 + 0xb8);
                lVar2 = FUN_037a6268(lVar2,uVar13 & 0xffffffff,*(undefined8 *)puVar10);
                if (lVar2 == 0) break;
                uVar8 = FUN_053e52fc(lVar2,0);
                lVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 400));
                if (plVar15 == (long *)0x0) break;
                if ((lVar2 != 0) &&
                   (lVar6 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
                goto LAB_053cc09c;
                if ((ulong)*(uint *)(plVar15 + 3) <= uVar3 + uVar13) goto LAB_053cc098;
                lVar6 = lVar11 >> 0x20;
                plVar15[lVar6 + 4] = lVar2;
                thunk_FUN_02bb0e9c(plVar15 + lVar6 + 4,lVar2);
                plVar15 = *(long **)(unaff_x19 + 0xc0);
                if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (plVar15 == (long *)0x0) break;
                lVar2 = *plVar4;
                if ((lVar2 != 0) &&
                   (lVar7 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
                goto LAB_053cc09c;
                uVar13 = uVar13 + 1;
                if ((ulong)*(uint *)(plVar15 + 3) <= (uVar3 + uVar13) - 1) goto LAB_053cc098;
                lVar11 = lVar11 + 0x100000000;
                plVar15[lVar6 + 4] = lVar2;
                thunk_FUN_02bb0e9c(plVar15 + lVar6 + 4,lVar2);
                lVar2 = *(long *)(unaff_x19 + 0x50);
              } while (lVar2 != 0);
            }
          }
        }
      }
    }
  }
LAB_053cbfb8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


