/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlAttributeDescription$$TryGetValueFromBagAsString
ENTRY_POINT: 0610d76c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
UnityEngine_UIElements_UxmlAttributeDescription__TryGetValueFromBagAsString
          (long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  long *plVar10;
  long *unaff_x19;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long in_stack_00000018;
  
code_r0x0610d76c:
  puVar4 = (undefined8 *)FUN_02d9a5d4(param_1,param_2,param_3);
  param_1 = unaff_x19;
  do {
    uVar5 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if ((uVar5 & 1) == 0) {
      FUN_0610dcb4();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x40),0);
      plVar11 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = (**(code **)(*plVar11 + 0x888))(plVar11,*(undefined8 *)(*plVar11 + 0x890));
      *(undefined8 *)(in_stack_00000018 + 0x28) = uVar6;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x38),0);
      uVar6 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0501fa14(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      lVar7 = *(long *)(unaff_x21 + 0x10);
      uVar6 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = FUN_05015c2c(lVar7 + 0x20,0);
      uVar5 = FUN_0501fa14(uVar6,uVar12,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      plVar11 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = (**(code **)(*plVar11 + 0x728))(plVar11,0x34,*(undefined8 *)(*plVar11 + 0x730));
      puVar2 = Method_OVRSpatialAnchor_OnSpaceQueryComplete__;
      lVar7 = *(long *)Method_OVRSpatialAnchor_OnSpaceQueryComplete__;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar7 = *(long *)puVar2;
      }
      lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar7 = *(long *)puVar2;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__
                                   );
        Mono_Security_Interface_MonoTlsSettings__get_ClientCertificateIssuers
                  (lVar13,uVar12,
                   *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar11 = lVar13;
        thunk_FUN_02dd37b4(plVar11,lVar13);
      }
      uVar6 = FUN_033aa2ac(uVar6,lVar13,
                           *(undefined8 *)
                            Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined8 *)(in_stack_00000018 + 0x38) = uVar6;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x38));
      plVar11 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06768ce0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0610d6dc;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_06768ce0,0);
LAB_0610d6dc:
      uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      *(undefined8 *)(in_stack_00000018 + 0x40) = uVar6;
      thunk_FUN_02dd37b4();
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
LAB_0610db24:
      param_1 = *(long **)(in_stack_00000018 + 0x40);
      unaff_x21 = PTR_DAT_0675e258;
      unaff_x22 = (long *)PTR_DAT_0675f3d8;
      unaff_x23 = (long *)PTR_DAT_06768ce8;
      unaff_x25 = (undefined8 *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
      unaff_x24 = (undefined8 *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
      unaff_x26 = (undefined8 *)Method_OVRTask_FromResult<bool>__;
      unaff_x27 = (undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__;
      unaff_x28 = (undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__;
    }
    else {
      plVar11 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0610d7ec;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar11,*unaff_x23,0);
LAB_0610d7ec:
      uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      *(undefined8 *)(in_stack_00000018 + 0x48) = uVar6;
      thunk_FUN_02dd37b4();
      plVar11 = *(long **)(in_stack_00000018 + 0x48);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar3 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      if (iVar3 == 4) {
LAB_0610d848:
        plVar11 = *(long **)(in_stack_00000018 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar6 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
        uVar12 = *(undefined8 *)(in_stack_00000018 + 0x28);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_0501fa14(uVar6,uVar12,0);
        if (((uVar5 & 1) == 0) &&
           (uVar5 = FUN_0610d124(*(undefined8 *)(in_stack_00000018 + 0x48)), (uVar5 & 1) != 0)) {
          lVar7 = FUN_03373e28(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x24);
          *(bool *)(in_stack_00000018 + 0x50) = lVar7 != 0;
          lVar7 = FUN_03373e28(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x25);
          *(bool *)(in_stack_00000018 + 0x51) = lVar7 != 0;
          lVar7 = FUN_03373e28(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x26);
          *(bool *)(in_stack_00000018 + 0x52) = lVar7 != 0;
          lVar7 = FUN_03373e28(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x27);
          *(bool *)(in_stack_00000018 + 0x53) = lVar7 != 0;
          lVar7 = FUN_03373e28(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x28);
          *(bool *)(in_stack_00000018 + 0x54) = lVar7 != 0;
          if (*(char *)(in_stack_00000018 + 0x50) == '\0') {
            if (*(char *)(in_stack_00000018 + 0x51) != '\0') {
              *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
              thunk_FUN_02dd37b4();
              *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
              return 1;
            }
            if (*(char *)(in_stack_00000018 + 0x52) == '\0') {
              if (*(char *)(in_stack_00000018 + 0x53) != '\0') {
                *(undefined8 *)(in_stack_00000018 + 0x18) =
                     *(undefined8 *)(in_stack_00000018 + 0x48);
                thunk_FUN_02dd37b4();
                uVar8 = 2;
LAB_0610dbb8:
                *(undefined4 *)(in_stack_00000018 + 0x10) = uVar8;
                return 1;
              }
              if (lVar7 != 0) {
                *(undefined8 *)(in_stack_00000018 + 0x18) =
                     *(undefined8 *)(in_stack_00000018 + 0x48);
                thunk_FUN_02dd37b4();
                uVar8 = 3;
                goto LAB_0610dbb8;
              }
              plVar11 = *(long **)(in_stack_00000018 + 0x48);
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)0x0;
                *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
              }
              else {
                lVar7 = *(long *)PTR_DAT_06768cc8;
                bVar1 = *(byte *)(lVar7 + 0x130);
                if (*(byte *)(*plVar11 + 0x130) < bVar1) {
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar10 = plVar11;
                  if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                    plVar10 = (long *)0x0;
                  }
                }
                *(long **)(in_stack_00000018 + 0x58) = plVar10;
                if (*(byte *)(*plVar11 + 0x130) < bVar1) {
                  plVar11 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                  plVar11 = (long *)0x0;
                }
              }
              thunk_FUN_02dd37b4(in_stack_00000018 + 0x58,plVar11);
              if ((*(long *)(in_stack_00000018 + 0x58) != 0) &&
                 (uVar5 = FUN_04f3aeac(*(long *)(in_stack_00000018 + 0x58),0), (uVar5 & 1) != 0)) {
                *(undefined8 *)(in_stack_00000018 + 0x18) =
                     *(undefined8 *)(in_stack_00000018 + 0x48);
                thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x18));
                uVar8 = 4;
                goto LAB_0610dbb8;
              }
              *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
              thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
              *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
              thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x48),0);
              goto LAB_0610db24;
            }
          }
        }
      }
      else {
        plVar11 = *(long **)(in_stack_00000018 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar3 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
        if (iVar3 == 0x10) goto LAB_0610d848;
      }
      param_1 = *(long **)(in_stack_00000018 + 0x40);
    }
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *param_1;
    param_2 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 == 0) break;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
      if (uVar5 == 0) goto LAB_0610d764;
    }
                    /* try { // try from 0610d774 to 0620d7a3 has its CatchHandler @ 0610d7d8 */
    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
LAB_0610d764:
  param_3 = 0;
  unaff_x19 = param_1;
  goto code_r0x0610d76c;
}


