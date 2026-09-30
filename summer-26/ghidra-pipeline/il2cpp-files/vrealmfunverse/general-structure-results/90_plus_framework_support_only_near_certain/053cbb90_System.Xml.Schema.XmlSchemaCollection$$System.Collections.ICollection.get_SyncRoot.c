/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaCollection$$System.Collections.ICollection.get_SyncRoot
ENTRY_POINT: 053cbb90
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


void System_Xml_Schema_XmlSchemaCollection__System_Collections_ICollection_get_SyncRoot
               (ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x21;
  long *plVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *unaff_x27;
  
  if ((((param_1 & 1) != 0) && (*(char *)(unaff_x19 + 0x95) == '\0')) &&
     (*(char *)(unaff_x19 + 0x94) == '\0')) {
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar3 = FUN_02b3c908(uVar3,1);
    uVar8 = FUN_053d6158();
    FUN_0275e13c(uVar3);
    FUN_0275a400(uVar3,uVar8);
    FUN_0275a434(uVar3,0,uVar8);
    uVar8 = thunk_FUN_02ba3594(OVRPermissionsRequester_Permission_TypeInfo);
    uVar3 = FUN_0540ce80(uVar8,uVar3,0);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar8 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar8,uVar3,0);
    uVar3 = FUN_0540c738(uVar8,0);
    uVar8 = thunk_FUN_02ba3594(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar3,uVar8);
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
  plVar9 = (long *)(unaff_x19 + 0x28);
  *plVar9 = unaff_x21;
  thunk_FUN_02bb0e9c(plVar9);
  FUN_053cea58();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    iVar11 = *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18);
    plVar2 = (long *)thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_NoneStyleHandler_TypeInfo
                                       );
    FUN_053b71b0(plVar2,iVar11 + 2,0);
    if ((*plVar9 != 0) && (plVar2 != (long *)0x0)) {
      uVar3 = (**(code **)(*plVar2 + 0x188))
                        (plVar2,*(undefined8 *)(*plVar9 + 0x10),*(undefined8 *)(*plVar2 + 400));
      *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar3);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        lVar4 = (**(code **)(*plVar2 + 0x188))
                          (plVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x18),
                           *(undefined8 *)(*plVar2 + 400));
        plVar9 = (long *)(unaff_x19 + 0x38);
        *plVar9 = lVar4;
        thunk_FUN_02bb0e9c(plVar9,lVar4);
        puVar1 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
        if (*(long *)(unaff_x19 + 0x48) == 0) {
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar3 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar3);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,
                               *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x18));
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
          thunk_FUN_02bb0e9c();
          uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,1);
          *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
          thunk_FUN_02bb0e9c();
          lVar4 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_053cccdc();
          if ((uVar5 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48), lVar4 == 0))
            goto LAB_053cbfb8;
            *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(lVar4 + 0x88);
            thunk_FUN_02bb0e9c();
          }
          puVar1 = System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo;
          if (((*(long *)(unaff_x19 + 0x48) == 0) ||
              (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x30), lVar4 == 0)) ||
             (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_053cbfb8;
          uVar5 = *(ulong *)(lVar4 + 0x18);
          uVar3 = FUN_02b3c908(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt32_TypeInfo
                               ,*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar5);
          *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8),uVar3);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x30),
                       *(undefined8 *)(unaff_x19 + 0xb8),uVar5 & 0xffffffff,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_053cbfb8;
          uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,
                               *(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) + (int)uVar5);
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),uVar3);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x38),
                       *(undefined8 *)(unaff_x19 + 0xc0),uVar5 & 0xffffffff,0);
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x28), lVar4 == 0)) goto LAB_053cbfb8;
          uVar12 = *(ulong *)(lVar4 + 0x18);
          iVar11 = (int)uVar12;
          uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,iVar11 + 1);
          puVar13 = (undefined8 *)(unaff_x19 + 0xb0);
          *puVar13 = uVar3;
          thunk_FUN_02bb0e9c(puVar13,uVar3);
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_053cbfb8;
          uVar5 = uVar5 & 0xffffffff;
          FUN_04d9f2a8(*(undefined8 *)(*(long *)(unaff_x19 + 0x48) + 0x28),*puVar13,
                       uVar12 & 0xffffffff,0);
          lVar4 = (long)iVar11;
        }
        plVar14 = *(long **)(unaff_x19 + 0xb0);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (plVar14 != (long *)0x0) {
          lVar10 = *plVar9;
          if ((lVar10 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar14 + 0x40)), lVar6 == 0)) {
LAB_053cc09c:
            uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar3,0);
          }
          if (*(uint *)(plVar14 + 3) <= (uint)lVar4) {
LAB_053cc098:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar14[lVar4 + 4] = lVar10;
          thunk_FUN_02bb0e9c(plVar14 + lVar4 + 4,lVar10);
          puVar1 = OVRPassthroughLayer_MonoToMonoStyleHandler_TypeInfo;
          lVar4 = *(long *)(unaff_x19 + 0x50);
          if (lVar4 != 0) {
            uVar12 = 0;
            lVar10 = uVar5 << 0x20;
            do {
              if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar12) goto LAB_053cbbcc;
              plVar14 = *(long **)(unaff_x19 + 0xb8);
              lVar4 = FUN_037a6268(lVar4,uVar12 & 0xffffffff,*(undefined8 *)puVar1);
              if (lVar4 == 0) break;
              uVar3 = FUN_053e52fc(lVar4,0);
              lVar4 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 400));
              if (plVar14 == (long *)0x0) break;
              if ((lVar4 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar6 == 0))
              goto LAB_053cc09c;
              if ((ulong)*(uint *)(plVar14 + 3) <= uVar5 + uVar12) goto LAB_053cc098;
              lVar6 = lVar10 >> 0x20;
              plVar14[lVar6 + 4] = lVar4;
              thunk_FUN_02bb0e9c(plVar14 + lVar6 + 4,lVar4);
              plVar14 = *(long **)(unaff_x19 + 0xc0);
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (plVar14 == (long *)0x0) break;
              lVar4 = *plVar9;
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
              goto LAB_053cc09c;
              uVar12 = uVar12 + 1;
              if ((ulong)*(uint *)(plVar14 + 3) <= (uVar5 + uVar12) - 1) goto LAB_053cc098;
              lVar10 = lVar10 + 0x100000000;
              plVar14[lVar6 + 4] = lVar4;
              thunk_FUN_02bb0e9c(plVar14 + lVar6 + 4,lVar4);
              lVar4 = *(long *)(unaff_x19 + 0x50);
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


