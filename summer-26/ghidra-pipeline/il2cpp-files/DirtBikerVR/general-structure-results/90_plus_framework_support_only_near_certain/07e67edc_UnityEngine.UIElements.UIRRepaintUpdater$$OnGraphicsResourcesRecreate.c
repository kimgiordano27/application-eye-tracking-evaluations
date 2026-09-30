/*
FUNCTION_NAME: UnityEngine.UIElements.UIRRepaintUpdater$$OnGraphicsResourcesRecreate
ENTRY_POINT: 07e67edc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 110
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07e681d8) */
/* WARNING: Removing unreachable block (ram,0x07e68290) */

void UnityEngine_UIElements_UIRRepaintUpdater__OnGraphicsResourcesRecreate(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_000000a8;
  
  FUN_07e68364(&stack0x00000058);
  memcpy(&stack0x000000b0,&stack0x00000058,0x50);
  FUN_07f6f02c(&stack0x00000008,&stack0x000000b0,0);
  uVar5 = FUN_07e08824();
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x2b0) == 0) goto LAB_07e67e84;
    FUN_07dec61c(*(long *)(unaff_x21 + 0x2b0),&stack0x000000b0,0);
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07de46f4(&stack0x000000b0,0);
  uVar5 = FUN_07e027b8();
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_07dfdfd8();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar1);
    }
    uVar5 = FUN_07de5260(uVar6,&stack0x000000b0,0);
    if ((uVar5 & 1) == 0) {
      FUN_07e670c8();
    }
  }
                    /* try { // try from 07e67fb0 to 07f681ef has its CatchHandler @ 07e67fb0
                       catch() { ... } // from try @ 07e67fb0 with catch @ 07e67fb0
                       catch() { ... } // from try @ 07e68340 with catch @ 07e67fb0
                       catch() { ... } // from try @ 07e68f68 with catch @ 07e67fb0
                       catch() { ... } // from try @ 07e69004 with catch @ 07e67fb0
                       catch() { ... } // from try @ 07e691f8 with catch @ 07e67fb0
                       catch() { ... } // from try @ 07e69230 with catch @ 07e67fb0 */
  uVar5 = FUN_07f69f88(&stack0x000000b0,0);
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_07e08834(), (uVar5 & 1) == 0)) {
    FUN_07e0ba58();
  }
  else {
    FUN_07dfdfd8();
    FUN_07e68ad0();
    FUN_07e0ba58();
    FUN_07e68bb4();
  }
  FUN_07f6f140(&stack0x000000b0,0);
  FUN_07e08840();
  uVar6 = FUN_07dfdfd8();
  uVar3 = FUN_0586d640(uVar6,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetStateMachine__
                      );
  *(undefined4 *)(unaff_x21 + 0x1f0) = uVar3;
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_07e67e84;
  puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
  *puVar7 = 0;
  thunk_FUN_03afed3c(puVar7,0);
  lVar8 = *(long *)(unaff_x19 + 0x28);
  if (lVar8 == 0) goto LAB_07e67e84;
  iVar4 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar4) {
    Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar8 + 0x10),0,iVar4,0);
  }
  if (unaff_w24 < 1) {
    uVar6 = FUN_07dfdfd8();
    iVar4 = FUN_07f69f30(uVar6,0);
    if (0 < iVar4) goto LAB_07e680d4;
  }
  else {
LAB_07e680d4:
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetResult__
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_07e0a3a4();
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_000000a8 =
           (long *)FUN_0645ffa0(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_SetException__
                               );
      in_stack_00000060 = &stack0x000000a8;
      in_stack_00000058 = 0;
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_000000a8[7] = unaff_x21;
      thunk_FUN_03afed3c();
      FUN_07f31938(in_stack_000000a8,*(undefined8 *)(unaff_x19 + 0x48));
      plVar2 = in_stack_000000a8;
      if (in_stack_000000a8 != (long *)0x0) {
        lVar8 = *in_stack_000000a8;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08488550) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07e681c0;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03ac43c4(in_stack_000000a8,*(long *)PTR_DAT_08488550,0);
LAB_07e681c0:
        (*(code *)*puVar7)(plVar2,puVar7[1]);
      }
    }
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_07f1f72c();
    FUN_07ea2024();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar8 != 0)) {
      FUN_07f1f8a4(lVar8,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18) = unaff_x23;
        thunk_FUN_03afed3c();
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar4 = FUN_07e677e4();
          if (unaff_w22 < iVar4) {
            lVar8 = *(long *)(unaff_x19 + 0x38);
            if (lVar8 == 0) goto LAB_07e67e84;
            iVar4 = FUN_07e677e4(lVar8);
            FUN_07e67a54(lVar8,unaff_w22,iVar4 - unaff_w22);
          }
          return;
        }
      }
    }
  }
LAB_07e67e84:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


