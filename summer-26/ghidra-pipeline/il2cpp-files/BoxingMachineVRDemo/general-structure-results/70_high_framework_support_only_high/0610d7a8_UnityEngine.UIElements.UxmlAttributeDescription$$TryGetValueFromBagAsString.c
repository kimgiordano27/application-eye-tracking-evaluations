/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlAttributeDescription$$TryGetValueFromBagAsString
ENTRY_POINT: 0610d7a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
UnityEngine_UIElements_UxmlAttributeDescription__TryGetValueFromBagAsString
          (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *unaff_x19;
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
  
code_r0x0610d7a8:
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 0610d7bc to 0620d7bf has its CatchHandler @ 0610d7d4 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d6b4 with catch @ 0610d7c0
                       try { // try from 0610d7c0 to 0620d7e7 has its CatchHandler @ 0610d63c */
      if (*(long *)(piVar10 + -2) == param_3) {
                    /* try { // try from 0610d7e8 to 0620d7eb has its CatchHandler @ 0610d7f8 */
        puVar4 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0610d7ec;
      }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d71c with catch @ 0610d7c4
                        */
      uVar9 = uVar9 - 1;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d70c with catch @ 0610d7c8
                        */
      piVar10 = piVar10 + 4;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d6d8 with catch @ 0610d7cc
                        */
    } while (uVar9 != 0);
  }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d734 with catch @ 0610d7d0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d7bc with catch @ 0610d7d4
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0610d774 with catch @ 0610d7d8
                        */
  puVar4 = (undefined8 *)FUN_02d9a5d4(unaff_x19,param_3,0);
LAB_0610d7ec:
                    /* try { // try from 0610d7ec to 0620d7ff has its CatchHandler @ 0610d63c */
  uVar5 = (*(code *)*puVar4)(unaff_x19,puVar4[1]);
                    /* catch() { ... } // from try @ 0610d7e8 with catch @ 0610d7f8 */
                    /* try { // try from 0610d800 to 0620d807 has its CatchHandler @ 0610d808 */
  *(undefined8 *)(in_stack_00000018 + 0x48) = uVar5;
  thunk_FUN_02dd37b4();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0610d800 with catch @ 0610d808
                        */
  plVar6 = *(long **)(in_stack_00000018 + 0x48);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
  if (iVar3 != 4) {
    plVar6 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    if (iVar3 != 0x10) goto LAB_0610d94c;
  }
  plVar6 = *(long **)(in_stack_00000018 + 0x48);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
  uVar12 = *(undefined8 *)(in_stack_00000018 + 0x28);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar9 = FUN_0501fa14(uVar5,uVar12,0);
  if (((uVar9 & 1) == 0) &&
     (uVar9 = FUN_0610d124(*(undefined8 *)(in_stack_00000018 + 0x48)), (uVar9 & 1) != 0)) {
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
      if (*(char *)(in_stack_00000018 + 0x51) == '\0') {
        if (*(char *)(in_stack_00000018 + 0x52) != '\0') goto LAB_0610d94c;
        if (*(char *)(in_stack_00000018 + 0x53) == '\0') {
          if (lVar7 == 0) {
            plVar6 = *(long **)(in_stack_00000018 + 0x48);
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)0x0;
              *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
            }
            else {
              lVar7 = *(long *)PTR_DAT_06768cc8;
              bVar1 = *(byte *)(lVar7 + 0x130);
              if (*(byte *)(*plVar6 + 0x130) < bVar1) {
                plVar11 = (long *)0x0;
              }
              else {
                plVar11 = plVar6;
                if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                  plVar11 = (long *)0x0;
                }
              }
              *(long **)(in_stack_00000018 + 0x58) = plVar11;
              if (*(byte *)(*plVar6 + 0x130) < bVar1) {
                plVar6 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                plVar6 = (long *)0x0;
              }
            }
            thunk_FUN_02dd37b4(in_stack_00000018 + 0x58,plVar6);
            if ((*(long *)(in_stack_00000018 + 0x58) == 0) ||
               (uVar9 = FUN_04f3aeac(*(long *)(in_stack_00000018 + 0x58),0), (uVar9 & 1) == 0)) {
              *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
              thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
              *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
              thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x48),0);
              goto LAB_0610db24;
            }
            *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
            thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x18));
            uVar8 = 4;
          }
          else {
            *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
            thunk_FUN_02dd37b4();
            uVar8 = 3;
          }
        }
        else {
          *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
          thunk_FUN_02dd37b4();
          uVar8 = 2;
        }
        *(undefined4 *)(in_stack_00000018 + 0x10) = uVar8;
      }
      else {
        *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
        thunk_FUN_02dd37b4();
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      }
      return 1;
    }
  }
LAB_0610d94c:
  plVar6 = *(long **)(in_stack_00000018 + 0x40);
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0610d780;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x22,0);
LAB_0610d780:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) != 0) break;
    FUN_0610dcb4();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x40),0);
    plVar6 = *(long **)(in_stack_00000018 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = (**(code **)(*plVar6 + 0x888))(plVar6,*(undefined8 *)(*plVar6 + 0x890));
    *(undefined8 *)(in_stack_00000018 + 0x28) = uVar5;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x38),0);
    uVar5 = *(undefined8 *)(in_stack_00000018 + 0x28);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_0501fa14(uVar5,0,0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    lVar7 = *(long *)(unaff_x21 + 0x10);
    uVar5 = *(undefined8 *)(in_stack_00000018 + 0x28);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar12 = FUN_05015c2c(lVar7 + 0x20,0);
    uVar9 = FUN_0501fa14(uVar5,uVar12,0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    plVar6 = *(long **)(in_stack_00000018 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = (**(code **)(*plVar6 + 0x728))(plVar6,0x34,*(undefined8 *)(*plVar6 + 0x730));
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
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar6 = lVar13;
      thunk_FUN_02dd37b4(plVar6,lVar13);
    }
    uVar5 = FUN_033aa2ac(uVar5,lVar13,
                         *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__
                        );
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(undefined8 *)(in_stack_00000018 + 0x38) = uVar5;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x38));
    plVar6 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06768ce0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0610d6dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06768ce0,0);
LAB_0610d6dc:
    uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar5;
    thunk_FUN_02dd37b4();
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
LAB_0610db24:
    plVar6 = *(long **)(in_stack_00000018 + 0x40);
    unaff_x21 = PTR_DAT_0675e258;
    unaff_x22 = (long *)PTR_DAT_0675f3d8;
    unaff_x23 = (long *)PTR_DAT_06768ce8;
    unaff_x24 = (undefined8 *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
    unaff_x25 = (undefined8 *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
    unaff_x26 = (undefined8 *)Method_OVRTask_FromResult<bool>__;
    unaff_x27 = (undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__;
    unaff_x28 = (undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__;
  } while( true );
  unaff_x19 = *(long **)(in_stack_00000018 + 0x40);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  param_1 = *unaff_x19;
  param_3 = *unaff_x23;
  goto code_r0x0610d7a8;
}


