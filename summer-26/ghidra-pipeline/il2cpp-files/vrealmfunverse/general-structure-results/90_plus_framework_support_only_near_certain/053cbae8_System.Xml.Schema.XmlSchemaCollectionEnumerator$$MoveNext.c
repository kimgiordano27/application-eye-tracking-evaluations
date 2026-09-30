/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaCollectionEnumerator$$MoveNext
ENTRY_POINT: 053cbae8
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


void System_Xml_Schema_XmlSchemaCollectionEnumerator__MoveNext(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x21;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long *unaff_x24;
  undefined8 *puVar14;
  long *plVar15;
  long *unaff_x27;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(param_1);
  }
  uVar2 = FUN_04d94540();
  if ((uVar2 & 1) == 0) {
    FUN_053ce86c();
  }
  else {
    plVar3 = (long *)FUN_053d718c();
    if (((plVar3 != (long *)0x0) &&
        (*plVar3 == *(long *)OVRPassthroughLayer_ColorLutHandler_TypeInfo)) && (plVar3[8] == 0))
    goto LAB_053cbfb8;
    FUN_053ce86c();
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if (lVar10 == 0) goto LAB_053cbfb8;
      if ((*(char *)(lVar10 + 0x94) != '\0') && (*(char *)(unaff_x19 + 0x94) == '\0')) {
        uVar7 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar7 = FUN_02b3c908(uVar7,2);
        uVar8 = FUN_053d6158();
        FUN_0275e13c(uVar7);
        FUN_0275a400(uVar7,uVar8);
        FUN_0275a434(uVar7,0,uVar8);
        uVar8 = FUN_053d6158();
        FUN_0275a400(uVar7,uVar8);
        FUN_0275a434(uVar7,1,uVar8);
        puVar9 = OVRPassthroughLayer_StylesHandler_TypeInfo;
        goto LAB_053cc154;
      }
    }
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar3 = (long *)FUN_053ef930(0);
  if (plVar3 != (long *)0x0) {
    bVar1 = (**(code **)(*plVar3 + 0x298))();
    *(byte *)(unaff_x19 + 0x93) = bVar1 & 1;
    if ((((bVar1 & 1) != 0) && (*(char *)(unaff_x19 + 0x95) == '\0')) &&
       (*(char *)(unaff_x19 + 0x94) == '\0')) {
      uVar7 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar7 = FUN_02b3c908(uVar7,1);
      uVar8 = FUN_053d6158();
      FUN_0275e13c(uVar7);
      FUN_0275a400(uVar7,uVar8);
      FUN_0275a434(uVar7,0,uVar8);
      puVar9 = OVRPermissionsRequester_Permission_TypeInfo;
LAB_053cc154:
      uVar8 = thunk_FUN_02ba3594(puVar9);
      uVar7 = FUN_0540ce80(uVar8,uVar7,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar8 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar8,uVar7,0);
      uVar7 = FUN_0540c738(uVar8,0);
      uVar8 = thunk_FUN_02ba3594(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar7,uVar8);
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
    plVar3 = (long *)(unaff_x19 + 0x28);
    *plVar3 = unaff_x21;
    thunk_FUN_02bb0e9c(plVar3);
    FUN_053cea58();
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      iVar12 = *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18);
      plVar4 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                           OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
      FUN_053b71b0(plVar4,iVar12 + 2,0);
      if ((*plVar3 != 0) && (plVar4 != (long *)0x0)) {
        uVar7 = (**(code **)(*plVar4 + 0x188))
                          (plVar4,*(undefined8 *)(*plVar3 + 0x10),*(undefined8 *)(*plVar4 + 400));
        *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar7);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          lVar10 = (**(code **)(*plVar4 + 0x188))
                             (plVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                              *(undefined8 *)(*plVar4 + 400));
          plVar3 = (long *)(unaff_x19 + 0x38);
          *plVar3 = lVar10;
          thunk_FUN_02bb0e9c(plVar3,lVar10);
          puVar9 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
          if (*(long *)(unaff_x19 + 0x48) == 0) {
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
            uVar7 = FUN_02b3c908(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                                 ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
            *(undefined8 *)(unaff_x19 + 0xb8) = uVar7;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar7);
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
            uVar7 = FUN_02b3c908(*(undefined8 *)puVar9,
                                 *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
            *(undefined8 *)(unaff_x19 + 0xc0) = uVar7;
            thunk_FUN_02bb0e9c();
            uVar7 = FUN_02b3c908(*(undefined8 *)puVar9,1);
            *(undefined8 *)(unaff_x19 + 0xb0) = uVar7;
            thunk_FUN_02bb0e9c();
            lVar10 = 0;
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_053cccdc();
            if ((uVar2 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x48) == 0) ||
                 (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar10 == 0))
              goto LAB_053cbfb8;
              *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(lVar10 + 0x88);
              thunk_FUN_02bb0e9c();
            }
            puVar9 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
            if (((*(long *)(unaff_x19 + 0x48) == 0) ||
                (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x30), lVar10 == 0)) ||
               (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_053cbfb8;
            uVar2 = *(ulong *)(lVar10 + 0x18);
            uVar7 = FUN_02b3c908(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                                 ,*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar2);
            *(undefined8 *)(unaff_x19 + 0xb8) = uVar7;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar7);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
            FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x30),
                         *(undefined8 *)(unaff_x19 + 0xb8),uVar2 & 0xffffffff,0);
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
            uVar7 = FUN_02b3c908(*(undefined8 *)puVar9,
                                 *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar2);
            *(undefined8 *)(unaff_x19 + 0xc0) = uVar7;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar7);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
            FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x38),
                         *(undefined8 *)(unaff_x19 + 0xc0),uVar2 & 0xffffffff,0);
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x28), lVar10 == 0))
            goto LAB_053cbfb8;
            uVar13 = *(ulong *)(lVar10 + 0x18);
            iVar12 = (int)uVar13;
            uVar7 = FUN_02b3c908(*(undefined8 *)puVar9,iVar12 + 1);
            puVar14 = (undefined8 *)(unaff_x19 + 0xb0);
            *puVar14 = uVar7;
            thunk_FUN_02bb0e9c(puVar14,uVar7);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
            uVar2 = uVar2 & 0xffffffff;
            FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x28),*puVar14,
                         uVar13 & 0xffffffff,0);
            lVar10 = (long)iVar12;
          }
          plVar15 = *(long **)(unaff_x19 + 0xb0);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (plVar15 != (long *)0x0) {
            lVar11 = *plVar3;
            if ((lVar11 != 0) &&
               (lVar5 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar5 == 0)) {
LAB_053cc09c:
              uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar7,0);
            }
            if (*(uint *)(plVar15 + 3) <= (uint)lVar10) {
LAB_053cc098:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar15[lVar10 + 4] = lVar11;
            thunk_FUN_02bb0e9c(plVar15 + lVar10 + 4,lVar11);
            puVar9 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
            lVar10 = *(long *)(unaff_x19 + 0x50);
            if (lVar10 != 0) {
              uVar13 = 0;
              lVar11 = uVar2 << 0x20;
              do {
                if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar13) goto LAB_053cbbcc;
                plVar15 = *(long **)(unaff_x19 + 0xb8);
                lVar10 = FUN_037a6268(lVar10,uVar13 & 0xffffffff,*(undefined8 *)puVar9);
                if (lVar10 == 0) break;
                uVar7 = FUN_053e52fc(lVar10,0);
                lVar10 = (**(code **)(*plVar4 + 0x188))(plVar4,uVar7,*(undefined8 *)(*plVar4 + 400))
                ;
                if (plVar15 == (long *)0x0) break;
                if ((lVar10 != 0) &&
                   (lVar5 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar5 == 0)
                   ) goto LAB_053cc09c;
                if ((ulong)*(uint *)(plVar15 + 3) <= uVar2 + uVar13) goto LAB_053cc098;
                lVar5 = lVar11 >> 0x20;
                plVar15[lVar5 + 4] = lVar10;
                thunk_FUN_02bb0e9c(plVar15 + lVar5 + 4,lVar10);
                plVar15 = *(long **)(unaff_x19 + 0xc0);
                if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (plVar15 == (long *)0x0) break;
                lVar10 = *plVar3;
                if ((lVar10 != 0) &&
                   (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)
                   ) goto LAB_053cc09c;
                uVar13 = uVar13 + 1;
                if ((ulong)*(uint *)(plVar15 + 3) <= (uVar2 + uVar13) - 1) goto LAB_053cc098;
                lVar11 = lVar11 + 0x100000000;
                plVar15[lVar5 + 4] = lVar10;
                thunk_FUN_02bb0e9c(plVar15 + lVar5 + 4,lVar10);
                lVar10 = *(long *)(unaff_x19 + 0x50);
              } while (lVar10 != 0);
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


